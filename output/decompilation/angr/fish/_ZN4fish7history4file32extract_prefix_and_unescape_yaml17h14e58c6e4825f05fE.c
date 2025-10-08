long long fish::history::file::extract_prefix_and_unescape_yaml(void* a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x98]
    char v2;  // [bp-0x88]
    int v3;  // [bp-0x80], Other Possible Types: unsigned long long (64 bits)[3]
    unsigned long long v4;  // [bp-0x70]
    int v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x58]
    char v7;  // [bp-0x50], Other Possible Types: unsigned long
    unsigned long v8;  // [bp-0x48]
    unsigned long long v9;  // [bp-0x40]
    char v10;  // [bp-0x38]
    char v11;  // [bp-0x28]
    unsigned long long v13;  // rax
    unsigned long long v14;  // 4096
    unsigned long long v16;  // rdx
    unsigned long long v17;  // r15
    unsigned long long v18;  // rax

    v1 = a1;
    v2 = 0;
    v0 = 1;
    v13 = v1.next();
    if (!v13)
        core::option::unwrap_failed(&g_14d9b90); /* do not return */
    v0 = 0;
    v2 = 1;
    v14 = a2;
    v17 = v14;
    fish::history::file::maybe_unescape_yaml_fish_2_0(&v3, v13, v16);
    v18 = fish::history::file::trim_start(v1, v17);
    fish::history::file::maybe_unescape_yaml_fish_2_0(&v10, v18, a2);
    v6 = v4;
    v5 = v3;
    v9 = *((long long *)&v11);
    memcpy(&v7, &v10, 16);
    *(a0) = v3;
    *((unsigned long *)&a0[32]) = v8;
    *((unsigned long long *)&a0[40]) = v9;
    *((unsigned long long *)&a0[16]) = v6;
    *((unsigned long *)&a0[24]) = v7;
    return v7;
}
