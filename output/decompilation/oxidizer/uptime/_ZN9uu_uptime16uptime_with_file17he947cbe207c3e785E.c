fn uu_uptime::uptime_with_file(a0: i64) -> u64 {
    let v0: void*;  // [bp-0x118], Other Possible Types: u64
    let v1: u64;  // [bp-0x110]
    let v2: u64;  // [bp-0x108]
    let v3: u64;  // [bp-0x100]
    let v4: u64;  // [bp-0xf8]
    let v5: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xc8]
    let v7: u64;  // rdx
    let v10: u64;  // rbx
    let v11: u64;  // rax
    let v12: struct640;  // rsi

    v5 = std::fs::metadata(a0, v7);
    if let Err(_) = v5 {
        uucore::mods::error::set_exit_code(1);
        v0 = uucore::util_name();
        v1 = v7;
        eprint!("{}: ", &v0);
        v1 = *((&v5 as &char + 8) as &i64);
        v0 = 0;
        eprintln!("{}", &v0);
        goto LABEL_467711;
    }
    match (0xf000 & *((&v5 as &char + 56) as &i32)) {
        4096 => {
            v0 = uucore::util_name();
            v1 = v7;
            eprint!("{}: ", &v0);
        }
        16384 => {
            v0 = uucore::util_name();
            v1 = v7;
            eprint!("{}: ", &v0);
        }
        _ => {
            uu_uptime::print_time();
            uu_uptime::process_utmpx(&v2, a0);
            v10 = v4;
            if v2 == 1 {
                v11 = uu_uptime::print_uptime(v2, v3);
                v12 = v10;
                if v11 {
                    return v11;
                }
            } else {
                v0 = uucore::util_name();
                v1 = v7;
                eprint!("{}: ", &v0);
                eprintln!("couldn't get boot time");
                uucore::mods::error::set_exit_code(1);
                print!("up ???? days ??:??,");
                v12 = v10;
                break;
            }
LABEL_467749:
            uu_uptime::print_nusers(1, v12);
            uu_uptime::print_loadavg();
            return 0;
        }
    }
    eprintln!("{}", v9);
    uucore::mods::error::set_exit_code(1);
LABEL_467711:
    uu_uptime::print_time();
    print!("up ???? days ??:??,");
    goto LABEL_467749;
}
