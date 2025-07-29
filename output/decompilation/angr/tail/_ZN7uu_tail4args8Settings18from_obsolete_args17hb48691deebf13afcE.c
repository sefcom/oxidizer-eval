long long uu_tail::args::Settings::from_obsolete_args(uint128_t a0[5], struct_0 *a1, unsigned long long a2)
{
    char v0;  // [bp-0xc8], Other Possible Types: unsigned long
    unsigned long v1;  // [bp-0xc0]
    unsigned long long v2;  // [bp-0xb8]
    int v3;  // [bp-0xa8]
    int v4;  // [bp-0x98]
    char v5;  // [bp-0x88]
    char v6;  // [bp-0x7c]
    int v7;  // [bp-0x78], Other Possible Types: char
    int v8;  // [bp-0x68]
    char v9;  // [bp-0x58]
    int v10;  // [bp-0x48]
    int v11;  // [bp-0x38]
    char v12;  // [bp-0x28]
    unsigned long v14;  // rax
    unsigned long long v15;  // rcx
    char v16;  // cc_dep1
    unsigned long long v17;  // rdx
    unsigned long v18;  // rax
    unsigned long v19;  // rcx
    int v20;  // xmm0
    int v21;  // xmm1

    v0.default();
    if (a1->field_a)
        v6 = a2;
    v14 = a1->field_8;
    v15 = a1->field_0;
    v16 = a1->field_9;
    if (!a1->field_9)
    {
        v17 = a1->field_0;
        if (!(!v16))
            goto LABEL_4efcd5;
LABEL_4efcd4:
        v18 = v14;
    }
    else
    {
        v17 = 10;
        if (!v16)
            goto LABEL_4efcd4;
LABEL_4efcd5:
        v18 = v15;
    }
    v19 = v18;
    if (!v16)
        v14 = 4;
    v0 = v14;
    v1 = v19;
    v2 = v17;
    if (a2)
        v7.from(a2);
    else
        v7.default();
    memcpy(&v12, &v9, 16);
    v11 = v8;
    v10 = v7;
    a0.push(&v10);
    a0[4] = *((int128_t *)&v5);
    v20 = *((int128_t *)&v0);
    v21 = *((int128_t *)&v2);
    *((void*)&a0[3]) = v4;
    *((void*)&a0[2]) = v3;
    *((void*)&a0[1]) = v21;
    *((void*)&a0[0]) = v20;
    return a0;
}
