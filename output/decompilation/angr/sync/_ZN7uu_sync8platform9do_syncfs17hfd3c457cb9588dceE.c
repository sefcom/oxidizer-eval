long long uu_sync::platform::do_syncfs(unsigned long long a0)
{
    char v0;  // [bp-0x90]
    int v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x80]
    char v3;  // [bp-0x78]
    int v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x48]
    char v6;  // [bp-0x40]
    unsigned int v8;  // eax
    unsigned long long v9;  // rax

    v3.into_iter(a0);
    (char)v1.next(&v3);
    if (!((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63)))
    {
        do
        {
            v5 = v2;
            v4 = v1;
            v6.open(&v4);
            v8 = nix::unistd::syncfs((unsigned int)v6.unwrap(&g_56d9e0));
            if (v8 != 134)
            {
                v9 = v8.from();
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v3);
                return v9;
            }
            (char)v1.next(&v3);
        } while ((long long)v1 != 0x8000000000000000);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&v3);
    return 0;
}
