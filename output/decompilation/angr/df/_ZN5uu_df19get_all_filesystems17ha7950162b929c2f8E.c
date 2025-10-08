long long uu_df::get_all_filesystems(void* a0, struct_0 *a1)
{
    void* v0;  // [bp-0x1b8]
    unsigned long long v1;  // [bp-0x1b0]
    void* v2;  // [bp-0x1a8]
    int v3;  // [bp-0x1a0], Other Possible Types: char
    char v4;  // [bp-0x190]
    void* v5;  // [bp-0x180]
    unsigned long long v6;  // [bp-0x178]
    unsigned long long v7;  // [bp-0x170]
    unsigned long long v8;  // [bp-0x168]
    char v9;  // [bp-0x160], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x158]
    char v11;  // [bp-0x150]
    char *v12;  // [bp-0x140]
    struct_0 *v13;  // [bp-0x138]
    char v14;  // [bp-0xc8]
    void* v16;  // rbx

    v16 = a0;
    if (a1->field_52)
        sync();
    v0 = 0;
    v1 = 8;
    v2 = 0;
    uucore::features::fsext::read_fs_list(&v9);
    if ((char)(((0 ^ v9) & (0 ^ -(v9))) >> 63))
    {
        *((unsigned long long *)&a0[8]) = v10;
        *((unsigned long long *)&a0[16]) = v8;
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v5 = a0;
        v6 = v9;
        v7 = v10;
        v8 = *((long long *)&v11);
        v3.into_iter(&v6);
        v14.next(&v3);
        if (*((long long *)&v14) != 0x8000000000000000)
        {
            do
            {
                memcpy(&v9, &v14, 152);
                if (!(char)uu_df::is_included(&v9, a1) || !(char)uu_df::is_best(v1, v2, &v14))
                    core::ptr::drop_in_place<uucore::features::fsext::MountInfo>(&v14);
                else
                    v0.push(&v14);
                v14.next(&v3);
            } while (*((long long *)&v14) != 0x8000000000000000);
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uucore::features::fsext::MountInfo>>(&v3);
        v16 = v5;
        v3.clone(v1, v2);
        v9.into_iter(&v3);
        v12 = &v0;
        v13 = a1;
        v3.collect(&v9);
        *((long long *)&v5[16]) = *((long long *)&v4);
        *(v5) = v3;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::fsext::MountInfo>>(&v0);
    return v16;
}
