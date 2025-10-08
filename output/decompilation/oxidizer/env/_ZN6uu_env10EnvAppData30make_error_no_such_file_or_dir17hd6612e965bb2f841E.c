fn uu_env::EnvAppData::make_error_no_such_file_or_dir(a0: u8, a1: u64, a2: u64) -> long long {
    let v0: u64;  // [bp-0x50]
    let v1: u64;  // [sp-0x48]
    let v2: u64;  // [bp-0x40]
    let v3: u8;  // [bp-0x38]
    let v5: u64;  // rdx

    v0 = uucore::util_name();
    v1 = v5;
    eprint!("{}: ", &v0);
    v0 = 1;
    v1 = a1;
    v2 = a2;
    v3 = 1;
    eprintln!("{}: No such file or directory", &v0);
    if !(a0 & 1) {
        v0 = uucore::util_name();
        v1 = v5;
        eprint!("{}: ", &v0);
        eprintln!("{}", "use -[v]S to pass options in shebang lines");
    }
    return uucore::mods::error::ExitCode::new(127);
}
