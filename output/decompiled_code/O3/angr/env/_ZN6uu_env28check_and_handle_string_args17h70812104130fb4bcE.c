long long uu_env::check_and_handle_string_args::h70812104130fb4bc(struct_2 *a0, void* a1, unsigned long a2, void* a3, unsigned int a4, unsigned long long a5)
{
    unsigned long long v0;  // [sp-0x140], Other Possible Types: unsigned int
    unsigned int v1;  // [sp-0x13c]
    int v2;  // [sp-0x138], Other Possible Types: unsigned long long
    struct_0 *v3;  // [sp-0x130]
    int v4;  // [bp-0x128], Other Possible Types: char
    unsigned long v5;  // [sp-0x118], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x110]
    unsigned long long v7;  // [sp-0x108]
    unsigned long long v8;  // [sp-0x100]
    unsigned long v9;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long v10;  // [sp-0xf0], Other Possible Types: unsigned long long
    char v11;  // [bp-0xe8]
    void* v12;  // [sp-0xe0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v13;  // [sp-0xd8]
    void* v14;  // [sp-0xd0], Other Possible Types: unsigned long long
    int v15;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v16;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0xb8]
    unsigned long long v18;  // [sp-0xb0]
    int v19;  // [sp-0xa8]
    unsigned long long v20;  // [sp-0x98]
    void* v21;  // [sp-0x90]
    int v22;  // [bp-0x88], Other Possible Types: unsigned int
    unsigned long long v23;  // [sp-0x78]
    unsigned long long v24;  // [sp-0x70]
    unsigned long long v25;  // [sp-0x60]
    unsigned long v26;  // [sp-0x58], Other Possible Types: unsigned long long
    struct_0 *v27;  // [sp-0x50]
    struct_0 *v28;  // [sp-0x48]
    unsigned long long v29;  // [sp-0x40]
    unsigned long long v30;  // [sp-0x38]
    unsigned long long v31[3];  // [bp+0x8]
    struct_0 *v32;  // rax
    unsigned long long v33[3];  // rax
    unsigned long long v34;  // rbp
    unsigned long long v35;  // rbx
    int v36;  // ymm0
    int v37;  // ymm0
    unsigned long long v38;  // rsi
    unsigned long long v39;  // rdx
    void* v40;  // rbx
    void* v41;  // r13
    int v42;  // xmm0
    unsigned long long v43;  // rcx
    struct_3 *v44;  // rax
    uint128_t v45[2];  // rax
    struct_1 *v46;  // rax
    unsigned long long v47;  // rbx
    struct_1 *v48;  // r15
    unsigned int v49;  // ecx
    unsigned long long v50;  // rdi

    if (a2 >= a4)
    {
        v25 = a2 - a4;
        if (!bcmp(a1, a3, a4))
        {
            v33 = v31;
            v24 = a1 + a4;
            if (v33)
            {
                v34 = v33[1];
                v35 = v33[2];
                v12 = &g_50c6a0;
                v13 = 1;
                v14 = 8;
                v37 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                *((int128_t *)&v15) = 0;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v12, v38, v39);
                if (v35)
                {
                    v40 = 0;
                    v41 = 0;
                    do
                    {
                        v9 = v41;
                        v42 = *((int128_t *)(8 + v34 + (char *)v40));
                        v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v42;
                        v0 = 1;
                        v2 = v42;
                        v4 = 1;
                        v5 = &v9;
                        v6 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                        v7 = &v0;
                        v8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                        v12 = &g_50c6b0;
                        v13 = 3;
                        v16 = 0;
                        v14 = &v5;
                        v15 = 2;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v12, v38, v39);
                        v41 = v9 + 1;
                        v40 += 24;
                    } while ((v35 << 3) + (v35 << 4) != v40);
                }
            }
            v15 = v24;
            v16 = v25;
            v17 = v15;
            v18 = v16;
            *((int128_t *)&v19) = 0;
            v12 = 0;
            v13 = 1;
            v14 = 0;
            v20 = 8;
            v21 = 0;
            uu_env::split_iterator::SplitIterator::split::h6b85f5500c06e841(&v0, &v12, v39, v15);
            if (v0 != 8)
            {
                v0 = v0;
                v1 = v1;
                v2 = v2;
                v3 = v3;
                *((int128_t *)&v4) = *((int128_t *)&v4);
                switch (v0)
                {
                case 0:
                    v44 = __rust_alloc(33, 1);
                    if (!v44)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    v44->field_10 = 146762592127278425410046802962087702389;
                    v44->field_0 = 150371014859092282345978045141444751214;
                    v44->field_20 = 103;
                    v32 = __rust_alloc(32, 8);
                    if (!v32)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    v32->field_0 = 33;
                    v32->field_8 = v44;
                    v32->field_10 = 33;
                    break;
                    v32->field_18 = 125;
                    goto LABEL_49b588;
                case 1:
                    v46 = __rust_alloc(40, 1);
                    if (!v46)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    v48 = v46;
                    v46->field_10 = 140163223280069205266816195155304980584;
                    v46->field_0 = 153367071955254126771399514278933720681;
                    v48->field_20 = 5993482337682220910;
                    v32 = __rust_alloc(32, 8);
                    if (!v32)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    v32->field_0 = 40;
                    v32->field_8 = v48;
                    v32->field_10 = 40;
                    v32->field_18 = 125;
                    if (!v3)
                        goto LABEL_49b588;
LABEL_49b56f:
                    v50 = (long long)v4;
                    goto LABEL_49b57c;
                case 2:
                    v45 = __rust_alloc(47, 1);
                    if (!v45)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    *((int128_t *)((char *)&v45[1] + 15)) = 137483774941343516258350111522059941233;
                    v45[1] = 150438473992812582553753004016394134896;
                    v45[0] = 149377846585248595747506928146599599143;
                    v32 = __rust_alloc(32, 8);
                    if (!v32)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    v32->field_0 = 47;
                    v32->field_8 = v45;
                    v32->field_10 = 47;
                    break;
                    break;
                case 3:
                    v22 = v1;
                    v9 = &v22;
                    v10 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
                    v12 = &g_50c650;
                    v13 = 2;
                    v16 = 0;
                    v14 = &v9;
                    v15 = 1;
                    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v5, &v12);
                    v32 = __rust_alloc(32, 8);
                    if (!v32)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    v32->field_0 = v5;
                    v32->field_8 = v6;
                    v32->field_10 = v7;
                    break;
                    break;
                case 4:
                    v26 = v2;
                    v23 = (long long)(&v4)[8];
                    *((int128_t *)&v22) = *((int128_t *)&v3);
                    v5 = &v26;
                    v6 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                    v7 = &v22;
                    v8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v12 = &g_50c670;
                    v13 = 2;
                    v16 = 0;
                    v14 = &v5;
                    v15 = 2;
                    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v9, &v12);
                    v47 = *((long long *)&v11);
                    v32 = __rust_alloc(32, 8);
                    if (!v32)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    v32->field_0 = v9;
                    v32->field_8 = v10;
                    v32->field_10 = v47;
                    v32->field_18 = 125;
                    if (!(long long)v22)
                        goto LABEL_49b588;
                    v50 = (long long)(&v22)[8];
                    goto LABEL_49b57c;
                default:
                    v9 = &v0;
                    v10 = _$LT$uu_env..parse_error..ParseError$u20$as$u20$core..fmt..Debug$GT$::fmt::hc2e9e58a7202e181;
                    v12 = &g_50c690;
                    v13 = 1;
                    v16 = 0;
                    v14 = &v9;
                    v15 = 1;
                    alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v5, &v12);
                    v32 = __rust_alloc(32, 8);
                    if (!v32)
                        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                    v32->field_0 = v5;
                    v32->field_8 = v6;
                    v32->field_10 = v7;
                    v32->field_18 = 125;
                    switch (v49)
                    {
                    case 4:
                        if (v3)
                        {
                            __rust_dealloc((long long)v4);
                            break;
                        }
                    case 1:
                        if (!(!v3))
                            goto LABEL_49b56f;
                        goto LABEL_49b588;
                    default:
LABEL_49b588:
                        break;
                    }
                    v43 = &g_50c5c0;
                    a0->field_0 = v32;
                    *((unsigned long long *)&a0->field_8) = v43;
                    return v32;
                }
LABEL_49b57c:
                __rust_dealloc(v50);
                goto LABEL_49b588;
            }
            else
            {
                v32 = v3;
                v43 = *((long long *)&v4);
                if (v29 == 0x8000000000000000)
                {
                    a0->field_0 = v32;
                    *((unsigned long long *)&a0->field_8) = v43;
                    return v32;
                }
                v27 = v32;
                v28 = v32;
                v29 = v2;
                v30 = &(&v32->field_0)[3 * v43];
                v32 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h6bd662abb5325311(a5, &v27) | -0x100 | 1;
                a0->field_8 = (char)v32;
                a0->field_0 = 0;
                return v32;
            }
        }
    }
    a0->field_8 = 0;
    a0->field_0 = 0;
    return v32;
}
