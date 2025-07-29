long long uu_pr::recreate_arguments(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x198], Other Possible Types: unsigned long long
    int v1;  // [bp-0x198], Other Possible Types: unsigned int
    unsigned long v2;  // [bp-0x190], Other Possible Types: unsigned long long
    char *v3;  // [bp-0x188], Other Possible Types: unsigned long, unsigned long long
    void* v4;  // [bp-0x180], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x178], Other Possible Types: unsigned long
    char v6;  // [bp-0x170]
    char v7;  // [bp-0x160]
    char *v8;  // [bp-0x148]
    unsigned long long v9;  // [bp-0x140]
    int v10;  // [bp-0x138]
    int v11;  // [bp-0x128]
    char v12;  // [bp-0x118]
    int v13;  // [bp-0x108], Other Possible Types: char
    unsigned long long v14;  // [bp-0xf8]
    int v15;  // [bp-0xf0], Other Possible Types: char
    unsigned long long v16;  // [bp-0xe0]
    char v17;  // [bp-0xd8], Other Possible Types: unsigned long long
    char v18;  // [bp-0xd0]
    int v19;  // [bp-0xb8]
    unsigned long long v20;  // [bp-0xa8]
    char v21;  // [bp-0x98]
    char v22;  // [bp-0x78]
    char v23;  // [bp-0x58]
    char *v24;  // [bp-0x38]
    unsigned long long v26;  // rax
    unsigned long v27;  // rdx
    unsigned long v28;  // r13
    unsigned long long v29;  // rax
    int v30;  // xmm0

    v0.new("^[-+]\\d+.*src/uu/pr/src/pr.rs", 10);
    v22.unwrap(&v0, &g_755ac0);
    v0.new("^[^-]\\d*$^-n\\s*$/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 9);
    v17.unwrap(&v0, &g_755ad8);
    v0.new("^-n\\s*$/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 7);
    v21.unwrap(&v0, &g_755af0);
    v7.to_vec(a1, a2);
    v0 = a1;
    v2 = a1 + a2 * 24;
    v26 = v0.find_position(&v21);
    if (v27)
    {
        v28 = v26 + 1;
        if (v28 < a2)
        {
            v29 = v28 * 3;
            v1 = 0;
            v2 = *((long long *)(a1 + v29 * 8 + 8));
            v3 = *((long long *)(a1 + v29 * 8 + 16));
            v4 = 0;
            v5 = v3;
            v6 = 1;
            v1.set_span(v3);
            v30 = *((int128_t *)&v0);
            memcpy(&v12, &v5, 16);
            *((int128_t *)&v11) = *((int128_t *)&v3);
            v10 = v30;
            v1.search_half(v17, *((long long *)&v18), &v10);
            if (!((char)v1 & 1))
            {
                v13.remove(&v7, v28, &g_755b08);
                v10.default();
                v8 = &(char)v11;
                v9 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                *((unsigned long long **)&v1) = &g_483b90;
                v2 = 1;
                v5 = 0;
                v3 = &v8;
                v4 = 1;
                v15.map_or_else(&(unsigned long long)v1);
                core::ptr::drop_in_place<uu_pr::NumberingMode>(&v10);
                v19 = v15;
                v20 = v16;
                v7.insert(v28, &v19, &g_755b20);
                v3 = v14;
                v1 = v13;
                v7.insert(v26 + 2, &(unsigned long long)v1, &g_755b38);
            }
        }
    }
    v23.into_iter(&v7);
    v24 = &v22;
    a0.from_iter(&v23);
    core::ptr::drop_in_place<regex::regex::string::Regex>(&v21);
    core::ptr::drop_in_place<regex::regex::string::Regex>(&v17);
    core::ptr::drop_in_place<regex::regex::string::Regex>(&v22);
    return a0;
}
