#include "calculator.h"
#include "ui_calculator.h"


calculator::calculator(QWidget *parent) : QWidget(parent), ui(new Ui::calculator) {
    ui->setupUi(this);
    connect(ui->zero, SIGNAL(clicked(bool)), this, SLOT(zero()));
    connect(ui->one, SIGNAL(clicked(bool)), this, SLOT(one()));
    connect(ui->two, SIGNAL(clicked(bool)), this, SLOT(two()));
    connect(ui->three, SIGNAL(clicked(bool)), this, SLOT(three()));
    connect(ui->four, SIGNAL(clicked(bool)), this, SLOT(four()));
    connect(ui->five, SIGNAL(clicked(bool)), this, SLOT(five()));
    connect(ui->six, SIGNAL(clicked(bool)), this, SLOT(six()));
    connect(ui->seven, SIGNAL(clicked(bool)), this, SLOT(seven()));
    connect(ui->eight, SIGNAL(clicked(bool)), this, SLOT(eight()));
    connect(ui->nine, SIGNAL(clicked(bool)), this, SLOT(nine()));
    connect(ui->comma, SIGNAL(clicked(bool)), this, SLOT(comma()));
    connect(ui->del, SIGNAL(clicked(bool)), this, SLOT(del()));
    connect(ui->all_clear, SIGNAL(clicked(bool)), this, SLOT(all_clear()));
    connect(ui->enter, SIGNAL(clicked(bool)), this, SLOT(enter()));
    connect(ui->plus, SIGNAL(clicked(bool)), this, SLOT(add()));
    connect(ui->minus, SIGNAL(clicked(bool)), this, SLOT(subtract()));
    connect(ui->multiply, SIGNAL(clicked(bool)), this, SLOT(multiply()));
    connect(ui->divide, SIGNAL(clicked(bool)), this, SLOT(divide()));
    connect(ui->negate, SIGNAL(clicked(bool)), this, SLOT(negate()));
    connect(ui->bracket_open, SIGNAL(clicked(bool)), this, SLOT(bracket_open()));
    connect(ui->bracket_close, SIGNAL(clicked(bool)), this, SLOT(bracket_close()));
}

calculator::~calculator() {
    delete ui;
}

void calculator::zero() {
    ui->label->setText(ui->label->text() + QString("0"));
}

void calculator::one() {
    ui->label->setText(ui->label->text() + QString("1"));
}

void calculator::two() {
    ui->label->setText(ui->label->text() + QString("2"));
}

void calculator::three() {
    ui->label->setText(ui->label->text() + QString("3"));
}

void calculator::four() {
    ui->label->setText(ui->label->text() + QString("4"));
}

void calculator::five() {
    ui->label->setText(ui->label->text() + QString("5"));
}

void calculator::six() {
    ui->label->setText(ui->label->text() + QString("6"));
}

void calculator::seven() {
    ui->label->setText(ui->label->text() + QString("7"));
}

void calculator::eight() {
    ui->label->setText(ui->label->text() + QString("8"));
}

void calculator::nine() {
    ui->label->setText(ui->label->text() + QString("9"));
}

void calculator::multiply() {
    ui->label->setText(ui->label->text() + QString("*"));
}

void calculator::divide() {
    ui->label->setText(ui->label->text() + QString("/"));
}

void calculator::subtract() {
    ui->label->setText(ui->label->text() + QString("-"));
}

void calculator::add() {
    ui->label->setText(ui->label->text() + QString("+"));
}

void calculator::comma() {
    ui->label->setText(ui->label->text() + QString(","));
}

void calculator::enter() {
    QString erg = ui->label->text();
    QJSEngine engine;
    QJSValue result = engine.evaluate(erg);
    if(result.isNumber()) {
        ui->label->setText(QString::number(result.toNumber()));
    }
    else {
        ui->label->setText("Error");
    }
}

void calculator::del() {
    if(!ui->label->text().isEmpty()) {
        ui->label->setText(ui->label->text().chopped(1));
    }
}

void calculator::all_clear() {
    ui->label->clear();
}

void calculator::negate() {
    ui->label->setText(ui->label->text() + QString("-"));
}

void calculator::bracket_open() {
    ui->label->setText(ui->label->text() + QString("("));
}

void calculator::bracket_close() {
    ui->label->setText(ui->label->text() + QString(")"));
}
