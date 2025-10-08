long long fish::reader::ReaderData::delete_char(struct_0 *a0, unsigned int a1)
{
    unsigned long v0;  // [bp-0x38]
    char v1;  // [bp-0x31]
    unsigned long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5[16];  // rdx
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rbx
    unsigned long v9;  // cc_ndep
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rbx
    unsigned long long v12;  // r14
    unsigned long v13;  // r12
    unsigned long long v14;  // rax
    unsigned int v16;  // rcx

    v0 = v3;
    v4 = a0.active_edit_line();
    v6 = v5[15];
    if (a1)
    {
        v7 = v6;
        if (!v7)
            return v4;
    }
    else
    {
        v7 = v6 + 1;
        if ((char)_ccall(4, 24, v6 + 1, 0, _ccall(19, (unsigned long long)a1, 0, v9)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14e0048); /* do not return */
    }
    v1 = v4;
    v10 = v7;
    v11 = v7;
    while (true)
    {
        v12 = v10;
        v13 = v11 - 1;
        if (v11 < 1)
            core::panicking::panic_const::panic_const_sub_overflow(&g_14e0060); /* do not return */
        v14 = fish::fallback::fish_wcwidth(v5[5].char_at(v5[6], v13));
        if (v12 == 1)
            break;
        v10 = v13;
        v11 = v13;
        if (v14)
            break;
    }
    a0->field_844 = 1;
    a0.erase_substring(v1 & 1, v13, v7);
    return a0.update_buff_pos(v1 & 1, 0, v16);
}
