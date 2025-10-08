long long uu_sort::chunks::read(void* a0, unsigned long long a1, unsigned long long a2, struct_0 *a3, unsigned long long a4, unsigned long long a5, struct_1 *a6, unsigned long long a7, unsigned long long a8, unsigned int a9, unsigned long long a10)
{
    unsigned long v0;  // [bp-0x198]
    unsigned long v1;  // [bp-0x190]
    int v2;  // [bp-0x188]
    unsigned long long v3;  // [bp-0x180]
    unsigned long v4;  // [bp-0x178]
    int v5;  // [bp-0x168]
    unsigned long v6;  // [bp-0x158]
    int v7;  // [bp-0x148]
    unsigned long v8;  // [bp-0x138]
    int v9;  // [bp-0x128]
    unsigned long v10;  // [bp-0x118]
    unsigned long v11;  // [bp-0xf8]
    unsigned long long v12;  // [bp-0xf0]
    char v13;  // [bp-0xe8], Other Possible Types: unsigned long
    unsigned long long v14;  // [bp-0xe0]
    int v15;  // [bp-0xd8], Other Possible Types: char
    char v16;  // [bp-0xd0], Other Possible Types: unsigned long long
    char v17;  // [bp-0xc8], Other Possible Types: unsigned long
    int v18;  // [bp-0xc0]
    unsigned long v19;  // [bp-0xb0]
    int v20;  // [bp-0xa8]
    unsigned long v21;  // [bp-0x98]
    char v22;  // [bp-0x90]
    unsigned long v23;  // [bp-0x80]
    unsigned long v24;  // [bp-0x78]
    unsigned long v25;  // [bp-0x70]
    unsigned long v26;  // [bp-0x68]
    char *v27;  // [bp-0x60]
    unsigned long v28;  // [bp-0x58]
    unsigned long long v29;  // [bp-0x50]
    char v30;  // [bp-0x48]
    unsigned long v31;  // [bp-0x38]
    unsigned long v32;  // rdx
    void* v33;  // r13
    unsigned long long v34;  // rax
    unsigned long long v35;  // rdx
    char v36;  // bpl
    unsigned long long v37;  // rax

    v6 = *((long long *)((char *)&a3->field_18 + 8));
    *((int128_t *)&v5) = *((int128_t *)&(&a3->field_10)[1]);
    v8 = a3->field_30;
    *((int128_t *)&v7) = *((int128_t *)&a3->field_28);
    v10 = (&a3->field_40)[1];
    *((int128_t *)&v9) = *((int128_t *)((char *)&a3->field_30 + 8));
    v0 = a3->field_48;
    v1 = *((long long *)((char *)&a3->field_48 + 8));
    v11 = a3->field_58;
    v32 = a3->field_70;
    v4 = v32;
    *((int128_t *)&v2) = *((int128_t *)&a3->field_60);
    v33 = a6->field_10;
    if (v4 < v33)
    {
        (char)v2.resize(v33 + 0x2800);
        v32 = v4;
    }
    v34 = v33.index_mut(v3, v32);
    core::slice::<impl [T]>::copy_from_slice(v34, v35, a6->field_8, v33);
    uu_sort::chunks::read_to_buffer(&(char)v15, a7, a8, &(char)v2, a4, a5, a6->field_10, a9);
    if (*((int *)&v15) == 1)
    {
        *((int128_t *)a0) = *((int128_t *)&v16);
    }
    else
    {
        v36 = v17;
        v12 = v16;
        a6->field_10 = 0;
        if (v16 > v4)
            core::slice::index::slice_start_index_len_fail(v16, v4, &g_58c510); /* do not return */
        a6.spec_extend(v3 + v16, v4 + v3);
        if (v16)
        {
            v31 = v4;
            memcpy(&v30, &(char)v2, 16);
            v17 = v6;
            v15 = v5;
            *((uint128_t *)&v18) = a3->field_0;
            v19 = a3->field_10;
            v27 = &v12;
            v20 = v7;
            v21 = v8;
            memcpy(&v22, &v9, 16);
            v23 = v10;
            v24 = v0;
            v25 = v1;
            v26 = v11;
            v28 = &vvar_9;
            v29 = a10;
            v13.try_new(&v30, &(char)v15);
            if (!v13)
            {
                v37 = (unsigned long long)a1.send(a2, v14).unwrap();
                *((char *)&a0[8]) = v36;
                *((unsigned long long *)a0) = 0;
                return v37;
            }
            *((unsigned long *)a0) = v13;
            *((unsigned long long *)&a0[8]) = v14;
            return v13;
        }
        *((char *)&a0[8]) = v36;
        *((unsigned long long *)a0) = 0;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&(char)v2);
    core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpmc::array::Slot<uu_sort::chunks::Chunk>>>(v0, v1);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v9);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v7);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v5);
    return (unsigned long long)a3.drop_in_place<alloc::vec::Vec<uu_sort::Line>>();
}
