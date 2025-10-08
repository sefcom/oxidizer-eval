long long fd::walk::ReceiverBuffer<W>::stream(void* a0)
{
    char v0;  // [bp-0x2d8]
    int v1;  // [bp-0x2b8]
    void* v2;  // [bp-0x2a8]
    char v3;  // [bp-0x2a0]
    char v4;  // [bp-0x168]
    unsigned long long v6;  // rax

    *((char *)&a0[128]) = 1;
    v2 = (long long)a0[72];
    *((int128_t *)&v1) = (int128_t)a0[56];
    *((unsigned long long *)&a0[56]) = 0;
    *((unsigned long long *)&a0[64]) = 8;
    *((unsigned long long *)&a0[72]) = 0;
    v0.into_iter(&v1);
    v3.next(&v0);
    if (*((int *)&v3) != 4)
    {
        do
        {
            ::libc.so.0::memcpy(&v4, &v3, 312);
            v6 = a0.print(&v4);
            if ((char)v6 != 6)
            {
                core::ptr::drop_in_place<fd::dir_entry::DirEntry>(&v4);
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fd::dir_entry::DirEntry>>(&v0);
                return v6 & 4294967295;
            }
            core::ptr::drop_in_place<fd::dir_entry::DirEntry>(&v4);
            v3.next(&v0);
        } while (*((int *)&v3) != 4);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fd::dir_entry::DirEntry>>(&v0);
    return (unsigned int)a0.flush();
}
