fn uu_tail::args::Settings::check_warnings(a0: &struct80) -> long long {
    let v0: core::fmt::Arguments;  // [bp-0x70], Other Possible Types: core::fmt::rt::Argument, std::io::stdio::Stdin, struct24
    let v1: u64;  // [bp-0x70]
    let v2: u64;  // [bp-0x30]
    let v3: u64;  // [bp-0x28]
    let v5: u64;  // rax
    let v6: u64;  // rdx
    let v7: u8;  // r14b
    let v8: u32;  // ebp
    let v9: u64;  // rax
    let v10: u64;  // rax
    let v11: u64;  // rax
    let v12: alloc::string::String;  // rax

    if *((a0 + 72) as &i8) {
        v5 = *((a0 + 76) as &i8);
        if !v5 {
            v2 = uucore::util_name();
            v3 = v6;
            eprint!("{}: warning: ", &v2);
            v5 = eprintln!("--retry only effective for the initial open");
        } else if v5 == 2 {
            v2 = uucore::util_name();
            v3 = v6;
            eprint!("{}: warning: ", &v2);
            v5 = eprintln!("--retry ignored; --retry is useful only when following");
        }
    }
    v8 = *((a0 + 68) as &i32);
    if v8 {
        if v7 == 2 {
            v2 = uucore::util_name();
            v3 = v6;
            eprint!("{}: warning: ", &v2);
        } else {
            v1 = v1;
            if !uu_tail::platform::unix::supports_pid_checks(v8) {
                v2 = uucore::util_name();
                v3 = v6;
                eprint!("{}: warning: ", &v2);
                eprintln!("--pid=PID is not supported on this system");
                v1 = v0;
            }
LABEL_4f9b38:
            v10 = uu_tail::args::Settings::has_stdin(a0);
            if !v10 {
                return v10;
            }
            if !v8 && !v7 && *((a0 + 40) as &i64) == 1 {
                v0 = same_file::Handle::stdin();
                v11 = core::result::Result<T,E>::map_or(&v0);
                if v11 {
                    return v11;
                }
            }
            v0 = std::io::stdio::stdin();
            v12 = std::sys::pal::unix::io::is_terminal();
            if !v12 as u8 {
                return v12;
            }
            v2 = uucore::util_name();
            v3 = v6;
            eprint!("{}: warning: ", &v2);
        }
        v0 = struct24 {
            field_0: v9
            field_8: 1
            field_16: 8
        };
        v0 = core::fmt::Arguments {
            pieces: &[&str] {
                ptr: v9
                len: 1
            }
            args: []
            fmt: 0
        };
        return std::io::stdio::_eprint(&v0);
    } else {
        v1 = v1;
        if v7 == 2 {
            return v5;
        }
        goto LABEL_4f9b38;
    }
}
