int uu_seq::print_seq::hfba71258b667ccdd()
{
    struct_0 *v0;  // [sp-0x1d0]
    unsigned long v1;  // [sp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x1c0]
    unsigned long long v3;  // [sp-0x1b8]
    unsigned long long v4;  // [sp-0x1b0]
    unsigned long long v5;  // [sp-0x1a8]
    unsigned long long v6;  // [sp-0x1a0]
    int v7;  // [bp-0x198], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v8;  // [sp-0x190]
    int v9;  // [bp-0x188], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x180]
    void* v11;  // [sp-0x178]
    unsigned long long v12;  // [sp-0x170]
    char v13;  // [sp-0x168]
    int v14;  // [sp-0x158]
    int v15;  // [sp-0x148]
    unsigned long long v16;  // [sp-0x138]
    unsigned long v17;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x120]
    unsigned long long v19;  // [sp-0x118]
    void* v20;  // [sp-0x110]
    unsigned long long v21;  // [sp-0x108]
    void* v22;  // [sp-0x100]
    int v23;  // [bp-0xf8], Other Possible Types: char
    char v24;  // [bp-0xf0]
    unsigned long long v25;  // [sp-0xe8]
    int v26;  // [sp-0xd8]
    int v27;  // [sp-0xc8]
    unsigned long long v28;  // [sp-0xb8]
    unsigned long long v29;  // [sp-0xa8]
    unsigned long long v30;  // [sp-0xa0]
    unsigned long long v31;  // [sp-0x98]
    unsigned long v32;  // [sp-0x90], Other Possible Types: unsigned long long
    int v33;  // [sp-0x88]
    int v34;  // [sp-0x78]
    unsigned long long v35;  // [sp-0x68]
    unsigned long long v36;  // [sp-0x60]
    unsigned long v37;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v38;  // [sp-0x50]
    unsigned long long v39;  // [sp-0x48]
    unsigned long long v40;  // [sp-0x40]
    unsigned long long v41;  // [sp-0x38]
    unsigned long long v42;  // [sp-0x30]
    unsigned long v43;  // [bp+0x8]
    char v44;  // [bp+0x10]
    char v45;  // [bp+0x18]
    unsigned long v46;  // rbx
    unsigned long long v47;  // rdx
    unsigned long v48;  // rcx
    unsigned long v49;  // r8
    unsigned long v50;  // r9
    unsigned long long v54;  // rsi
    struct_1 *v55;  // rdi
    unsigned long long v57;  // rax
    unsigned long long v59;  // rax
    void* v60;  // rdi
    unsigned long long v61;  // rax
    void* v62;  // rax
    unsigned long long v63;  // rsi
    unsigned long long v65;  // rsi
    unsigned long long v66;  // rsi
    unsigned long long v67;  // rax
    void* v68;  // rax
    unsigned long long v69;  // rsi
    struct_0 *v70;  // rdi
    unsigned long long v71;  // rsi
    unsigned long long v72;  // rsi
    struct_0 *v73;  // rdi

    v42 = v46;
    v38 = v47;
    v39 = v48;
    v40 = v49;
    v41 = v50;
    v37 = std::io::stdio::stdout::h077da66234850927();
    v0 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v37, v54, v47);
    v16 = v55->field_20;
    *((uint128_t *)&v15) = v55->field_10;
    *((uint128_t *)&v14) = v55->field_0;
    v28 = *((long long *)((char *)&v55->field_38 + 8));
    *((int128_t *)&v27) = *((int128_t *)((char *)&v55->field_28 + 8));
    *((int128_t *)&v26) = *((int128_t *)&(&v55->field_20)[1]);
    v35 = v55->field_60;
    *((uint128_t *)&v34) = v55->field_50;
    v57 = v54;
    *((int128_t *)&v33) = *((int128_t *)&v55->field_48);
    v60 = v59 + *((long long *)&v44);
    if (!(char)v43)
        v60 = 0;
    v29 = v60;
    v36 = *((long long *)*((long long *)&v45));
    v31 = 0x8000000000000000;
    v30 = 9223372036854775810;
    *((int128_t *)&v9) = 0x10000000000000000;
    *((int128_t *)&v7) = 0x80000000000000000;
    v11 = 0;
    if ((_$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$core..cmp..PartialOrd$GT$::partial_cmp::h66cfac807d1fc958(&v26) & 255) >= 2)
    {
        if (v7)
            __rust_dealloc(v8);
    }
    else
    {
        if (v7)
            __rust_dealloc(v8);
    }
    if ((char)_$LT$uu_seq..extendedbigdecimal..ExtendedBigDecimal$u20$as$u20$core..cmp..PartialOrd$GT$::partial_cmp::h66cfac807d1fc958(&v14) != 1)
    {
        if (v36 != v31)
        {
            v61 = (long long)v14;
            v62 = 9223372036854775811 + v61 - 2;
            if (9223372036854775812 <= v61)
                v62 = 0;
            goto *((int *)(4321532 + vvar_129{reg 16} * 4)) + 4321532;
        }
        else
        {
            v32 = &v14;
            if ((long long)v14 >= v30)
            {
                v17 = &v32;
                v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb859519f0378a669;
                v19 = v54;
                v20 = 0;
                v21 = v29;
                v22 = 0;
                v7 = 1;
                v8 = 1;
                v9 = 1;
                v10 = 2;
                v11 = 0;
                v12 = 34359738400;
                v13 = 1;
                v1 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                v2 = 1;
                v5 = &v7;
                v6 = 1;
                v3 = &v17;
                v4 = 3;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v23, &v1);
            }
            else
            {
                v17 = &v32;
                v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb859519f0378a669;
                v19 = v54;
                v20 = 0;
                v21 = v29;
                v22 = 0;
                v7 = 1;
                v8 = 1;
                v9 = 1;
                v10 = 2;
                v11 = 0;
                v12 = 32;
                v13 = 1;
                v1 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
                v2 = 1;
                v5 = &v7;
                v6 = 1;
                v3 = &v17;
                v4 = 3;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v23, &v1);
            }
            v17 = &v23;
            v18 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v7 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v8 = 1;
            v11 = 0;
            v9 = &v17;
            v10 = 1;
            if (*((long long *)&v23))
                __rust_dealloc(*((long long *)&v24));
            if (!std::io::Write::write_fmt::ha35188feabf11f10(&v0, &v7))
            {
                v23 = v15;
                v25 = v16;
                v67 = (long long)v26;
                v68 = 9223372036854775811 + v67 - 2;
                if (9223372036854775812 <= v67)
                    v68 = 0;
                goto *((int *)(4321552 + vvar_130{reg 16} * 4)) + 4321552;
            }
        }
    }
    else
    {
        if (!_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::flush::hf4899ae455fb37b6(&v0))
        {
            v63 = (long long)v14;
            if (v63 > 9223372036854775811 && v63)
                __rust_dealloc((long long)(&v14)[8]);
            v65 = (long long)v33;
            if (v65 > 9223372036854775811 && v65)
                __rust_dealloc((long long)(&v33)[8]);
            v66 = (long long)v26;
            if (v66 > 9223372036854775811 && v66)
                __rust_dealloc((long long)(&v26)[8]);
            v70 = v0;
            v70->field_c = v70->field_c - 1;
            if (vvar_778 == 1)
            {
                v70->field_0 = 0;
                v70->field_8 = 0;
                if (CasCmpNE(v70->field_8, v70->field_8))
                    goto LABEL_0x494897;
                if ((Not (Load(addr=(vvar_491{reg 72} + 0x8<64>), size=4, endness=Iend_LE) == 0x2<32>))) { Goto None } else { Goto None }
                std::sys::sync::mutex::futex::Mutex::wake::h67137a7ecb147fca(&v70->field_8);
            }
LABEL_49489f:
            return;
        }
    }
    v69 = (long long)v14;
    if (v69 > 9223372036854775811 && v69)
        __rust_dealloc((long long)(&v14)[8]);
    v71 = (long long)v33;
    if (v71 > 9223372036854775811 && v71)
        __rust_dealloc((long long)(&v33)[8]);
    v72 = (long long)v26;
    if (v72 > 9223372036854775811 && v72)
        __rust_dealloc((long long)(&v26)[8]);
    v73 = v0;
    v73->field_c = v73->field_c - 1;
    if (vvar_782 == 1)
    {
        v73->field_0 = 0;
        v73->field_8 = 0;
        if (CasCmpNE(v73->field_8, v73->field_8))
            goto LABEL_0x4947e8;
        if ((Not (Load(addr=(vvar_549{reg 72} + 0x8<64>), size=4, endness=Iend_LE) == 0x2<32>))) { Goto None } else { Goto None }
        std::sys::sync::mutex::futex::Mutex::wake::h67137a7ecb147fca(&v73->field_8);
        goto LABEL_49489f;
    }
    goto LABEL_49489f;
}
