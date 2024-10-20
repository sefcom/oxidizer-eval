long long uu_tr::operation::TranslateOperation::new::h4f1b9d48c7c0cf6f(struct_0 *a0, unsigned long long a1[3], unsigned long long a2[3])
{
    unsigned long v0;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x88]
    unsigned long long v2;  // [sp-0x80]
    unsigned long long v3;  // [sp-0x78]
    int v4;  // [sp-0x70]
    void* v5;  // [sp-0x60]
    unsigned long long v6;  // [sp-0x58]
    unsigned long long v7;  // [sp-0x50]
    unsigned long long v8;  // [sp-0x48]
    unsigned long long v9;  // [sp-0x40]
    char v10;  // [sp-0x38]
    char v11;  // [sp-0x37]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rcx
    unsigned long long v15;  // r8
    struct struct_1 **v16;  // fs
    unsigned long long v17[3];  // rax
    unsigned long long v18;  // r15
    unsigned long long v19;  // r12
    unsigned long long v20[3];  // rax

    v13 = a2[2];
    if (v13)
    {
        v14 = a2[1];
        v15 = a1[1];
        v0 = v15;
        v1 = v15;
        v2 = a1[0];
        v3 = a1[2] + v15;
        v6 = v14;
        v7 = v14;
        v8 = a2[0];
        v9 = v13 + v14;
        v10 = 1;
        v11 = *((char *)(v14 + v13 - 1));
        *((int128_t *)&v4) = 0;
        v5 = 0;
        _$LT$std..collections..hash..map..HashMap$LT$K$C$V$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$LP$K$C$V$RP$$GT$$GT$::from_iter::h8b3ca89f84787d4b(a0, &v0, v8);
        return a0;
    }
    if (a1[2])
    {
        *((long long *)&a0->padding_8[0]) = 9223372036854775813;
        a0->field_0 = 0;
    }
    else
    {
        if (*((long long *)&*(v16)->padding_-28[40]))
        {
            v17 = &*(v16)->padding_-28[40];
            v18 = v17[1];
            v19 = v17[2];
        }
        else
        {
            v18 = std::sys::pal::unix::rand::hashmap_random_keys::h37536acea0ea3646();
            v20 = &*(v16)->padding_-28[40];
            v20[0] = 1;
            v20[1] = v18;
            v20[2] = v19;
        }
        *((unsigned long long *)&*(v16)->padding_-28[32]) = v18 + 1;
        a0->field_10 = g_4ee4e0;
        *((uint128_t *)&a0->field_0) = g_4ee4d0;
        a0->field_20 = v18;
        a0->field_28 = v19;
    }
    if (a2[0])
        __rust_dealloc(a2[1]);
    if (!a1[0])
        return a0;
    __rust_dealloc(a1[1]);
}
