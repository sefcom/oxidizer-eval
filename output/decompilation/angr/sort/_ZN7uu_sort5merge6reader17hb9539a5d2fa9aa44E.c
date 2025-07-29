long long uu_sort::merge::reader(unsigned long long a0, unsigned int *a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    char v0;  // [bp-0x1a9]
    unsigned long long v1;  // [bp-0x1a8]
    unsigned long v2;  // [bp-0x1a0]
    unsigned long long v3;  // [bp-0x190]
    char v4;  // [bp-0x188]
    int v5;  // [bp-0x188]
    int v6;  // [bp-0x178]
    int v7;  // [bp-0x168]
    unsigned long long v8;  // [bp-0x160]
    unsigned long long v10;  // [bp-0x158]
    char v11;  // [bp-0x150]
    char v12;  // [bp-0xc0]
    unsigned int *v14;  // r12
    struct_0 *v15;  // r12
    unsigned long long v16;  // rax
    int v17;  // xmm0
    int v18;  // xmm1
    unsigned long long v19;  // rdx
    unsigned long long v20;  // [bp-0x180]

    v1 = a0;
    (char)v10.next(&v1, a2);
    if ((char)(((0 ^ *((long long *)&v11)) & (0 ^ -(*((long long *)&v11)))) >> 63))
        return 0;
    v2 = a4;
    do
    {
        memcpy(&v12, &v11, 144);
        if (v10 >= a2)
            core::panicking::panic_bounds_check(v10, a2, &g_671080); /* do not return */
        v14 = v10 * 56;
        if (*((int *)(a1 + v14)) == 3)
        {
            ::0x515170::core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(&v12);
        }
        else
        {
            v15 = v14 + a1;
            uu_sort::chunks::read(&v3, v15, &v11, 0, &v0, &v15->field_8, (char *)&v15->field_18 + 8, &v0, v2, a3);
            if (v3)
            {
                return v3;
            }
            else if (!v4)
            {
                v16 = v15->field_0;
                v15->field_0 = 3;
                if (v16 == 3)
                    core::option::unwrap_failed(&g_671098); /* do not return */
                v3 = v16;
                v17 = *((int128_t *)&(&v15->field_0)[1]);
                v18 = *((int128_t *)((char *)&v15->field_8 + 8));
                *((int128_t *)&v7) = *((int128_t *)((char *)&v15->field_18 + 8));
                v6 = v18;
                v5 = v17;
                ::0x5158e0::core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v3);
                ::0x514fc0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v20);
                (long long)v7.finished_reading(v8);
            }
        }
        (char)v10.next(&v1, v19);
    } while (*((long long *)&v11) != 0x8000000000000000);
    return 0;
}
