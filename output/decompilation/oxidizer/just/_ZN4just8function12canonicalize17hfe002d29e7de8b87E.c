fn just::function::canonicalize(a0: i64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0xa0], Other Possible Types: struct24
    let v1: struct24;  // [bp-0xa0]
    let v2: void*;  // [bp-0x98]
    let v3: u64;  // [bp-0x90]
    let v4: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x88], Other Possible Types: u128
    let v5: u64;  // [bp-0x80]
    let v6: u64;  // [bp-0x78]
    let v7: struct24;  // [bp-0x70]
    let v8: u64;  // [bp-0x68]
    let v9: u64;  // [bp-0x60]
    let v10: struct24;  // [bp-0x58], Other Possible Types: u128
    let v11: u64;  // [bp-0x48]

    v7 = just::execution_context::ExecutionContext::working_directory(*((*(a1 as &i64) + 16) as &i64), *((*(a1 as &i64) + 24) as &i64));
    v0 = std::path::Path::join(v8, v9, a2, a3);
    v4 = std::fs::canonicalize(&v0, a2);
    if (((0 ^ v4 as i64) & (0 ^ -(v4 as i64))) >> 63) as char {
        v0 = just::function::canonicalize::{{closure}}(v5, a2);
        v10 = v1;
        return struct32 {
            field_0: 1
            field_8: *(&v10.field_0 as &i128)
            field_24: v3
        };
    }
    v10 = v4 as i128;
    v11 = v6;
    v4 = v4 as i128;
    v6 = v11;
    v0 = core::str::converts::from_utf8(v5, v6);
    match v0 {
        Ok(_) => {
            v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v2, v3);
            return struct32 {
                field_0: 0
                field_8: v1.field_0
                field_16: *(&v1.field_8 as &i128)
            };
        },
        Err(_) => {
            v0 = just::function::canonicalize::{{closure}}(v5, v6);
            return struct32 {
                field_0: 1
                field_8: *(&v0.field_0 as &i128)
                field_24: v3
            };
        },
    }
}
