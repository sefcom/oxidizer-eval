long long fish::builtins::emit::emit(unsigned long long a0, struct_0 *a1, unsigned long long a2[2], unsigned long long a3)
{
    char v0;  // [sp-0x88]
    char v1;  // [bp-0x80], Other Possible Types: unsigned long long
    void* v2;  // [bp-0x78], Other Possible Types: unsigned long
    unsigned long long v3;  // [bp-0x60]
    void* v4;  // [bp-0x58], Other Possible Types: char
    unsigned long long v5;  // [bp-0x50]
    void* v6;  // [bp-0x48]
    char v7;  // [bp-0x40]
    unsigned long long v9;  // rax
    unsigned long long v10;  // rbx
    unsigned long long v11[2];  // rbp

    v9 = 0x200000000;
    v10 = 1;
    if (a3)
    {
        v3 = a2[0];
        v0.parse(a2, a3, a0, a1);
        if (v1 == 2)
        {
            v9 = *((int *)&v0) * 0x100000000;
        }
        else if ((v1 & 1))
        {
            fish::builtins::shared::builtin_print_help(a0, a1, v3, a2[1]);
            goto LABEL_134a0ab;
        }
        else if (*((long long *)&v0) < a3)
        {
            v11 = *((long long *)&v0) * 16;
            v4.to_vec(*((long long *)(a2 + v11)), *((long long *)(a2 + v11 + 8)));
            v0.collect(a2 + v11 + 16, &a2[a3]);
            fish::event::fire_generic(a0, &v4, &v0);
LABEL_134a0ab:
            v9 = 0;
            v10 = 0;
        }
        else
        {
            v4 = 0;
            v5 = 4;
            v6 = 0;
            v0 = 1;
            v1 = v3;
            v2 = a2[1];
            fish_printf::printf_impl::sprintf_locale(&v7, &v4, "%", 25, ".", &v0, 1);
            v7.unwrap(&g_14c8e00);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v0);
            memcpy(&v0, &v4, 16);
            v2 = 0;
            a1->field_10.append(&v0);
            v9 = 0x200000000;
        }
    }
    return v9 | v10;
}
