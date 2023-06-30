#ifndef NUMBERRANGEWIDGET_H
#define NUMBERRANGEWIDGET_H

#include <QWidget>

class QLabel;
class QLineEdit;
class QPushButton;
class QTextEdit;

class NumberRangeWidget : public QWidget {
    Q_OBJECT

public:
    explicit NumberRangeWidget(QWidget* parent = nullptr);

private:
    QLabel* lowerLabel;
    QLabel* upperLabel;
    QLabel* stepLabel;
    QLineEdit* lowerLineEdit;
    QLineEdit* upperLineEdit;
    QLineEdit* stepLineEdit;
    QPushButton* processButton;
    QTextEdit* outputTextEdit;

private slots:
    void handleProcessButtonClick();
};

#endif // NUMBERRANGEWIDGET_H
