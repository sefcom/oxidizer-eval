void forc_publish::md_pre_process::MarkdownDepGraph::build(void* a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0xa8]
    int v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    int v4;  // [bp-0x78], Other Possible Types: char
    int v5;  // [bp-0x68]
    char v6;  // [bp-0x58]
    int v7;  // [bp-0x48]
    int v8;  // [bp-0x38]
    char v9;  // [bp-0x28]
    unsigned long long v11;  // rax
    unsigned long long v12;  // rdx

    v11 = std::thread::local::LocalKey<T>::with();
    *((uint128_t *)&v0) = g_1253140;
    *((uint128_t *)&v1) = g_1253150;
    v2 = v11;
    v3 = v12;
    v4.default();
    memcpy(&v9, &v6, 16);
    v8 = v5;
    v7 = v4;
    v4.build_recursive(a1, a2, &v0, &v7);
    if ((int)v4 != 6)
    {
        a0[24] = v5;
        a0[8] = v4;
        *((unsigned long long *)a0) = 0;
        core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&v7);
        core::ptr::drop_in_place<std::collections::hash::map::HashMap<std::path::PathBuf,std::collections::hash::set::HashSet<std::path::PathBuf>>>(&v0);
        return;
    }
    *((int128_t *)&a0[32]) = *((int128_t *)&v2);
    a0[16] = v1;
    *(a0) = v0;
    core::ptr::drop_in_place<std::collections::hash::set::HashSet<std::path::PathBuf>>(&v7);
    return;
}
