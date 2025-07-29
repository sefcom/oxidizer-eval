long long uu_df::get_all_filesystems(struct_0 *a0, struct_1 *a1)
{
    void* v0;  // [bp-0x280]
    unsigned long long v1;  // [bp-0x278]
    void* v2;  // [bp-0x270]
    struct_0 *v3;  // [bp-0x268]
    unsigned long long v4;  // [bp-0x260]
    unsigned long long v5;  // [bp-0x258]
    unsigned long long v6;  // [bp-0x250]
    char v7;  // [bp-0x248]
    char v8;  // [bp-0x228], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x220]
    char v10;  // [bp-0x218]
    char v11;  // [bp-0x190]
    char *v12;  // [bp-0x170]
    struct_1 *v13;  // [bp-0x168]
    char v14;  // [bp-0x160]
    char v15;  // [bp-0xc8]
    struct_1 *v17;  // r14
    struct_0 *v18;  // rbx
    char *v19;  // r12
    char *v20;  // rbp

    v17 = a1;
    v18 = a0;
    if (a1->field_52)
        sync();
    v0 = 0;
    v1 = 8;
    v2 = 0;
    uucore::features::fsext::read_fs_list(&v8);
    if ((char)(((0 ^ v8) & (0 ^ -(v8))) >> 63))
    {
        *((unsigned long long *)&a0->padding_1[7]) = v9;
        a0->field_10 = v6;
        *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
    }
    else
    {
        v3 = a0;
        v4 = v8;
        v5 = v9;
        v6 = *((long long *)&v10);
        v7.into_iter(&v4);
        v14.next(&v7);
        if (*((long long *)&v14) != 0x8000000000000000)
        {
            v19 = &v14;
            v20 = &v7;
            do
            {
                memcpy(&v15, v19, 152);
                if (!(char)uu_df::is_included(&v15, v17) || !(char)uu_df::is_best(8, 0, &v15))
                {
                    ::0x4b2840::core::ptr::drop_in_place<uucore::features::fsext::MountInfo>(&v15);
                }
                else
                {
                    memcpy(&v8, &v15, 152);
                    v0.push(&v8);
                    v19 = &v14;
                }
                v19.next(v20);
            } while (*((long long *)&v14) != 0x8000000000000000);
        }
        ::0x4b2fb0::core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uucore::features::fsext::MountInfo>>(&v7);
        v18 = v3;
        v8.clone(&v0);
        v11.into_iter(&v8);
        v12 = &v0;
        v13 = v17;
        v8.from_iter(&v11);
        v3->field_10 = *((long long *)&v10);
        *((int128_t *)&v3->field_0) = *((int128_t *)&v8);
    }
    ::0x4b2d60::core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::fsext::MountInfo>>(&v0);
    return v18;
}
