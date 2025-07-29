long long uu_tail::platform::unix::get_errno()
{
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x24]
    unsigned long long v3;  // rbx

    v3 = (unsigned int)std::sys::pal::unix::os::errno() * 0x100000000 | 2;
    ::0x5025e0::std::io::error::repr_bitpacked::decode_repr(&v0, v3);
    if (v0)
        core::option::unwrap_failed(&g_6372f0); /* do not return */
    ::0x503720::core::ptr::drop_in_place<std::io::error::Error>(v3);
    return *((int *)&v1);
}
