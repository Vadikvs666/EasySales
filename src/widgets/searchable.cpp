#include "searchable.h"



Searchable::Searchable()
{

}

bool Searchable::show_search_widget()
{
    return search;
}

void Searchable::show_widget()
{

}




WithSearch::WithSearch()
{
    search=true;

    edit_search=new QLineEdit;
    button_search=new QPushButton("Искать");
    hor_layout=new QHBoxLayout;
    hor_layout->addWidget(edit_search);
    hor_layout->addWidget(button_search);
    connect(button_search,SIGNAL(clicked()),this,SLOT(on_search_button_clicked()));
    setLayout(hor_layout);
}

WithSearch::WithSearch(Model *model_table):_model(model_table)
{


}

void WithSearch::on_search_button_clicked()
{

    emit search_signal(edit_search->text());
}


WithoutSearch::WithoutSearch()
{
    search=false;
}
