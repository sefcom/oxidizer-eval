fn uu_nohup::replace_fds() -> u64 {
    let v0: Result<struct4, struct8>;  // [bp-0x40]
    let v1: u64;  // [bp-0x40]
    let v2: Result<struct16, struct12>;  // [bp-0x40]
    let v3: u64;  // [bp-0x40]
    let v4: u64;  // [bp-0x40]
    let v5: struct56;  // [bp-0x3c]
    let v6: &str;  // [bp-0x38], Other Possible Types: u32
    let v7: u32;  // [bp-0x34]
    let v8: u64;  // [bp-0x30]
    let v9: struct64;  // [bp-0x28], Other Possible Types: u64
    let v11: u64;  // rax
    let v13: u64;  // rax

    std::io::stdio::stdin();
    if std::sys::io::is_terminal::isatty::is_terminal() {
        v1 = std::fs::File::open();
        if let Err(v11) = v1 as u128 {
            v4 = 9223372036854775809 as u64;
            v6 = &g_418d00;
            v7 = 0;
            v8 = 5;
            v9 = v11;
            return alloc::boxed::Box<T>::new(&v3 as u640) as u64;
        }
        if !dup2(v5, 0) {
            goto LABEL_456a86;
        }
        v6 = "STDIN";
        v9 = *(__errno_location() as &i32) * 0x100000000 | 2;
        v1 = 9223372036854775809;
        v13 = alloc::boxed::Box<T>::new(&v1) as u64;
    } else {
LABEL_456a86:
        std::io::stdio::stdout();
        if std::sys::io::is_terminal::isatty::is_terminal() {
            v3 = uu_nohup::find_stdout();
            if let Ok(_) = v3 as u640 {
                return v2 as i64;
            }
            if dup2(v6, 1) == 1 {
                goto LABEL_456adc;
            }
            v6 = "STDOUT";
            v9 = *(__errno_location() as &i32) * 0x100000000 | 2;
            v3 = 9223372036854775809;
            v13 = alloc::boxed::Box<T>::new(&v3) as u64;
        } else {
LABEL_456adc:
            if !std::sys::io::is_terminal::isatty::is_terminal() {
                return 0;
            } else if dup2(1, 2) == 2 {
                return 0;
            } else {
                v6 = "STDERR";
                v9 = *(__errno_location() as &i32) * 0x100000000 | 2;
                v4 = 9223372036854775809;
                return alloc::boxed::Box<T>::new(&v3) as u64;
            }
        }
    }
    return v13;
}
