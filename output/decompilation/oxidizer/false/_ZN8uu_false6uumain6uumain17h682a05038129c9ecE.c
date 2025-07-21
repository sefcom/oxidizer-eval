fn uu_false::uumain::uumain(a0: i64, a1: i64) {
    let v0: u64;  // [bp-0x3a8]
    let v1: std::io::stdio::Stdout;  // [bp-0x3a0], Other Possible Types: u64
    let v2: u128;  // [bp-0x398]
    let v3: core::fmt::rt::Argument;  // [bp-0x398]
    let v4: u64;  // [bp-0x390]
    let v5: struct24;  // [bp-0x388], Other Possible Types: core::fmt::Arguments
    let v6: core::fmt::rt::Argument;  // [bp-0x350], Other Possible Types: u8
    let v7: u128;  // [bp-0x350]
    let v8: core::fmt::rt::Argument;  // [bp-0x340]
    let v9: u128;  // [bp-0x340]
    let v10: struct24;  // [bp-0x330], Other Possible Types: u8
    let v11: u64;  // [bp-0x320]
    let v12: Result<struct56, struct16>;  // [bp-0x318]
    let v16: core::result::Result<(), std::io::error::Error>;  // r14
    let v17: u64;  // rdx
    let v18: core::result::Result<(), std::io::error::Error>;  // rax

    uu_false::uu_app(&v12 as u8);
    uucore::mods::error::set_exit_code(1);
    core::iter::traits::iterator::Iterator::collect(&v10, a0, a1);
    if v11 <= 2 {
        v5 = v10;
        v12 = clap_builder::builder::command::Command::try_get_matches_from_mut(&v12 as u8, &v5);
        if let Err(_) = v12 {
            match (*((*((&v12 as &char + 8) as &i64) + 213) as &i8) as u8 as u32) {
                12 => {
                    v16 = clap_builder::builder::command::Command::print_help(&v12 as u8);
                    if let Err(_) = v16 {
LABEL_459243:
                        v0 = v16;
                        v1 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                        v2 = uucore::util_name();
                        v4 = v17;
                        v6 = core::fmt::rt::Argument {
                            ty: &v2
                        };
                        v8 = core::fmt::rt::Argument {
                            ty: &v0
                        };
                        v5 = core::fmt::Arguments {
                            pieces: [&g_4f6870, ": ", "\n"]
                            args: [v7, v9]
                            fmt: 0
                        };
                        v18 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v1, &v5);
                    }
                    break;
                }
                14 => {
                    v1 = std::io::stdio::stdout();
                    clap_builder::builder::command::Command::render_version(&v6, &v12 as u8);
                    v3 = core::fmt::rt::Argument {
                        ty: &v6
                    };
                    v5 = core::fmt::Arguments {
                        pieces: [&g_4f6838, "\n"]
                        args: [v2]
                        fmt: 0
                    };
                    v16 = <std::io::stdio::Stdout as std::io::Write>::write_fmt(&v1, &v5);
                    if !(!v16) {
                        goto LABEL_459243;
                    }
                    break;
                }
                _ => {
                    goto LABEL_45930b;
                }
            }
        }
    }
LABEL_45930b:
    return;
}
