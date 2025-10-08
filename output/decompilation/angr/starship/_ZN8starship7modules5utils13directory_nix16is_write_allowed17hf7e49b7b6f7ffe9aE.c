long long starship::modules::utils::directory_nix::is_write_allowed(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x110], Other Possible Types: unsigned int
    unsigned long long v1;  // [bp-0x100]
    int v2;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v3;  // [bp-0xe8]
    char v4;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0xd0]
    char v6;  // [bp-0xc8]
    unsigned int v7;  // [bp-0xa0]
    unsigned int v8;  // [bp-0x9c]
    char v9;  // [bp-0x98]
    char v11;  // r12b
    unsigned long long v12;  // rax
    char v13;  // r12b
    unsigned long long v14;  // r14
    char v15;  // al
    char v16;  // r12b

    std::fs::metadata(&v4, a1, a2);
    if (*((int *)&v4) == 2)
    {
        starship::modules::utils::directory_nix::is_write_allowed::{{closure}}(&v0, v5, a2);
        v3 = v1;
        memcpy(&v2, &v0, 16);
        *((unsigned long long *)&a0[16]) = v3;
        *(a0) = v2;
        return v1;
    }
    v11 = v7;
    v12 = nix::unistd::Uid::effective();
    if ((unsigned int)v12)
    {
        if (v8 == (unsigned int)v12)
        {
            v13 = v11 >> 7;
        }
        else
        {
            v12 = nix::unistd::Gid::effective();
            if (*((int *)&v9) != (unsigned int)v12)
            {
                starship::modules::utils::directory_nix::get_supplementary_groups(&v4);
                v14 = v5;
                v0 = *((int *)&v9);
                v15 = v0.slice_contains(v14, *((long long *)&v6));
                v12 = (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<u32>>(v4, v14);
                if (v15)
                    goto LABEL_bc0abb;
                v16 = v11 >> 1;
            }
            else
            {
LABEL_bc0abb:
                v16 = v11 >> 4;
            }
            v13 = v16 & 1;
        }
        *((char *)&a0[8]) = v13;
    }
    else
    {
        *((char *)&a0[8]) = 1;
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return v12;
}
