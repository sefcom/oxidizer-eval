long long uu_ls::os_str_starts_with(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned int v4;  // eax

    v1 = a0;
    v2 = a1;
    v0 = 0x8000000000000000;
    v4 = core::slice::<impl [T]>::starts_with(a0, a1, a2, a3);
    core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(&v0);
    return v4;
}
