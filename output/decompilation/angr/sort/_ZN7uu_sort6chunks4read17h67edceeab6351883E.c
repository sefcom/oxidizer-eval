long long uu_sort::chunks::read(struct_2 *a0, unsigned long long a1, struct_1 *a2, unsigned long long a3, unsigned long long a4, struct_0 *a5, unsigned long long a6, unsigned long long *a7, unsigned int a8, unsigned long long a9)
{
    int v0;  // [bp-0x1b8]
    unsigned long long v1;  // [bp-0x1b0]
    unsigned long v2;  // [bp-0x1a8]
    int v3;  // [bp-0x198]
    unsigned long v4;  // [bp-0x188]
    int v5;  // [bp-0x178]
    unsigned long v6;  // [bp-0x168]
    int v7;  // [bp-0x158]
    unsigned long v8;  // [bp-0x148]
    int v9;  // [bp-0x138]
    unsigned long v10;  // [bp-0x128]
    int v11;  // [bp-0x118]
    unsigned long v12;  // [bp-0x108]
    unsigned long long v13;  // [bp-0x100]
    void* v14;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v15;  // [bp-0xf0]
    char v16;  // [bp-0xe8]
    unsigned long v17;  // [bp-0xd8]
    char v18;  // [bp-0xc8]
    unsigned long long v19;  // [bp-0xc0]
    unsigned long v20;  // [bp-0xb8]
    unsigned long v21;  // [bp-0xb8]
    int v22;  // [bp-0xb0]
    unsigned long v23;  // [bp-0xa0]
    char v24;  // [bp-0x98]
    unsigned long v25;  // [bp-0x88]
    int v26;  // [bp-0x80]
    unsigned long v27;  // [bp-0x70]
    char v28;  // [bp-0x68]
    unsigned long v29;  // [bp-0x58]
    char *v30;  // [bp-0x50]
    unsigned long v31;  // [bp-0x48]
    unsigned long long v32;  // [bp-0x40]
    unsigned long v33;  // rdx
    void* v34;  // rbp
    unsigned long long v35;  // rax
    unsigned long long v36;  // rdx

    v4 = a2->field_10;
    *((uint128_t *)&v3) = a2->field_0;
    v6 = *((long long *)((char *)&a2->field_18 + 8));
    *((int128_t *)&v5) = *((int128_t *)&(&a2->field_10)[1]);
    v8 = a2->field_30;
    *((int128_t *)&v7) = *((int128_t *)&a2->field_28);
    v10 = (&a2->field_40)[1];
    *((int128_t *)&v9) = *((int128_t *)((char *)&a2->field_30 + 8));
    v12 = a2->field_58;
    *((uint128_t *)&v11) = a2->field_48;
    v33 = *((long long *)((char *)&a2->field_60 + 8));
    v2 = v33;
    *((int128_t *)&v0) = *((int128_t *)&(&a2->field_58)[1]);
    v34 = a5->field_10;
    if (v2 < v34)
    {
        (char)v0.resize(v34 + 0x2800, 0);
        v33 = v2;
    }
    v35 = v34.index_mut(v1, v33);
    core::slice::<impl [T]>::copy_from_slice(v35, v36, a5->field_8, v34, &g_671c10);
    uu_sort::chunks::read_to_buffer(&v18, a6, *(a7), &(char)v0, a3, a4, a5->field_10, a8);
    if ((v18 & 1))
    {
        a0->field_0 = v19;
        *((unsigned long *)&a0->field_8) = v20;
        ::0x52e0e0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&(char)v0);
        ::0x52e400::core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<f64>>>(&v11);
        v9.drop_in_place<alloc::vec::Vec<uu_sort::GeneralBigDecimalParseResult>>();
        ::0x52e440::core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::numeric_str_cmp::NumInfo>>(&v7);
        ::0x52e230::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v5);
    }
    else
    {
        v13 = v19;
        a5->field_10 = 0;
        if (v2 < v19)
            core::slice::index::slice_start_index_len_fail(v19, v2, &g_671c58); /* do not return */
        a5.append_elements(v1 + v19, v2 - v19, &g_671c28);
        if (v19)
        {
            v17 = v2;
            memcpy(&v16, &v0, 16);
            v21 = v6;
            memcpy(&v18, &v5, 16);
            v22 = v3;
            v23 = v4;
            v30 = &v13;
            memcpy(&v24, &v7, 16);
            v25 = v8;
            v26 = v9;
            v27 = v10;
            v29 = v12;
            memcpy(&v28, &v11, 16);
            v31 = &vvar_8;
            v32 = a9;
            v14.try_new(&v16, &v18);
            if (!v14)
            {
                a1.send(v15, a2).unwrap();
                a0->field_8 = v20;
                a0->field_0 = 0;
                return a0;
            }
            a0->field_0 = v14;
            *((unsigned long long *)&a0->field_8) = v15;
            return a0;
        }
        a0->field_8 = v20;
        a0->field_0 = 0;
        ::0x52e0e0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&(char)v0);
        ::0x52e400::core::ptr::drop_in_place<alloc::vec::Vec<core::option::Option<f64>>>(&v11);
        v9.drop_in_place<alloc::vec::Vec<uu_sort::GeneralBigDecimalParseResult>>();
        ::0x52e440::core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::numeric_str_cmp::NumInfo>>(&v7);
        ::0x52e230::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v5);
    }
    v3.drop_in_place<alloc::vec::Vec<uu_sort::Line>>();
    return a0;
}
