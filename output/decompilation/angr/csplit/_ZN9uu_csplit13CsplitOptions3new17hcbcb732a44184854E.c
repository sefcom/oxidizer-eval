long long uu_csplit::CsplitOptions::new(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x10b]
    char v1;  // [bp-0x10a]
    char v2;  // [bp-0x109]
    char v3;  // [bp-0x108]
    int v4;  // [bp-0x108]
    int v5;  // [bp-0xf8]
    char v6;  // [bp-0xf8]
    unsigned long long v7;  // [bp-0xe8]
    int v8;  // [bp-0xd8]
    unsigned long long v9;  // [bp-0xd8]
    unsigned long long v10;  // [bp-0xc8]
    unsigned long long v11[1][3];  // [bp-0xc0]
    unsigned long long v12[1][3];  // [bp-0xc0]
    int v13;  // [bp-0xa8]
    unsigned long long v14;  // [bp-0xa8]
    unsigned long long v15;  // [bp-0x98]
    char v16;  // [bp-0x90]
    char v17;  // [bp-0x88]
    char v18;  // [bp-0x78]
    unsigned long long v19;  // [bp-0x68]
    int v20;  // [bp-0x60]
    int v21;  // [bp-0x50]
    char v22;  // [bp-0x40]
    char v24;  // al
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax

    v2 = a1.get_flag("keep-filesquietelide-empty-filesprefixsuffix-formatdigitsstream did not contain valid UTF-8trying to write to a split that was not createdsrc/uu/csplit/src/csplit.rs\n", 10);
    v1 = a1.get_flag("quietelide-empty-filesprefixsuffix-formatdigitsstream did not contain valid UTF-8trying to write to a split that was not createdsrc/uu/csplit/src/csplit.rs\n", 5);
    v0 = a1.get_flag("elide-empty-filesprefixsuffix-formatdigitsstream did not contain valid UTF-8trying to write to a split that was not createdsrc/uu/csplit/src/csplit.rs\n", 17);
    v24 = a1.get_flag("suppress-matched", 16);
    v3.try_get_one(a1, "prefixsuffix-formatdigitsstream did not contain valid UTF-8trying to write to a split that was not createdsrc/uu/csplit/src/csplit.rs\n", 6);
    v25 = "prefixsuffix-formatdigitsstream did not contain valid UTF-8trying to write to a split that was not createdsrc/uu/csplit/src/csplit.rs\n".unwrap(6, &v3);
    if (v25)
        v11.clone(v25);
    else
        v12[0] = 0x8000000000000000;
    v3.try_get_one(a1, "suffix-formatdigitsstream did not contain valid UTF-8trying to write to a split that was not createdsrc/uu/csplit/src/csplit.rs\n", 13);
    v26 = "suffix-formatdigitsstream did not contain valid UTF-8trying to write to a split that was not createdsrc/uu/csplit/src/csplit.rs\n".unwrap(13, &v3);
    if (v26)
    {
        v3.clone(v26);
        v10 = *((long long *)&v6);
        v8 = v4;
    }
    else
    {
        v9 = 0x8000000000000000;
    }
    v3.try_get_one(a1, "digitsstream did not contain valid UTF-8trying to write to a split that was not createdsrc/uu/csplit/src/csplit.rs\n", 6);
    v27 = "digitsstream did not contain valid UTF-8trying to write to a split that was not createdsrc/uu/csplit/src/csplit.rs\n".unwrap(6, &v3);
    if (v27)
    {
        v3.clone(v27);
        v15 = (long long)v5;
        v13 = v4;
    }
    else
    {
        v14 = 0x8000000000000000;
    }
    v16.new(&v11, &v8, &v13);
    v7 = v19;
    v28 = *((long long *)&v16);
    memcpy(&v3, &v17, 16);
    memcpy(&(char)v5, &v18, 16);
    if (v28 == 0x8000000000000000)
    {
        *((unsigned long long *)((char *)&a0->field_18 + 8)) = v7;
        *((void*)((char *)&a0->field_8 + 8)) = v5;
        *((void*)&(&a0->field_0)[1]) = v4;
    }
    else
    {
        a0->field_40 = *((int128_t *)&v22);
        *((void*)&a0->field_30) = v21;
        *((void*)&a0->field_28) = v20;
        *((unsigned long long *)((char *)&a0->field_18 + 8)) = v7;
        *((void*)((char *)&a0->field_8 + 8)) = v5;
        *((void*)&(&a0->field_0)[1]) = v4;
        *((char *)&a0->field_50) = v2;
        *((char *)&a0->field_50 + 1) = v1;
        *((char *)&a0->field_50 + 2) = v0;
        *((char *)&a0->field_50 + 3) = v24;
    }
    a0->field_0 = v28;
    return a0;
}
