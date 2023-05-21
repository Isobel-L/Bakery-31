#ifndef HIGH_SCORES_H
#define HIGH_SCORES_H

#include <string>
#include <list>

// A class that retrieves, updates and stores the high scores for the Bakery-31
// game
class HighScores {
    using ScoreData = std::pair<double, std::string>;

public:
    HighScores(std::string fileName);

    void readScores();
    void writeScores();

    void updateScores(std::string name, double score);
    void displayLeaderboard(int numLines);

private:
    std::string m_fileName;
    std::list<ScoreData> m_scoreData;
};

#endif // HIGH_SCORES_H
