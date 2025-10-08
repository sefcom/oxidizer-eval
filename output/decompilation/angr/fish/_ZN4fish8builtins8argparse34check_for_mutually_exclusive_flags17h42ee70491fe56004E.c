long long fish::builtins::argparse::check_for_mutually_exclusive_flags(struct_2 *a0, unsigned long a1)
{
    void* v0;  // [bp-0x158]
    unsigned long long v1;  // [bp-0x150]
    void* v2;  // [bp-0x148]
    void* v3;  // [bp-0x140]
    unsigned long long v4;  // [bp-0x138]
    void* v5;  // [bp-0x130]
    struct_0 *v6;  // [bp-0x128]
    void* v7;  // [bp-0x120]
    unsigned long long v8;  // [bp-0x118]
    void* v9;  // [bp-0x110]
    unsigned long long v10;  // [bp-0x100]
    unsigned long long v11[3];  // [sp-0xf8]
    unsigned long long v12[3];  // [bp-0xf8]
    unsigned long v13;  // [sp-0xf0]
    unsigned long v14;  // [bp-0xf0]
    unsigned long long v15;  // [bp-0xe8]
    unsigned long long v16;  // [bp-0xe0]
    unsigned long long v17;  // [bp-0xd8]
    unsigned long long v18;  // [bp-0xd0]
    char v19;  // [bp-0xc8]
    int v20;  // [bp-0xc0]
    void* v21;  // [bp-0xb8]
    char v22;  // [bp-0xa8]
    int v23;  // [bp-0xa0]
    char v24;  // [bp-0x88]
    int v25;  // [bp-0x80]
    char v26;  // [bp-0x68]
    char v27;  // [bp-0x58]
    unsigned long v29;  // r13
    struct_0 *v30;  // rdx
    unsigned long long v31;  // rax
    unsigned long long v32;  // rcx
    unsigned long long v33[3];  // rdx
    struct_0 *v34;  // rdx
    unsigned long v35;  // r14
    unsigned long long v36[3];  // rbx
    unsigned long v37;  // r12
    unsigned long v38;  // rbx
    unsigned long long v39;  // r15
    unsigned long long v40;  // r15
    struct_1 *v41;  // rax
    struct_1 *v42;  // rbp
    unsigned long v43;  // rsi
    unsigned long v44;  // r15
    unsigned long v45;  // rax
    struct_0 *v46;  // r12
    unsigned long v47;  // rax
    unsigned long v48;  // rax
    unsigned long long v49;  // rax
    int v50;  // xmm1
    int v51;  // xmm2

    v27.iter(&a0->field_70);
    if (!v30 || !v27.next())
        return 0x100000000;
    v31 = a0->field_68;
    if (!v31)
    {
        v32 = 0;
        if (!v31)
            goto LABEL_1337b0c;
    }
    else
    {
        v32 = 24;
        if (!v31)
        {
LABEL_1337b0c:
            while (v27.next())
            {
                if (!v30)
                    return 0x100000000;
            }
            return 0x100000000;
        }
    }
    v33 = *((long long *)&a0->padding_18[72]);
    v13 = v32 + (char *)v33;
    v11[0] = v33;
    v15 = &v33[v31];
    while (true)
    {
        v6 = v34;
        if (v34->field_38)
        {
            v35 = &v6->field_40;
            v12[0] = v11;
            v14 = v13;
            while (true)
            {
                v36 = v12;
                v37 = v14;
                if (v35.slice_contains(v36[1], v36[2]) && v36[2])
                {
                    v38 = v36[1];
                    v39 = v36[2] * 4;
                    do
                    {
                        v40 = v39;
                        v41 = v29.get_inner(v38);
                        if (v41)
                        {
                            v42 = v41;
                            v43 = *((int *)v35);
                            if (v41->field_48 != (unsigned int)v43 && v42->field_40)
                            {
                                v0 = 0;
                                v1 = 4;
                                v2 = 0;
                                v46 = v6;
                                if (v46->field_44)
                                    v0.push(v43);
                                v47 = v46->field_20;
                                if (v46->field_20)
                                {
                                    if (v46->field_44)
                                    {
                                        v0.push(47);
                                        v47 = v46->field_20;
                                    }
                                    v0.spec_extend(v46->field_18, v46->field_18 + v47 * 4);
                                }
                                v3 = 0;
                                v4 = 4;
                                v5 = 0;
                                if (v42->field_4c)
                                    v3.push(v42->field_48);
                                v48 = v42->field_28;
                                if (v42->field_28)
                                {
                                    if (v42->field_4c)
                                    {
                                        v3.push(47);
                                        v48 = v42->field_28;
                                    }
                                    v3.spec_extend(v42->field_20, v42->field_20 + v48 * 4);
                                }
                                if ((char)v1.partial_cmp(0, v4, 0) > 0)
                                    core::intrinsics::typed_swap_nonoverlapping(&v0, &v3);
                                v7 = 0;
                                v8 = 4;
                                v9 = 0;
                                v17 = "%";
                                v18 = 46;
                                v16 = 0x8000000000000000;
                                v49 = v16.localize();
                                v50 = *((int128_t *)&v1);
                                v51 = *((int128_t *)&v4);
                                v19 = 1;
                                *((int128_t *)&v20) = *((int128_t *)&(&a0->padding_0)[1]);
                                v22 = 1;
                                v23 = v50;
                                v24 = 1;
                                v25 = v51;
                                fish_printf::printf_impl::sprintf_locale(&v26, &v7, v49, v30, ".", &v19, 3);
                                v26.unwrap(&g_14c6920);
                                core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v19);
                                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v16);
                                memcpy(&v19, &v7, 16);
                                v21 = 0;
                                v10.append(&v19);
                                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
                                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
                                return 4294967297;
                            }
                        }
                        v38 += 4;
                        v44 = v40 - 4;
                        v39 = v44;
                    } while (v40 != 4);
                }
                v45 = v37 + 24;
                if (v37 == v15)
                {
                    v12 = v37;
                    v14 = v37;
                    if (v12 == v15)
                        break;
                }
                else
                {
                    v12 = v37;
                    v14 = v45;
                    if (v12 == v15)
                        break;
                }
            }
        }
        if (!v27.next())
            break;
        v30 = v30;
        if (!v34)
            break;
    }
    return 0x100000000;
}
