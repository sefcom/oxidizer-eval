long long uu_chroot::Options::from(void* a0, unsigned long long a1)
{
    int v0;  // [bp-0xd8], Other Possible Types: char, unsigned int
    char v1;  // [bp-0xd4]
    char v2;  // [bp-0xd0]
    int v3;  // [bp-0xc8], Other Possible Types: char, unsigned long long
    void* v4;  // [bp-0xc0]
    unsigned long v5;  // [bp-0xb8]
    void* v6;  // [bp-0xb0], Other Possible Types: unsigned long long
    void* v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0xa8]
    int v9;  // [bp-0xa8]
    unsigned long long v10;  // [bp-0xa0]
    void* v11;  // [bp-0x98]
    char v12;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x88]
    unsigned long long v14;  // [bp-0x80]
    int v15;  // [bp-0x78], Other Possible Types: char
    int v16;  // [bp-0x68], Other Possible Types: char
    unsigned long long v17;  // [bp-0x58]
    int v18;  // [bp-0x48]
    char v19;  // [bp-0x3c]
    unsigned long long v21[3];  // rax
    unsigned long long v22[3];  // rax
    char v23;  // al
    unsigned long long v24[3];  // rax
    unsigned long long v25;  // r15
    int v26;  // xmm0

    v0.try_get_one(a1, "newrootgroupsskip-chdir(uutils coreutils) 0.0.30Comma-separated list of groups to switch toColon-separated user and group to switch to.USER:GROUPUse this option to not change the working directory to / after changing the root directory to newroot, i.e., in", 7);
    v21 = "newrootgroupsskip-chdir(uutils coreutils) 0.0.30Comma-separated list of groups to switch toColon-separated user and group to switch to.USER:GROUPUse this option to not change the working directory to / after changing the root directory to newroot, i.e., in".unwrap(7, &v0);
    if (!v21)
    {
        v0 = 6;
        *((double *)&a0[8]) = v0.new();
        *((unsigned long long **)&a0[16]) = &g_4fabb0;
        *((unsigned long long *)a0) = 0x8000000000000000;
        return a0;
    }
    std::sys::pal::unix::os::split_paths::bytes_to_path(&v12, v21[1], v21[2]);
    v0.try_get_one(a1, "groupsskip-chdir(uutils coreutils) 0.0.30Comma-separated list of groups to switch toColon-separated user and group to switch to.USER:GROUPUse this option to not change the working directory to / after changing the root directory to newroot, i.e., inside th", 6);
    v22 = "groupsskip-chdir(uutils coreutils) 0.0.30Comma-separated list of groups to switch toColon-separated user and group to switch to.USER:GROUPUse this option to not change the working directory to / after changing the root directory to newroot, i.e., inside th".unwrap(6, &v0);
    if (!v22)
    {
        v8 = 0x8000000000000000;
    }
    else if (v22[2])
    {
        uu_chroot::parse_group_list(&v0, v22[1], v22[2]);
        if (v0 != 14)
        {
            memcpy(&v19, &v3, 16);
            *((int128_t *)&v18) = *((int128_t *)&v1);
            *((int128_t *)&v3) = *((int128_t *)&v19);
            memcpy(&v1, &(char)v18, 16);
            *((double *)&a0[8]) = v0.new();
            *((unsigned long long **)&a0[16]) = &g_4fabb0;
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<std::path::PathBuf>(v12, v13);
            return a0;
        }
        *((int128_t *)&v9) = *((int128_t *)&v2);
        v11 = v4;
    }
    else
    {
        v7 = 0;
        v10 = 8;
        v11 = 0;
    }
    v23 = a1.get_flag("skip-chdir(uutils coreutils) 0.0.30Comma-separated list of groups to switch toColon-separated user and group to switch to.USER:GROUPUse this option to not change the working directory to / after changing the root directory to newroot, i.e., inside the chro", 10);
    v0.try_get_one(a1, "userspec\n       ", 8);
    v24 = "userspec\n       ".unwrap(8, &v0);
    if (v24)
    {
        uu_chroot::parse_userspec(&v0, v24[1], v24[2]);
        v25 = *((long long *)&v0);
        memcpy(&v15, &v2, 16);
        memcpy(&v16, &v4, 16);
        v17 = v6;
    }
    else
    {
        v25 = 9223372036854775811;
    }
    v3 = v14;
    v26 = *((int128_t *)&v12);
    v0 = v26;
    v6 = v11;
    memcpy(&v4, &(char)v7, 16);
    *(a0) = v26;
    *((unsigned long *)&a0[32]) = v5;
    *((void* *)&a0[40]) = v6;
    *((unsigned long long *)&a0[16]) = v3;
    *((void* *)&a0[24]) = v4;
    *((unsigned long long *)&a0[48]) = v25;
    *((unsigned long long *)&a0[88]) = v17;
    a0[72] = v16;
    a0[56] = v15;
    *((char *)&a0[96]) = v23;
    return a0;
}
