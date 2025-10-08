fn uu_stat::Stater::do_stat(a0: i64, a1: i64, a2: i64, a3: i8) -> u64 {
    let v0: u128;  // [bp-0x228]
    let v2: u64;  // [bp-0x220]
    let v3: u64;  // [bp-0x218]
    let v4: void*;  // [bp-0x208], Other Possible Types: struct20, u64
    let v5: alloc::string::String;  // [bp-0x200], Other Possible Types: u64
    let v6: alloc::string::String;  // [bp-0x1f8], Other Possible Types: u64
    let v7: u8;  // [bp-0x1f0]
    let v9: u64;  // [bp-0x1b0]
    let v10: Result<struct120, struct24>;  // [bp-0x1a8], Other Possible Types: struct24, u64
    let v11: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x1a8], Other Possible Types: u192
    let v12: u64;  // [bp-0x1a0]
    let v14: u64;  // [bp-0x198]
    let v15: u8;  // [bp-0x170]
    let v16: struct24;  // [bp-0xf8]
    let v17: u64;  // [bp-0xf0]
    let v18: u64;  // [bp-0xe8]
    let v19: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0], Other Possible Types: u64
    let v20: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v21: u64;  // [bp-0xd8]
    let v23: core::option::Option<&str>;  // r14
    let v24: u64;  // rbx
    let v25: core::option::Option<u32>;  // r12b
    let v26: u64;  // rdx
    let v27: u32;  // ebx
    let v28: u64;  // rdx
    let v29: u64;  // rdx
    let v30: u64;  // rdi
    let v31: u64;  // r15
    let v32: u64;  // rdx
    let v34: u64;  // rcx
    let v36: u64;  // r12
    let v37: core::fmt::Arguments;  // rsi
    let v40: u32;  // edx

    v16 = alloc::string::String::from_utf8_lossy(a1, a2);
    v23 = v17;
    v24 = v18;
    if alloc::string::<impl core::cmp::PartialEq<&str> for alloc::borrow::Cow<str>>::eq(v23, v24) {
        v25 = *((a0 + 97) as &i8);
        match v25 {
            Some(_) => {
                v19 = uucore::util_name();
                v21 = v26;
                eprint!("{}: ", &v19);
                eprintln!("using '-' to denote standard input does not work in file system mode");
            },
            None => {
                v11 = std::fs::canonicalize("/dev/stdin");
                if (((0 ^ v11 as i64) & (0 ^ -(v10))) >> 63) as char {
                    v10 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("/dev/stdin");
                }
                v3 = v14;
                v0 = v11 as i128 as u128;
                if let Some(_) = v25 {
                    goto LABEL_47704d;
                }
LABEL_477207:
                if *((a0 + 96) as &i8) || a3 && alloc::string::<impl core::cmp::PartialEq<&str> for alloc::borrow::Cow<str>>::eq(v23, v24) as u8 {
                    v19 = std::fs::metadata(&v0 as u8, v28);
                } else {
                    v20 = std::fs::symlink_metadata(&v0 as u8, v28);
                }
                match v20 {
                    Err(_) => {
                        v4 = uucore::util_name();
                        v5 = v32;
                        eprint!("{}: ", &v4);
                        v4 = 0;
                        v5 = v23;
                        v6 = v24;
                        v7 = 1;
                        eprintln!("cannot stat {}: {}", &v4, &v8 as u128);
                    },
                    Ok(_) => {
                        v9 = v23;
                        memcpy(&v10, &v20, 176);
                        v36 = *((a0 + v34 + 8) as &i64) + *((a0 + v34 + 16) as &i64) * 40;
                        do {
                            if v37 == v36 {
                                if v37 == v36 {
                                    return v27 as u64;
                                }
                            } else {
                                if v37 == v36 {
                                    return v27 as u64;
                                }
                            }
                        } while (!(uu_stat::Stater::process_token_files(a0, v37, &v10, v9, v24, &v0 as u8, *(&v15 as &i32), *((a0 + 98) as &i8)) as u8 & 1));
                        v27 = v40;
                    },
                }
            },
        }
    } else {
        v10 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a2);
        v3 = v14;
        v0 = v10.field_0;
        if !(*((a0 + 97) as &i8) & 1) {
            goto LABEL_477207;
        }
LABEL_47704d:
        v10 = uucore::features::fsext::statfs(v2, v3);
        match v10 {
            Err(_) => {
                v4 = uucore::util_name();
                v5 = v29;
                eprint!("{}: ", &v4);
                v4 = 0;
                v5 = v23;
                v6 = v24;
                v7 = 1;
                eprintln!("cannot read file system information for {}: {}", &v4, &v8);
            },
            Ok(_) => {
                while (v31) {
                    uu_stat::process_token_filesystem(v30, &v12, v23, v24 as u32);
                }
            },
        }
    }
    return v27;
}
