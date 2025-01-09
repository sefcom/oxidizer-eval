fn uu_tail::paths::Input::resolve(a0: &Option<struct24>, a1: &u64) -> u64 {
    let v0: i192;  // [sp-0x90], Other Possible Types: Result<struct24, struct8>, struct24
    let v1: i64;  // [bp-0x78]
    let v2: i64;  // [sp-0x68]
    let v3: i192;  // [sp-0x58], Other Possible Types: struct24
    let v4: i192;  // [sp-0x40], Other Possible Types: struct24
    let v6: i64;  // r14
    let v7: i64;  // r15

    if *((a1 + 24) as &i64) != 0x8000000000000000 {
        v0 = std::sys::os_str::bytes::Slice::to_owned("/dev/stdin");
        v6 = *((a1 + 32) as &i64);
        v7 = *((a1 + 40) as &i64);
        if !<std::path::PathBuf as core::cmp::PartialEq>::eq(v6, v7, *((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64)) as i32 {
            v0 = std::fs::canonicalize(v6, v7);
            return v0;
            return struct8 {
                field_0: 0x8000000000000000
            };
        }
    }
    v4 = std::sys::os_str::bytes::Slice::to_owned("/dev/stdin");
    v0 = std::fs::canonicalize(*((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64));
    match v0 {
        Err(_) => {
            v1 = 0x8000000000000000;
        },
        Ok(v1) => {
            if v1 != 0x8000000000000000 {
                v0 = std::sys::os_str::bytes::Slice::to_owned("/dev/fd/0");
                v3 = v0;
                if !<std::path::PathBuf as core::cmp::PartialEq>::eq(*((&v1 as &char + 8) as &i64), v2, *((&v3 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64)) as i8 {
                    return Some(struct24 {
                        field_0: v1
                        field_16: v2
                    });
                }
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
        },
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
