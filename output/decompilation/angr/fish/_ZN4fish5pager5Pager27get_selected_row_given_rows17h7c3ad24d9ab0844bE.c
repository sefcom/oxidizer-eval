long long fish::pager::Pager::get_selected_row_given_rows(struct_0 *a0, unsigned long a1)
{
    if (!a1)
    {
        return 0;
    }
    else if ((a0->field_0 & 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
