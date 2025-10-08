fn uu_tty::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: std::io::stdio::Stdout;  // [bp-0x360]
    let v1: i64;  // [bp-0x358]
    let v2: u64;  // [bp-0x350]
    let v3: u64;  // [bp-0x348]
    let v4: u64;  // [bp-0x340]
    let v5: Result<struct24, struct12>;  // [bp-0x338]
    let v6: u64;  // [bp-0x338]
    let v7: u64;  // [bp-0x330]
    let v8: u64;  // [bp-0x328]
    let v9: struct56;  // [bp-0x320]
    let v10: core::fmt::Arguments;  // [bp-0x2e8], Other Possible Types: struct712, u64
    let v11: u64;  // [bp-0x2e0]
    let v12: i64;  // [bp-0x2d8]
    let v13: u64;  // [bp-0x2d0]
    let v14: void*;  // [bp-0x2c8]
    let v16: void*;  // rbx
    let v17: core::result::Result<(), std::io::error::Error>;  // rax

    v10 = uu_tty::uu_app();
    v9 = clap_builder::builder::command::Command::get_matches_from(&v10, a0, a1);
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v9, "silent") {
        std::io::stdio::stdin();
        if std::sys::io::is_terminal::isatty::is_terminal() {
            return v16;
        }
        v16 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
        return v16;
    } else {
        v0 = std::io::stdio::stdout();
        std::io::stdio::stdin();
        v5 = nix::unistd::ttyname();
        if (((0 ^ v5 as i64) & (0 ^ -(v6))) >> 63) as char {
            uucore::mods::error::set_exit_code(1);
            v10 = core::fmt::Arguments {
                pieces: ["not a tty\n"]
                args: []
                fmt: 0
            };
            v17 = <std::io::stdio::Stdout as std::io::Write>::write_fmt(&v0, &v10);
        } else {
            v3 = v7;
            v4 = v8;
            v1 = &v3;
            v2 = <std::path::Display as core::fmt::Display>::fmt;
            v10 = &g_4d1ef8;
            v11 = 2;
            v14 = 0;
            v12 = &v1;
            v13 = 1;
            v17 = <std::io::stdio::Stdout as std::io::Write>::write_fmt(&v0, &v10);
            core::mem::drop(v5 as i64, v7);
        }
        if let Ok(_) = v17 {
            if !<std::io::stdio::Stdout as std::io::Write>::flush(&v0) {
                return v16;
            }
        }
        std::process::exit(3); /* do not return */
    }
}
