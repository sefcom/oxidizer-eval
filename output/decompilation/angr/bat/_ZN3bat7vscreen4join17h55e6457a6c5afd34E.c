void bat::vscreen::join(struct_0 *a0, unsigned long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    char v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    char v4;  // [bp-0x10]

    v0 = a2;
    v1 = &g_aced18;
    v2.collect(&v0);
    alloc::str::join_generic_copy(&v0, v3, *((long long *)&v4), ";");
    a0->field_10 = a1;
    a0->field_0 = *((int128_t *)&v0);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v2);
    return;
}
