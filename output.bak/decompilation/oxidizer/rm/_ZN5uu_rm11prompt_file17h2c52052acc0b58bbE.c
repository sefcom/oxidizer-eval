fn uu_rm::prompt_file(a0: u32, a1: u32, a2: u8) -> u64 {
    let v0: struct4;  // [bp-0x164]
    let v1: u64;  // [sp-0x160]
    let v2: u64;  // [sp-0x158]
    let v3: u64;  // [sp-0x150]
    let v4: u8;  // [bp-0x148]
    let v5: u64;  // [bp-0x130], Other Possible Types: struct8
    let v6: u64;  // [sp-0x128]
    let v7: u64;  // [sp-0x120]
    let v8: u64;  // [sp-0x118]
    let v9: u8;  // [sp-0x110]
    let v10: struct10;  // [bp-0x108]
    let v11: u32;  // [bp-0x100]
    let v12: u16;  // [sp-0xfc]
    let v13: struct8;  // [bp-0xf8]
    let v14: Result<struct4, struct8>;  // [sp-0xf0], Other Possible Types: u64
    let v15: u8;  // [bp-0xe8]
    let v16: u128;  // [sp-0xe0], Other Possible Types: struct16
    let v17: i8;  // [bp-0xa8]
    let v18: i8;  // [bp-0x90]
    let v20: u64;  // rax
    let v21: u64;  // rax
    let v22: u64;  // rdx
    let v23: u64;  // rax
    let v26: u32;  // eax
    let v27: u64;  // rdx
    let v28: u64;  // rdx
    let v29: u64;  // rax
    let v30: u64;  // rax

    switch (a2) {
    case 0:
        v21 = v20 | -0x100 | 1;
        return v21;
    case 2:
        v16 = std::fs::symlink_metadata(a0, a1);
        if v16 as i32 != 2 && (0xf000 & v17) == 0xa000 {
            v6 = uucore::util_name();
            v7 = v22;
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
            v23 = <std::io::stdio::Stderr as std::io::Write>::flush(&v5);
            if !v23 {
                v26 = uucore::read_yes() as i32;
                return v21;
            }
            v14 = v23;
            v6 = uucore::util_name();
            v7 = v22;
            eprint!("{:?}: ", &v6);
            eprintln!("{:?}", &v14);
            std::process::exit(1); /* do not return */
        }
    default:
        v10 = struct10 {
            field_0: 0x1b600000000
            field_8: 257
        };
        v11 = 0;
        v12 = 0;
        v14 = std::fs::OpenOptions::open(&v10, a0, a1) as u64;
        match v14 {
            Err(v16) => {
                v21 = core::ptr::drop_in_place<std::io::error::Error>(&v16) | -0x100 | 1;
                if std::io::error::Error::kind(*(&v15 as &i64)) as i32 as i8 == 1 {
                    v21 = uu_rm::prompt_file_permission_readonly(a0, a1);
                    return v21;
                }
                return v21;
            },
            Ok(_) => {
                v0 = struct4 {
                    field_0: *((&v14 as &char + 4) as &i32)
                };
                v16 = std::fs::File::metadata(&v0);
                if v16 as i32 == 2 {
                    v26 = (a1 | -0x100 | 1) as u32;
                    break;
                } else {
                    if !(a2 == 2) || !((v17 as i8 & 146)) {
                        uu_rm::prompt_file_permission_readonly(a0, a1);
                        return v21;
                    }
                    if !v18 {
                        v1 = uucore::util_name();
                        v2 = v28;
                        eprint!("{:?}: ", &v1);
                        v1 = 1;
                        v2 = a0;
                        v3 = a1;
                        v4 = 1 as u8;
                        eprint!("remove regular empty file {:?}?", &v1);
                        eprint!(" ");
                        v13 = struct8 {
                            field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
                        };
                        v30 = <std::io::stdio::Stderr as std::io::Write>::flush(&v13);
                        if v30 {
                            v5 = v30;
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
                        v4 = 1 as u8;
                        eprint!("remove file {:?}?", &v1);
                        eprint!(" ");
                        v13 = struct8 {
                            field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
                        };
                        v29 = <std::io::stdio::Stderr as std::io::Write>::flush(&v13);
                        if v29 {
                            v5 = v29;
                            v1 = uucore::util_name();
                            v2 = v27;
                            eprint!("{:?}: ", &v1);
                            eprintln!("{:?}", &v5);
                            std::process::exit(1); /* do not return */
                        }
                    }
                    v26 = uucore::read_yes() as i32;
                    break;
                }
                v21 = v26 as u64;
                return v21;
            },
        }
    }
}
