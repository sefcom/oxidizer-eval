long long uu_sort::merge::reader(unsigned long long a0, unsigned long long *a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    unsigned long long *v0;  // [bp-0x110]
    unsigned long v1;  // [bp-0x108]
    unsigned long long v2;  // [bp-0x100]
    int v3;  // [bp-0xf8]
    char v4;  // [bp-0xf8]
    int v5;  // [bp-0xe8]
    int v6;  // [bp-0xd8]
    unsigned long long v7;  // [bp-0xd0]
    unsigned long long v9;  // [bp-0xc8]
    char v10;  // [bp-0xc0]
    unsigned long long v12;  // r13
    unsigned long long v13;  // rbx
    unsigned long long *v14;  // r15
    unsigned long long v15;  // r12
    unsigned long v16;  // r14
    unsigned long v17;  // r15
    void* v18;  // r14
    unsigned long long v19;  // rax
    unsigned long v20;  // r14
    int v21;  // xmm0
    int v22;  // xmm1
    unsigned long long v25;  // [bp-0xf0]

    v12 = a3;
    v13 = a2;
    v14 = a1;
    v15 = a0;
    (char)v9.next(a0);
    if ((char)(((0 ^ *((long long *)&v10)) & (0 ^ -(*((long long *)&v10)))) >> 63))
        return 0;
    v1 = a4;
    v0 = a1;
    while (true)
    {
        if (v9 >= v13)
            core::panicking::panic_bounds_check(v9, v13, &g_58c970); /* do not return */
        v16 = v9 * 56;
        if (*((long long *)((char *)v14 + v16)) == 3)
        {
            core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(&v10);
            v17 = v14;
        }
        else
        {
            v18 = v16 + (char *)v14;
            uu_sort::chunks::read(&v2, *((long long *)((char *)v14 + v16)), (long long)v18[8], &v10, v18 + 16, v18 + 40, v1, v12);
            if (v2)
                return v2;
            v17 = v14;
            if (!v4)
            {
                v19 = *((long long *)v18);
                *((unsigned long long *)v18) = 3;
                if (v19 == 3)
                    core::option::unwrap_failed(&g_58c988); /* do not return */
                v20 = v18 + 8;
                v2 = v19;
                v21 = *((int128_t *)v20);
                v22 = *((int128_t *)(v20 + 16));
                *((int128_t *)&v6) = *((int128_t *)(v20 + 32));
                v5 = v22;
                v3 = v21;
                core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v2);
                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v25);
                (long long)v6.finished_reading(v7);
                v17 = v0;
            }
        }
        v14 = v17;
        (char)v9.next(v15);
        if (*((long long *)&v10) == 0x8000000000000000)
            return 0;
    }
}
