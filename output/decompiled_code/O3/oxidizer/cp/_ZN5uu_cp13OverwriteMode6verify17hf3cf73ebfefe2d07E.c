fn uu_cp::OverwriteMode::verify(a0: i64, a1: i64, a2: i64, a3: i64, a4: i8) -> u64 {
    let v0: i64;  // [sp-0x100]
    let v1: i64;  // [sp-0xf8]
    let v2: i64;  // [sp-0xf0]
    let v3: i8;  // [bp-0xe8]
    let v4: i64;  // [sp-0xd0]
    let v5: i64;  // [sp-0xc8]
    let v6: i64;  // [sp-0xc0]
    let v7: i8;  // [sp-0xb8]
    let v8: i64;  // [sp-0xb0]
    let v9: i64;  // [bp-0xa8]
    let v10: i64;  // [sp-0x98]
    let v11: i384;  // [sp-0x88], Other Possible Types: Option<struct48>
    let v12: i64;  // [bp-0x58]
    let v13: i64;  // [sp-0x48]
    let v14: i64;  // [sp-0x38]
    let v16: i64;  // rax
    let v17: i64;  // rdx
    let v18: i64;  // rdx
    let v19: i64;  // rsi
    let v20: i64;  // rax
    let v21: i64;  // rsi
    let v22: i64;  // rax
    let v23: i64;  // rdi
    let v24: i8;  // bpl
    let v25: i64;  // rdi

    if a1 {
        v16 = a1 & 4294967295;
        if v16 != 1 {
            if a4 {
                v0 = 1;
                v1 = a2;
                v2 = a3;
                v3 = 1;
                v16 = println!("skipped {:?}", &v0);
            }
            return struct9 {
                field_0: 8
                field_8: 0
            };
        } else {
            v11 = uu_cp::file_mode_for_interactive_overwrite(a2, a3);
            if v11 == 0x8000000000000000 {
                v0 = uucore::util_name();
                v1 = v18;
                eprint!("{:?}: ", &v0);
                v0 = 1;
                v1 = a2;
                v2 = a3;
                v3 = 1;
                eprint!("overwrite {:?}?", &v0);
                eprint!(" ");
                v12 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                v22 = <std::io::stdio::Stderr as std::io::Write>::flush(&v12, v21, v18);
                if v22 {
                    v9 = v22;
                    v0 = uucore::util_name();
                    v1 = v18;
                    eprint!("{:?}: ", &v0);
                    eprintln!("{:?}", &v9);
                    std::process::exit(1); /* do not return */
                }
                v24 = uucore::read_yes(v25, v21, v18) as i32;
            } else {
                v13 = *((&v11 as &char + 16) as &i64);
                v12 = v11;
                v10 = *((&v11 as &char + 40) as &i64);
                v9 = *((&v11 as &char + 24) as &i128);
                v0 = uucore::util_name();
                v1 = v17;
                eprint!("{:?}: ", &v0);
                v4 = 1;
                v5 = a2;
                v6 = a3;
                v7 = 1;
                eprint!("replace {:?}, overriding mode {:?} ({:?})?", &v4, &v12, &v9);
                eprint!(" ");
                v14 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                v20 = <std::io::stdio::Stderr as std::io::Write>::flush(&v14, v19, v17);
                if v20 {
                    v8 = v20;
                    v0 = uucore::util_name();
                    v1 = v17;
                    eprint!("{:?}: ", &v0);
                    eprintln!("{:?}", &v8);
                    std::process::exit(1); /* do not return */
                }
                v24 = uucore::read_yes(v23, v19, v17) as i32;
            }
            if !v24 {
                return struct9 {
                    field_0: 8
                    field_8: 1
                };
            }
        }
    }
    return struct8 {
        field_0: 13
    };
}
