#include "HighScores.h"
#include <fstream>
#include <iostream>

HighScores::HighScores(std::string fileName) :
    m_fileName(fileName),
    m_scoreData()
{
}

void HighScores::readScores()
{
    std::ifstream scoreFile(m_fileName);

    ScoreData data;
    while (scoreFile) {
        std::getline(scoreFile, data.second);
        if (data.second.empty()) {
            // This is the empty line at the end of the file, so we have
            // finished reading the scores
            break;
        }

        scoreFile >> data.first;
        // scoreFile >> std::ws;
        // Reading from the file with >> leaves the end of line character in
        // the stream, so we have to move past it to reach the next line
        std::string eolChar;
        std::getline(scoreFile, eolChar);

        m_scoreData.push_back(data);
    }

    scoreFile.close();
}

void HighScores::writeScores()
{
    std::ofstream scoreFile(m_fileName);

    for (auto data : m_scoreData) {
        scoreFile << data.second << "\n";
        scoreFile << data.first << "\n";
    }

    scoreFile.close();
}

void HighScores::updateScores(std::string name, double score)
{
    ScoreData data;
    data.first = score;
    data.second = name;

    m_scoreData.push_back(data);
    m_scoreData.sort();
    m_scoreData.reverse();
}

void HighScores::displayLeaderboard(int numLines)
{
    auto it = m_scoreData.begin();

    if (it == m_scoreData.end()) {
        // Nothing to display
        return;
    }

    std::cout << "Leaderboard\n";
    std::cout << "-----------\n";

    for (int i = 0; i < numLines; i++) {
        if (it == m_scoreData.end()) {
            // Run out of scores to display
            continue;
        }

        std::cout << it->second << "  $" << it->first << "\n";
        it++;
    }
}
