fn uu_rm::remove_dir(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: core::option::Option<core::result::Result<std::fs::DirEntry, std::io::error::Error>>;  // [bp-0xc8]
    let v1: u64;  // [bp-0x98]
    let v2: u64;  // [bp-0x90]
    let v3: u64;  // [bp-0x88]
    let v4: u8;  // [bp-0x80]
    let v5: u8;  // [bp-0x78]
    let v6: i8;  // [bp-0x70]
    let v7: u64;  // [bp-0x58]
    let v8: u8;  // [bp-0x50]
    let v10: u64;  // [bp-0x38]
    let v11: u8;  // [bp-0x30]
    let v13: u32;  // ecx
    let v14: u64;  // rdx
    let v15: u64;  // rdx
    let v16: u64;  // rax
    let v17: u64;  // rdx
    let v18: u64;  // rdx
    let v19: u64;  // rdx
    let v22: u64;  // rax

    if !uu_rm::prompt_dir(a0, a1, *((a2 + 6) as &i8)) as i8 {
        return 0;
    }
    std::fs::read_dir(a0, a1, v13);
    if v8 == 2 {
        v1 = uucore::util_name();
        v2 = v14;
        eprint!("{}: ", &v1);
        v1 = 1;
        v2 = a0;
        v3 = a1;
        v4 = 1;
        eprintln!("cannot remove {}: Directory not empty", &v1);
    } else {
        v10 = v7;
        v11 = v8;
        if !*((a2 + 4) as &i8) && !*((a2 + 3) as &i8) {
            v1 = uucore::util_name();
            v2 = v15;
            eprint!("{}: ", &v1);
            v1 = 1;
            v2 = a0;
            v3 = a1;
            v4 = 1;
            eprintln!("cannot remove {}: Is a directory", &v1);
        } else {
            v0 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v10);
            match v0 {
                Some(_) => {
                    v1 = uucore::util_name();
                    v2 = v17;
                    eprint!("{}: ", &v1);
                    v1 = 1;
                    v2 = a0;
                    v3 = a1;
                    v4 = 1;
                    eprintln!("cannot remove {}: Directory not empty", &v1);
                },
                None => {
                    v16 = std::fs::remove_dir(a0 as u32, a1 as u32);
                    if v16 {
                        if std::io::error::Error::kind(v16) == 1 {
                            v1 = uucore::util_name();
                            v2 = v18;
                            eprint!("{}: ", &v1);
                            v1 = 1;
                            v2 = a0;
                            v3 = a1;
                            v4 = 1;
                            eprintln!("cannot remove {}: Permission denied", &v1);
                        } else {
                            v1 = uucore::util_name();
                            v2 = v19;
                            eprint!("{}: ", &v1);
                            v1 = 1;
                            v2 = a0;
                            v3 = a1;
                            v4 = 1;
                            eprintln!("cannot remove {}: {}", &v1, &v9);
                        }
                    } else {
                        if *((a2 + 5) as &i8) {
                            uu_rm::normalize(&v5, a0, a1);
                            v1 = 1;
                            v2 = *(&v6 as &i128) as u128;
                            v4 = 1;
                            println!("removed directory {}", &v1);
                        }
                    }
                },
            }
        }
    }
    return v22 & -0x100 | 1;
}
