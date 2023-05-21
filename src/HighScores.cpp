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
    while (scoreFile >> data.first >> data.second) {
        m_scoreData.push_back(data);
    }

    scoreFile.close();
}

void HighScores::writeScores()
{
    std::ofstream scoreFile(m_fileName);

    for (auto data : m_scoreData) {
        scoreFile << data.first << " " << data.second << "\n";
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

        std::cout << it->second << " $" << it->first << "\n";
        it++;
    }
}
