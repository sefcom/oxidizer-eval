long long uu_seq::print_seq(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned int a4, unsigned long long a5, char a6, unsigned long long a7)
{
    int v0;  // [bp-0x278], Other Possible Types: char
    int v1;  // [bp-0x268], Other Possible Types: unsigned long long
    unsigned long v2;  // [bp-0x258]
    unsigned long long v3;  // [bp-0x248]
    int v4;  // [bp-0x248]
    unsigned long long v5;  // [bp-0x240]
    int v6;  // [bp-0x238], Other Possible Types: unsigned long long
    unsigned long v7;  // [bp-0x238]
    unsigned long long v8;  // [bp-0x228]
    char v9;  // [bp-0x220]
    unsigned long long v10;  // [bp-0x210]
    int v11;  // [bp-0x1f0], Other Possible Types: char
    int v12;  // [bp-0x1e0]
    unsigned long long v13;  // [bp-0x1d0]
    unsigned long long v14[3];  // [bp-0x1c8]
    unsigned long long v15;  // [bp-0x1b8]
    int v16;  // [bp-0x198], Other Possible Types: char
    int v17;  // [bp-0x188], Other Possible Types: char
    unsigned long v18;  // [bp-0x178], Other Possible Types: unsigned long long
    int v19;  // [bp-0x168]
    int v20;  // [bp-0x158]
    unsigned long v21;  // [bp-0x148]
    int v22;  // [bp-0xf8]
    int v23;  // [bp-0xe8]
    unsigned long v24;  // [bp-0xd8]
    int v25;  // [bp-0xc8]
    int v26;  // [bp-0xb8]
    unsigned long v27;  // [bp-0xa8]
    int v28;  // [bp-0xa0], Other Possible Types: char
    char v29;  // [bp-0x90]
    void* v31;  // r14
    unsigned long long v32;  // rbx
    unsigned long long v33;  // r14
    char v34;  // bpl

    v3 = std::io::stdio::stdout();
    v11.with_capacity(0x2000, v3.lock());
    v24 = a0->field_20;
    *((uint128_t *)&v23) = a0->field_10;
    *((uint128_t *)&v22) = a0->field_0;
    v21 = *((long long *)((char *)&a0->field_38 + 8));
    *((int128_t *)&v20) = *((int128_t *)((char *)&a0->field_28 + 8));
    *((int128_t *)&v19) = *((int128_t *)&(&a0->field_20)[1]);
    v27 = a0->field_60;
    *((uint128_t *)&v26) = a0->field_50;
    *((int128_t *)&v25) = *((int128_t *)&a0->field_48);
    if (a6)
    {
        v14.to_biguint(&v22);
        v16.to_biguint(&v19);
        v31 = 0;
        if (!((char)(((0 ^ *((long long *)&v16)) & (0 ^ -(*((long long *)&v16)))) >> 63)))
        {
            v6 = *((long long *)&v17);
            v4 = v16;
            v31 = uu_seq::print_seq::{{closure}}(&v3);
        }
        v28.to_biguint(&v25);
        v8 = v15;
        *((unsigned long long [3])&v6) = v14;
        v3 = v31;
        v5 = v32;
        memcpy(&v9, &v28, 16);
        v10 = *((long long *)&v29);
        if (v7 == 0x8000000000000000 || !((char)v31 & 1) || *((long long *)&v9) == 0x8000000000000000)
        {
            core::ptr::drop_in_place<(core::option::Option<num_bigint::biguint::BigUint>,core::option::Option<u64>,core::option::Option<num_bigint::biguint::BigUint>)>(&v3);
        }
        else
        {
            v1 = v8;
            memcpy(&v0, &v6, 16);
            v15 = *((long long *)&v29);
            *((void*)v14) = v28;
            v18 = v13;
            v17 = v12;
            v16 = v11;
            v33 = uu_seq::fast_print_seq(&v16, &v0, v32, &v14, a1, a2, a3, a4, a7);
            ::0x4bc1c0::core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v14);
            ::0x4bc1c0::core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v0);
            v34 = 1;
LABEL_4bdd78:
            ::0x4bc8e0::core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(&v25);
            ::0x4bc8e0::core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(&v19);
            if (v34)
                ::0x4bc8e0::core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(&v22);
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v11);
            return v33;
        }
    }
    v2 = v24;
    v1 = v23;
    v0 = v22;
    if (uu_seq::done_printing(&v0, &v19, &v25))
    {
        v33 = v11.flush();
        if (!v33)
        {
            ::0x4bc8e0::core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(&v0);
            ::0x4bc8e0::core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(&v25);
            ::0x4bc8e0::core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(&v19);
            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v11);
            return 0;
        }
    }
    else
    {
        v33 = a5.fmt(&v11, &v0);
        if (!v33)
        {
            v18 = v2;
            memcpy(&v17, &v1, 16);
            v16 = v0;
            goto (long long)(*((int *)(4300192 + 4 * ((long long)v19 < 9223372036854775813 ? (long long)v19 + 9223372036854775809 : 0))) + (char *)&g_419da0[0]);
        }
    }
    ::0x4bc8e0::core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>(&v0);
    goto LABEL_4bdd78;
}
