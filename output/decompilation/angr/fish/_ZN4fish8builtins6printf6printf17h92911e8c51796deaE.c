long long fish::builtins::printf::printf(unsigned long a0, struct_0 *a1, struct_1 *a2, unsigned long a3)
{
    unsigned long v0;  // [bp-0xa8]
    void* v1;  // [bp-0xa0]
    unsigned long long v2;  // [bp-0x98]
    void* v3;  // [bp-0x90]
    char v4;  // [bp-0x88]
    void* v5;  // [bp-0x78]
    char v6;  // [bp-0x70]
    unsigned short v7;  // [bp-0x60]
    char v8;  // [bp-0x50]
    char v9;  // [bp-0x40]
    unsigned long v11;  // r15
    unsigned long v12;  // rbx
    unsigned long v13;  // r15
    unsigned long v14;  // r14
    unsigned long v15;  // r15
    unsigned long long v16;  // rbp
    unsigned long v17;  // r14
    unsigned long v18;  // r13

    if (!a3)
    {
        core::slice::index::slice_start_index_len_fail(1, 0, &g_14cb760); /* do not return */
    }
    else if (a3 == 1)
    {
        return 8589934593;
    }
    else
    {
        v1 = 0;
        v2 = 4;
        v3 = 0;
        fish::locale::get_numeric_locale(&v9);
        v7 = 0;
        v8 = 0;
        memcpy(&v4, &v1, 16);
        v5 = 0;
        memcpy(&v6, &v9, 16);
        v0 = a2->field_10;
        v12 = &a2[1].padding_0[4];
        v13 = a3 - 2;
        while (true)
        {
            v14 = v11;
            v15 = v13;
            v16 = fish::builtins::printf::builtin_printf_state_t::print_formatted(&v4, v0, *((long long *)&a2->field_18), v12, v15);
            v17 = v14 - v16;
            if (v14 < v16)
                core::panicking::panic_const::panic_const_sub_overflow(&g_14cb730); /* do not return */
            v18 = v15;
            if (v18 < v16)
                core::slice::index::slice_start_index_len_fail(v16, v15, &g_14cb748); /* do not return */
            if (!v16 || !v17)
                break;
            v12 += v16 * 16;
            v13 = v18 - v16;
            v11 = v17;
            if (false)
                break;
        }
        core::ptr::drop_in_place<fish::builtins::printf::builtin_printf_state_t>(&v4);
        return *((long long *)&v7);
    }
}
