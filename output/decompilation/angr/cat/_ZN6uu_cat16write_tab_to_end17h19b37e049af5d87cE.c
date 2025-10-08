long long uu_cat::write_tab_to_end(char *a0, unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v3;  // rbx
    char *v4;  // r13
    void* v5;  // r14
    char *v7;  // r12
    unsigned long long v8;  // rbx
    char *v9;  // r12
    unsigned long v10;  // rbp

    v3 = a1;
    v4 = a0;
    v0 = a0;
    v1 = &a0[a1];
    if (((char)v0.position() & 1))
    {
        v5 = 0;
        do
        {
            v8 = v3;
            v9 = v7;
            v10 = v4;
            a2.write_all(0.index(v9, v10, v8, &g_4eacf0), a2).unwrap(&g_4ead08);
            if (v9 >= v8)
                core::panicking::panic_bounds_check(v9, v8, &g_4ead20); /* do not return */
            if (v9[v10] != 9)
                return v5 + v9;
            a2.write_all("^I^?unknown filetype: ", 2).unwrap(&g_4ead38);
            v4 = &v9[v10 + 1];
            v5 = v5 + v9 + 1;
            v0 = v4;
            v1 = v10 + v8;
            v3 = -1 + v8 - v9;
        } while (((char)v0.position() & 1));
    }
    else
    {
        v5 = 0;
    }
    a2.write_all(v4, v3).unwrap(&g_4eacd8);
    return v5 + v3;
}
