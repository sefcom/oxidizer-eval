void fish_printf::fmt_fp::format_e_f(char *a0, unsigned long long a1, struct_1 *a2, unsigned int a3)
{
    char v0;  // [bp-0xfb]
    char v1;  // [bp-0xfa]
    char v2;  // [bp-0xf9]
    unsigned long v3;  // [bp-0xf8]
    unsigned short v4;  // [bp-0xea]
    unsigned long v5;  // [bp-0xe8]
    unsigned int *v6;  // [bp-0xe0]
    unsigned int v7;  // [bp-0xd8]
    unsigned int v8;  // [bp-0xd4]
    unsigned int v9;  // [bp-0xd0]
    unsigned int v10;  // [bp-0xcc]
    struct_0 *v11;  // [bp-0xc8]
    unsigned long v12;  // [bp-0xc0]
    char v13;  // [bp-0xb0]
    void* v14;  // [bp-0xb0]
    unsigned long long v15;  // [bp-0xa8]
    void* v16;  // [bp-0xa0]
    unsigned long v17;  // [bp-0x98]
    unsigned long long v18;  // [bp-0x90]
    unsigned long long v19;  // [bp-0x88]
    char *v20;  // [bp-0x80]
    unsigned long long v21;  // [bp-0x78]
    unsigned long long v22;  // [bp-0x70]
    unsigned long long v23;  // [bp-0x68]
    char *v24;  // [bp-0x60]
    unsigned long long v25;  // [bp-0x58]
    char *v26;  // [bp-0x50]
    unsigned long long v27;  // [bp-0x48]
    char *v28;  // [bp-0x40]
    unsigned long long v29;  // [bp-0x38]
    unsigned long long v31;  // rbp
    unsigned long v32;  // r13
    unsigned long long v33;  // r14
    unsigned int v34;  // eax
    unsigned long v35;  // rcx
    unsigned long long v36;  // rbx
    unsigned long v37;  // rbx
    unsigned long v38;  // rbx
    unsigned long v39;  // cc_ndep
    unsigned long long v40;  // rax
    unsigned long long v42;  // rdi
    unsigned long v43;  // r12
    unsigned long long v44;  // r12
    unsigned long long v45;  // r12
    unsigned long long v46;  // r12
    unsigned long long v47;  // rcx
    unsigned long long v48;  // rcx
    unsigned long long v49;  // rdx
    char v50;  // al
    unsigned long long v51;  // rcx
    char *v52;  // rcx

    v3 = a2->field_20;
    v5 = a2->field_10;
    v31 = a2->field_18;
    v32 = a2->field_38;
    v0 = a2->field_39;
    v1 = a2->field_3a;
    v4 = *((short *)&(&a2->field_3a)[1]);
    v2 = *((char *)&a2->field_3b + 1);
    v6 = &a2->field_28->field_0;
    v17 = a2->field_0;
    v33 = a2->field_8;
    v12 = a2->field_30;
    v34 = a1.exponent();
    v7 = a3;
    if (a3)
    {
        v8 = (v34 >> 31) * 2 + 43;
        v9 = (unsigned int)a2->padding_3e * 32 | 69;
        v35 = v34;
        if ((unsigned int)-(v35 & 4294967295) >= 0)
            v34 = -((unsigned int)v35);
        v10 = v34;
        v24 = &v9;
        v25 = <char as core::fmt::Display>::fmt;
        v26 = &v8;
        v27 = <char as core::fmt::Display>::fmt;
        v28 = &v10;
        v29 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        v18 = &g_54b128;
        v19 = 3;
        v22 = &g_54b158;
        v23 = 3;
        v20 = &v24;
        v21 = 3;
        v13.map_or_else(&v18);
        v36 = 1;
LABEL_1259b94:
        v43 = (!v31 ? (unsigned int)v32 & 255 & 1 : 1);
        v42 = &g_149a170;
        v44 = v43 + v36;
        if (!((char)__CFADD__(v43, v36)))
        {
            v45 = v44 + v31;
            if (!((char)__CFADD__(v44, v31)))
            {
                v46 = v45 + v16;
                if (!((char)__CFADD__(v45, v16)))
                {
                    if (!(v1 & 1) && !(v0 & 1))
                    {
                        v47 = v33;
                        if (!((char)__CFADD__(v47, v46)))
                        {
                            fish_printf::printf_impl::pad(v3, 32, v5, v47 + v46);
                            goto LABEL_1259bfc;
                        }
                        else
                        {
                            v42 = &g_149a188;
                        }
                    }
                    else
                    {
LABEL_1259bfc:
                        v3.write_str(v17, v33);
                        if (!(v1 & 1) && (v0 & 1))
                        {
                            v48 = v33;
                            if (!((char)__CFADD__(v48, v46)))
                            {
                                fish_printf::printf_impl::pad(v3, 48, v5, v48 + v46);
                                goto LABEL_1259c3c;
                            }
                            else
                            {
                                v42 = &g_149a1a0;
                            }
                        }
                        else
                        {
LABEL_1259c3c:
                            v49 = v2 * 0x10000000000 | v4 * "d\n\n# Save \\(gamake\\(gas output in a file:\nmake &>/log\n\n# Redirections stack and can be used with blocks:\nbegin\n    echo stdout\n    echo stderr >&2 # <\\- this goes to stderr!\nend >/dev/null # ignore stdout, so this prints \"stderr\"\n\n# print all lines that in" | v1 * 0x10000 | v0 * 0x100 | v32;
                            if ((char)v7)
                            {
                                v50 = fish_printf::fmt_fp::format_mantissa_e(a1, v31, v49, *(v6), v3, v12);
                                if (v50 != 6)
                                {
                                    v52 = a0;
                                    v11->field_1 = v50;
                                    *(v52) = 1;
                                    core::ptr::drop_in_place<alloc::string::String>(&v13);
                                    return;
                                }
                                v3.write_str(v15, v16);
                            }
                            else
                            {
                                v50 = fish_printf::fmt_fp::format_mantissa_f(a1, v31, v49, v6, v3, v12);
                                if (v50 != 6)
                                {
                                    v11->field_1 = v50;
                                    *(v52) = 1;
                                    core::ptr::drop_in_place<alloc::string::String>(&v13);
                                    return;
                                }
                            }
                            if ((v1 & 1) && !(v0 & 1))
                            {
                                v51 = v33;
                                if (!((char)__CFADD__(v51, v46)))
                                {
                                    fish_printf::printf_impl::pad(v3, 32, v5, v51 + v46);
                                    goto LABEL_1259cf9;
                                }
                                else
                                {
                                    v42 = &g_149a1b8;
                                }
                            }
                            else
                            {
LABEL_1259cf9:
                                if (!((char)__CFADD__(v33, v46)))
                                {
                                    v11->field_8 = v5.max(v33 + v46);
                                    *(a0) = 1;
                                    core::ptr::drop_in_place<alloc::string::String>(&v13);
                                    return;
                                }
                                v42 = &g_149a1d0;
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        v14 = 0;
        v15 = 1;
        v16 = 0;
        v37 = (unsigned int)v34.max(0);
        v38 = v37 + 1;
        if (!((char)_ccall(4, 24, v37 + 1, 0, _ccall(19, 0, 0, v39))))
        {
            v36 = v38;
            if (!(v2 & 1))
                goto LABEL_1259b94;
            v40 = v6.separator_count(v38);
            v36 = v38 + v40;
            if (!((char)__CFADD__(v38, v40)))
                goto LABEL_1259b94;
            v42 = &g_149a158;
        }
        else
        {
            v42 = &g_149a140;
        }
    }
    core::panicking::panic_const::panic_const_add_overflow(v42); /* do not return */
}
