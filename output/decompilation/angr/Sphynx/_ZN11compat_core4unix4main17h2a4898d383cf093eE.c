long long compat_core::unix::main::h2a4898d383cf093e(void* a0, unsigned long long a1)
{
    unsigned long long v0[3];  // [bp-0x58]
    char v1;  // [bp-0x50]
    unsigned long long v2;  // [sp-0x48]
    char v3;  // [bp-0x38]
    char v4;  // [bp-0x28]
    unsigned long long v6;  // rbx

    std::ffi::os_str::OsStr::to_os_string::he37588f6694c0e54(v0, "/bin/vim-cmdvmdkvmemvswpvmsnvmsdvmxfisoziptxtvmxnvramlog", 12);
    v6 = v0[0];
    if (*((long long *)&v1))
        __rust_dealloc(v6);
    if (!std::path::Path::exists::h396676b8852ed6a3(v6, v2))
    {
        compat_kernel::core::stats::Stats::render_thread::h0458801fd31d2801(a1);
        compat_kernel::core::platform_filters::he302441cd02098df(&v3);
        v2 = *((long long *)&v4);
        *((int128_t *)v0) = *((int128_t *)&v3);
        return compat_core::linux::search::default::hd80da9eb87aab2d8(a0, a1, "/0.1.0Tried to shrink to a larger capacity/rust/src/libcore/macros/mod.rs", 1, v0);
    }
    return compat_core::esxi::main::heca10f0d4c991be3(a0, a1);
}
