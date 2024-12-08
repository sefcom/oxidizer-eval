fn uu_tail::paths::Input::resolve(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i192;  // [sp-0x90], Other Possible Types: Result<struct24, struct16>, struct24
    let v1: i64;  // [bp-0x78]
    let v2: i64;  // [sp-0x68]
    let v3: i128;  // [sp-0x58]
    let v4: i64;  // [sp-0x48]
    let v5: i192;  // [sp-0x40], Other Possible Types: struct24
    let v7: i64;  // r14
    let v8: i64;  // r15
    let v9: i64;  // r8
    let v10: i64;  // r9

    if *((a1 + 24) as &i64) != 0x8000000000000000 {
        v0 = std::sys::os_str::bytes::Slice::to_owned("/dev/stdin");
        v7 = *((a1 + 32) as &i64);
        v8 = *((a1 + 40) as &i64);
        if !<std::path::PathBuf as core::cmp::PartialEq>::eq(v7, v8, *((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64), v9, v10) as i32 {
            v0 = std::fs::canonicalize(v7, v8);
            match v0 {
                Ok(_) => {
                    return struct8 {
                        field_0: 0x8000000000000000
                    };
                },
                Err(_) => {
                    return struct8 {
                        field_0: 0x8000000000000000
                    };
                },
            }
        }
    }
    v5 = std::sys::os_str::bytes::Slice::to_owned("/dev/stdin");
    v0 = std::fs::canonicalize(*((&v5 as &char + 8) as &i64), *((&v5 as &char + 16) as &i64));
    match v0 {
        Ok(_) => {
            v1 = v0;
            v2 = *((&v0 as &char + 16) as &i64);
            if v1 == 0x8000000000000000 {
                goto LABEL_5031b5;
            }
            v0 = std::sys::os_str::bytes::Slice::to_owned("/dev/fd/0");
            v4 = *((&v0 as &char + 16) as &i64);
            v3 = v0;
            if !<std::path::PathBuf as core::cmp::PartialEq>::eq(*((&v1 as &char + 8) as &i64), v2, *((&v3 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64), v9, v10) as i8 {
                *((a0 + 16) as &i64) = v2;
                *(a0 as &i128) = v1;
            } else {
                *(a0 as &i64) = 0x8000000000000000;
            }
        },
        Err(_) => {
            v1 = 0x8000000000000000;
LABEL_5031b5:
            *(a0 as &i64) = 0x8000000000000000;
        },
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
