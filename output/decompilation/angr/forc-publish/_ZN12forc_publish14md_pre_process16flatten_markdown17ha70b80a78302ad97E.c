long long forc_publish::md_pre_process::flatten_markdown(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xe8], Other Possible Types: unsigned long long
    char v1;  // [bp-0xe0]
    unsigned long long v2;  // [bp-0xd8]
    char v3;  // [bp-0xd0]
    unsigned long long v4;  // [bp-0xc0]
    int v5;  // [bp-0xb8], Other Possible Types: char, unsigned long long
    char v6;  // [bp-0xb0]
    char v7;  // [bp-0xa8], Other Possible Types: unsigned long long
    int v8;  // [bp-0xa0]
    unsigned long long v9;  // [bp-0x90]
    char v10;  // [bp-0x88]
    unsigned long long v11;  // [bp-0x80]
    unsigned long long v12;  // [bp-0x78]
    int v13;  // [bp-0x68], Other Possible Types: char
    int v14;  // [bp-0x58], Other Possible Types: char
    unsigned long long v15;  // [bp-0x48]
    int v16;  // [bp-0x40]
    char v17;  // [bp-0x30]
    unsigned long long v18;  // [bp-0x20]
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax

    v0.build(a1, a2);
    memcpy(&v5, &v1, 16);
    memcpy(&v7, &v3, 16);
    if (!v0)
    {
        *((int128_t *)&a0[16]) = *((int128_t *)&v7);
        *(a0) = v5;
        return v0;
    }
    v16 = v5;
    memcpy(&v17, &v7, 16);
    v15 = v0;
    v18 = v4;
    v0.topological_sort(&v15);
    memcpy(&v5, &v1, 16);
    v7 = *((long long *)&v3);
    if (v0 == 6)
    {
        v12 = v7;
        memcpy(&v10, &v5, 16);
        v0.flatten_files(v11, v7);
        memcpy(&v13, &v1, 16);
        memcpy(&v14, &v3, 16);
        if (v0)
        {
            memcpy(&v6, &v13, 16);
            v8 = v14;
            v5 = v0;
            v9 = v4;
            v20 = v5.get_file(a1, a2);
            if (v20)
            {
                v0.to_vec(v20, a2);
                *((int128_t *)&a0[16]) = *((int128_t *)&v1);
                *((unsigned long long *)&a0[8]) = v0;
                v21 = 6;
            }
            else
            {
                v0.to_vec("Could not flatten entry fileFailed to flatten README.md includes: ", 28);
                *((unsigned long long *)&a0[24]) = v2;
                *((int128_t *)&a0[8]) = *((int128_t *)&v0);
                v21 = 5;
            }
            *((unsigned long long *)a0) = v21;
            core::ptr::drop_in_place<forc_publish::md_pre_process::MarkdownFlattener>(&v5);
        }
        else
        {
            a0[16] = v14;
            *(a0) = v13;
        }
        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&v10);
    }
    else
    {
        *((unsigned long long *)&a0[24]) = v7;
        a0[8] = v5;
        *((unsigned long long *)a0) = v0;
    }
    return (unsigned long long)core::ptr::drop_in_place<forc_publish::md_pre_process::MarkdownDepGraph>(&v15);
}
