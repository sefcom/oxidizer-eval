fn fd::exit_codes::ExitCode::is_error(a0: u8) -> long long {
    let v1: u64;  // rax

    v1 = (a0 - 2 < 4 ? a0 - 2 : 1);
    if v1 - 2 < 2 {
        return v1 & 0xffffff00 | 1;
    } else if !v1 {
        return 0;
    } else {
        return v1 & 0xffffff00 | !(a0 & 1);
    }
}
