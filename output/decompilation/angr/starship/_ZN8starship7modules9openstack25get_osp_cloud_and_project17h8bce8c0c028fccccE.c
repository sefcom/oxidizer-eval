long long starship::modules::openstack::get_osp_cloud_and_project(void* a0, unsigned int a1)
{
    int v0;  // [bp-0x90], Other Possible Types: char
    unsigned long long v1;  // [bp-0x80]
    int v2;  // [bp-0x78], Other Possible Types: char
    unsigned long long v3;  // [bp-0x68]
    int v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x48]
    int v7;  // [bp-0x40], Other Possible Types: char
    unsigned long long v8;  // [bp-0x30]
    char *v10;  // rax

    v2.get_env("OS_CLOUDWorktreesafecrlfiso88596", 8);
    v0.get_env("OS_PROJECT_NAMEError in module `openstack`: \n", 15);
    v6 = v3;
    v4 = v2;
    v10 = &v7;
    memcpy(&v7, &v0, 16);
    v8 = v1;
    if ((char)(((0 ^ (long long)v4) & (0 ^ -((long long)v4))) >> 63))
    {
        if (*((long long *)&v7) == 0x8000000000000000)
        {
            *((unsigned long long *)a0) = 0x8000000000000000;
            *((unsigned long long *)&a0[24]) = 0x8000000000000000;
            return v10;
        }
        *((unsigned long long *)&a0[40]) = v8;
        a0[24] = v7;
        *((unsigned long long *)a0) = 0x8000000000000000;
        return v10;
    }
    else
    {
        if (*((long long *)&v7) == 0x8000000000000000)
        {
            v0.clone(&(char)v4);
            v3 = v1;
            memcpy(&v2, &v0, 16);
            starship::modules::openstack::get_osp_project_from_config(&v0, a1, v5, v6);
            *((unsigned long long *)&a0[16]) = v3;
            *(a0) = v2;
            *((unsigned long long *)&a0[40]) = v1;
            a0[24] = v0;
            if ((long long)v4 == 0x8000000000000000)
                return v1;
            return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(char)v4);
        }
        else
        {
            *((unsigned long long *)&a0[16]) = v6;
            *((int128_t *)a0) = (int128_t)v4;
            a0[24] = v7;
            *((unsigned long long *)&a0[40]) = v8;
            return v8;
        }
    }
}
