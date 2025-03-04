fn uu_env::EnvAppData::make_error_no_such_file_or_dir(a0: u8, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0x50]
    let v1: u64;  // [sp-0x48]
    let v2: u64;  // [sp-0x40]
    let v3: u8;  // [sp-0x38]
    let v5: u64;  // rdx

    v1 = v5;
    v0 = 1;
    v1 = a1;
    v2 = a2;
    v3 = 1;
    show_error!("{}: No such file or directory", &v0);
    if !a0 {
        v1 = v5;
        show_error!("{}", "use -[v]S to pass options in shebang lines");
    }
    return uucore::mods::error::ExitCode::new(127);
}
