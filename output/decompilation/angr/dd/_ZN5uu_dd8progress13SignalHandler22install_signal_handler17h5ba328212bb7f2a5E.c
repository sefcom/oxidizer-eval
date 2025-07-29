long long uu_dd::progress::SignalHandler::install_signal_handler(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x138], Other Possible Types: char
    unsigned long long v1;  // [bp-0x130]
    int v2;  // [bp-0x128]
    int v3;  // [bp-0x118]
    int v4;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x100]
    unsigned long long v6;  // [bp-0xf8]
    unsigned long long v7;  // [bp-0xe8]
    unsigned long long v8;  // [bp-0xe0]
    int v9;  // [bp-0xd8]
    int v10;  // [bp-0xc8]
    unsigned long long v11;  // [bp-0xb8]
    int v12;  // [bp-0xb0], Other Possible Types: char
    int v13;  // [bp-0xa0]
    unsigned long v14;  // [bp-0x90]
    int v15;  // [bp-0x88], Other Possible Types: char
    int v16;  // [bp-0x78]
    void* v17;  // [bp-0x68]
    unsigned long long v18;  // [bp-0x58]
    char v19;  // [bp-0x40]
    char v20;  // [bp-0x38]

    v0.new(10);
    if (!*((long long *)&v0))
    {
        *((unsigned long long *)&a0->padding_1[7]) = v1;
        *((unsigned long long *)&a0->field_0) = 3;
        ::0x4d5700::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(a1, a2);
        return a0;
    }
    v11 = v4;
    v10 = v3;
    v9 = v2;
    v7 = *((long long *)&v0);
    v8 = v1;
    v12.clone(&v7);
    v4 = v11;
    memcpy(&v3, &v10, 16);
    v2 = v9;
    *((int128_t *)&v0) = *((int128_t *)&v7);
    v5 = a1;
    v6 = a2;
    v18 = 0x8000000000000000;
    v17 = 0;
    v19 = 0;
    v20.spawn_unchecked(&v17, &v0);
    v15.expect(&v20);
    v6 = v14;
    v4 = v13;
    v3 = v12;
    v0 = v15;
    v2 = v16;
    a0->field_40 = v14;
    *((void*)&a0->field_30) = v13;
    *((void*)&a0->field_20) = v12;
    *((void*)&a0->field_10) = v16;
    *((void*)&a0->field_0) = v15;
    return a0;
}
