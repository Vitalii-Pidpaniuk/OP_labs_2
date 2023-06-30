#include "mainwindow.h"
#include "inequality.h"
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QTextEdit>
#include <QVBoxLayout>

NumberRangeWidget::NumberRangeWidget(QWidget* parent) : QWidget(parent) {
    lowerLabel = new QLabel("Нижня межа:");
    upperLabel = new QLabel("Верхня межа:");
    stepLabel = new QLabel("Крок");
    lowerLineEdit = new QLineEdit;
    upperLineEdit = new QLineEdit;
    stepLineEdit = new QLineEdit;
    processButton = new QPushButton("Обробити");
    outputTextEdit = new QTextEdit;

    QVBoxLayout* layout = new QVBoxLayout;
    layout->addWidget(lowerLabel);
    layout->addWidget(lowerLineEdit);
    layout->addWidget(upperLabel);
    layout->addWidget(upperLineEdit);
    layout->addWidget(stepLabel);
    layout->addWidget(stepLineEdit);
    layout->addWidget(processButton);
    layout->addWidget(outputTextEdit);

    setLayout(layout);

    connect(processButton, &QPushButton::clicked, this, &NumberRangeWidget::handleProcessButtonClick);
}

void NumberRangeWidget::handleProcessButtonClick() {
    // Отримати значення нижньої та верхньої межі
    int lower = lowerLineEdit->text().toInt();
    int upper = upperLineEdit->text().toInt();
    int step = stepLineEdit->text().toInt();

    QString result;
    for (double num = lower; num <= upper; num += step) {
        QString error_message;
        try
        {
            equality unit(num);
            result += QString::number(unit.solve(num), 'f', 4) + '\n';
        }
        catch(Error1& zero)
        {
            error_message = zero.message();
            result += QString(error_message);
        }
        catch(Error2& infinity)
        {
            error_message = infinity.message();
            result += QString(error_message);
        }

    }
    outputTextEdit->setText(result);
}
