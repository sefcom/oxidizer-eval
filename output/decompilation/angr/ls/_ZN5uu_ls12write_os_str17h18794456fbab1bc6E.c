void uu_ls::write_os_str(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    a0.write_all(a1, a2);
    core::ptr::drop_in_place<alloc::borrow::Cow<[u8]>>(0x8000000000000000, a1);
    return;
}
