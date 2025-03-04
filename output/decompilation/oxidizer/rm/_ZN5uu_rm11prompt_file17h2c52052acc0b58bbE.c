fn uu_rm::prompt_file(a0: u32, a1: u32, a2: u8) -> u64 {
    let v0: struct4;  // [bp-0x164]
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
    let v14: Result<struct4, struct8>;  // [sp-0xf0], Other Possible Types: unsigned long
    let v15: Result<struct176, struct8>;  // [sp-0xe0], Other Possible Types: unsigned long, struct16
    let v17: i64;  // rax
    let v18: i64;  // rax
    let v19: i64;  // rdx
    let v20: i64;  // rax
    let v21: i32;  // ebx
    let v22: i32;  // r12d
    let v23: i64;  // r15
    let v24: i64;  // rdx
    let v25: i64;  // rdx
    let v26: i64;  // rax
    let v27: i64;  // rax

    match (a2) {
        0 => {
            v18 = v17 & -0x100 | 1;
            return v18;
        }
        2 => {
            v15 = std::fs::symlink_metadata(a0, a1);
            if v15 as i32 != 2 && (0xf000 & *((&v15 as &char + 56) as &i32)) == 0xa000 {
                v6 = uucore::util_name();
                v7 = v19;
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
                v20 = <std::io::stdio::Stderr as std::io::Write>::flush(&v5);
                if v20 {
                    v14 = v20;
                    v7 = v19;
                    show_error!("{}", &v14);
                    std::process::exit(1); /* do not return */
                }
                break;
                v18 = v21 as u64;
                return v18;
            }
        }
        _ => {
            v10 = struct10 {
                field_0: 0x1b600000000
                field_8: 257
            };
            *(&v11 as &i32) = 0;
            v12 = 0;
            v14 = std::fs::OpenOptions::open(&v10, a0, a1);
            match v14 {
                Err(v15) => {
                    v18 = core::ptr::drop_in_place<std::io::error::Error>(&v15) & -0x100 | 1;
                    if std::io::error::Error::kind(*((&v14 as &char + 8) as &i64)) as i32 as i8 != 1 {
                        return v18;
                    }
                },
                Ok(_) => {
                    v0 = struct4 {
                        field_0: *((&v14 as &char + 4) as &i32)
                    };
                    v15 = std::fs::File::metadata(&v0);
                    if v15.field_0 as i32 == 2 {
                        v21 = (a1 & -0x100 | 1) as u32;
                        break;
                    }
                    if a2 == 2 && (v22 as u8 & 146) {
                        if !v23 {
                            v1 = uucore::util_name();
                            v2 = v25;
                            eprint!("{}: ", &v1);
                            v1 = 1;
                            v2 = a0;
                            v3 = a1;
                            *(&v4 as &i8) = 1;
                            eprint!("remove regular empty file {}?", &v1);
                            eprint!(" ");
                            v13 = struct8 {
                                field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
                            };
                            v27 = <std::io::stdio::Stderr as std::io::Write>::flush(&v13);
                            if v27 {
                                v5 = v27;
                                v2 = v25;
                                show_error!("{}", &v5);
                                std::process::exit(1); /* do not return */
                            }
                        } else {
                            v1 = uucore::util_name();
                            v2 = v24;
                            eprint!("{}: ", &v1);
                            v1 = 1;
                            v2 = a0;
                            v3 = a1;
                            *(&v4 as &i8) = 1;
                            eprint!("remove file {}?", &v1);
                            eprint!(" ");
                            v13 = struct8 {
                                field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
                            };
                            v26 = <std::io::stdio::Stderr as std::io::Write>::flush(&v13);
                            if v26 {
                                v5 = v26;
                                v2 = v24;
                                show_error!("{}", &v5);
                                std::process::exit(1); /* do not return */
                            }
                        }
                        v21 = uucore::read_yes() as i32;
                        break;
                    }
                },
            }
            v18 = uu_rm::prompt_file_permission_readonly(a0, a1);
            return v18;
        }
    }
}
