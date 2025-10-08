fn forc_crypto::display_output(a0: u64) -> long long {
    let v0: core::fmt::Arguments;  // [bp-0x78], Other Possible Types: Result<struct24, struct16>
    let v1: u64;  // [bp-0x78]
    let v3: u64;  // [bp-0x68]
    let v4: struct24;  // [bp-0x48], Other Possible Types: u128
    let v6: u64;  // [bp-0x38]
    let v7: core::fmt::rt::Argument;  // [bp-0x30], Other Possible Types: struct24
    let v8: u128;  // [bp-0x30]
    let v10: u64;  // rdx
    let v11: void*;  // rax
    let v12: u64;  // rax
    let v13: core::result::Result<(), std::io::error::Error>;  // rax

    std::io::stdio::stdout();
    if std::sys::io::is_terminal::isatty::is_terminal() {
        v0 = serde_yaml::ser::to_string(a0);
        v4 = core::result::Result<T,E>::expect(&v0);
        if !forc_crypto::has_sensible_info(a0) {
            println!("{}", &v4);
        } else if (termion::screen::IntoAlternateScreen::into_alternate_screen(std::io::stdio::stdout()) & 1) {
            v11 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v10);
        } else {
            v7 = core::fmt::rt::Argument {
                ty: &v4
            };
            v0 = core::fmt::Arguments {
                pieces: [&g_a2cb98, "\n"]
                args: [v8]
                fmt: 0
            };
            v12 = std::io::Write::write_fmt(&vvar_105{reg 32}, &v0);
            if v12 {
                v11 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v12);
            } else {
                v13 = <std::io::stdio::Stdout as std::io::Write>::flush(&vvar_105{reg 32});
                match v13 {
                    Err(_) => {
                        v11 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v13);
                    },
                    Ok(_) => {
                        println!("### Do not share or lose this private key! Press any key to exit. ###");
                        forc_crypto::wait_for_keypress();
                    },
                }
            }
        }
    } else {
        v0 = serde_json::ser::to_vec(a0);
        if !((((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char) {
            v6 = v3;
            v4 = v0 as i128;
        }
        v7 = core::result::Result<T,E>::expect(&v4);
        print!("{}", &v7);
    }
    return v11;
}
