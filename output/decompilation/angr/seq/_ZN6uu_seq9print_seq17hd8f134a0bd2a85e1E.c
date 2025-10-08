long long uu_seq::print_seq(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned int a4, unsigned long long a5, char a6, unsigned long long a7)
{
    int v0;  // [bp-0x298], Other Possible Types: char
    unsigned long long v1;  // [bp-0x290]
    int v2;  // [bp-0x288], Other Possible Types: unsigned long long
    unsigned long v3;  // [bp-0x278]
    int v4;  // [bp-0x268]
    unsigned long long v5;  // [bp-0x260]
    int v6;  // [bp-0x258]
    unsigned long v7;  // [bp-0x248]
    void* v8;  // [bp-0x238], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x230]
    int v10;  // [bp-0x228]
    unsigned long long v11;  // [bp-0x218]
    char v12;  // [bp-0x210]
    unsigned long long v13;  // [bp-0x200]
    int v14;  // [bp-0x1e8], Other Possible Types: char
    int v15;  // [bp-0x1d8], Other Possible Types: char
    unsigned long v16;  // [bp-0x1c8], Other Possible Types: unsigned long long
    int v17;  // [bp-0x1b8], Other Possible Types: char
    int v18;  // [bp-0x1a8]
    char v19;  // [bp-0x198]
    int v20;  // [bp-0x188]
    unsigned long long v21;  // [bp-0x180]
    int v22;  // [bp-0x178]
    unsigned long v23;  // [bp-0x168]
    int v24;  // [bp-0x158]
    unsigned long long v25;  // [bp-0x150]
    unsigned long long v26;  // [bp-0x148]
    int v27;  // [bp-0x128]
    unsigned long long v28;  // [bp-0x120]
    int v29;  // [bp-0x118]
    unsigned long v30;  // [bp-0x108]
    int v31;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v32;  // [bp-0xa8]
    char v33;  // [bp-0xa0]
    void* v35;  // r14
    unsigned long long v36;  // rdx
    unsigned long long v37;  // rbx
    void* v38;  // r14
    char v39;  // bpl
    char v40;  // bl

    v8 = std::io::stdio::stdout();
    v17.with_capacity(v8.lock());
    v30 = a0->field_20;
    *((uint128_t *)&v29) = a0->field_10;
    *((uint128_t *)&v27) = a0->field_0;
    v7 = *((long long *)((char *)&a0->field_38 + 8));
    *((int128_t *)&v6) = *((int128_t *)((char *)&a0->field_28 + 8));
    *((int128_t *)&v4) = *((int128_t *)&(&a0->field_20)[1]);
    v23 = a0->field_60;
    *((uint128_t *)&v22) = a0->field_50;
    *((int128_t *)&v20) = *((int128_t *)&a0->field_48);
    if (a6)
    {
        v14.to_biguint(&(char)v27);
        v33.to_biguint(&(char)v4);
        v35 = 0;
        if (!((char)(((0 ^ *((long long *)&v33)) & (0 ^ -(*((long long *)&v33)))) >> 63)))
        {
            v35 = uu_seq::print_seq::{{closure}}(&v33);
            v37 = v36;
        }
        v31.to_biguint(&(char)v20);
        v11 = *((long long *)&v15);
        v10 = v14;
        v8 = v35;
        v9 = v37;
        memcpy(&v12, &v31, 16);
        v13 = v32;
        if ((long long)v10 == 0x8000000000000000 || !((char)v35 & 1) || *((long long *)&v12) == 0x8000000000000000)
        {
            core::ptr::drop_in_place<(core::option::Option<num_bigint::biguint::BigUint>,core::option::Option<u64>,core::option::Option<num_bigint::biguint::BigUint>)>(&v8);
        }
        else
        {
            v2 = v11;
            memcpy(&v0, &v10, 16);
            v26 = v32;
            v24 = v31;
            v16 = *((long long *)&v19);
            v15 = v18;
            v14 = v17;
            v38 = uu_seq::fast_print_seq(&v14, &v0, v37, &(char)v24, a1, a2, a3, a4, a7);
            core::ptr::drop_in_place<num_bigint::biguint::BigUint>((long long)v24, v25);
            core::ptr::drop_in_place<num_bigint::biguint::BigUint>(*((long long *)&v0), v1);
            v39 = 1;
            goto LABEL_4722d7;
        }
    }
    v3 = v30;
    v2 = v29;
    *((int128_t *)&v0) = (int128_t)v27;
    if (uu_seq::done_printing(&(char)v0, &(char)v4, &(char)v20))
    {
        v38 = v17.flush();
        if (v38)
            goto LABEL_4722c5;
        core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>((long long)v0, v1);
        core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>((long long)v20, v21);
        core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>((long long)v4, v5);
        v38 = 0;
    }
    else
    {
        v38 = a5.fmt(&v17, &(char)v0);
        if (!v38)
        {
            v16 = v3;
            memcpy(&v15, &v2, 16);
            memcpy(&v14, &v0, 16);
            goto (long long)(g_41bde0[((long long)v4 < 9223372036854775813 ? (long long)v4 + 9223372036854775809 : 0)] + (char *)&g_41bde0[0]);
        }
LABEL_4722c5:
        core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>((long long)v0, v1);
        v40 = 1;
LABEL_4722d7:
        core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>((long long)v20, v21);
        core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>((long long)v4, v5);
        if (v39)
            core::ptr::drop_in_place<uucore::features::extendedbigdecimal::ExtendedBigDecimal>((long long)v27, v28);
        if (!v40)
            return v38;
    }
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>(&v17);
    return v38;
}
