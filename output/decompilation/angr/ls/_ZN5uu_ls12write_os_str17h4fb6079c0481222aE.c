char uu_ls::write_os_str(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]

    v1 = a1;
    v2 = a2;
    v0 = 0x8000000000000000;
    a0.write_all(a1, a2);
    return core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(&v0);
}
