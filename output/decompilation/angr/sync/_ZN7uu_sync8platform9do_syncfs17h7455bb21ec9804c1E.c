void uu_sync::platform::do_syncfs(unsigned long long a0)
{
    char v0;  // [bp-0x78]
    char v1;  // [bp-0x60]
    char v2;  // [bp-0x40]
    unsigned int v4;  // eax

    v1.into_iter(a0);
    v0.next(&v1);
    if (!((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63)))
    {
        do
        {
            v2.open(&v0);
            v4 = v2.unwrap(&g_4de580);
            syscall(306);
            core::ptr::drop_in_place<std::fs::File>(v4);
            v0.next(&v1);
        } while (*((long long *)&v0) != 0x8000000000000000);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v1);
    return;
}
