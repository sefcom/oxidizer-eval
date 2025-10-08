fn starship::modules::terraform::get_terraform_workspace(a0: i64, a1: i64) -> int {
    let v0: Option<struct24>;  // [bp-0x80], Other Possible Types: struct24
    let v1: Option<struct48>;  // [bp-0x80]
    let v2: Option<struct48>;  // [bp-0x70]
    let v3: u8;  // [bp-0x68]
    let v4: core::str::pattern::CharSearcher;  // [bp-0x60]
    let v5: Option<struct24>;  // [bp-0x58]
    let v6: struct24;  // [bp-0x48]
    let v7: i64;  // [bp-0x40]
    let v8: struct40;  // [bp-0x38]
    let v9: Option<struct24>;  // [bp-0x30]

    v9 = starship::context_env::Env::get_env("TF_WORKSPACE");
    if !((((0 ^ v9 as i64) & (0 ^ -(v9 as i64))) >> 63) as char) {
        return struct24 {
            field_0: v9 as i128
            field_16: *((&v9 as &char + 16) as &i64)
        };
    }
    v0 = starship::context_env::Env::get_env("TF_DATA_DIR");
    match v0 {
        None => {
            std::path::Path::join(&v3, *((a1 + 184) as &i64), *((a1 + 192) as &i64), ".terraform");
        },
        Some(_) => {
            v5 = v2;
            v3 = v0 as i128 as u128;
        },
    }
    std::path::Path::join(&v1 as u8, v4, v5, "environment");
    v6 = starship::utils::read_file(&v1 as u8);
    if v6.field_0 as i64 != 0x8000000000000000 {
        return struct24 {
            field_0: v6.field_0
            field_16: v8
        };
    } else if std::io::error::Error::kind(v7) as u8 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    } else {
        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("default");
        return struct24 {
            field_0: v0.field_0
            field_16: v2
        };
    }
}
