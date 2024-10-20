long long uu_df::filesystem::Filesystem::from_path::h4d761c9c47c5bfa8(unsigned long long *a0, unsigned long long a1, unsigned long a2, struct struct_4 **a3, unsigned long a4, unsigned long a5)
{
    void* v0;  // [sp-0x1b0], Other Possible Types: struct_0 *, unsigned long long, unsigned long
    struct_0 *v1;  // [sp-0x1a8], Other Possible Types: unsigned long long
    void* v2;  // [sp-0x1a0]
    int v3;  // [bp-0x190], Other Possible Types: unsigned long, unsigned long long
    struct_0 *v4;  // [sp-0x188]
    void* v5;  // [sp-0x178], Other Possible Types: struct_0 *, unsigned long long
    struct_3 *v6;  // [sp-0x170], Other Possible Types: struct_0 *, unsigned long long
    int v7;  // [bp-0x168], Other Possible Types: void*, struct_0 *, unsigned long
    unsigned long long v8;  // [sp-0x158]
    unsigned long long v9;  // [sp-0x150]
    unsigned long long v10;  // [sp-0x148]
    char v11;  // [sp-0x140]
    unsigned long v12;  // [sp-0x130], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x128]
    char v14;  // [bp-0x120]
    struct_0 *v15;  // [sp-0x118]
    unsigned long long v16;  // [sp-0x108]
    char v17;  // [bp-0xf8]
    char v18;  // [bp-0xe8]
    char v19;  // [bp-0xe0]
    char v20;  // [bp-0xd0]
    struct_0 *v21;  // [sp-0xc8]
    unsigned long long v22;  // [sp-0xb8]
    struct_0 *v23;  // [sp-0xb0]
    unsigned long long v24;  // [sp-0xa0]
    struct_0 *v25;  // [sp-0x98]
    unsigned long long v26;  // [sp-0x88]
    struct_0 *v27;  // [sp-0x80]
    unsigned long long v28;  // [sp-0x70]
    struct_0 *v29;  // [sp-0x68]
    unsigned long long v30;  // [sp-0x58]
    struct_0 *v31;  // [sp-0x50]
    unsigned long long v32;  // [sp-0x40]
    unsigned short v33;  // [sp-0x38]
    struct_4 *v35;  // rbx
    struct_3 *v36;  // rax
    unsigned long long v37;  // rcx
    unsigned long long v38;  // rbx
    unsigned long long v39;  // rcx
    unsigned long long v40;  // r8
    unsigned long long v41;  // r9
    unsigned long long v42;  // r15
    struct_2 *v43;  // r12
    struct struct_1 **v44;  // rax
    struct_0 *v45;  // r14
    struct_0 *v46;  // r14
    struct_0 *v47;  // r14
    unsigned long long v49;  // rbx
    struct_0 *v51;  // rdx

    v35 = *(a3);
    *((int128_t *)&v3) = *((int128_t *)&v35->field_8);
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v10 = 32;
    v11 = 3;
    v5 = 0;
    v7 = 0;
    v8 = &v0;
    v9 = &g_4fd3b0;
    if ((char)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h5a3c32fa16876e76(&v3, &v5))
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    *((int128_t *)&v15) = *((int128_t *)&v0);
    v16 = v2;
    std::fs::canonicalize::h31bd7b60ceaa03fd(&v5, v35->field_8, v35[1].padding_0);
    if (v3 == 0x8000000000000000)
    {
        v36 = v6;
        v37 = (unsigned int)v36 & 3;
        if (v37 - 2 >= 2 && v37)
        {
            v42 = *((long long *)((char *)&v36->field_-1 + 1));
            v43 = *((long long *)((char *)&v36->field_-1 + 7));
            if (v43->field_0)
                v44(v42);
            if (v43->field_8)
                __rust_dealloc(v42);
            __rust_dealloc((char *)&v36->field_-1 + 1);
        }
    }
    else
    {
        *((int128_t *)&v4) = *((int128_t *)&v6);
        v3 = v5;
        v38 = a2 * 152;
        v12 = a1;
        v13 = a1 + v38;
        v5 = &v14;
        v6 = &v3;
        v7 = &v14;
        _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h176c07a83c579842(&v0, &v12, &v5, v39, v40, v41);
        if (v6 != 0x8000000000000000)
        {
            v45 = v0;
            *((int128_t *)&v7) = *((int128_t *)&v2);
            v5 = v45;
            v6 = v1;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcaaebd323a50bd24();
            _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7c4b6f71b5d08c11(&v6);
            if (!(!v5))
                goto LABEL_444220;
        }
        v1 = v13;
        v2 = &v3;
        v47 = 0;
        if (a2)
        {
            do
            {
                if ((char)std::path::Path::starts_with::h70e3f2637540bc99(v4, (&v4)[1], a1 + 96))
                {
                    v0 = a1 + 152;
                    if (!v51)
                    {
                        v46 = 0;
                        break;
                    }
                    else
                    {
                        v7 = v2;
                        *((int128_t *)&v5) = *((int128_t *)&v0);
                        _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h560207297e30af30(&v5, core::ops::function::impls::_$LT$impl$u20$core..ops..function..FnOnce$LT$A$GT$$u20$for$u20$$RF$mut$u20$F$GT$::call_once::hf26bf88dd384bdaf(&v2, a1));
                        break;
                    }
                }
            } while ((a1 += 152, v49 = v38 - 152, v38 != 152));
        }
LABEL_444220:
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcaaebd323a50bd24();
        _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7c4b6f71b5d08c11(&v3);
        if (v46)
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v17, v46);
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v19, &v46->padding_0[24]);
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v12, &v46->padding_0[48]);
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v3, &v46->padding_0[72]);
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v0, &v46->padding_0[96]);
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&v5, &v46->padding_0[120]);
            *((int128_t *)&v21) = *((int128_t *)&v17);
            v22 = *((long long *)&v18);
            *((int128_t *)&v23) = *((int128_t *)&v19);
            v24 = *((long long *)&v20);
            *((int128_t *)&v25) = *((int128_t *)&v12);
            v26 = *((long long *)&v14);
            *((int128_t *)&v27) = *((int128_t *)&v3);
            v28 = (&v4)[1];
            v30 = v2;
            *((int128_t *)&v29) = *((int128_t *)&v0);
            v32 = (long long)v7;
            *((int128_t *)&v31) = *((int128_t *)&v5);
            v33 = v46->field_90;
            v7 = v16;
            v5 = v15;
            uu_df::filesystem::Filesystem::new::hb5e6bb5e880a48db(a0, &v21, &v5);
            return a0;
        }
    }
    *(a0) = 0x8000000000000000;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hcaaebd323a50bd24();
    _$LT$alloc..raw_vec..RawVec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h7c4b6f71b5d08c11(&v15);
    return a0;
}
