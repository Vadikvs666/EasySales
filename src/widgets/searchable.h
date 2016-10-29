#ifndef SEARCHABLE_H
#define SEARCHABLE_H

# include<QWidget>
# include "model.h"

# include <QLineEdit>
# include <QPushButton>
# include <QHBoxLayout>

class Searchable : public QWidget
{
    Q_OBJECT
public:
    Searchable();
    virtual bool show_search_widget();
    virtual void show_widget();
signals:
    void search_signal(QString);
protected:
    bool search;
};


class WithSearch : public Searchable
{
    Q_OBJECT
public:
    WithSearch();
    WithSearch(Model *model_table);
private slots:
    void on_search_button_clicked();
private:
    Model *_model;
    QLineEdit *edit_search;
    QPushButton *button_search;
    QHBoxLayout * hor_layout;

};
class WithoutSearch : public Searchable
{
public:
    WithoutSearch();

};
#endif // SEARCHABLE_H
