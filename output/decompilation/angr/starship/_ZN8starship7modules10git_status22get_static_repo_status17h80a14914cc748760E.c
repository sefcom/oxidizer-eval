long long starship::modules::git_status::get_static_repo_status(unsigned long long a0[25], unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0xc8]
    char v1;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0xa8]
    int v3;  // [bp-0xa0]
    char v4;  // [bp-0x90]
    unsigned long long v6;  // cc_dep1
    unsigned long long v8;  // 4096
    void* v9;  // rbx

    ::0xae6fd0::<parking_lot::raw_mutex::RawMutex as lock_api::mutex::RawMutex>::lock();
    if (!((char)(((0 ^ g_125ceb0) & (0 ^ -(g_125ceb0))) >> 63)) && *((long long *)&g_125ceb8).eq(g_125cec0, a0[23], a0[24]))
    {
        v6 = g_125ceb0;
        if (g_125ceb0 == 0x8000000000000000)
            goto LABEL_b9b110;
LABEL_b9b086:
        if ((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(g_125cea8) + 1, 0, (unsigned long long)(char)(v6 < 0x8000000000000000)))
            [D] Unsupported jumpkind Ijk_NoDecode at address 12169520()
        v9 = g_125cea8;
    }
    else
    {
        starship::modules::git_status::get_repo_status(&v4, a0, a1, a2);
        v8 = a1;
        v6 = 0x8000000000000000;
        if (*((int *)&v4) != 2)
        {
            starship::modules::git_status::get_static_repo_status::{{closure}}(&v1, a0, &v4);
            v0 = v3;
            v8 = v1;
            v6 = v2;
        }
        core::ptr::drop_in_place<core::option::Option<(alloc::sync::Arc<starship::modules::git_status::RepoStatus>,std::path::PathBuf)>>(&g_125cea8);
        g_125cea8 = v8;
        g_125ceb0 = v6;
        *((void*)&g_125ceb8) = v0;
        if (v6 != 0x8000000000000000)
            goto LABEL_b9b086;
LABEL_b9b110:
        v9 = 0;
    }
    core::ptr::drop_in_place<lock_api::mutex::MutexGuard<parking_lot::raw_mutex::RawMutex,core::option::Option<(alloc::sync::Arc<starship::modules::git_status::RepoStatus>,std::path::PathBuf)>>>(&_ZN8starship7modules10git_status22get_static_repo_status11REPO_STATUS17h7d01d6871e773a0aE);
    return v9;
}
