long long uu_sort::merge::reader(unsigned long long a0, unsigned int *a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    char v0;  // [bp-0x1d9]
    unsigned long long v1;  // [bp-0x1d8]
    int v2;  // [bp-0x1c8]
    unsigned long long v3;  // [bp-0x1c8]
    int v4;  // [bp-0x1c0], Other Possible Types: char
    int v5;  // [bp-0x1b8]
    int v6;  // [bp-0x1b0]
    int v7;  // [bp-0x1a0]
    int v8;  // [bp-0x190]
    int v9;  // [bp-0x178]
    int v10;  // [bp-0x168]
    unsigned long long v12;  // [bp-0x158]
    char v13;  // [bp-0x150]
    char v14;  // [bp-0xc0]
    unsigned long long v16;  // rax
    struct_0 *v17;  // r14
    unsigned long long v19;  // rax
    int v20;  // xmm0
    int v21;  // xmm1
    unsigned long long v22;  // rdx
    unsigned long long v23;  // [bp-0x198]

    v1 = a0;
    (char)v12.next(&v1, a2);
    if ((char)(((0 ^ *((long long *)&v13)) & (0 ^ -(*((long long *)&v13)))) >> 63))
        return 0;
    do
    {
        memcpy(&v14, &v13, 144);
        if (v12 >= a2)
            core::panicking::panic_bounds_check(v12, a2, &g_671080); /* do not return */
        v16 = v12 * 9;
        if (a1[2 * v16] == 3)
        {
            ::0x515170::core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(&v14);
        }
        else
        {
            v17 = &a1[2 * v16];
            uu_sort::chunks::read(&v3, v17, &v13, 0, &v0, &v17->field_10[16], v17->field_8[8].as_read(), &v0, a4, a3);
            if (v3)
            {
                return v3;
            }
            else if (!v4)
            {
                v19 = v17->field_0;
                v17->field_0 = 3;
                if (v19 == 3)
                    core::option::unwrap_failed(&g_671098); /* do not return */
                v3 = v19;
                v20 = *((int128_t *)&v17->field_8[0]);
                v21 = *((int128_t *)&v17->field_8[16]);
                *((int128_t *)&v8) = *((int128_t *)&v17->field_18[0]);
                *((int128_t *)&v7) = *((int128_t *)&v17->field_10[8]);
                v6 = v21;
                v4 = v20;
                *((int128_t *)&v10) = *((int128_t *)&v17->field_10[0]);
                *((int128_t *)&v9) = *((int128_t *)&v17->field_8[8]);
                ::0x5158e0::core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v3);
                ::0x514fc0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v23);
                v5 = v10;
                v2 = v9;
                v3.finished_reading();
            }
        }
        (char)v12.next(&v1, v22);
    } while (*((long long *)&v13) != 0x8000000000000000);
    return 0;
}
