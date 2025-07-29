long long uu_more::Pager::draw_lines(struct_0 *a0)
{
    int v0;  // [bp-0x108], Other Possible Types: char
    unsigned long long v1;  // [bp-0x100]
    char *v2;  // [bp-0xf8]
    void* v3[2];  // [bp-0xe8]
    void* v4[2];  // [sp-0xe8]
    void* v5[2];  // [bp-0xe8]
    unsigned long long v6;  // [bp-0xe0]
    unsigned long long v7;  // [sp-0xe0]
    char *v8;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0xd0]
    void* v10;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0xc0]
    unsigned long v12;  // [bp-0xb0]
    int v13;  // [bp-0xa8]
    unsigned long long v14;  // [bp-0xa8]
    unsigned long long v15;  // [bp-0xa0]
    char *v16;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x90]
    void* v18;  // [bp-0x88]
    unsigned long v19;  // [bp-0x78]
    char *v20;  // [bp-0x70]
    unsigned long long v21;  // [bp-0x68]
    int v22;  // [bp-0x60]
    unsigned long long v23;  // [bp-0x50]
    int v24;  // [bp-0x48]
    char v25;  // [bp-0x38]
    unsigned long v27;  // r14
    unsigned long long v28;  // rax
    unsigned long long v29;  // r15
    void* v30;  // r12
    unsigned long long v31;  // r13
    unsigned long v32;  // rax
    unsigned long long v33;  // rax
    unsigned long long v34;  // rbp

    v28 = crossterm::command::write_command_ansi(&a0->padding_a0[32], 4);
    if (!v28)
    {
        a0->field_98 = 0;
        if (!a0->field_90)
            return 0;
        v29 = a0->field_88;
        v19 = &a0->field_40;
        v30 = 0;
        while (true)
        {
            v31 = v29 * 24;
            v3.read_until_line(a0, v29);
            if (v3)
                return v3;
            if (!((char)v6 & 1))
            {
                a0->field_d0 = 1;
                v32 = a0->field_90;
                *((int *)&a0->field_88) = (v32 <= v29 ? 0 : v29 - v32);
LABEL_4bf164:
                if (v30 >= v32)
                    return 0;
                while (true)
                {
                    if (v27.write_all("\r~\n (Next file: ", 3))
                        break;
                    v30 += 1;
                    if (v30 >= a0->field_90)
                        return 0;
                }
            }
            if ((char)a0.should_squeeze_line(v29))
            {
                a0->field_98 = a0->field_98 + 1;
                v29 += 1;
                v32 = a0->field_90;
                v31 += 24;
                if (!(v30 < v32))
                    goto LABEL_4bf164;
            }
            else
            {
                if (v29 >= a0->field_20)
                    core::panicking::panic_bounds_check(v29, a0->field_20, &g_5bd340); /* do not return */
                v0.clone(v31 + a0->field_18);
                if (!((char)(((0 ^ a0->field_40) & (0 ^ -(a0->field_40))) >> 63)))
                {
                    v12 = v19;
                    *(v4) = &g_41a256;
                    v7 = <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt;
                    v8 = &v12;
                    v9 = <&T as core::fmt::Display>::fmt;
                    v10 = &g_41a286;
                    v11 = <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt;
                    v14 = &g_41a2f0;
                    v15 = 3;
                    v18 = 0;
                    v16 = &v4[0];
                    v17 = 3;
                    v22.map_or_else(&v14);
                    *((void*)v5) = v22;
                    v8 = v23;
                    alloc::str::<impl str>::replace(&v14, v1, v2, v12, <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt, v23);
                    ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v0);
                    v2 = v16;
                    *((int128_t *)&v0) = *((int128_t *)&v14);
                    ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v4);
                }
                v20 = &v0;
                v21 = <alloc::string::String as core::fmt::Display>::fmt;
                *(v3) = &g_5bd320;
                v6 = 2;
                v10 = 0;
                v8 = &v20;
                v9 = 1;
                v24.map_or_else(&v3);
                v13 = v24;
                v16 = *((long long *)&v25);
                v33 = v27.write_all(v15, *((long long *)&v25));
                if (v33)
                {
                    v34 = v33.from();
                    ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v14);
                    ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v0);
                    return v34;
                }
                ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v14);
                v30 += 1;
                v29 += 1;
                ::0x4b9510::core::ptr::drop_in_place<alloc::string::String>(&v0);
                v32 = a0->field_90;
                if (!(v30 < v32))
                    goto LABEL_4bf164;
            }
        }
    }
    return v28.from();
}
