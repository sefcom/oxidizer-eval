fn uu_tail::paths::Input::resolve(a0: i64, a1: i64) -> long long {
    let v0: struct24;  // [bp-0x48]
    let v1: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x48]
    let v2: struct24;  // [bp-0x48]
    let v3: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x48]
    let v4: u64;  // [bp-0x40]

    if !((((0 ^ *((a1 + 24) as &i64)) & (0 ^ -(*((a1 + 24) as &i64)))) >> 63) as char) {
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("/dev/stdin");
        if !<std::path::PathBuf as core::cmp::PartialEq>::eq(*((a1 + 32) as &i64), *((a1 + 40) as &i64)) {
            v1 = std::fs::canonicalize(*((a1 + 32) as &i64), *((a1 + 40) as &i64));
            match v1 {
                Ok(_) => {
                    return struct24 {
                        field_0: v1 as i128
                        field_16: *((&v1 as &char + 16) as &i64)
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
    v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("/dev/fd/0");
    v3 = std::fs::canonicalize(v4, v2.field_16);
    match v3 {
        Ok(_) => {
            return struct24 {
                field_0: v3 as i128
                field_16: *((&v3 as &char + 16) as &i64)
            };
        },
        Err(_) => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
    }
}
