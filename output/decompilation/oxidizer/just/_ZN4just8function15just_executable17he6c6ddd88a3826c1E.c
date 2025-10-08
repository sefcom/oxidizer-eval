fn just::function::just_executable(a0: i64) -> long long {
    let v0: struct24;  // [bp-0x70], Other Possible Types: core::result::Result<std::path::PathBuf, std::io::error::Error>
    let v1: struct24;  // [bp-0x70], Other Possible Types: u64
    let v2: void*;  // [bp-0x68], Other Possible Types: u64
    let v3: u64;  // [bp-0x60]
    let v4: struct24;  // [bp-0x58], Other Possible Types: u128
    let v5: struct24;  // [bp-0x58]
    let v6: u64;  // [bp-0x50]
    let v7: struct24;  // [bp-0x48], Other Possible Types: u64
    let v8: struct24;  // [bp-0x38]
    let v10: u64;  // rdx

    v0 = std::env::current_exe();
    if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
        v4 = just::function::just_executable::{{closure}}(v2, v10);
        v8 = v5;
        return struct32 {
            field_0: 1
            field_8: v8.field_0
            field_24: v7
        };
    }
    v4 = v0 as i128;
    v7 = v3;
    v0 = core::str::converts::from_utf8(v6, v3);
    match v0 {
        Ok(_) => {
            v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v2, v3);
            return struct32 {
                field_0: 0
                field_8: v1.field_0 as i64
                field_16: *((&v1.field_0 as &char + 8) as &i128)
            };
        },
        Err(_) => {
            v0 = just::which::which::{{closure}}(v6, v3);
            return struct32 {
                field_0: 1
                field_8: v0.field_0
                field_24: v3
            };
        },
    }
}
