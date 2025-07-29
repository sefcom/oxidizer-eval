long long uu_sort::merge::reader(unsigned long long a0, unsigned int *a1, unsigned long long a2, unsigned long long a3, unsigned int a4)
{
    char v0;  // [bp-0x241]
    unsigned long long v1;  // [bp-0x240]
    unsigned long v2;  // [bp-0x238]
    int v3;  // [bp-0x228]
    int v4;  // [bp-0x218]
    int v5;  // [bp-0x208]
    int v6;  // [bp-0x1f8]
    int v7;  // [bp-0x1e8]
    int v8;  // [bp-0x1d8]
    unsigned long long v9;  // [bp-0x1d8]
    int v10;  // [bp-0x1d0], Other Possible Types: char
    int v11;  // [bp-0x1c8]
    int v12;  // [bp-0x1c0]
    int v13;  // [bp-0x1b8]
    int v14;  // [bp-0x1b0]
    int v15;  // [bp-0x1a8]
    int v16;  // [bp-0x1a0]
    int v17;  // [bp-0x198]
    int v18;  // [bp-0x190]
    int v19;  // [bp-0x180]
    int v20;  // [bp-0x170]
    unsigned long long v22;  // [bp-0x158]
    char v23;  // [bp-0x150]
    char v24;  // [bp-0xc0]
    unsigned int *v26;  // r14
    struct_0 *v27;  // r14
    unsigned long long v29;  // rax
    int v30;  // xmm0
    int v31;  // xmm1
    int v32;  // xmm2
    unsigned long long v33;  // rax
    unsigned long long v34;  // rdx
    unsigned long long v35;  // [bp-0x178]

    v1 = a0;
    (char)v22.next(&v1, a2);
    if ((char)(((0 ^ *((long long *)&v23)) & (0 ^ -(*((long long *)&v23)))) >> 63))
        return 0;
    v2 = a4;
    do
    {
        memcpy(&v24, &v23, 144);
        if (v22 >= a2)
            core::panicking::panic_bounds_check(v22, a2, &g_671080); /* do not return */
        v26 = v22 * 120;
        if (*((int *)(a1 + v26)) == 3)
        {
            ::0x515170::core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(&v24);
        }
        else
        {
            v27 = v26 + a1;
            uu_sort::chunks::read(&v9, v27, &v23, 0, &v0, &v27->field_20[16], v27->field_8[8].as_read(), &v0, v2, a3);
            if (v9)
            {
                return v9;
            }
            else if (!v10)
            {
                v29 = v27->field_0;
                v27->field_0 = 3;
                if (v29 == 3)
                    core::option::unwrap_failed(&g_671098); /* do not return */
                v9 = v29;
                *((int128_t *)&v20) = *((int128_t *)&v27->field_28[0]);
                *((int128_t *)&v19) = *((int128_t *)&v27->field_20[8]);
                *((int128_t *)&v18) = *((int128_t *)&v27->field_18[16]);
                v30 = *((int128_t *)&v27->field_8[0]);
                v31 = *((int128_t *)&v27->field_8[16]);
                v32 = *((int128_t *)&v27->field_10[8]);
                *((int128_t *)&v16) = *((int128_t *)&v27->field_18[0]);
                v14 = v32;
                v12 = v31;
                v10 = v30;
                *((int128_t *)&v7) = *((int128_t *)&v27->field_20[0]);
                *((int128_t *)&v6) = *((int128_t *)&v27->field_18[8]);
                *((int128_t *)&v5) = *((int128_t *)&v27->field_10[16]);
                *((int128_t *)&v4) = *((int128_t *)&v27->field_10[0]);
                *((int128_t *)&v3) = *((int128_t *)&v27->field_8[8]);
                ::0x5158e0::core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&v9);
                ::0x514fc0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v35);
                v17 = v7;
                v15 = v6;
                v13 = v5;
                v11 = v4;
                v8 = v3;
                v33 = v9.finished_reading();
                if (v33)
                    return v33;
            }
        }
        (char)v22.next(&v1, v34);
    } while (*((long long *)&v23) != 0x8000000000000000);
    return 0;
}
