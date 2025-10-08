long long starship::modules::utils::directory::truncate(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x78], Other Possible Types: unsigned long long
    struct_0 *v1;  // [bp-0x70]
    unsigned long v2;  // [bp-0x68]
    void* v3;  // [bp-0x60]
    unsigned long long v4;  // [bp-0x58]
    char v5;  // [bp-0x50]
    unsigned short v6;  // [bp-0x20]
    unsigned long long v8;  // rsi
    unsigned long long v9;  // rdi
    struct_0 *v10;  // rsi

    if (!a3)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v5.into_searcher(47, a1, a2);
    v3 = 0;
    v4 = a2;
    v6 = 1;
    v0.collect(&v3);
    if (!v2)
        core::panicking::panic_bounds_check(0, 0, &g_11f6458); /* do not return */
    if (v1->field_8)
    {
        v8 = v2 - a3;
        if (v2 <= a3)
            goto LABEL_bc0992;
LABEL_bc0931:
        alloc::str::join_generic_copy(&v3, &v1[v8], a3, "//home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/toml-0.9.6/src/value.rs", 1);
        *((long long *)&a0[16]) = *((long long *)&v5);
        *((int128_t *)a0) = *((int128_t *)&v3);
        v9 = v0;
        v10 = v1;
    }
    else
    {
        v0.remove();
        v8 = v2 - a3;
        if (v2 > a3)
            goto LABEL_bc0931;
LABEL_bc0992:
        *((unsigned long long *)a0) = 0x8000000000000000;
        v9 = v0;
        v10 = v1;
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&toml::value::Value)>>(v9, v10);
}
