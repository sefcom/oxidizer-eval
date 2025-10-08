long long fish::terminal::palette_color(unsigned long long a0, unsigned int a1, unsigned int a2)
{
    char v0;  // [bp-0x8e]
    char v1;  // [bp-0x8d]
    char v2[1];  // [bp-0x88], Other Possible Types: struct_0 *, unsigned long long
    char v3;  // [bp-0x88]
    char v4;  // [bp-0x87]
    unsigned long long v5;  // [bp-0x80]
    char *v6;  // [bp-0x78]
    unsigned long long v7;  // [bp-0x70]
    void* v8;  // [bp-0x68]
    char *v9;  // [bp-0x50]
    unsigned long long v10;  // [bp-0x48]
    char *v11;  // [bp-0x40]
    unsigned long long v12;  // [bp-0x38]
    unsigned long v14;  // rbp
    unsigned long v15;  // r14
    unsigned long long v16;  // r12
    unsigned int v17;  // r13d
    struct_0 *v18;  // r15
    struct_0 *v19;  // rbx
    unsigned long v20;  // r13
    unsigned long v21;  // r15
    unsigned int v22;  // r12d
    unsigned long long v23;  // r15
    unsigned long long v24;  // rdx
    unsigned int v25;  // ebx
    char v27;  // bpl
    char v29;  // r14b
    unsigned long long v30;  // rax
    char v31;  // bpl

    v14 = a2;
    v15 = a1;
    v16 = a0;
    v1 = v14;
    if (fish::screen::only_grayscale())
    {
        v4 = v14;
        v3 = 1;
        if (!(char)v3.is_grayscale())
            return 0;
    }
    v17 = v15;
    if (!(char)fish::terminal::use_terminfo())
    {
LABEL_14123fc:
        if ((char)v15)
        {
            if (v17 == 1)
            {
                v29 = 10;
            }
            else
            {
                v9 = &v1;
                v10 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
                v30 = &g_14e28d0;
                goto LABEL_141246b;
            }
        }
        if (v27 < 8)
        {
            v31 = v27 + v29 + 30;
            goto LABEL_141242a;
        }
        else if (v27 < 16)
        {
            v31 = v27 + v29 + 82;
LABEL_141242a:
            v0 = v31;
            v9 = &v0;
            v10 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
            v30 = &g_14e28f0;
LABEL_141246b:
            v2 = v30;
            v5 = 2;
            v8 = 0;
            v6 = &v9;
            v7 = 1;
        }
        else
        {
            v0 = v29 + 38;
            v9 = &v0;
            v10 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
            v11 = &v1;
            v12 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
            *((char **)&v2) = &g_14e2910;
            v5 = 3;
            v8 = 0;
            v6 = &v9;
            v7 = 2;
        }
        fish::common::do_write_to_output(v16, &v3);
        return (unsigned int)v19 & 0xffffff00 | 1;
    }
    v18 = fish::terminal::term();
    v19 = v18;
    v2 = v18;
    if ((char)v15)
    {
        if (v17 == 1)
        {
            v20 = &v18->field_e0;
            if (!v19->field_e0)
                v20 = 0;
            if (!v19->field_d0)
                goto LABEL_1412351;
            v20 = &v18->field_d0;
LABEL_1412356:
            v16 = a0;
            v21 = &v18->field_10;
            v22 = v14;
            if ((char)fish::terminal::term_supports_color_natively(v21, v22))
            {
                v23 = fish::terminal::tparm1(*((long long *)v20), *((long long *)(v20 + 8)), v22);
                if (v23)
                {
                    v16.write_bytes(v23, v24 - 1);
                    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v23, v24);
                    v25 = (unsigned int)v19 & 0xffffff00 | 1;
                }
                else
                {
                    v25 = 0;
                    core::ptr::drop_in_place<core::option::Option<alloc::ffi::c_str::CString>>(0, v24);
                }
            }
            else
            {
                if ((*((char *)v21) & 1) && (v14 & 255) >= 9 && v19->field_18 == 8)
                {
                    v27 = (char)v14 - 8;
                    v1 = (char)v14 - 8;
                }
                core::ptr::drop_in_place<alloc::sync::Arc<fish::terminal::Term>>(&v3);
                goto LABEL_14123fc;
            }
        }
        else
        {
LABEL_14123b9:
            v25 = 0;
        }
        core::ptr::drop_in_place<alloc::sync::Arc<fish::terminal::Term>>(&v3);
        return v25;
    }
    v20 = &v18->field_c0;
    if (!v19->field_c0)
        v20 = 0;
    if (v19->field_b0)
    {
        v20 = &v18->field_b0;
        goto LABEL_1412356;
    }
    else
    {
LABEL_1412351:
        if (!v20)
            goto LABEL_14123b9;
        goto LABEL_1412356;
    }
}
