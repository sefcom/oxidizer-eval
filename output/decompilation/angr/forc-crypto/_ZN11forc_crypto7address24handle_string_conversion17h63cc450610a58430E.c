void forc_crypto::address::handle_string_conversion(struct_0 *a0, unsigned long long a1[3])
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned long long
    int v1;  // [bp-0x47]
    unsigned long long v2;  // [bp-0x40]
    char v3;  // [bp-0x37]
    unsigned long long v4;  // [bp-0x20]
    unsigned long long v5;  // [bp-0x18]
    unsigned long long v8;  // rdx
    char v9;  // al
    int v10;  // xmm0

    core::str::converts::from_utf8(&(char)v0, a1[1].as_ref(a1[2]), v8);
    if (*((int *)&v0) == 1)
    {
        v0 = v2;
        v2 = v5;
        a0->field_1[0] = (char)v0.from();
        a0->field_0 = 1;
        core::ptr::drop_in_place<alloc::string::String>(a1);
        return;
    }
    v4 = v2;
    v5 = v2;
    (char)v0.from_str(v2, v2);
    if (v0 == 1)
    {
        a0->field_1[0] = forc_crypto::address::handle_string_conversion::{{closure}}(&v4);
        v9 = 1;
    }
    else
    {
        v10 = (int128_t)v1;
        *((int128_t *)((char *)&a0->field_1[1] + 1)) = *((int128_t *)&v3);
        *((void*)&(&a0->field_0)[1]) = v10;
    }
    a0->field_0 = v9;
    core::ptr::drop_in_place<alloc::string::String>(a1);
    return;
}
