long long just::shebang::Shebang::new(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xb8]
    void* v1;  // [bp-0x88]
    void* v2;  // [bp-0x80]
    unsigned short v3;  // [bp-0x78]
    void* v4;  // [bp-0x70], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x68]
    void* v6;  // [bp-0x60]
    char v7;  // [bp-0x58]
    unsigned short v8;  // [bp-0x28]
    void* v10;  // rax
    unsigned long long v11;  // rax
    void* v12;  // rdx
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    void* v15;  // rsi
    unsigned long long v17;  // rax
    void* v18;  // r14

    v10 = core::slice::<impl [T]>::starts_with(a1, a2, "#!internal error: entered unreachable code: Iterator was fused, but returned Some after Nonesrc/list.rssrc/loader.rs", 2);
    if ((char)v10)
    {
        v11 = 2.get(a1, a2);
        if (!v11)
            core::str::slice_error_fail(a1, a2, 2, a2, &g_830e30); /* do not return */
        v7.into_searcher(10, v11, v12);
        v5 = 0;
        v6 = v12;
        v8 = 0;
        v13 = v5.next_inclusive();
        if (v13)
        {
            v14 = v13.call(v12);
        }
        else
        {
            v15 = 0;
            v14 = 1;
        }
        v0.into_searcher(38654705696, core::str::<impl str>::trim_matches(v14, v15), v12);
        v1 = 0;
        v2 = v12;
        v3 = 1;
        v4 = 1;
        v17 = v0.next();
        if (!v17)
        {
            v18 = 0;
            if (!v17)
                goto LABEL_68a1c3;
LABEL_68a1c2:
        }
        else
        {
            v18 = v12;
            if (v17)
                goto LABEL_68a1c2;
LABEL_68a1c3:
            v17 = 1;
        }
        v4 = 0;
        v10 = v0.get_end();
        if (v18)
        {
            a0->field_0 = v17;
            a0->field_8 = v18;
            a0->field_10 = v10;
            a0->field_18 = v12;
            return v10;
        }
    }
    a0->field_0 = 0;
    return v10;
}
