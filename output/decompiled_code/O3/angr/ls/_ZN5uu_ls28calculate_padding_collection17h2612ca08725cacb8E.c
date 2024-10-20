long long uu_ls::calculate_padding_collection::h2612ca08725cacb8(unsigned long long a0[9], struct_1 *a1, unsigned long a2, struct_2 *a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x148]
    char v1;  // [sp-0x146]
    char v2;  // [sp-0x145]
    char v3;  // [sp-0x144]
    char v4;  // [sp-0x143]
    char v5;  // [sp-0x142]
    char v6;  // [sp-0x141]
    struct_0 *v7;  // [sp-0x140]
    void* v8;  // [sp-0x138], Other Possible Types: unsigned long
    unsigned long long v9;  // [sp-0x130]
    void* v10;  // [sp-0x128]
    unsigned long long v11;  // [bp-0x120]
    unsigned long long v12;  // [bp-0x118]
    unsigned long long v13;  // [bp-0x110]
    unsigned long long v14;  // [sp-0x108]
    unsigned long long v15;  // [sp-0x100]
    unsigned long long v16;  // [sp-0xf8]
    unsigned long long v17;  // [sp-0xe8]
    unsigned int v18;  // [sp-0xdc]
    void* v19;  // [sp-0xd8], Other Possible Types: unsigned long
    unsigned long long v20;  // [sp-0xd0]
    unsigned long long v21;  // [sp-0xc8]
    unsigned long long v22;  // [sp-0xc0]
    void* v23;  // [sp-0xb8]
    struct_0 *v24;  // [sp-0xb0]
    unsigned long long v25;  // [sp-0xa8]
    char v26;  // [sp-0xa0]
    unsigned long long v27;  // [sp-0x98]
    unsigned long long v30;  // [sp-0x80]
    struct_0 *v31;  // [sp-0x78]
    unsigned long long v32;  // [sp-0x70]
    unsigned long long v33;  // [sp-0x68]
    unsigned long long v34;  // [sp-0x60]
    unsigned long v35;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long v36;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v37;  // [sp-0x48]
    unsigned long v38;  // [sp-0x40]
    unsigned long long v40;  // r15
    struct_0 *v41;  // rax
    unsigned long long v42;  // rcx
    unsigned long long v43;  // rdx
    unsigned long long v45;  // r14
    unsigned long long v46;  // 4096
    unsigned long long v47;  // r8
    struct_0 *v48;  // r12
    unsigned long long v49;  // rax
    struct_1 *v50;  // rbp
    struct_1 *v52;  // r13
    unsigned long long v53;  // rax
    unsigned long long v54;  // rsi
    unsigned long long v55;  // rcx
    unsigned long long v58;  // rbp
    unsigned long long v60;  // rax
    void* v61;  // rdx
    void* v62;  // r13
    void* v63;  // rdi
    void* v64;  // r8
    struct_0 *v65;  // rsi
    void* v66;  // rcx
    unsigned long long v67;  // r8
    unsigned long long v68;  // rsi
    unsigned int v69;  // rcx
    unsigned int v70;  // r8
    unsigned int v71;  // r9
    unsigned long long v73;  // rcx
    unsigned long long v75;  // rdx
    unsigned long long v77;  // r13
    unsigned long long v78;  // rax
    unsigned long long v82;  // r8

    v40 = 304 * a2 + (char *)a1;
    v6 = a3->field_e9;
    v5 = a3->field_ea;
    v38 = a3->field_d0;
    v30 = a3->field_d8;
    v1 = a3->field_f1;
    v4 = a3->field_f8;
    v2 = a3->field_e3;
    v3 = a3->field_eb;
    v41 = 1;
    v17 = 1;
    v42 = 1;
    v43 = 1;
    v16 = 1;
    v15 = 1;
    v14 = 1;
    v45 = 1;
    while (true)
    {
        do
        {
            v47 = v46;
            v34 = 1;
            v33 = v43;
            v32 = v42;
            v31 = v41;
            do
            {
                if (v6)
                {
                    v48 = &a1->field_48;
                    do
                    {
                        if (&v48->padding_-100[64] == v40)
                        {
                            a0[0] = v45;
                            a0[1] = v14;
                            a0[2] = v15;
                            a0[3] = v16;
                            a0[4] = v34;
                            a0[5] = v33;
                            a0[6] = v32;
                            a0[7] = v31;
                            a0[8] = v17;
                            return v17;
                        }
                        v49 = v48->field_-108;
                        if (v49 == 3)
                        {
                            _ZN4core4cell4once17OnceCell$LT$T$GT$8try_init17h388cd46f185b73f7E.llvm.11628331613161155184(v48, &v48->padding_-100[64], a4, v42, v47, a5);
                            v49 = v48->field_-108;
                        }
                        v48 = &v48[1].padding_-100[24];
                    } while (v49 == 2);
                    v35 = v48->field_0;
                    v36 = &v35;
                    v37 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    v19 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                    v20 = 1;
                    v23 = 0;
                    v21 = &v36;
                    v22 = 1;
                    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v8, &v19);
                    if (v8)
                        __rust_dealloc(v9);
                    v52 = &v48[1].padding_-100[96];
                    v50 = &v48->padding_-100[64];
                }
                else if (a1 != v40)
                {
                    v50 = &a1[1].field_80;
                }
                else
                {
                    a0[0] = v45;
                    a0[1] = v14;
                    a0[2] = v15;
                    a0[3] = v16;
                    a0[4] = v34;
                    a0[5] = v33;
                    a0[6] = v32;
                    a0[7] = v31;
                    a0[8] = v17;
                    return v17;
                }
                a1 = v50;
                if (v5)
                {
                    v53 = v52->field_48;
                    if (v53 == 3)
                    {
                        _ZN4core4cell4once17OnceCell$LT$T$GT$8try_init17h388cd46f185b73f7E.llvm.11628331613161155184(&v52->field_48, v52, a4, v42, v47, a5);
                        if (v52->field_48 == 2)
                            continue;
                    }
                    else if (v53 == 2)
                    {
                        continue;
                    }
                    v54 = ((v52->field_80 & 0xb000 | 0x4000) == 0x6000 ? 0 : v52->field_a8 * 0x200);
                    v55 = v30;
                    if (!v1)
                    {
                        if (v55)
                            v54 = (!(v54 | v55) >> 32 ? (0 CONCAT v54) /m v55 : (0 CONCAT (unsigned int)v54) /m (unsigned int)v55 & 4294967295 & 4294967295);
                        else
                            core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(); /* do not return */
                    }
                    uucore::features::format::human::human_readable::h98ed56fc1b2b7cd1(&v19, v54, v1, v55, v47, a5, *((long long *)&v0), v7);
                    if (v19)
                        __rust_dealloc(v20);
                    v17 = v58;
                }
            } while (v4 != 1);
            v60 = v52->field_48;
            if (v60 != 3)
            {
                v7 = v7;
                v7 = v7;
                if (!(v60 == 2))
                    goto LABEL_4d8f8e;
                goto LABEL_4d8f57;
            }
            else
            {
                v7 = &v52->field_48;
                _ZN4core4cell4once17OnceCell$LT$T$GT$8try_init17h388cd46f185b73f7E.llvm.11628331613161155184(v7, v52, a4, v42, v47, a5);
                v7 = v7;
                v7 = v7;
                if (v52->field_48 == 2)
                {
LABEL_4d8f57:
                    v7 = v7;
                    v64 = 0;
                    continue;
                }
                else
                {
LABEL_4d8f8e:
                    uu_ls::display_len_or_rdev::h3ae760bb4c905170(&v19, v7, v38, v1, v47, a5);
                    v67 = v19;
                    v68 = v22;
                    if (v68 != 0x8000000000000000)
                    {
                        v65 = v24;
                        v64 = v21;
                        v11 = v11;
                        v13 = v64;
                        v7 = v65;
                        if (v68)
                        {
                            v11 = v20;
                            v67 = v67;
                            __rust_dealloc(v23);
                            v11 = v11;
                            v13 = v64;
                            v7 = v65;
                        }
                        v63 = 2 + (char *)v7 + v13;
                        if (!v67)
                            goto LABEL_4d9070;
LABEL_4d9052:
                        __rust_dealloc(v20);
                        goto LABEL_4d9070;
                    }
                    else
                    {
                        v63 = v21;
                        if (v67)
                        {
                            v65 = 0;
                            v64 = 0;
                            v20 = v20;
                            goto LABEL_4d9052;
                        }
                        else
                        {
                            v65 = 0;
                            v64 = 0;
LABEL_4d9070:
                            v36 = v52->field_78;
                            v8 = 0;
                            v9 = 1;
                            v10 = 0;
                            v25 = 32;
                            v26 = 3;
                            v19 = 0;
                            v62 = 0;
                            v23 = &v8;
                            v24 = &g_5ac0e8.field_-108;
                            if ((char)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b(&v36, &v19))
                                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
                            v12 = v8;
                            v27 = v9;
                            v66 = v10;
                            v18 = v2;
                            uu_ls::display_uname::he4162c6c2fd06561(&v8, v52->field_84, v2, v69, v70, v71);
                            v61 = v10;
                            uu_ls::display_group::hede33fed64a9e21e(&v19, v52->field_88, v18, v69, v70, v71);
                            if (v19)
                                __rust_dealloc(v20);
                            if (v8)
                                __rust_dealloc(v9);
                            if (v12)
                                __rust_dealloc(v27);
                            v21 = v62;
                            v7 = v65;
                        }
                    }
                }
            }
            v7 = v7;
            v21 = v21;
            v14 = v73;
            v15 = v75;
            v16 = v77;
            v78 = v34;
            v41 = 0;
            v42 = 0;
            v43 = 0;
        } while (a2 == 1);
        v42 = v82;
    }
}
