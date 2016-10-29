#ifndef EDITABLE_H
#define EDITABLE_H






class Editable
{
public:
    Editable();
    virtual bool show_edit_button();

};

class NoEdit : public Editable
{
    public:
        NoEdit();
        bool show_edit_button(){
            return false;
        }
};

class Edit : public Editable
{
    public:
        Edit();

        bool show_edit_button(){
            return true;
        }
    protected:


};

#endif // EDITABLE_H


