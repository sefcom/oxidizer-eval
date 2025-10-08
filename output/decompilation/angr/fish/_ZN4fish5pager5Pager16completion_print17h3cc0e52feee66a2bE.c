long long fish::pager::Pager::completion_print(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8, unsigned long long a9[34])
{
    unsigned long long v0;  // [bp-0xf8]
    unsigned long long v1;  // [bp-0xd8]
    unsigned long long v2;  // [bp-0xd8]
    unsigned int v3;  // [bp-0xcc]
    unsigned long long v4[34];  // [bp-0xc0], Other Possible Types: unsigned long
    unsigned long long v5;  // [bp-0xb8]
    unsigned long v6;  // [bp-0xb0]
    unsigned long long v7;  // [bp-0x98]
    unsigned long long v8;  // [bp-0x88]
    unsigned long long v9;  // [bp-0x80]
    unsigned long long v10;  // [bp-0x78]
    unsigned long long v11;  // [bp-0x70]
    unsigned long v12;  // [bp-0x68]
    void* v13;  // [bp-0x60]
    unsigned long long v14;  // [bp-0x58]
    int v15;  // [bp-0x50]
    unsigned long long v16;  // r14
    unsigned long long v17;  // cc_ndep
    unsigned long long v18;  // r13
    unsigned long long v19;  // rax
    unsigned long long v20;  // cc_op
    unsigned long v21;  // cc_dep1
    unsigned long long v22;  // cc_dep2
    unsigned long v23;  // rax
    unsigned long long v24;  // rax
    unsigned long v25;  // rdx
    unsigned long long v27;  // r13

    if (a4 < a3)
        core::panicking::panic("assertion failed: row_stop >= row_startassertion failed: comp_width <= widthassertion failed: desc_remaining >= 2assertion failed: new_index.is_none_or(|new_index| new_index <= self.completion_infos.len())assertion failed: min_cols_required_for_rows <= col", 39, &g_14dc290); /* do not return */
    a9[32] = a3;
    v4[0] = a9;
    a9[33] = a4;
    v7 = a0.visual_selected_completion_index(fish::pager::divide_round_up(a8, a1), a1);
    v1 = a3;
    if (a3 >= a4)
        return v7;
    v6 = a2 + 48;
    v4 = &v4[6];
    v3 = a0->field_113;
    v5 = a4;
    v2 = v1;
    do
    {
        v18 = v2;
        v11 = a2;
        v12 = v6;
        v13 = 0;
        v19 = v8.next(&v11);
        v20 = 7;
        v21 = (unsigned int)v8;
        v22 = 1;
        if ((int)v8 == 1)
        {
            do
            {
                v23 = v9 * v16;
                if ((char)_ccall(0, 48, v9, v16, v17))
                    core::panicking::panic_const::panic_const_mul_overflow(&g_14dc2a8); /* do not return */
                v24 = v23 + v18;
                if ((char)__CFADD__(v23, v18))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14dc2a8); /* do not return */
                if (a8 > v24)
                {
                    v0 = v10;
                    v14.completion_print_item(v3, v24, a5, a6, v24 * 144 + a7, v10, (char)v18 & 1, v24 == v25 & (char)v7);
                    v17 = (&v5 <= &v1 ? 1 : 0);
                    if ((char)_ccall(4, 24, v9 + 1, 0, (&v1 <= &v0 ? 1 : 0)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14dc2c0); /* do not return */
                    if (v9 + 1 < a1)
                        v14.append_str(" ", 2, 0, 0, a5);
                    if (v18 < v1)
                        core::panicking::panic_const::panic_const_sub_overflow(&g_14dc2d8); /* do not return */
                    v4.create_line(v18 - v1).append_line(&v14);
                    core::ptr::drop_in_place<fish::screen::Line>(v14, (long long)v15);
                }
                v19 = v8.next(&v11);
                v20 = 17;
                v21 = (char)v8 & 1;
                v22 = 0;
            } while (((char)v8 & 1));
        }
        v17 = _ccall(v20, v21, v22, v17);
        v27 = v18 + 1;
        v2 = v27;
    } while (v2 != v5);
    return v19;
}
