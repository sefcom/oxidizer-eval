long long backdoorautomater::newservice::write_service(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    int v0;  // [bp-0xb8]
    unsigned long v1;  // [bp-0xa8]
    char v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x50]
    char v5;  // [bp-0x48]
    char v6;  // [bp-0x38]
    unsigned long v8;  // rax

    v4 = v8 & 0xffffffffffffff00 | 1;
    v5.clone(a1);
    if (!*((long long *)&a0->padding_1[7]).is_contained_in(a0->field_10))
        a0.extend_from_slice(".service[^0-9/]+Error!: ", 8);
    if (a3 - 1 > 3)
    {
        v1 = a0->field_10;
        *((int128_t *)&v0) = *((int128_t *)&a0->field_0);
        v3 = *((long long *)&v6);
        memcpy(&v2, &v5, 16);
        backdoorautomater::newservice::create_service(&v0, &v2);
        ::0x456150::core::ptr::drop_in_place<alloc::string::String>(a2);
        ::0x456150::core::ptr::drop_in_place<alloc::string::String>(a1);
        return 0;
    }
    goto (long long)(g_5660e0[1 + a3] + (char *)&g_5660e0[0]);
}
