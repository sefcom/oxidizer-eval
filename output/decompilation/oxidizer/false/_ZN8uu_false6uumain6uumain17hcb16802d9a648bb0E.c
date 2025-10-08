fn uu_false::uumain::uumain(a0: i64, a1: i64) -> int {
    let v0: u64;  // [bp-0x3a0]
    let v1: std::io::stdio::Stdout;  // [bp-0x398], Other Possible Types: u64
    let v2: core::fmt::rt::Argument;  // [bp-0x390], Other Possible Types: u64
    let v3: u128;  // [bp-0x390]
    let v4: u64;  // [bp-0x388]
    let v5: core::fmt::rt::Argument;  // [bp-0x380], Other Possible Types: u8
    let v6: u128;  // [bp-0x380]
    let v7: core::fmt::rt::Argument;  // [bp-0x370]
    let v8: u128;  // [bp-0x370]
    let v9: core::fmt::Arguments;  // [bp-0x360]
    let v10: u8;  // [bp-0x330]
    let v11: u64;  // [bp-0x320]
    let v12: Result<struct56, struct16>;  // [bp-0x318]
    let v13: u64;  // [bp-0x318]
    let v17: core::result::Result<(), std::io::error::Error>;  // r14
    let v18: u64;  // rdx
    let v19: core::result::Result<(), std::io::error::Error>;  // rax

    v12 as u5696 = uu_false::uu_app();
    uucore::mods::error::set_exit_code(1);
    core::iter::traits::iterator::Iterator::collect(&v10, a0, a1);
    if v11 <= 2 {
        v12 = clap_builder::builder::command::Command::try_get_matches_from_mut(&v12 as u5696, &v10);
        if (((0 ^ v12 as i64) & (0 ^ -(v13))) >> 63) as char {
            match (*((*((&v12 as &char + 8) as &i64) + 221) as &i8)) {
                12 => {
                    v17 = clap_builder::builder::command::Command::print_help(&v12 as u5696);
                    if let Err(_) = v17 {
LABEL_448ce3:
                        v0 = v17;
                        v1 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
                        v2 = uucore::util_name();
                        v4 = v18;
                        v5 = core::fmt::rt::Argument {
                            ty: &v2
                        };
                        v7 = core::fmt::rt::Argument {
                            ty: &v0
                        };
                        v9 = core::fmt::Arguments {
                            pieces: [&g_4caed0, ": ", "\n"]
                            args: [v6, v8]
                            fmt: 0
                        };
                        v19 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v1, &v9);
                    }
                    break;
                }
                14 => {
                    v1 = std::io::stdio::stdout();
                    clap_builder::builder::command::Command::render_version(&v5, &v12 as u5696);
                    v2 = core::fmt::rt::Argument {
                        ty: &v5
                    };
                    v9 = core::fmt::Arguments {
                        pieces: [&g_415960]
                        args: [v3]
                        fmt: 0
                    };
                    v17 = <std::io::stdio::Stdout as std::io::Write>::write_fmt(&v1, &v9);
                    if let Err(_) = v17 {
                        goto LABEL_448ce3;
                    }
                    break;
                }
                _ => {
                    goto LABEL_448daf;
                }
            }
        }
    }
LABEL_448daf:
    return;
}
