long long fish::reader::reader_change_cursor_selection_mode(char a0)
{
    struct_0 *v1;  // rax
    unsigned long long v2;  // 4098
    unsigned long long v3;  // rcx

    v1 = fish::reader::current_data();
    if (!v1)
    {
        return v1;
    }
    else if (v1->field_849 != a0)
    {
        v2 = v1->field_490;
        v1->field_849 = a0;
        if (!v2)
            return v1;
        return v1.update_buff_pos(0, 0, v3);
    }
    else
    {
        return v1;
    }
}
