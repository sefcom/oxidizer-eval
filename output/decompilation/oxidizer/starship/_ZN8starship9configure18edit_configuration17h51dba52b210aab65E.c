fn starship::configure::edit_configuration(a0: i64, a1: void*, a2: u32) -> long long {
    let v0: u128;  // [bp-0x258]
    let v1: core::fmt::rt::Argument;  // [bp-0x250], Other Possible Types: u64
    let v2: u64;  // [bp-0x248]
    let v3: struct32;  // [bp-0x240], Other Possible Types: struct8
    let v4: Result<struct4, struct8>;  // [bp-0x238], Other Possible Types: core::fmt::rt::Argument
    let v5: u128;  // [bp-0x238]
    let v6: struct8;  // [bp-0x230]
    let v7: u128;  // [bp-0x228]
    let v8: u64;  // [bp-0x218]
    let v9: core::fmt::Arguments;  // [bp-0x210]
    let v10: Result<struct224, struct16>;  // [bp-0x1e0], Other Possible Types: struct24
    let v11: u64;  // [bp-0x1d8]
    let v12: u32;  // [bp-0x1d0]
    let v13: Option<struct24>;  // [bp-0x100], Other Possible Types: struct16, struct8
    let v14: struct24;  // [bp-0x100]
    let v16: Result<struct24, struct16>;  // rbx

    v13 = starship::context::Context::get_config_path_os();
    if (((0 ^ v13 as i64) & (0 ^ -(v13 as i64))) >> 63) as char {
        eprintln!("config path required to edit configuration");
        std::process::exit(1); /* do not return */
    }
    v8 = *((&v13 as &char + 16) as &i64);
    v7 = v13 as i128;
    v10 = starship::configure::get_editor(a1, a2);
    v14 = shell_words::split(v11, v12);
    if v14.field_0 == 0x8000000000000000 {
        v16 = alloc::boxed::Box<T>::new();
    } else {
        v2 = v14.field_16;
        v0 = *(&v14.field_0 as &i128);
        v10 = starship::utils::create_command(v1);
        match v10 {
            Err(_) => {
                v3 = v11;
                v4 = v1;
                v9 = core::fmt::Arguments {
                    pieces: ["Unable to find editor ", ". Are $VISUAL and $EDITOR set correctly?\n"]
                    args: [v5]
                    fmt: 0
                };
                std::io::stdio::_eprint(&v9);
                v16 = alloc::boxed::Box<T>::new(v3);
            },
            Ok(_) => {
                memcpy(&v14, &v10, 224);
                v13 = std::process::Command::stdin(None);
                v13 = std::process::Command::stdout(None);
                v13 = std::process::Command::stderr(None);
                v13 = std::process::Command::args(v1 + 24, v2 - 1);
                v13 = std::process::Command::arg(&v7);
                v4 = std::process::Command::status(&v13);
                match v4 {
                    Err(v3) => {
                        eprintln!("Unable to launch editor {}", &v0 as u8);
                        return alloc::boxed::Box<T>::new(v3);
                    },
                    Ok(_) => {
                        return 0;
                    },
                }
            },
        }
    }
    return v16;
}
