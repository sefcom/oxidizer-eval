long long uu_ls::get_time(struct_0 *a0, unsigned int a1, void* a2)
{
    char v0;  // [bp-0x38]
    int v1;  // [bp-0x30]
    int v2;  // [bp-0x20]
    char v3;  // [bp-0x10]
    unsigned long long v5;  // rax
    unsigned int v6;  // edx
    unsigned long long v7;  // rax

    v5 = (unsigned long long)uu_ls::get_system_time(a1, a2);
    if (v6 == 0x3b9aca00)
    {
        a0->field_0 = 0;
        return v5;
    }
    v0.try_from(v5, a2);
    if (!(v0 & 1))
    {
        v7 = *((long long *)&v3);
        *((unsigned long long *)((char *)&a0->field_18 + 8)) = v7;
        *((void*)((char *)&a0->field_8 + 8)) = v2;
        *((void*)&(&a0->field_0)[1]) = v1;
        a0->field_0 = 1;
        return v7;
    }
    a0->field_0 = 0;
    return core::ptr::drop_in_place<core::result::Result<jiff::zoned::Zoned,jiff::error::Error>>(&v0);
}
