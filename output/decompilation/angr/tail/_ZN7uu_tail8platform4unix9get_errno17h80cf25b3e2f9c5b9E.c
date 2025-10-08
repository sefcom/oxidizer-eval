long long uu_tail::platform::unix::get_errno()
{
    unsigned long long v0;  // [bp-0x20]
    char v1;  // [bp-0x18]
    char v2;  // [bp-0x14]
    unsigned int *v4;  // rax

    v4 = __errno_location();
    v0 = *(v4) * 0x100000000 | 2;
    std::io::error::repr_bitpacked::decode_repr(&v1, *(v4) * 0x100000000 | 2);
    if (v1)
        core::option::unwrap_failed(&g_573968); /* do not return */
    core::ptr::drop_in_place<std::io::error::Error>(&v0);
    return *((int *)&v2);
}
