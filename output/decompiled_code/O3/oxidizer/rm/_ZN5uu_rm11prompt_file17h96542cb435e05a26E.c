fn uu_rm::prompt_file(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: struct4;  // [bp-0x164]
    let v1: i64;  // [sp-0x160]
    let v2: i64;  // [sp-0x158]
    let v3: i64;  // [sp-0x150]
    let v4: i8;  // [bp-0x148]
    let v5: i64;  // [sp-0x130]
    let v6: i64;  // [sp-0x128]
    let v7: i64;  // [sp-0x120]
    let v8: i64;  // [sp-0x118]
    let v9: i8;  // [sp-0x110]
    let v10: i64;  // [sp-0x108]
    let v11: i16;  // [bp-0x100]
    let v12: i16;  // [sp-0xfc]
    let v13: i64;  // [sp-0xf8]
    let v14: Result<struct4, struct8>;  // [sp-0xf0], Other Possible Types: i64
    let v15: i8;  // [bp-0xe8]
    let v16: i64;  // [sp-0xe0], Other Possible Types: struct16, Result<struct176, struct16>
    let v18: i64;  // rbp
    let v19: i64;  // rax
    let v20: i64;  // rax
    let v21: i64;  // rdx
    let v22: i64;  // rsi
    let v23: i64;  // rax
    let v26: i64;  // rdi
    let v27: i32;  // eax
    let v28: i64;  // rdx
    let v29: i64;  // rdx
    let v30: i64;  // rsi
    let v31: i64;  // rax
    let v32: i64;  // rax
    let v33: i64;  // rdi
    let v34: i64;  // rdx

    v18 = a2;
    if v18 == 2 {
        v16 = std::fs::symlink_metadata(a0, a1);
        if !(v16 == 2) && !((0xf000 & *((&v16 as &char + 56) as &i32)) != 0xa000) {
            v6 = uucore::util_name();
            v7 = v21;
            eprint!("{:?}: ", &v6);
            v6 = 1;
            v7 = a0;
            v8 = a1;
            v9 = 1;
            eprint!("remove symbolic link {:?}?", &v6);
            eprint!(" ");
            v5 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
            v23 = <std::io::stdio::Stderr as std::io::Write>::flush(&v5, v22, v21);
            if v23 {
                v14 = v23;
                v6 = uucore::util_name();
                v7 = v21;
                eprint!("{:?}: ", &v6);
                eprintln!("{:?}", &v14);
                std::process::exit(1); /* do not return */
            }
            v27 = uucore::read_yes(v26, v22, v21) as i32;
        } else {
            goto LABEL_4b8834;
        }
    } else {
        v20 = v19 | -0x100 | 1;
        if !v18 {
            return v20;
        }
LABEL_4b8834:
        v10 = 0x1b600000000;
        v11 = 0;
        v12 = 0;
        v11 = 257;
        v14 = std::fs::OpenOptions::open(&v10, a0, a1);
        match v14 {
            Err(v16) => {
                v20 = core::ptr::drop_in_place<std::io::error::Error>(&v16) | -0x100 | 1;
                if std::io::error::Error::kind(v15) as i32 as i8 == 1 {
                    v20 = uu_rm::prompt_file_permission_readonly(a0, a1);
                    return v20;
                }
                return v20;
            },
            Ok(_) => {
                v0 = struct4 {
                    field_0: *((&v14 as &char + 4) as &i32)
                };
                v16 = std::fs::File::metadata(&v0);
            },
        }
        if v16 == 2 {
            v27 = a1 | -0x100 | 1;
        } else {
            if !(v18 == 2) || !((*((&v16 as &char + 56) as &i32) & 146)) {
                vvar_589{reg 16} = uu_rm::prompt_file_permission_readonly(a0, a1);
                return v20;
            }
            if !*((&v16 as &char + 80) as &i64) {
                v1 = uucore::util_name();
                v2 = v29;
                eprint!("{:?}: ", &v1);
                v1 = 1;
                v2 = a0;
                v3 = a1;
                v4 = 1;
                eprint!("remove regular empty file {:?}?", &v1);
                eprint!(" ");
                v13 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                v32 = <std::io::stdio::Stderr as std::io::Write>::flush(&v13, v30, v29);
                if v32 {
                    v5 = v32;
                    v1 = uucore::util_name();
                    v2 = v29;
                    eprint!("{:?}: ", &v1);
                    eprintln!("{:?}", &v5);
                    std::process::exit(1); /* do not return */
                }
            } else {
                v1 = uucore::util_name();
                v2 = v28;
                eprint!("{:?}: ", &v1);
                v1 = 1;
                v2 = a0;
                v3 = a1;
                v4 = 1;
                eprint!("remove file {:?}?", &v1);
                eprint!(" ");
                v13 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                v31 = <std::io::stdio::Stderr as std::io::Write>::flush(&v13, v30, v28);
                if v31 {
                    v5 = v31;
                    v1 = uucore::util_name();
                    v2 = v28;
                    eprint!("{:?}: ", &v1);
                    eprintln!("{:?}", &v5);
                    std::process::exit(1); /* do not return */
                }
            }
            v27 = uucore::read_yes(v33, v30, v34) as i32;
        }
    }
    v20 = v27;
    return v20;
}
