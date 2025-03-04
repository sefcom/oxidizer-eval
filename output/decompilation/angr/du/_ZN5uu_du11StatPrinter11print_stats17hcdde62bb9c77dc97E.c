long long uu_du::StatPrinter::print_stats::hcdde62bb9c77dc97(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [sp-0x1eb]
    char v1;  // [sp-0x1ea]
    char v2;  // [sp-0x1e9]
    unsigned long v3;  // [sp-0x1e8]
    struct_3 *v4;  // [sp-0x1e0]
    unsigned long long v5;  // [sp-0x1d0]
    unsigned long long v6;  // [sp-0x1c8]
    unsigned long long v7;  // [sp-0x1c0]
    unsigned long long v8;  // [sp-0x1b8]
    unsigned long long v9;  // [sp-0x1b0]
    char *v10;  // [sp-0x1a8]
    unsigned long long v11;  // [sp-0x1a0]
    char *v12;  // [sp-0x198]
    unsigned long long v13;  // [sp-0x190]
    unsigned long v14;  // [sp-0x188]
    unsigned long long v15;  // [sp-0x180]
    char *v16;  // [sp-0x178], Other Possible Types: struct struct_1 **, unsigned long long
    struct_3 *v17;  // [sp-0x170], Other Possible Types: unsigned long long
    int v18;  // [bp-0x168], Other Possible Types: void*
    int v19;  // [sp-0x158]
    int v20;  // [sp-0x148]
    int v21;  // [sp-0x138]
    int v22;  // [sp-0x128]
    int v23;  // [sp-0x118]
    int v24;  // [sp-0x108]
    int v25;  // [sp-0xf8]
    unsigned long v26;  // [sp-0xe8]
    unsigned long long v27;  // [sp-0xe0]
    char v28;  // [bp-0xd8], Other Possible Types: unsigned long
    unsigned long long v29;  // [sp-0xd0], Other Possible Types: unsigned long
    char v30;  // [bp-0xb8]
    char v31;  // [bp-0xa8]
    char v32;  // [bp-0x98]
    char v33;  // [bp-0x88]
    char v34;  // [bp-0x78]
    char v35;  // [bp-0x68]
    char v36;  // [bp-0x58]
    char v37;  // [bp-0x48]
    unsigned long long v39;  // r15
    int v40;  // xmm0
    int v41;  // xmm0
    int v42;  // ymm0
    int v43;  // ymm0
    void* v44;  // r12
    unsigned long long v45;  // rax
    unsigned long long v46;  // rcx
    char *v47;  // rbx
    unsigned long long v48;  // r13
    int v49;  // ymm1
    int v50;  // ymm2
    int v51;  // ymm3
    unsigned long long v52;  // rsi
    int v53;  // xmm0
    int v54;  // xmm0
    int v55;  // xmm0
    int v56;  // xmm0
    int v57;  // xmm0
    int v58;  // xmm1
    int v59;  // xmm2
    int v60;  // xmm3
    unsigned long long v61;  // rbp
    unsigned long v62;  // rdx
    unsigned long long v63;  // rbx
    unsigned long long v64;  // r15
    char v65;  // r12b
    char v66;  // r13b
    void* v67;  // rax
    unsigned long long v68;  // rdx
    int v69;  // xmm0
    int v70;  // xmm0

    v39 = a1;
    std::sync::mpmc::Receiver$LT$T$GT$::recv::h7eaaff2dc637e02c(&v28, a1, a2);
    v40 = *((int128_t *)&v28);
    v41 = CmpEQV(v40, 3);
    v43 = (v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v40) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41;
    if (UnaryOp GetMSBs == 65535)
    {
        v44 = 0;
    }
    else
    {
        v45 = v28;
        v46 = v29;
        v2 = a0->field_49;
        v0 = a0->field_4a;
        v9 = a0->field_10;
        v8 = a0->field_18;
        v6 = a0->field_0;
        v5 = a0->field_8;
        v1 = a0->field_4b;
        v44 = 0;
        v47 = &v28;
        v7 = a1;
        do
        {
            v52 = v45 ^ 2;
            if (!v52 && !v46)
            {
                v3 = v16;
                v4 = v17;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(v4->field_60(v3, v52 | v46, v4));
                v26 = uucore::util_name::h60d842bf27b05e82();
                v27 = v62;
                v10 = &v26;
                v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
                v12 = &v3;
                v13 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc201e0bc34ac3284;
                v14 = &g_5845c8;
                v15 = 3;
                v18 = 0;
                v16 = &v10;
                v17 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v14);
                ::0x4f01b0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h29011716f9a6ef88(v3, v4);
            }
            else
            {
                v14 = v45;
                v15 = v46;
                v16 = v3;
                v17 = v4;
                v53 = *((int128_t *)&v37);
                v25 = v53;
                v54 = *((int128_t *)&v36);
                v24 = v54;
                v55 = *((int128_t *)&v35);
                v23 = v55;
                v56 = *((int128_t *)&v34);
                v22 = v56;
                v57 = *((int128_t *)&v30);
                v43 = ((((v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57;
                v58 = *((int128_t *)&v31);
                v49 = v49 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58;
                v59 = *((int128_t *)&v32);
                v50 = v50 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
                v60 = *((int128_t *)&v33);
                v51 = v51 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
                v21 = v60;
                v20 = v59;
                v19 = v58;
                v18 = v57;
                if (v2)
                {
                    v61 = (long long)(&v22)[8];
                }
                else if (!v0)
                {
                    v61 = (long long)v22 * 0x200;
                }
                else
                {
                    v61 = (long long)(&v21)[8];
                }
                v63 = (long long)v25;
                v64 = (!v63 ? v61 : 0);
                if (!(char)core::option::Option$LT$T$GT$::map_or::hcdde7c32e5996b93(v9, v8, v61))
                {
                    v65 = !v63;
                    v66 = !v1;
                    v48 = v48 & 0xffffffffffffff00 | v66;
                    if (core::option::Option$LT$T$GT$::map_or::h49b7c3a1ba7c3f0d(v6, v5, v63))
                    {
                        v48 = v48 & 0xffffffffffffff00 | v66 | v65;
                        if (!(!v66) || !(!v65))
                        {
                            v67 = uu_du::StatPrinter::print_stat::hc47c0332c6a0985f(a0, &v14, v61);
                            if (v67)
                            {
                                ::0x4ef6c0::core::ptr::drop_in_place$LT$uu_du..StatPrintInfo$GT$::h4b6987c0043f7e99(&v14);
                                return v67;
                            }
                        }
                    }
                }
                v44 += v64;
                ::0x4ef6c0::core::ptr::drop_in_place$LT$uu_du..StatPrintInfo$GT$::h4b6987c0043f7e99(&v14);
                v39 = v7;
                v47 = &v28;
            }
        } while ((std::sync::mpmc::Receiver$LT$T$GT$::recv::h7eaaff2dc637e02c(v47, v39, v68), v45 = v28, v46 = v29, v69 = *((int128_t *)&v28), v70 = CmpEQV(v69, 3), v43 = (v43 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v69) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v70, UnaryOp GetMSBs != 65535));
    }
    if (!a0->field_48)
        return 0;
    uu_du::StatPrinter::convert_size::he529e362fc7c1e00(&v28, a0, v44);
    v10 = &v28;
    v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v14 = &g_5845f8;
    v15 = 2;
    v18 = 0;
    v16 = &v10;
    v17 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&v14);
    ::0x4ef6e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&v28);
    v28 = (char *)&a0[1].field_0 + 1;
    v29 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
    v14 = &g_40f000;
    v15 = 1;
    v18 = 0;
    v16 = &v28;
    v17 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&v14);
}
