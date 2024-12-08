long long uu_du::StatPrinter::print_stats::h11ce198127f1b342(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
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
    unsigned long v9;  // [sp-0x1a8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x1a0]
    unsigned long long v11;  // [sp-0x198]
    unsigned long long v12;  // [sp-0x190]
    unsigned long v13;  // [sp-0x188], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x180]
    unsigned long long v15;  // [sp-0x178]
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
    int v40;  // ymm0
    int v41;  // ymm0
    void* v42;  // r12
    unsigned long long v43;  // rbx
    unsigned long long v48;  // rcx
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
    unsigned long long v68;  // rdx
    unsigned long long v69;  // rsi
    unsigned long long v71;  // r15
    char v72;  // r12b
    char v73;  // r13b
    unsigned long long v74;  // r8
    unsigned long long v75;  // r9
    void* v76;  // rax
    unsigned long long v77;  // r15
    unsigned long long v78;  // rdx
    int v79;  // xmm0

    std::sync::mpmc::Receiver$LT$T$GT$::recv::h856c3930a42040b3(&v27, a1, a2);
    v38 = *((int128_t *)&v27);
    v41 = v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(v38, 3);
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
        do
        {
            v54 = v13 ^ 2;
            if (!v54 && !v14)
            {
                v3 = v15;
                v4 = v16;
                v4->field_60(v3, v54 | v14, v4);
                uucore::mods::error::set_exit_code::h6705c4226a43fa90();
                v25 = uucore::util_name::h412db5e565a079f3();
                v26 = v68;
                v9 = &v25;
                v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6e66823d969d841;
                v11 = &v3;
                v12 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h28fba0146391634a;
                v13 = &g_584068;
                v14 = 3;
                v17 = 0;
                v15 = &v9;
                v16 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v13, v69, v68);
                ::0x4efde0::core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hb195e7c4d5eff46a(v3, v4);
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
                if (!(char)core::option::Option$LT$T$GT$::map_or::ha88084c7af90b20c(v8, v7, v63))
                {
                    v72 = !v65;
                    v73 = !v1;
                    v50 = v50 | -0x100 | v73;
                    if (core::option::Option$LT$T$GT$::map_or::h1c1e1486a5f16e3c(v6, v5, v65))
                    {
                        v50 = v50 | -0x100 | v73 | v72;
                        if (!(!v73) || !(!v72))
                        {
                            v76 = uu_du::StatPrinter::print_stat::he725ba403ec414d4(a0, &v13, v63, v48, v74, v75);
                            if (v76)
                            {
                                ::0x4ef2f0::core::ptr::drop_in_place$LT$uu_du..StatPrintInfo$GT$::h7d26a459dca5f84c(&v13);
                                return v76;
                            }
                        }
                    }
                }
                v42 = v64 + v66;
                ::0x4ef2f0::core::ptr::drop_in_place$LT$uu_du..StatPrintInfo$GT$::h7d26a459dca5f84c(&v13);
                v43 = &v27;
            }
        } while ((v77 = v71, std::sync::mpmc::Receiver$LT$T$GT$::recv::h856c3930a42040b3(v43, v77, v78), v79 = *((int128_t *)&v27), v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(char)(CmpEQV(v79, 3)), v28 = (unsigned long long)v28, v27 = (unsigned long long)v27, UnaryOp GetMSBs != 65535));
    }
    if (!a0->field_48)
        return 0;
    uu_du::StatPrinter::convert_size::h6461a3964a5e9338(&v27, a0, v42);
    v9 = &v27;
    v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    v13 = &g_584098;
    v14 = 2;
    v17 = 0;
    v15 = &v9;
    v16 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&v13, v69, v68);
    ::0x4ef310::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hda92597faca30260(&v27);
    v27 = (char *)&a0[1].field_0 + 1;
    v28 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h1cda345fbd5bfac0;
    v13 = &g_40ee80;
    v14 = 1;
    v17 = 0;
    v15 = &v27;
    v16 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&v13, v69, v68);
}
