fn uu_nohup::find_stdout() -> Result<struct16, struct12> {
    let a0: i64;  // rdi
    let v0: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0xf8], Other Possible Types: u64
    let v1: u128;  // [bp-0xf8]
    let v2: void*;  // [bp-0xf0], Other Possible Types: u64
    let v3: u32;  // [bp-0xe8]
    let v4: u64;  // [bp-0xe8]
    let v5: u64;  // [bp-0xe0]
    let v6: struct8;  // [bp-0xd8]
    let v7: u32;  // [bp-0xd0]
    let v8: alloc::string::String;  // [bp-0xc8]
    let v9: u64;  // [bp-0xc0]
    let v10: struct56;  // [bp-0xb8]
    let v11: &str;  // [bp-0xb0], Other Possible Types: struct24, struct56, void*, u64
    let v12: void*;  // [bp-0xa8], Other Possible Types: alloc::string::String, &str, u64
    let v13: u64;  // [bp-0xa0]
    let v14: u8;  // [bp-0x98]
    let v15: u64;  // [bp-0x90]
    let v16: u64;  // [bp-0x78]
    let v17: u32;  // [bp-0x70]
    let v18: u8;  // [bp-0x6e]
    let v19: u16;  // [bp-0x6c]
    let v20: struct13;  // [bp-0x68]
    let v21: u16;  // [bp-0x5c]
    let v22: Result<struct4, struct8>;  // [bp-0x58]
    let v23: u32;  // [bp-0x54]
    let v24: u64;  // [bp-0x50]
    let v25: Result<struct4, struct8>;  // [bp-0x48]
    let v26: i32;  // [bp-0x44]
    let v27: struct8;  // [bp-0x40]
    let v28: struct8;  // [bp-0x38]
    let v30: u8;  // r15b
    let v31: u64;  // r13
    let v32: &str;  // rdx
    let v33: u64;  // rdx

    v0 = std::env::var("POSIXLY_CORRECT");
    v30 = v0 as i8;
    v16 = 0x1b600000000;
    v19 = 0;
    v17 = 0;
    v19 = 1;
    v18 = 1;
    v22 = std::fs::OpenOptions::open(&v16, "nohup.out");
    match v22 {
        Ok(_) => {
            v11 = uucore::util_name();
            v12 = v33;
            eprint!("{}: ", &v11);
            v11 = 0;
            v12 = "nohup.out";
            v14 = 1;
            eprintln!("ignoring input and appending output to {}", &v11);
            return struct16 {
                field_0: 0
                field_8: v23
            };
        },
        Err(v31) => {
            v11 = struct56 {
                field_0: std::env::var("HOME")
                field_48: v31
            };
            match v11 {
                Err(_) => {
                    v3 = (v30 ^ 1) as u32 * 2 + 125;
                    v2 = v31;
                    v0 = 9223372036854775810;
                    return Ok(struct16 {
                        field_0: alloc::boxed::Box<T>::new(&v0) as u64
                        field_8: &g_4debb0
                    });
                },
                Ok(v8) => {
                    std::path::PathBuf::push(&v8);
                    v1 as u192 = core::str::converts::from_utf8(v9, v10);
                    match v1 as u192 {
                        Err(_) => {
                            core::option::unwrap_failed(); /* do not return */
                        },
                        Ok(_) => {
                            v21 = 0;
                            v20 = struct13 {
                                field_0: 0x1b600000000
                                field_8: 0
                                field_12: 1
                            };
                            v25 = std::fs::OpenOptions::open(&v20, &v8);
                            match v25 {
                                Ok(_) => {
                                    v11 = uucore::util_name();
                                    v12 = v32;
                                    eprint!("{}: ", &v11);
                                    v11 = 0;
                                    v12 = v2;
                                    v13 = v3;
                                    v14 = 1;
                                    eprintln!("ignoring input and appending output to {}", &v11);
                                    return struct16 {
                                        field_0: 0
                                        field_8: v26
                                    };
                                },
                                Err(v28) => {
                                    v15 = v31;
                                    v11 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v2, v3);
                                    v4 = v13;
                                    v1 = *(&v11.field_0 as &i128) as u128;
                                    v7 = v3;
                                    v5 = v31;
                                    v6 = v28;
                                    return Ok(struct16 {
                                        field_0: alloc::boxed::Box<T>::new(&v1 as u192) as u64
                                        field_8: &g_4debb0
                                    });
                                },
                            }
                        },
                    }
                },
            }
        },
    }
}
