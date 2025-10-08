fn fd::cli::Opts::strip_cwd_prefix(a0: i64, a1: u32, a2: u32) -> long long {
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax
    let v3: u64;  // rax

    v0 = v2;
    if !*((a0 + 176) as &i64) && !*((a0 + 200) as &i64) {
        v3 = core::option::Option<T>::map_or(*((a0 + 503) as &i8));
        if !v3 {
            return fd::construct_config::{{closure}}(a1, a2);
        }
        return v3 & -0x100 | 1;
    }
    return 0;
}
