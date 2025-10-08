void starship::modules::directory::to_fish_style(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x90]
    unsigned long v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    char v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x68]
    void* v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    char v9;  // [bp-0x50]
    char *v10;  // [bp-0x40]
    unsigned short v11;  // [bp-0x20]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rdx

    v3 = a1;
    v13 = core::str::<impl str>::trim_end_matches(a2, a3, a4, a5);
    v9.into_searcher(47, v13, v14);
    v7 = 0;
    v8 = v14;
    v11 = 1;
    v0.collect(&v7);
    if (v2)
    {
        v7.into_iter(&v0);
        v10 = &v3;
        v4.collect(&v7);
        alloc::str::join_generic_copy(&v7, v5, v6, "//home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/toml-0.9.6/src/value.rs", 1);
        a0->field_10 = *((long long *)&v9);
        a0->field_0 = *((int128_t *)&v7);
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v4);
    }
    else
    {
        v7.to_vec(v13, v14);
        a0->field_10 = *((long long *)&v9);
        a0->field_0 = *((int128_t *)&v7);
        core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&toml::value::Value)>>(v0, v1);
    }
    return;
}
