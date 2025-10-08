double starship::modules::fill::module(long long a0, long long a1)
{
    char v0;  // [bp-0x100], Other Possible Types: unsigned long long
    struct_0 *v1;  // [bp-0xf8]
    unsigned long long v2;  // [bp-0xf0]
    char v3;  // [bp-0xe3]
    unsigned int v4;  // [bp-0xd4]
    char v5;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0xc8]
    unsigned long long v7;  // [bp-0xc0]
    unsigned long long v8;  // [bp-0xb8]
    char v9;  // [bp-0xb0]
    int v10;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v11;  // [bp-0x98]
    int v12;  // [bp-0x90]
    int v13;  // [bp-0x88]
    unsigned int v14;  // [bp-0x81]
    int v15;  // [bp-0x70], Other Possible Types: char
    int v16;  // [bp-0x60]
    int v17;  // [bp-0x50]
    int v18;  // [bp-0x40]
    int v19;  // [bp-0x30]
    char v20;  // [bp-0x20]
    char v21;  // [bp-0x18]
    unsigned long v23;  // xmm0lq
    struct_0 *v24;  // rax
    struct_0 *v25;  // r14
    int v26;  // xmm1
    int v27;  // xmm2

    v15.new_module(a1, "fillrust", 4);
    v5.try_load(*((long long *)&v21));
    if (v9)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<starship::module::Module>(&v15);
        return v23;
    }
    starship::config::parse_style_string(&v3, v5, v6, a1);
    v24 = 8.alloc_impl(56, 0);
    if (!v24)
        alloc::alloc::handle_alloc_error(8, 56); /* do not return */
    v25 = v24;
    v0.to_vec(v7, v8);
    v11 = v2;
    memcpy(&v10, &v0, 16);
    *((int128_t *)&v12) = *((int128_t *)&v3);
    v14 = v4;
    v25->field_0 = 1;
    v26 = *((int128_t *)&v11);
    v27 = (int128_t)v13;
    *((void*)&(&v25->field_0)[1]) = v10;
    *((void*)((char *)&v25->field_8 + 8)) = v26;
    *((void*)((char *)&v25->field_18 + 8)) = v27;
    v0 = 1;
    v1 = v25;
    v2 = 1;
    v15.set_segments(&v0);
    *((int128_t *)&a0[80]) = *((int128_t *)&v20);
    a0[64] = v19;
    a0[48] = v18;
    a0[32] = v17;
    a0[16] = v16;
    *(a0) = v15;
    return (unsigned long long)v15;
}
