long long uu_fmt::linebreak::find_kp_breakpoints::hdc0461fc73638a18(unsigned long long a0, unsigned long long a1, unsigned long long a2, struct_1 *a3)
{
    char v0;  // [sp-0x1b2]
    char v1;  // [sp-0x1b1]
    void* v2;  // [sp-0x1b0]
    char v3;  // [bp-0x1a8]
    char v4;  // [bp-0x1a0]
    char v5;  // [bp-0x198]
    void* v6;  // [sp-0x190]
    struct_0 *v7;  // [sp-0x188]
    void* v8;  // [sp-0x180]
    unsigned long long v9;  // [sp-0x178]
    void* v10;  // [sp-0x170]
    void* v11;  // [sp-0x168]
    unsigned long long v12;  // [sp-0x160]
    void* v13;  // [sp-0x158], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x150]
    unsigned long long v15;  // [sp-0x148]
    unsigned long long v16;  // [sp-0x140]
    unsigned long long v17;  // [sp-0x138]
    unsigned long long v18[8];  // [sp-0x130]
    unsigned long long v19;  // [sp-0x128]
    char v20;  // [bp-0x120]
    char v21;  // [bp-0x118]
    char v22;  // [bp-0x110]
    unsigned long long v23;  // [sp-0x100]
    unsigned long long v24;  // [sp-0xf8]
    char v25[59];  // [sp-0xf0]
    unsigned long long v26;  // [sp-0xe8]
    unsigned long long v27;  // [sp-0xe0]
    unsigned long long v28;  // [sp-0xd8]
    void* v29;  // [bp-0xd0], Other Possible Types: char
    char v30;  // [bp-0xc8]
    char v31;  // [bp-0xc0]
    unsigned long v32;  // [sp-0xb0], Other Possible Types: unsigned long long
    struct_0 *v33;  // [sp-0xa8]
    unsigned long long v34;  // [sp-0xa0]
    unsigned long long v35;  // [sp-0x98]
    unsigned int v36;  // [sp-0x90]
    unsigned short v37;  // [sp-0x8c]
    int v38;  // [sp-0x88]
    int v39;  // [bp-0x78]
    unsigned long long v40;  // [sp-0x6b]
    char v41;  // [sp-0x63]
    unsigned short v42;  // [sp-0x62]
    char v43;  // [bp-0x58]
    struct_5 *v45;  // rax
    unsigned long long v46;  // rcx
    int v47;  // ymm0
    int v48;  // ymm0
    unsigned long long *v49;  // rax
    unsigned long long v50[8];  // rax
    unsigned long long v51;  // rdi
    unsigned int v52;  // ebx
    int v54;  // ymm1
    struct_0 *v55;  // r14
    unsigned long long v56;  // 4099
    void* v58;  // rax
    unsigned long long *v59;  // rax
    unsigned long long v62;  // rbx
    unsigned long long v63;  // rcx
    unsigned long long v64;  // r15
    unsigned long long v65;  // rbp
    unsigned long long v66;  // r13
    unsigned long v67;  // rdx
    unsigned long long v68;  // rbx
    unsigned long long v69;  // r14
    struct_4 *v70;  // r15
    unsigned long long v71;  // r12
    unsigned long long v72;  // rdx
    void* v73;  // rax
    unsigned long long v74;  // rdx
    unsigned long long v75;  // rcx
    unsigned long long v76;  // r14
    char v77;  // dl
    unsigned long long v78;  // rax
    unsigned long long v79;  // rcx
    unsigned long long v80;  // rdx
    char v81;  // al
    struct_3 *v82;  // rcx
    unsigned short v83;  // dx
    int v84;  // xmm0
    int v85;  // xmm1
    void* v86;  // rax
    unsigned long long v87;  // r9
    unsigned long long v88;  // rax

    core::iter::traits::iterator::Iterator::peekable::h4b1aeadf9d40f659(&v29, a1, a2);
    v45 = ::0x4bc910::alloc::alloc::Global::alloc_impl::hf61749d460433fff(40);
    if (!v45)
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    v46 = a3->field_20;
    v48 = v47 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    v45->field_0 = 0;
    v45->field_10 = 0;
    v45->field_18 = v46;
    v45->field_20 = 0;
    v45->field_24 = 0;
    alloc::slice::hack::into_vec::hbf0a101228ef51aa(&v3, v45, 1);
    v49 = ::0x4bc910::alloc::alloc::Global::alloc_impl::hf61749d460433fff(8);
    if (!v49)
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    *(v49) = 0;
    alloc::slice::hack::into_vec::h14e90694169ac5cd(&v20, v49, 1);
    v8 = 0;
    v9 = 8;
    v10 = 0;
    v50 = a3->field_0;
    v18[0] = v50;
    v51 = v50[7];
    v26 = v50[6];
    v24 = v51;
    v23 = v26 - v51;
    v17 = ::0x4bc400::core::cmp::max_by::hc6c013d5dc0d01b4(v51, v23 + 1) - v23;
    v11 = 0;
    v12 = 8;
    v13 = 0;
    v0 = a3->field_30;
    v15 = a3->field_28;
    v6 = 0;
    v14 = &g_527b60;
    v52 = 0;
    while (true)
    {
        v55 = *((long long *)&v30);
        v56 = v29;
        v29 = 0;
        if (!v56)
            v55 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h11750801b5871031(&v31);
        if (!v55)
        {
            uu_fmt::linebreak::build_best_path::hadfc08c15b54272a(a0, *((long long *)&v4), *((long long *)&v5), *((long long *)&v21), *((long long *)&v22));
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_fmt..linebreak..LineBreak$GT$$GT$::he42c34d176886adf(&v11);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h2cc1917529528da6(&v8);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$usize$GT$$GT$::h2cc1917529528da6(&v20);
            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_fmt..linebreak..LineBreak$GT$$GT$::he42c34d176886adf(&v3);
        }
        v1 = 1;
        v58 = (v52 & 1) + 1;
        v7 = v55;
        if (!(v55->field_3a || v0))
            v58 = 0;
        v19 = v58;
        v13 = 0;
        v10 = 0;
        v27 = *((long long *)&v21);
        v28 = v27 + *((long long *)&v22) * 8;
        v59 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2e22a88c1b1c04a4(&v27);
        if (v59)
        {
            *((long long *)&v25[0]) = *((long long *)core::option::Option$LT$T$GT$::get_or_insert_with::hc46e190f1ef40233(&v29, &v31));
            v16 = 9223372036854775807;
            v2 = 0;
            do
            {
                v62 = *(v59);
                if (v62 >= *((long long *)&v5))
                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                v63 = 9223372036854775807;
                v64 = *((long long *)&v4);
                v65 = v62 * 5;
                v66 = *((long long *)(v64 + v65 * 8 + 16)) - v6;
                v67 = *((long long *)(v64 + v65 * 8 + 24));
                *((unsigned long long *)(v64 + v65 * 8 + 16)) = v66;
                if (v66 >= v63)
                    v68 = v2;
                v2 = v68;
                v69 = v7->field_28;
                v70 = v64 + v65 * 8;
                v71 = uu_fmt::linebreak::BreakArgs::compute_width::hbd5b338d9dc376c7(v18, v7, v67, *((char *)(v64 + v65 * 8 + 37))) + v19 + v69 + v70->field_18;
                if (v71 <= v26)
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h9bd9438dc5607994(&v8, v62, v72);
                    v70->field_25 = 0;
                    v70->field_18 = v71;
                    if (v71 >= v17)
                    {
                        if (!v25)
                        {
                            v48 |= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                            v73 = 0;
                        }
                        else
                        {
                            v73 = uu_fmt::linebreak::compute_demerits::h77fef685fa6aa8b1(v24 - v71, v23, v69);
                        }
                        if (v73 <= 99999999999999)
                        {
                            v75 = v70->field_10;
                            v76 = v75 + v73;
                            if (v76 < v16)
                            {
                                v77 = v75;
                                if (v75 < 0 || v73 >= 0 && !(!v73 & v77))
                                {
                                    v32 = v62;
                                    v33 = v7;
                                    v37 = 0x100;
                                    v34 = v76;
                                    v36 = v70->field_20;
                                    v35 = v15;
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::h2bcd4401143c15b1(&v11, &v32, v74 | -0x100 | v77);
                                    v16 = v76;
                                }
                            }
                        }
                    }
                }
                v59 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2e22a88c1b1c04a4(&v27);
            } while (v59);
            v78 = v13;
            if (v78)
            {
                v13 = v78 - 1;
                v79 = v12;
                v80 = v13 * 5;
                v81 = *((char *)(v79 + v80 * 8 + 37));
                if (v41 != 2)
                {
                    v82 = v79 + v80 * 8;
                    v83 = v82->field_26;
                    v40 = *((long long *)((char *)&v82->field_10 + 13));
                    v84 = v82->field_0;
                    v48 = v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84;
                    v85 = v82->field_10;
                    v54 = v54 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v85;
                    v39 = v85;
                    v38 = v84;
                    v41 = v81;
                    v42 = v83;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h9bd9438dc5607994(&v8, *((long long *)&v5), v42);
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h2bcd4401143c15b1(&v3, &v38, v72);
                }
            }
            if (!v10)
                goto LABEL_4bd80d;
            goto LABEL_4bd480;
        }
        else
        {
            v2 = 0;
            if (v10)
            {
LABEL_4bd480:
                v86 = core::cmp::max_by::h16a897afcaf25882(9223372036854775807);
                goto LABEL_4bd488;
            }
            else
            {
LABEL_4bd80d:
                v87 = v2;
                if (v87 >= *((long long *)&v5))
                {
                    v14 = &g_527b48;
                    core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
                }
                v88 = *((long long *)&v4);
                uu_fmt::linebreak::restart_active_breaks::h3b617708fb81262c(&v43, v18, v15, *((long long *)(v88 + v87 * 40 + 24)), *((char *)(v88 + v87 * 40 + 37)), v87, v7, v19, v17);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h9bd9438dc5607994(&v8, *((long long *)&v5), v72);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h2bcd4401143c15b1(&v3, &v43, v72);
                v86 = 0;
LABEL_4bd488:
                v6 = v86;
                core::intrinsics::typed_swap::h77dd6be0b99f8fb7(&v20, &v8);
                v52 = v1;
            }
        }
    }
}
