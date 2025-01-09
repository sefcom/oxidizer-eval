fn uu_rm::prompt_file(a0: u32, a1: u32, a2: u8) -> u64 {
    let v0: i32;  // [sp-0x164]
    let v1: i64;  // [sp-0x160]
    let v2: i64;  // [sp-0x158]
    let v3: i64;  // [sp-0x150]
    let v4: i8;  // [bp-0x148]
    let v5: i64;  // [bp-0x130], Other Possible Types: struct8
    let v6: i64;  // [sp-0x128]
    let v7: i64;  // [sp-0x120]
    let v8: i64;  // [sp-0x118]
    let v9: i8;  // [sp-0x110]
    let v10: struct10;  // [bp-0x108]
    let v11: i32;  // [bp-0x100]
    let v12: i16;  // [sp-0xfc]
    let v13: struct8;  // [bp-0xf8]
    let v14: i96;  // [sp-0xf0], Other Possible Types: Result<struct4, struct8>
    let v15: i128;  // [sp-0xe0], Other Possible Types: struct16
    let v16: i8;  // [bp-0xa8]
    let v18: i64;  // rax
    let v19: i64;  // rax
    let v20: i64;  // rdx
    let v21: i64;  // rax
    let v22: i32;  // r12d
    let v24: i64;  // r15
    let v25: i64;  // rdx
    let v26: i64;  // rdx
    let v27: i64;  // rax
    let v28: i64;  // rax

    match (a2) {
        0 => {
            v19 = v18 & -0x100 | 1;
            return v19;
        }
        2 => {
            v15 = std::fs::symlink_metadata(a0, a1);
            if v15 != 2 && (0xf000 & v16) == 0xa000 {
                v6 = uucore::util_name();
                v7 = v20;
                eprint!("{}: ", &v6);
                v6 = 1;
                v7 = a0;
                v8 = a1;
                v9 = 1;
                eprint!("remove symbolic link {}?", &v6);
                eprint!(" ");
                v5 = struct8 {
                    field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
                };
                v21 = <std::io::stdio::Stderr as std::io::Write>::flush(&v5);
                if v21 {
                    v14 = v21;
                    v6 = uucore::util_name();
                    v7 = v20;
                    eprint!("{}: ", &v6);
                    eprintln!("{}", &v14);
                    std::process::exit(1); /* do not return */
                }
                break;
                v19 = uucore::read_yes() as i32;
                return v19;
            }
        }
        _ => {
            v10 = struct10 {
                field_0: 0x1b600000000
                field_8: 257
            };
            v11 = 0;
            v12 = 0;
            v14 = std::fs::OpenOptions::open(&v10, a0, a1);
            match v14 {
                Err(v15) => {
                    v19 = core::ptr::drop_in_place<std::io::error::Error>(&v15) & -0x100 | 1;
                    if std::io::error::Error::kind(*((&v14 as &char + 8) as &i64)) as i32 as i8 != 1 {
                        return v19;
                    }
                },
                Ok(_) => {
                    v0 = *((&v14 as &char + 4) as &i32);
                    v15 = std::fs::File::metadata(&v0);
                    if v15 == 2 {
                        break;
                    }
                    if a2 == 2 && (v22 as i8 & 146) {
                        if !v24 {
                            v1 = uucore::util_name();
                            v2 = v26;
                            eprint!("{}: ", &v1);
                            v1 = 1;
                            v2 = a0;
                            v3 = a1;
                            v4 = 1;
                            eprint!("remove regular empty file {}?", &v1);
                            eprint!(" ");
                            v13 = struct8 {
                                field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
                            };
                            v28 = <std::io::stdio::Stderr as std::io::Write>::flush(&v13);
                            if v28 {
                                v5 = v28;
                                v1 = uucore::util_name();
                                v2 = v26;
                                eprint!("{}: ", &v1);
                                eprintln!("{}", &v5);
                                std::process::exit(1); /* do not return */
                            }
                        } else {
                            v1 = uucore::util_name();
                            v2 = v25;
                            eprint!("{}: ", &v1);
                            v1 = 1;
                            v2 = a0;
                            v3 = a1;
                            v4 = 1;
                            eprint!("remove file {}?", &v1);
                            eprint!(" ");
                            v13 = struct8 {
                                field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
                            };
                            v27 = <std::io::stdio::Stderr as std::io::Write>::flush(&v13);
                            if v27 {
                                v5 = v27;
                                v1 = uucore::util_name();
                                v2 = v25;
                                eprint!("{}: ", &v1);
                                eprintln!("{}", &v5);
                                std::process::exit(1); /* do not return */
                            }
                        }
                        uucore::read_yes();
                        break;
                    }
                },
            }
            v19 = uu_rm::prompt_file_permission_readonly(a0, a1);
            return v19;
        }
    }
}
