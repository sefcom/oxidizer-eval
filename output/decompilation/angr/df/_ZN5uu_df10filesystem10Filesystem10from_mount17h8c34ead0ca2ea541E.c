long long uu_df::filesystem::Filesystem::from_mount(struct_0 *a0, unsigned long long a1, unsigned int a2, unsigned long long a3[6], void* a4)
{
    char v0;  // [bp-0x198]
    char v1;  // [bp-0x100]

    if ((char)uu_df::filesystem::is_over_mounted(a1, a2, a3))
    {
        a0->field_8 = 0;
        a0->field_0 = 0x8000000000000000;
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(a4);
        return a0;
    }
    v0.clone(a3);
    v1.new(&v0, a4);
    if (!((char)(((0 ^ *((long long *)&v1)) & (0 ^ -(*((long long *)&v1)))) >> 63)))
    {
        memcpy(a0, &v1, 232);
        return a0;
    }
    a0->field_8 = 2;
    a0->field_0 = 0x8000000000000000;
    return a0;
}
