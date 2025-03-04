fn uu_tail::args::Settings::check_warnings(a0: &struct80) -> u64 {
    let v0: i64;  // [bp-0x70], Other Possible Types: struct24, Arguments
    let v1: i64;  // [sp-0x30]
    let v2: i64;  // [sp-0x28]
    let v4: i64;  // r14
    let v5: i64;  // rax
    let v6: i64;  // rdx
    let v7: i32;  // ebp

    v4 = *((a0 + 76) as &i8);
    if *((a0 + 72) as &i8) {
        v5 = v4 & 4294967295;
        match (v5 as u32) {
            0 => {
                v2 = v6;
                v5 = show_warning!("--retry only effective for the initial open");
                v4 = 0;
                break;
            }
            2 => {
                v2 = v6;
                v5 = show_warning!("--retry ignored; --retry is useful only when following");
                v4 = &g_4cbb02;
                break;
            }
            _ => {
                goto LABEL_4f9a04;
            }
        }
    }
LABEL_4f9a04:
    v7 = *((a0 + 68) as &i32);
    if !v7 {
        if v4 as u8 == 2 {
            return v5;
        }
    } else {
        if v4 as u8 == 2 {
            v1 = uucore::util_name();
            v2 = v6;
            eprint!("{}: warning: ", &v1);
            v0 = Arguments {
                pieces: &[&str] {
                    ptr: v8
                    len: 1
                }
                args: []
                fmt: 0
            };
            vvar_351{reg 16} = std::io::stdio::_eprint(&v0);
            return v5;
        } else if !uu_tail::platform::unix::supports_pid_checks(v7 as u64) {
            v2 = v6;
            show_warning!("--pid=PID is not supported on this system");
        }
    }
    v5 = uu_tail::args::Settings::has_stdin(a0);
    if !v5 as u8 {
        return v5;
    }
    if !v7 && !v4 as u8 && *((a0 + 40) as &i64) == 1 {
        v0 = same_file::Handle::stdin();
        v5 = core::result::Result<T,E>::map_or(&v0);
        if v5 as u8 {
            return v5;
        }
    }
    v0 = std::io::stdio::stdin();
    v5 = std::sys::pal::unix::io::is_terminal();
    if v5 as u8 {
        v1 = uucore::util_name();
        v2 = v6;
        eprint!("{}: warning: ", &v1);
        v0 = Arguments {
            pieces: &[&str] {
                ptr: v8
                len: 1
            }
            args: []
            fmt: 0
        };
        v5 = std::io::stdio::_eprint(&v0);
        return v5;
    }
    return v5;
}
