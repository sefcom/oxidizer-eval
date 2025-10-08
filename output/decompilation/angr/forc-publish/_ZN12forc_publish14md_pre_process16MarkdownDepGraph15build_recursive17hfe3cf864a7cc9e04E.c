long long forc_publish::md_pre_process::MarkdownDepGraph::build_recursive(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    int v0;  // [bp-0xf8], Other Possible Types: char
    char v1;  // [bp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xd0]
    unsigned long long v3;  // [bp-0xc8]
    char v4;  // [bp-0xc0], Other Possible Types: unsigned long long
    char v5;  // [bp-0xb8]
    unsigned long long v6;  // [bp-0xb0]
    char v7;  // [bp-0xa8]
    int v8;  // [bp-0x98]
    int v9;  // [bp-0x88]
    unsigned long long v10;  // [bp-0x78]
    int v11;  // [bp-0x70]
    unsigned long long v12;  // [bp-0x68]
    int v13;  // [bp-0x60]
    int v14;  // [bp-0x50]
    int v15;  // [bp-0x40]
    int v17;  // xmm1
    unsigned long long v18;  // r15
    unsigned long long v19[3];  // rax

    v4.parse(a1, a2);
    memcpy(&v0, &v5, 16);
    memcpy(&v1, &v7, 16);
    if ((char)(((0 ^ v4) & (0 ^ -(v4))) >> 63))
    {
        *((int128_t *)&a0[16]) = *((int128_t *)&v1);
        *(a0) = v0;
        return -(v4);
    }
    v15 = v9;
    v14 = v8;
    v17 = *((int128_t *)&v1);
    v11 = v0;
    v13 = v17;
    v10 = v4;
    v18 = (long long)v11;
    v4.clone(v18, v12);
    v1 = v6;
    memcpy(&v0, &v4, 16);
    if ((char)a4.insert(&v0))
    {
        *((unsigned long long *)a0) = 6;
        core::ptr::drop_in_place<std::path::PathBuf>(v10, v18);
        return (unsigned long long)core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&v13);
    }
    v3 = v12;
    v2 = v18;
    v4.iter(&v13);
    if (v4.next())
    {
        do
        {
            v0.build_recursive(v19[1], v19[2], a3, a4);
            if ((int)v0 != 6)
            {
                *((int128_t *)&a0[16]) = *((int128_t *)&v1);
                *(a0) = v0;
                return (unsigned long long)core::ptr::drop_in_place<(std::path::PathBuf,std::collections::hash::set::HashSet<std::path::PathBuf>)>(&v10);
            }
            v19 = v4.next();
        } while (v19);
    }
    v4.clone(v2, v3);
    v1 = v6;
    memcpy(&v0, &v4, 16);
    v4.insert(a3, &v0, &v13);
    core::ptr::drop_in_place<core::option::Option<std::collections::hash::set::HashSet<std::path::PathBuf>>>(&v4);
    *((unsigned long long *)a0) = 6;
    return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(v10, v2);
}
