long long fish::reader::ReaderData::update_command_line_from_history_search(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long a3)
{
    char v0;  // [bp-0x28]
    char v2;  // al
    unsigned long v3;  // r14
    unsigned int v5;  // rdx

    if (!a0->field_708)
        core::panicking::panic("assertion failed: self.history_search.active()bind scripts", 46, &g_14e0030); /* do not return */
    v2 = a0->field_850;
    a0->field_850 = 2;
    if (v2 != 2 && (v2 & 1))
        a0.undo(0);
    if (a0->field_6f8)
    {
        v3 = &a0->padding_38[1456];
        v0.to_vec(v3.current_result(), a2);
        if (a0->field_708 - 3 < 2)
        {
            a0.replace_current_token(&v0);
        }
        else
        {
            a0.replace_substring(0, 0, a0->field_30, &v0);
            if (a0->field_708 == 2)
            {
                v3.search_string();
                if (v5)
                {
                    v3.search_string();
                    a0.set_position(v5);
                }
            }
        }
        a0->field_850 = 1;
    }
    return a0.update_buff_pos(0, 0, a3);
}
