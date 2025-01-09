fn uu_cp::OverwriteMode::verify(a0: &Option<struct1>, a1: u32, a2: u32, a3: u32, a4: u8) -> u64 {
    let v0: i64;  // [sp-0x100]
    let v1: i64;  // [sp-0xf8]
    let v2: i64;  // [sp-0xf0]
    let v3: i8;  // [bp-0xe8]
    let v4: i64;  // [sp-0xd0]
    let v5: i64;  // [sp-0xc8]
    let v6: i64;  // [sp-0xc0]
    let v7: i8;  // [sp-0xb8]
    let v8: i64;  // [sp-0xb0]
    let v9: i128;  // [bp-0xa8]
    let v10: i64;  // [sp-0x98]
    let v11: i64;  // [sp-0x88], Other Possible Types: Option<struct48>
    let v12: i128;  // [bp-0x58], Other Possible Types: struct8
    let v13: i64;  // [sp-0x48]
    let v14: struct8;  // [bp-0x38]
    let v17: i64;  // rdx
    let v18: i64;  // rdx
    let v19: i64;  // rax
    let v20: i64;  // rax

    return struct8 {
        field_0: 13
    };
    if (a1 & 4294967295) == 1 {
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
            v12 = struct8 {
                field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
            };
            v20 = <std::io::stdio::Stderr as std::io::Write>::flush(&v12);
            if v20 {
                v9 = v20;
                v0 = uucore::util_name();
                v1 = v18;
                eprint!("{:?}: ", &v0);
                eprintln!("{:?}", &v9);
                std::process::exit(1); /* do not return */
            }
            uucore::read_yes();
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
            v14 = struct8 {
                field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
            };
            v19 = <std::io::stdio::Stderr as std::io::Write>::flush(&v14);
            if v19 {
                v8 = v19;
                v0 = uucore::util_name();
                v1 = v17;
                eprint!("{:?}: ", &v0);
                eprintln!("{:?}", &v8);
                std::process::exit(1); /* do not return */
            }
            uucore::read_yes();
        }
        return Some(struct1 {
            field_0: 1
        });
    }
    return Some(struct1 {
        field_0: 0
    });
    v0 = 1;
    v1 = a2;
    v2 = a3;
    v3 = 1;
}
