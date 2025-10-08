long long uu_ls::os_str_starts_with(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned int v3;  // eax

    v0 = v2;
    v3 = core::slice::<impl [T]>::starts_with(a0, a1, a2, 1);
    core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(0x8000000000000000, a0);
    return v3;
}
