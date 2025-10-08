fn uu_cp::OverwriteMode::verify(a0: i64, a1: u8, a2: u64, a3: u64, a4: u8) -> int {
    let v0: std::io::stdio::Stderr;  // [bp-0x128]
    let v1: std::path::PathBuf;  // [bp-0xf8], Other Possible Types: struct8, u64
    let v2: Result<struct4, struct8>;  // [bp-0xf0], Other Possible Types: struct56, struct8, u64
    let v3: u64;  // [bp-0xe8]
    let v4: struct4;  // [bp-0xe0], Other Possible Types: u8
    let v5: struct16;  // [bp-0xc8], Other Possible Types: u64
    let v6: u64;  // [bp-0xc0]
    let v7: u64;  // [bp-0xb8]
    let v8: u8;  // [bp-0xb0]
    let v9: struct16;  // [bp-0xa8]
    let v10: Option<struct48>;  // [bp-0x98], Other Possible Types: u64
    let v11: u64;  // [bp-0x90]
    let v20: u64;  // rdx
    let v21: core::result::Result<(), std::io::error::Error>;  // rax
    let v22: void*;  // rax
    let v25: u64;  // rdx
    let v26: core::result::Result<(), std::io::error::Error>;  // rax
    let v27: void*;  // rax

    if !a1 {
        return struct8 {
            field_0: 9223372036854775820
        };
    } else if a1 == 1 {
        v10 = uu_cp::file_mode_for_interactive_overwrite(a2, a3);
        match v10 {
            None => {
                v1 = uucore::util_name();
                v2 = v20;
                eprint!("{}: ", &v1);
                v1 = 1;
                v2 = a2;
                v3 = a3;
                v4 = 1;
                eprint!("overwrite {}?", &v1);
                eprint!(" ");
                v0 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.inner;
                v21 = <std::io::stdio::Stderr as std::io::Write>::flush(&v0);
                if let Err(_) = v21 {
                    v22 = uu_cp::OverwriteMode::verify::{{closure}}(v21);
                    if v22 {
                        v5 = struct16 {
                            field_0: v22
                            field_8: &g_55eec0
                        };
                        uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v22) as u32 as u64);
                        v10 = uucore::util_name();
                        v11 = v20;
                        eprintln!("{}: {}", &v10, &v5);
                    }
                }
                if !uucore::read_yes() as u8 {
                    return struct16 {
                        field_0: 9223372036854775815
                        field_8: 1
                    };
                }
            },
            Some(_) => {
                v1 = uucore::util_name();
                v2 = v25;
                eprint!("{}: ", &v1);
                v5 = 1;
                v6 = a2;
                v7 = a3;
                v8 = 1;
                eprint!("replace {}, overriding mode {} ({})?", &v5, &v15, &v17);
                eprint!(" ");
                v0 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.inner;
                v26 = <std::io::stdio::Stderr as std::io::Write>::flush(&v0);
                if let Err(_) = v26 {
                    v27 = uu_cp::OverwriteMode::verify::{{closure}}(v26);
                    if v27 {
                        v9 = struct16 {
                            field_0: v27
                            field_8: &g_55eec0
                        };
                        uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v27) as u32 as u64);
                        v5 = uucore::util_name();
                        v6 = v25;
                        eprintln!("{}: {}", &v5, &v9);
                    }
                }
                if !uucore::read_yes() as u32 as u8 {
                    return struct16 {
                        field_0: 9223372036854775815
                        field_8: 1
                    };
                }
            },
        }
        return struct8 {
            field_0: 9223372036854775820
        };
    } else {
        if !a4 {
            return struct16 {
                field_0: 9223372036854775815
                field_8: 0
            };
        }
        v1 = 1;
        v2 = a2;
        v3 = a3;
        v4 = 1;
        println!("skipped {}", &v1);
        return struct16 {
            field_0: 9223372036854775815
            field_8: 0
        };
    }
}
