long long uu_du::StatPrinter::convert_size::h74a10f4593069dc8(struct_0 *a0, struct_1 *a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    void* v0;  // [sp-0x78], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x70]
    void* v2;  // [sp-0x68]
    void* v3;  // [bp-0x60], Other Possible Types: char
    char v4;  // [sp-0x5f]
    unsigned long long v5;  // [sp-0x58]
    void* v6;  // [sp-0x50]
    unsigned long long v7;  // [sp-0x40]
    unsigned long long v8;  // [sp-0x38]
    unsigned long long v9;  // [sp-0x30]
    char v10;  // [sp-0x28]
    unsigned long v11;  // [sp-0x20], Other Possible Types: unsigned long long
    unsigned long v12;  // [sp-0x18], Other Possible Types: unsigned long long
    unsigned long long v14;  // rax
    int v15;  // xmm1
    int v16;  // xmm1
    int v17;  // xmm1
    int v18;  // xmm0
    int v19;  // xmm0
    int v20;  // xmm0
    int v21;  // ymm0
    int v22;  // ymm0
    int v23;  // xmm1
    int v24;  // xmm0
    int v25;  // xmm0
    int v26;  // xmm0
    int v27;  // ymm0
    unsigned long long v28;  // rcx
    int v29;  // ymm1
    int v30;  // ymm1
    int v31;  // xmm0
    int v32;  // xmm0
    char v33;  // al
    unsigned long long v36;  // rax
    unsigned long long v42;  // rax
    int v45;  // xmm0
    int v46;  // xmm0
    int v47;  // xmm0
    int v48;  // xmm0

    v11 = a2;
    if (a1->field_49)
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v9 = 32;
        v10 = 3;
        v3 = 0;
        v6 = 0;
        v7 = &v0;
        v8 = &g_534628;
        if ((char)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b(&v11, &v3))
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
LABEL_4b0157:
        v42 = v2;
        a0->field_10 = v42;
        a0->field_0 = *((int128_t *)&v0);
        return v42;
    }
    v14 = a1->field_20;
    if (!v14)
    {
        v15 = a2;
        v16 = InterleaveLOV(0x4530000043300000, v15);
        v17 = v16 - 0x45300000000000004330000000000000;
        v18 = v17;
        v19 = (unsigned long long)(v17 >> 64) CONCAT (unsigned long long)(v18 >> 64);
        v20 = AddV(v19, v17);
        v0 = 0x706050403020100;
        if (a2 < 1000)
        {
            vvar_387{stack -88} = (unsigned long long)v22;
            vvar_388{stack -96} = v33;
            _ZN6uucore8features6format5human15format_prefixed17h6a380803a23d5823E.llvm.10980440684382195329(a0, &v3);
            return v42;
        }
        v30 = v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v16 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | 0x408f400000000000;
        v31 = DivV(v20, (uint128_t)v30);
        v22 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v31;
        if ((CmpF((unsigned long long)v22, 0x408f400000000000) & 69 & 1))
            goto LABEL_4b0301;
        v22 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(DivV(v31, (uint128_t)v30));
        v36 = 1;
        if (!(CmpF((unsigned long long)v22, 0x408f400000000000) & 1) && !(CmpF((unsigned long long)v22, 0x408f400000000000) & 1) && !(CmpF((unsigned long long)v22, 0x408f400000000000) & 1) && !(CmpF((unsigned long long)v22, 0x408f400000000000) & 1) && !(CmpF((unsigned long long)v22, 0x408f400000000000) & 1) && (v47 = DivV(v45, (uint128_t)v30), v22 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v47, v36 = 6, !((char)(CmpF((unsigned long long)v22, 0x408f400000000000)) & 1)))
        {
            v22 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(DivV(v47, 0x408f400000000000));
            goto LABEL_4b0443;
        }
    }
    else
    {
        if ((unsigned int)v14 != 1)
        {
            v28 = a1->field_28;
            if (!v28)
                core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e(); /* do not return */
            *((int *)&v12) = (!(a2 + v28 - 1 | v28) >> 32 ? (0 CONCAT (unsigned int)(a2 + v28 - 1)) /m (unsigned int)v28 & 4294967295 : (0 CONCAT a2 + v28 - 1) /m v28);
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v9 = 32;
            v10 = 3;
            v3 = 0;
            v6 = 0;
            v7 = &v0;
            v8 = &g_534628;
            if ((char)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b(&v12, &v3))
                core::result::unwrap_failed::h39784290e544308e(); /* do not return */
            goto LABEL_4b0157;
        }
        v23 = InterleaveLOV(0x4530000043300000, a2) - 0x45300000000000004330000000000000;
        v24 = v23;
        v25 = (unsigned long long)(v23 >> 64) CONCAT (unsigned long long)(v24 >> 64);
        v26 = AddV(v25, v23);
        v0 = 1084818905618843912;
        if (a2 < 0x400)
        {
            vvar_376{stack -88} = (unsigned long long)v22;
            vvar_377{stack -96} = v33;
            _ZN6uucore8features6format5human15format_prefixed17h6a380803a23d5823E.llvm.10980440684382195329(a0, &v3);
            return v42;
        }
        v32 = MulV(v26, 0x3f50000000000000);
        v22 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v32;
        if ((CmpF((unsigned long long)v22, 0x4090000000000000) & 1))
        {
LABEL_4b0301:
            v36 = 0;
        }
        else
        {
            v22 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV(v32, 0x3f50000000000000));
            v36 = 1;
            if (!(CmpF((unsigned long long)v22, 0x4090000000000000) & 1) && !(CmpF((unsigned long long)v22, 0x4090000000000000) & 1) && !(CmpF((unsigned long long)v22, 0x4090000000000000) & 1) && !(CmpF((unsigned long long)v22, 0x4090000000000000) & 1) && !(CmpF((unsigned long long)v22, 0x4090000000000000) & 1) && (v48 = MulV(v46, 0x3f50000000000000), v22 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48, v36 = 6, !((char)(CmpF((unsigned long long)v22, 0x4090000000000000)) & 1)))
            {
                v22 = v22 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV(v48, 0x3f50000000000000));
LABEL_4b0443:
                v36 = 7;
            }
        }
    }
    v4 = *((char *)&v0 + v36);
    v33 = v4 | -0x100 | 1;
    v5 = (unsigned long long)v22;
    v3 = v33;
    v42 = _ZN6uucore8features6format5human15format_prefixed17h6a380803a23d5823E.llvm.10980440684382195329(a0, &v3);
    return v42;
}
