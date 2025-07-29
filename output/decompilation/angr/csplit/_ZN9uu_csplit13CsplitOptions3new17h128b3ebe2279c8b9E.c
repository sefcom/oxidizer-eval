long long uu_csplit::CsplitOptions::new(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x143]
    char v1;  // [bp-0x142]
    char v2;  // [bp-0x141]
    char v3;  // [bp-0x140]
    int v4;  // [bp-0x140]
    char v5;  // [bp-0x130]
    int v6;  // [bp-0x118], Other Possible Types: char
    int v7;  // [bp-0x108], Other Possible Types: char
    unsigned long long v8;  // [bp-0xf8]
    int v9;  // [bp-0xe8]
    unsigned long long v10;  // [bp-0xe8]
    unsigned long long v11;  // [bp-0xd8]
    int v12;  // [bp-0xc8]
    unsigned long long v13;  // [bp-0xc8]
    unsigned long long v14;  // [bp-0xb8]
    unsigned long long v16;  // [bp-0xa8]
    char v17;  // [bp-0x90]
    char v18;  // [bp-0x88]
    char v19;  // [bp-0x78]
    unsigned long long v20;  // [bp-0x68]
    int v21;  // [bp-0x60]
    int v22;  // [bp-0x50]
    char v23;  // [bp-0x40]
    char v25;  // al
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    unsigned long long v29;  // rax

    v2 = a1.get_flag("keep-filesquietelide-empty-filesprefixsuffix-formatdigitscsplit-stream-not-utf8csplit-write-split-not-createdsrc/uu/csplit/src/csplit.rs\n", 10);
    v1 = a1.get_flag("quietelide-empty-filesprefixsuffix-formatdigitscsplit-stream-not-utf8csplit-write-split-not-createdsrc/uu/csplit/src/csplit.rs\n", 5);
    v0 = a1.get_flag("elide-empty-filesprefixsuffix-formatdigitscsplit-stream-not-utf8csplit-write-split-not-createdsrc/uu/csplit/src/csplit.rs\n", 17);
    v25 = a1.get_flag("suppress-matched", 16);
    v3.try_get_one(a1, "prefixsuffix-formatdigitscsplit-stream-not-utf8csplit-write-split-not-createdsrc/uu/csplit/src/csplit.rs\n", 6);
    v26 = "prefixsuffix-formatdigitscsplit-stream-not-utf8csplit-write-split-not-createdsrc/uu/csplit/src/csplit.rs\n".unwrap(6, &v3);
    if (v26)
        (char)v16.clone(v26);
    else
        v16 = 0x8000000000000000;
    v3.try_get_one(a1, "suffix-formatdigitscsplit-stream-not-utf8csplit-write-split-not-createdsrc/uu/csplit/src/csplit.rs\n", 13);
    v27 = "suffix-formatdigitscsplit-stream-not-utf8csplit-write-split-not-createdsrc/uu/csplit/src/csplit.rs\n".unwrap(13, &v3);
    if (v27)
    {
        v3.clone(v27);
        v11 = *((long long *)&v5);
        v9 = v4;
    }
    else
    {
        v10 = 0x8000000000000000;
    }
    v3.try_get_one(a1, "digitscsplit-stream-not-utf8csplit-write-split-not-createdsrc/uu/csplit/src/csplit.rs\n", 6);
    v28 = "digitscsplit-stream-not-utf8csplit-write-split-not-createdsrc/uu/csplit/src/csplit.rs\n".unwrap(6, &v3);
    if (v28)
    {
        v3.clone(v28);
        v14 = *((long long *)&v5);
        v12 = v4;
    }
    else
    {
        v13 = 0x8000000000000000;
    }
    v17.new(&(char)v16, &v9, &v12);
    v8 = v20;
    v29 = *((long long *)&v17);
    memcpy(&v6, &v18, 16);
    memcpy(&v7, &v19, 16);
    if (v29 == 0x8000000000000000)
    {
        *((unsigned long long *)((char *)&a0->field_18 + 8)) = v8;
        *((void*)((char *)&a0->field_8 + 8)) = v7;
        *((void*)&(&a0->field_0)[1]) = v6;
    }
    else
    {
        a0->field_40 = *((int128_t *)&v23);
        *((void*)&a0->field_30) = v22;
        *((void*)&a0->field_28) = v21;
        *((unsigned long long *)((char *)&a0->field_18 + 8)) = v8;
        *((void*)((char *)&a0->field_8 + 8)) = v7;
        *((void*)&(&a0->field_0)[1]) = v6;
        *((char *)&a0->field_50) = v2;
        *((char *)&a0->field_50 + 1) = v1;
        *((char *)&a0->field_50 + 2) = v0;
        *((char *)&a0->field_50 + 3) = v25;
    }
    a0->field_0 = v29;
    return a0;
}
