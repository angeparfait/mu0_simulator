#ifndef MACIRCULATION_H
#define MACIRCULATION_H

#include <QPainter>
#include <QGraphicsScene>
#include <QGraphicsItem>

class MaCirculation : public QGraphicsItem
{
public:
    MaCirculation();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);


    protected:
    void advance(int phase);

    private:
    qreal angle;
    qreal speed;
    void DoCollision();
};

#endif // MACIRCULATION_H
