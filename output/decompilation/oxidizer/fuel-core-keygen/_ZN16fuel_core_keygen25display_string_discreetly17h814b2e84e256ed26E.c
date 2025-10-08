fn fuel_core_keygen::display_string_discreetly(a0: u64, a1: u64) -> long long {
    let v0: core::fmt::rt::Argument;  // [bp-0x78]
    let v1: u128;  // [bp-0x78]
    let v2: core::fmt::Arguments;  // [bp-0x68]
    let v3: u64;  // [bp-0x38]
    let v4: u64;  // [bp-0x30]
    let v5: &str;  // [bp-0x28]
    let v7: u64;  // rax
    let v8: struct32;  // rax
    let v9: core::result::Result<(), std::io::error::Error>;  // rax
    let v10: u64;  // rdx

    v3 = a0;
    v4 = a1;
    v5 = "### Do not share or lose this private key! Press any key to complete. ###";
    if !atty::is(0) {
        println!("{}", &v3);
        return 0;
    } else if !(termion::screen::IntoAlternateScreen::into_alternate_screen(std::io::stdio::stdout()) & 1) {
        v0 = core::fmt::rt::Argument {
            ty: &v3
        };
        v2 = core::fmt::Arguments {
            pieces: [&g_544370, "\n"]
            args: [v1]
            fmt: 0
        };
        v7 = std::io::Write::write_fmt(&vvar_58{reg 32}, &v2);
        if v7 {
            v8 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v7);
        } else {
            v9 = <std::io::stdio::Stdout as std::io::Write>::flush(&vvar_58{reg 32});
            match v9 {
                Ok(_) => {
                    println!("{}", &v5 as u64);
                    fuel_core_keygen::wait_for_keypress();
                    return 0;
                },
                Err(_) => {
                    v8 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v9);
                },
            }
        }
        return v8;
    } else {
        return anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v10);
    }
}
