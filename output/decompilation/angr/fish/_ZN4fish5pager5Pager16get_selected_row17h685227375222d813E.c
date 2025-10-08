long long fish::pager::Pager::get_selected_row(unsigned long a0, struct_0 *a1)
{
    if (!a1->field_f0)
    {
        return 0;
    }
    else if ((a1->field_20 & 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
