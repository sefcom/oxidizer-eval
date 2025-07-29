long long uu_uniq::opt_parsed(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0x128], Other Possible Types: char
    unsigned long long v1;  // [bp-0x118]
    int v2;  // [bp-0x110]
    unsigned long long v3;  // [bp-0x108]
    unsigned long long v4;  // [bp-0x100]
    char v5;  // [bp-0xf8]
    char v6;  // [bp-0xf7]
    unsigned long long v7;  // [bp-0xf0]
    int v8;  // [bp-0xe8], Other Possible Types: char
    unsigned int v9;  // [bp-0xe0]
    int v10;  // [bp-0xd8]
    int v11;  // [bp-0xc8]
    unsigned long long v12;  // [bp-0xb8]
    unsigned long long v13;  // [bp-0xb0]
    unsigned long long v14;  // [bp-0xa8]
    unsigned long long v15;  // [bp-0xa0]
    int v16;  // [bp-0x98], Other Possible Types: char
    unsigned long long v17;  // [bp-0x88]
    int v18;  // [bp-0x78]
    unsigned long long v19;  // [bp-0x68]
    int v20;  // [bp-0x60]
    unsigned long long v21;  // [bp-0x50]
    void* v22;  // [bp-0x40]
    int v23;  // [bp-0x38]
    char v24;  // [bp-0x28]
    struct_1 *v26;  // rax
    int v27;  // xmm3

    v5.try_get_one(a3, a1, a2);
    v26 = a1.unwrap(a2, &v5);
    if (!v26)
    {
        *((uint128_t *)&a0->field_0) = 0;
        return a0;
    }
    ::0x4a7860::core::num::<impl u64>::from_str_radix(&v5, *((long long *)&v26->field_8), *((long long *)&v26[1].padding_0[7]));
    if (!v5)
    {
        *((unsigned long long *)&a0->padding_1[7]) = 1;
        a0->field_10 = v7;
        *((unsigned long long *)&a0->field_0) = 0;
        return a0;
    }
    else if (v6 == 2)
    {
        *((unsigned long long *)&a0->padding_1[7]) = 1;
        a0->field_10 = 18446744073709551615;
        *((unsigned long long *)&a0->field_0) = 0;
        return a0;
    }
    else
    {
        v0.to_vec("opt_name", 8);
        v5.to_vec(a1, a2);
        v21 = *((long long *)&v8);
        *((int128_t *)&v20) = *((int128_t *)&v5);
        v18 = v0;
        v19 = v1;
        v5.to_vec("arguniq-error-invalid-argument-f-s---wuniq-error-try-helpuniq-error-group-mutually-exclusive\nuniq-error-group-badoptionuniq-error-all-repeated-badoptionbadoption--group--all-repeated(uutils coreutils) 0.1.0uniq-aboutuniq-usageuniq-after-helpprependuniq-hel", 3);
        v17 = *((long long *)&v8);
        memcpy(&v16, &v5, 16);
        v22 = 0;
        *((int128_t *)&v23) = *((int128_t *)&v26->field_8);
        v24 = 0;
        v5.spec_to_string(&v22);
        v1 = v17;
        v0 = v16;
        *((int128_t *)&v2) = *((int128_t *)&v5);
        v4 = *((long long *)&v8);
        v27 = (int128_t)(&v20)[8];
        memcpy(&v5, &v18, 16);
        *((int128_t *)&v8) = *((int128_t *)&v19);
        v10 = v27;
        v14 = v3;
        v15 = v4;
        v12 = v1;
        v13 = (long long)v2;
        v11 = v0;
        v0.from_iter(&v5);
        uucore::mods::locale::get_message_with_args(&v5, "uniq-error-invalid-argument-f-s---wuniq-error-try-helpuniq-error-group-mutually-exclusive\nuniq-error-group-badoptionuniq-error-all-repeated-badoptionbadoption--group--all-repeated(uutils coreutils) 0.1.0uniq-aboutuniq-usageuniq-after-helpprependuniq-help-a", 27, &v0);
        v9 = 1;
        *((double *)&a0->padding_1[7]) = v5.new();
        a0->field_10 = &g_58bd78;
        *((unsigned long long *)&a0->field_0) = 1;
        return a0;
    }
}
