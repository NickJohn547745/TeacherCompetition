#ifndef SCOREBOX_H
#define SCOREBOX_H

#include <QFrame>
#include <QLabel>
#include <QPushButton>

class ScoreBox : public QFrame
{
    Q_OBJECT
public:
    explicit ScoreBox(QWidget *parent = 0);
    void resizeEvent(QResizeEvent *e);

    void setScore(int score);
    void setColor(QColor color);
    void updateScoreLabel();
    void updateScoreButtons();

signals:

public slots:

private:
    QLabel *scoreLabel;

    QPushButton *minusOne;
    QPushButton *minusFive;
    QPushButton *minusTen;

    QPushButton *plusOne;
    QPushButton *plusFive;
    QPushButton *plusTen;

};

#endif // SCOREBOX_H
