long long fish::terminal::cursor_move(unsigned long long a0, unsigned int a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x8c]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2[45];  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x78]
    char *v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x68]
    void* v6;  // [bp-0x60]
    char *v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]
    char *v9;  // [bp-0x40]
    unsigned long long v10;  // [bp-0x38]
    unsigned long v12;  // rbp
    unsigned long long v13[45];  // r15
    unsigned long v14;  // r12
    unsigned long long v15;  // rax
    unsigned long v16;  // r15
    unsigned int v17;  // r12d
    unsigned long long v18;  // r15
    unsigned long long v19;  // rdx
    unsigned long long v22;  // r14
    unsigned long long v23;  // r14
    unsigned int v25;  // r12d

    v12 = a1;
    v1 = a2;
    if (!(char)fish::terminal::use_terminfo())
    {
        v0 = *((int *)(17704604 + 4 * (v12 & 4294967295)));
        v7 = &v1;
        v8 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v9 = &v0;
        v10 = <char as core::fmt::Display>::fmt;
        v2 = &g_14e29d0;
        v3 = 2;
        v6 = 0;
        v4 = &v7;
        v5 = 2;
        fish::common::do_write_to_output(a0, &v2);
        return v25 & 0xffffff00 | 1;
    }
    v13 = fish::terminal::term();
    v2[0] = v13;
    if (!(char)v12)
    {
        if (!v13[34])
            goto LABEL_14130d7;
        v16 = &v13[34];
        v17 = v25 & 0xffffff00 | 1;
        if (a2)
            goto LABEL_14130b1;
    }
    else if ((unsigned int)v12 == 1)
    {
        v14 = v13[42];
        v15 = 336;
        if (v13[42])
            goto LABEL_141302f;
        if (!v13[38])
            goto LABEL_14130d7;
        v16 = &v13[38];
        v17 = 1;
        if (a2)
            goto LABEL_14130b1;
    }
    else
    {
        v14 = v13[44];
        v15 = 352;
        if (v13[44])
        {
LABEL_141302f:
            a2 > 2147483647.unwrap(&g_14e29f0);
            v18 = fish::terminal::tparm1(v14, *((long long *)(8 + (char *)v13 + v15)), a2 & 4294967295);
            if (v18)
            {
                a0.write_bytes(v18, v19 - 1);
                core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v18, v19);
                v17 = (unsigned int)v14 & 0xffffff00 | 1;
            }
            else
            {
                v17 = 0;
                core::ptr::drop_in_place<core::option::Option<alloc::ffi::c_str::CString>>(0, v19);
            }
        }
        else if (v13[40])
        {
            v16 = &v13[40];
            v17 = 1;
            if (a2)
            {
LABEL_14130b1:
                do
                {
                    v22 = a2;
                    a0.write_bytes(*((long long *)v16), *((long long *)(v16 + 8)) - 1);
                    v23 = v22 - 1;
                    a2 = v23;
                } while (v22 != 1);
            }
        }
        else
        {
LABEL_14130d7:
            v17 = 0;
        }
    }
    core::ptr::drop_in_place<alloc::sync::Arc<fish::terminal::Term>>(&v2);
    return v17;
}
