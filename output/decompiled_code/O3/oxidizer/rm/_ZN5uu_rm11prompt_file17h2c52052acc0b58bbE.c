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
    let v10: i64;  // [sp-0x108]
    let v11: i16;  // [bp-0x100]
    let v12: i16;  // [sp-0xfc]
    let v13: struct8;  // [bp-0xf8]
    let v14: Result<struct4, struct8>;  // [sp-0xf0], Other Possible Types: i64
    let v15: i8;  // [bp-0xe8]
    let v16: i128;  // [sp-0xe0], Other Possible Types: struct16, Result<struct176, struct16>
    let v18: i64;  // rax
    let v19: i64;  // rax
    let v20: i64;  // rdx
    let v21: i64;  // rsi
    let v22: i64;  // rax
    let v25: i64;  // rdi
    let v26: i32;  // eax
    let v27: i64;  // rdx
    let v28: i64;  // rdx
    let v29: i64;  // rsi
    let v30: i64;  // rax
    let v31: i64;  // rax
    let v32: i64;  // rdi
    let v33: i64;  // rdx

    switch (a2) {
    case 0:
        v19 = v18 | -0x100 | 1;
        return v19;
    case 2:
        v16 = std::fs::symlink_metadata(a0, a1);
        if v16 != 2 && (0xf000 & *((&v16 as &char + 56) as &i32)) == 0xa000 {
            v6 = uucore::util_name();
            v7 = v20;
            eprint!("{:?}: ", &v6);
            v6 = 1;
            v7 = a0;
            v8 = a1;
            v9 = 1;
            eprint!("remove symbolic link {:?}?", &v6);
            eprint!(" ");
            v5 = struct8 {
                field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
            };
            v22 = <std::io::stdio::Stderr as std::io::Write>::flush(&v5, v21, v20);
            if !v22 {
                v26 = uucore::read_yes(v25, v21, v20) as i32;
                return v19;
            }
            v14 = v22;
            v6 = uucore::util_name();
            v7 = v20;
            eprint!("{:?}: ", &v6);
            eprintln!("{:?}", &v14);
            std::process::exit(1); /* do not return */
        }
    default:
        v10 = 0x1b600000000;
        v11 = 0;
        v12 = 0;
        v11 = 257;
        v14 = std::fs::OpenOptions::open(&v10, a0, a1);
        match v14 {
            Err(v16) => {
                v19 = core::ptr::drop_in_place<std::io::error::Error>(&v16) | -0x100 | 1;
                if std::io::error::Error::kind(v15) as i32 as i8 == 1 {
                    v19 = uu_rm::prompt_file_permission_readonly(a0, a1);
                    return v19;
                }
                return v19;
            },
            Ok(_) => {
                v0 = struct4 {
                    field_0: *((&v14 as &char + 4) as &i32)
                };
                v16 = std::fs::File::metadata(&v0);
                if v16 == 2 {
                    v26 = (a1 | -0x100 | 1) as i32;
                    break;
                } else {
                    if !(a2 == 2) || !((*((&v16 as &char + 56) as &i32) as i8 & 146)) {
                        uu_rm::prompt_file_permission_readonly(a0, a1);
                        return v19;
                    }
                    if !*((&v16 as &char + 80) as &i64) {
                        v1 = uucore::util_name();
                        v2 = v28;
                        eprint!("{:?}: ", &v1);
                        v1 = 1;
                        v2 = a0;
                        v3 = a1;
                        v4 = 1;
                        eprint!("remove regular empty file {:?}?", &v1);
                        eprint!(" ");
                        v13 = struct8 {
                            field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
                        };
                        v31 = <std::io::stdio::Stderr as std::io::Write>::flush(&v13, v29, v28);
                        if v31 {
                            v5 = v31;
                            v1 = uucore::util_name();
                            v2 = v28;
                            eprint!("{:?}: ", &v1);
                            eprintln!("{:?}", &v5);
                            std::process::exit(1); /* do not return */
                        }
                    } else {
                        v1 = uucore::util_name();
                        v2 = v27;
                        eprint!("{:?}: ", &v1);
                        v1 = 1;
                        v2 = a0;
                        v3 = a1;
                        v4 = 1;
                        eprint!("remove file {:?}?", &v1);
                        eprint!(" ");
                        v13 = struct8 {
                            field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
                        };
                        v30 = <std::io::stdio::Stderr as std::io::Write>::flush(&v13, v29, v27);
                        if v30 {
                            v5 = v30;
                            v1 = uucore::util_name();
                            v2 = v27;
                            eprint!("{:?}: ", &v1);
                            eprintln!("{:?}", &v5);
                            std::process::exit(1); /* do not return */
                        }
                    }
                    v26 = uucore::read_yes(v32, v29, v33) as i32;
                    break;
                }
                v19 = v26 as u32 as u64;
                return v19;
            },
        }
    }
}
