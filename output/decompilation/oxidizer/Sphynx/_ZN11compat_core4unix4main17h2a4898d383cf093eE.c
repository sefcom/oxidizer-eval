fn compat_core::unix::main(a0: u64, a1: u32) -> u64 {
    let v0: struct24;  // [sp-0x58]
    let v1: i64;  // [sp-0x48]
    let v2: struct24;  // [sp-0x38]

    v0 = std::ffi::os_str::OsStr::to_os_string("/bin/vim-cmd");
    if !std::path::Path::exists(v0.field_0, v1) {
        compat_kernel::core::stats::Stats::render_thread(a1);
        v2 = compat_kernel::core::platform_filters();
        v0 = v2;
        return compat_core::linux::search::default(a0, a1, "/", &v0);
    }
    return compat_core::esxi::main(a0, a1);
}
