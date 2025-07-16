fn uu_cp::OverwriteMode::verify(a1: i8, a2: i64, a3: i32, a4: i8) -> Option<struct1> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x100], Other Possible Types: struct8
    let v1: u64;  // [bp-0xf8], Other Possible Types: std::path::Components
    let v2: u64;  // [bp-0xf0]
    let v3: u8;  // [bp-0xe8]
    let v4: u64;  // [bp-0xd0]
    let v5: u64;  // [bp-0xc8]
    let v6: u64;  // [bp-0xc0]
    let v7: u8;  // [bp-0xb8]
    let v9: u128;  // [bp-0xa8]
    let v11: u64;  // [bp-0x98]
    let v12: u64;  // [bp-0x88]
    let v13: u64;  // [bp-0x78]
    let v14: u128;  // [bp-0x70]
    let v15: u64;  // [bp-0x60]
    let v16: u8;  // [bp-0x58]
    let v17: u128;  // [bp-0x58]
    let v18: u64;  // [bp-0x48]
    let v19: u64;  // [bp-0x38]
    let v22: u64;  // rdx
    let v23: std::path::Components;  // rdx
    let v26: u8;  // bpl

    if !a1 {
        return struct8 {
            field_0: 13
        };
    }
    if a1 == 1 {
        uu_cp::file_mode_for_interactive_overwrite(a2, a3, a3);
        if v12 != 0x8000000000000000 {
            v18 = v13;
            memcpy(&v16, &v12, 16);
            v11 = v15;
            v9 = v14;
            v0 = uucore::util_name();
            v1 = v22;
            eprint!("{}: ", &v0);
            v4 = 1;
            v5 = a2;
            v6 = a3;
            v7 = 1;
            eprint!("replace {}, overriding mode {} ({})?", &v4, &v16 as u128, &v9);
            eprint!(" ");
            v19 = std::io::stdio::Stderr {
                inner: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
            };
            if <std::io::stdio::Stderr as std::io::Write>::flush(&v19) {
                v0 = uucore::util_name();
                v1 = v22;
                eprint!("{}: ", &v0);
                eprintln!("{}", &v8);
                std::process::exit(1); /* do not return */
            }
            v26 = uucore::read_yes() as i32;
        } else {
            v0 = uucore::util_name();
            v1 = v23;
            eprint!("{}: ", &v0);
            v0 = 1;
            v1 = a2;
            v2 = a3;
            v3 = 1;
            eprint!("overwrite {}?", &v0);
            eprint!(" ");
            v16 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
            v16 = std::io::stdio::Stderr {
                inner: v17 & 0xffffffffffffffff0000000000000000 | &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
            };
            if <std::io::stdio::Stderr as std::io::Write>::flush(&v16) {
                v0 = uucore::util_name();
                v1 = v23;
                eprint!("{}: ", &v0);
                eprintln!("{}", &v9);
                std::process::exit(1); /* do not return */
            }
            v26 = uucore::read_yes() as i32;
        }
        if !v26 {
            return Some(1);
        }
    } else {
        if !a4 {
            return Some(0);
        }
        v0 = 1;
        v1 = a2;
        v2 = a3;
        v3 = 1;
        println!("skipped {}", &v0);
        return Some(0);
    }
    return struct8 {
        field_0: 13
    };
}
