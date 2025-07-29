long long uu_df::filesystem::Filesystem::from_mount(struct_0 *a0, unsigned long long a1, unsigned int a2, unsigned long long a3[6], struct_1 *a4)
{
    int v0;  // [bp-0x1b8]
    unsigned long v1;  // [bp-0x1a8]
    char v2;  // [bp-0x198]
    char v3;  // [bp-0x100]

    if ((char)uu_df::filesystem::is_over_mounted(a1, a2, a3))
    {
        a0->field_8 = 0;
        a0->field_0 = 0x8000000000000000;
        ::0x4be6b0::core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a4);
        return a0;
    }
    v2.clone(a3);
    v1 = a4->field_10;
    *((uint128_t *)&v0) = a4->field_0;
    v3.new(&v2, &v0);
    if (!((char)(((0 ^ *((long long *)&v3)) & (0 ^ -(*((long long *)&v3)))) >> 63)))
    {
        memcpy(a0, &v3, 232);
        return a0;
    }
    a0->field_8 = 2;
    a0->field_0 = 0x8000000000000000;
    return a0;
}
