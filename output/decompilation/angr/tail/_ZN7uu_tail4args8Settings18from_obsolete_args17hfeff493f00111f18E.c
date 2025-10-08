long long uu_tail::args::Settings::from_obsolete_args(uint128_t a0[5], struct_0 *a1, unsigned long long a2)
{
    char v0;  // [bp-0x98], Other Possible Types: unsigned long
    unsigned long v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    char v3;  // [bp-0x80]
    int v4;  // [bp-0x78]
    int v5;  // [bp-0x68]
    char v6;  // [bp-0x58]
    char v7;  // [bp-0x4c]
    char v8;  // [bp-0x48]
    unsigned long v10;  // rax
    unsigned long long v11;  // rcx
    char v12;  // cc_dep1
    unsigned long long v13;  // rdx
    unsigned long v14;  // rax
    unsigned long v15;  // rcx
    int v16;  // xmm0
    int v17;  // xmm1

    v0.default();
    if (a1->field_a)
        v7 = a2;
    v10 = a1->field_8;
    v11 = a1->field_0;
    v12 = a1->field_9;
    if (!a1->field_9)
    {
        v13 = a1->field_0;
        if (v12)
            goto LABEL_49efa5;
LABEL_49efa4:
        v14 = v10;
    }
    else
    {
        v13 = 10;
        if (!v12)
            goto LABEL_49efa4;
LABEL_49efa5:
        v14 = v11;
    }
    v15 = v14;
    if (!v12)
        v10 = 4;
    v0 = v10;
    v1 = v15;
    v2 = v13;
    if (a2)
        v8.from(a2);
    else
        v8.default();
    v3.push(&v8);
    a0[4] = *((int128_t *)&v6);
    v16 = *((int128_t *)&v0);
    v17 = *((int128_t *)&v2);
    *((void*)&a0[3]) = v5;
    *((void*)&a0[2]) = v4;
    *((void*)&a0[1]) = v17;
    *((void*)&a0[0]) = v16;
    return a0;
}
