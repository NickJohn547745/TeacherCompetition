#include "scorebox.h"

ScoreBox::ScoreBox(QWidget *parent) : QFrame(parent)
{
    QFont font = parent->font();
    font.setPixelSize(24);

    scoreLabel = new QLabel("");
    scoreLabel->setParent(this);
    minusOne = new QPushButton(this);
    minusFive = new QPushButton(this);
    minusTen = new QPushButton(this);
    plusOne = new QPushButton(this);
    plusFive = new QPushButton(this);
    plusTen = new QPushButton(this);

    minusOne->setText("-1");
    minusFive->setText("-5");
    minusTen->setText("-10");
    plusOne->setText("+1");
    plusFive->setText("+5");
    plusTen->setText("+10");

    scoreLabel->setFont(font);

    updateScoreLabel();

}

void ScoreBox::resizeEvent(QResizeEvent *e)
{
    updateScoreLabel();
    updateScoreButtons();
}

void ScoreBox::updateScoreLabel()
{
    QFontMetrics fm(scoreLabel->font());

    scoreLabel->resize(fm.width(scoreLabel->text()), fm.height());

    scoreLabel->move(
                (this->width()/2)-(scoreLabel->width()/2),
                (this->height()/2)-(scoreLabel->height()/2));
}

void ScoreBox::updateScoreButtons()
{
    QFontMetrics fm(minusOne->font());
    int x = 0;

    minusOne->resize(fm.width(minusOne->text())+5, fm.height()+5);
    minusOne->move(this->width()*(double)(0.8), this->height()*((double)(x)/7));
    x += 1;
    minusFive->resize(fm.width(minusFive->text())+5, fm.height()+5);
    minusFive->move(this->width()*(double)(0.8), this->height()*((double)(x)/7));
    x += 1;
    minusTen->resize(fm.width(minusTen->text())+5, fm.height()+5);
    minusTen->move(this->width()*(double)(0.8), this->height()*((double)(x)/7));
    x += 1;
    plusOne->resize(fm.width(plusOne->text())+5, fm.height()+5);
    plusOne->move(this->width()*(double)(0.8), this->height()*((double)(x)/7));
    x += 1;
    plusFive->resize(fm.width(plusFive->text())+5, fm.height()+5);
    plusFive->move(this->width()*(double)(0.8), this->height()*((double)(x)/7));
    x += 1;
    plusTen->resize(fm.width(plusTen->text())+5, fm.height()+5);
    plusTen->move(this->width()*(double)(0.8), this->height()*((double)(x)/7));

}

void ScoreBox::setScore(int score)
{
    scoreLabel->setText(QString::number(score));

    updateScoreLabel();
}

void ScoreBox::setColor(QColor color)
{
    QString rgbString = "rgb(%1, %2, %3)";
    setStyleSheet("background-color: " + rgbString.arg(QString::number(color.red()),
                                                       QString::number(color.green()),
                                                       QString::number(color.blue())) + ";");
}
