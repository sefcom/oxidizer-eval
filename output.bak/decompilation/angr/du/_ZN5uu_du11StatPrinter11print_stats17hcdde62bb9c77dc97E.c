long long uu_du::StatPrinter::print_stats::hcdde62bb9c77dc97(struct_3 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [sp-0x1eb]
    char v1;  // [sp-0x1ea]
    char v2;  // [sp-0x1e9]
    unsigned long v3;  // [sp-0x1e8], Other Possible Types: unsigned long long
    struct_2 *v4;  // [sp-0x1e0]
    unsigned long long v5;  // [sp-0x1d0]
    unsigned long long v6;  // [sp-0x1c8]
    unsigned long long v7;  // [sp-0x1b8]
    unsigned long long v8;  // [sp-0x1b0]
    char *v9;  // [sp-0x1a8]
    unsigned long long v10;  // [sp-0x1a0]
    char *v11;  // [sp-0x198]
    unsigned long long v12;  // [sp-0x190]
    unsigned long v13;  // [sp-0x188], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x180]
    char *v15;  // [sp-0x178], Other Possible Types: struct struct_0 **, unsigned long long
    struct_2 *v16;  // [sp-0x170], Other Possible Types: unsigned long long
    int v17;  // [bp-0x168], Other Possible Types: void*
    int v18;  // [sp-0x158]
    int v19;  // [sp-0x148]
    int v20;  // [sp-0x138]
    int v21;  // [sp-0x128]
    int v22;  // [sp-0x118]
    int v23;  // [sp-0x108]
    int v24;  // [sp-0xf8]
    unsigned long v25;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v26;  // [sp-0xe0]
    char v27;  // [bp-0xd8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v28;  // [sp-0xd0], Other Possible Types: unsigned long long
    char v29;  // [bp-0xb8]
    char v30;  // [bp-0xa8]
    char v31;  // [bp-0x98]
    char v32;  // [bp-0x88]
    char v33;  // [bp-0x78]
    char v34;  // [bp-0x68]
    char v35;  // [bp-0x58]
    char v36;  // [bp-0x48]
    int v38;  // xmm0
    int v39;  // xmm0
    int v40;  // ymm0
    int v41;  // ymm0
    void* v42;  // r12
    char *v43;  // rbx
    unsigned long long v44;  // 4096
    unsigned long long v50;  // r13
    int v51;  // ymm1
    int v52;  // ymm2
    int v53;  // ymm3
    unsigned long long v54;  // rsi
    int v55;  // xmm0
    int v56;  // xmm0
    int v57;  // xmm0
    int v58;  // xmm0
    int v59;  // xmm0
    int v60;  // xmm1
    int v61;  // xmm2
    int v62;  // xmm3
    unsigned long long v63;  // rbp
    unsigned long long v64;  // r14
    unsigned long long v65;  // rbx
    unsigned long long v66;  // rbp
    unsigned long v68;  // rdx
    unsigned long long v70;  // r15
    char v71;  // r12b
    char v72;  // r13b
    void* v73;  // rax
    unsigned long long v74;  // r15
    unsigned long long v75;  // rdx
    int v76;  // xmm0
    int v77;  // xmm0

    std::sync::mpmc::Receiver$LT$T$GT$::recv::h7eaaff2dc637e02c(&v27, a1, a2);
    v38 = *((int128_t *)&v27);
    v39 = CmpEQV(v38, 3);
    v41 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v39;
    if (UnaryOp GetMSBs == 65535)
    {
        v42 = 0;
    }
    else
    {
        v2 = a0->field_49;
        v0 = a0->field_4a;
        v8 = a0->field_10;
        v7 = a0->field_18;
        v6 = a0->field_0;
        v5 = a0->field_8;
        v1 = a0->field_4b;
        v42 = 0;
        v43 = &v27;
        v44 = a1;
        do
        {
            v54 = v13 ^ 2;
            if (!v54 && !v14)
            {
                v3 = v15;
                v4 = v16;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(v4->field_60(v3, v54 | v14, v4));
                v25 = uucore::util_name::h60d842bf27b05e82();
                v26 = v68;
                v9 = &v25;
                v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6327d06d698acdd2;
                v11 = &v3;
                v12 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc201e0bc34ac3284;
                v13 = &g_5845c8;
                v14 = 3;
                v17 = 0;
                v15 = &v9;
                v16 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v13);
                ::0x4f01b0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h29011716f9a6ef88(v3, v4);
                v70 = v44;
            }
            else
            {
                v13 = v27;
                v14 = v28;
                v15 = v3;
                v16 = v4;
                v55 = *((int128_t *)&v36);
                v24 = v55;
                v56 = *((int128_t *)&v35);
                v23 = v56;
                v57 = *((int128_t *)&v34);
                v22 = v57;
                v58 = *((int128_t *)&v33);
                v21 = v58;
                v59 = *((int128_t *)&v29);
                v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
                v60 = *((int128_t *)&v30);
                v51 = v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v60;
                v61 = *((int128_t *)&v31);
                v52 = v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v61;
                v62 = *((int128_t *)&v32);
                v53 = v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
                v20 = v62;
                v19 = v61;
                v18 = v60;
                v17 = v59;
                v63 = (!v2 ? (!v0 ? (long long)v21 * 0x200 : (long long)(&v20)[8]) : (long long)(&v21)[8]);
                v65 = (long long)v24;
                if (!v65)
                    v66 = v63;
                else
                    v66 = 0;
                if (!(char)core::option::Option$LT$T$GT$::map_or::hcdde7c32e5996b93(v8, v7, v63))
                {
                    v71 = !v65;
                    v72 = !v1;
                    v50 = v50 | -0x100 | v72;
                    if (core::option::Option$LT$T$GT$::map_or::h49b7c3a1ba7c3f0d(v6, v5, v65))
                    {
                        v50 = v50 | -0x100 | v72 | v71;
                        if (!(!v72) || !(!v71))
                        {
                            v73 = uu_du::StatPrinter::print_stat::hc47c0332c6a0985f(a0, &v13, v63);
                            if (v73)
                            {
                                ::0x4ef6c0::core::ptr::drop_in_place$LT$uu_du..StatPrintInfo$GT$::h4b6987c0043f7e99(&v13);
                                return v73;
                            }
                        }
                    }
                }
                v42 = v64 + v66;
                ::0x4ef6c0::core::ptr::drop_in_place$LT$uu_du..StatPrintInfo$GT$::h4b6987c0043f7e99(&v13);
                v43 = &v27;
                v70 = a1;
            }
        } while ((v74 = v70, std::sync::mpmc::Receiver$LT$T$GT$::recv::h7eaaff2dc637e02c(v43, v74, v75), v76 = *((int128_t *)&v27), v77 = CmpEQV(v76, 3), v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77, v44 = v74, v27 = (unsigned long long)v27, v28 = (unsigned long long)v28, UnaryOp GetMSBs != 65535));
    }
    if (!a0->field_48)
        return 0;
    uu_du::StatPrinter::convert_size::he529e362fc7c1e00(&v27, a0, v42);
    v9 = &v27;
    v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v13 = &g_5845f8;
    v14 = 2;
    v17 = 0;
    v15 = &v9;
    v16 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&v13);
    ::0x4ef6e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&v27);
    v27 = (char *)&a0[1].field_0 + 1;
    v28 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
    v13 = &g_40f000;
    v14 = 1;
    v17 = 0;
    v15 = &v27;
    v16 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&v13);
}
