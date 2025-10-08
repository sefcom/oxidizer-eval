fn uu_tail::args::Settings::check_warnings(a0: &struct80) -> u64 {
    let v0: struct24;  // [bp-0x70], Other Possible Types: core::fmt::Arguments, u64
    let v1: u64;  // [bp-0x70]
    let v2: u64;  // [bp-0x70]
    let v3: Result<struct40, struct16>;  // [bp-0x30], Other Possible Types: u64
    let v4: Result<struct40, struct16>;  // [bp-0x28], Other Possible Types: u64
    let v6: i64;  // rax
    let v7: u64;  // rdx, Other Possible Types: unsigned long
    let v8: u64;  // rax
    let v9: u32;  // ebp
    let v10: u8;  // r14b
    let v11: &str;  // rax
    let v12: u64;  // rax
    let v13: u64;  // rax
    let v14: u64;  // rax

    if *((a0 + 72) as &i8) {
        v6 = *((a0 + 76) as &i8);
        if v6 as u32 {
            if v6 as u32 != 2 {
                goto LABEL_49fa7b;
            }
            v3 = uucore::util_name();
            v4 = v7;
            eprint!("{}: warning: ", &v3);
        } else {
            v3 = uucore::util_name();
            v4 = v7;
            eprint!("{}: warning: ", &v3);
        }
        v0 = core::fmt::Arguments {
            pieces: &[&str] {
                ptr: v8
                len: 1
            }
            args: []
            fmt: 0
        };
        v6 = std::io::stdio::_eprint(&v0);
    }
LABEL_49fa7b:
    v9 = *((a0 + 68) as &i32);
    v10 = *((a0 + 76) as &i8);
    if v9 {
        if v10 == 2 {
            v3 = uucore::util_name();
            v4 = v7;
            eprint!("{}: warning: ", &v3);
        } else {
            v0 = v2;
            if !uu_tail::platform::unix::supports_pid_checks(v9) {
                v3 = uucore::util_name();
                v4 = v7;
                eprint!("{}: warning: ", &v3);
                eprintln!("--pid=PID is not supported on this system");
                v0 = v1;
            }
LABEL_49fbb4:
            v12 = uu_tail::args::Settings::has_stdin(a0);
            if !v12 {
                return v12;
            }
            if !v10 && !v9 && *((a0 + 40) as &i64) == 1 {
                v0 = same_file::Handle::stdin();
                v13 = core::result::Result<T,E>::is_ok_and(&v0);
                if v13 {
                    return v13;
                }
            }
            std::io::stdio::stdin();
            v14 = std::sys::io::is_terminal::isatty::is_terminal();
            if !v14 {
                return v14;
            }
            v3 = uucore::util_name();
            v4 = v7;
            eprint!("{}: warning: ", &v3);
        }
        v0 = core::fmt::Arguments {
            pieces: &[&str] {
                ptr: v11
                len: 1
            }
            args: []
            fmt: 0
        };
        return std::io::stdio::_eprint(&v0);
    } else {
        v0 = v2;
        if v10 == 2 {
            return v6;
        }
        goto LABEL_49fbb4;
    }
}
