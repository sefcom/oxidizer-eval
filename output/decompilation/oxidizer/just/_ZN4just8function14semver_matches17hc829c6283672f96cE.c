fn just::function::semver_matches(a0: i64, a1: i64, a2: u64, a3: u64, a4: u64, a5: u64) -> long long {
    let v0: struct24;  // [bp-0x100]
    let v1: struct40;  // [bp-0x100], Other Possible Types: u64
    let v2: u64;  // [bp-0xf8]
    let v3: i64;  // [bp-0xf0]
    let v4: struct105;  // [bp-0xe8]
    let v5: core::fmt::rt::Argument;  // [bp-0xe0]
    let v6: struct24;  // [bp-0xd8], Other Possible Types: struct40
    let v7: struct24;  // [bp-0xd8]
    let v8: i64;  // [bp-0xc8]
    let v9: core::fmt::rt::Argument;  // [bp-0xa8]
    let v10: core::fmt::rt::Argument;  // [bp-0x98]
    let v11: core::fmt::Arguments;  // [bp-0x88], Other Possible Types: struct24
    let v12: core::fmt::rt::Argument;  // [bp-0x78]
    let v13: iNone;  // [bp-0x68]
    let v14: struct105;  // [bp-0x58], Other Possible Types: u64
    let v15: struct24;  // [bp-0x50]
    let v16: core::fmt::Arguments;  // [bp-0x28]
    let v18: struct105;  // rdx

    v0 = semver::parse::<impl core::str::traits::FromStr for semver::VersionReq>::from_str(a4, a5);
    if (((0 ^ v0.field_0 as i64) & (0 ^ -(v1))) >> 63) as char {
        v6 = just::function::semver_matches::{{closure}}(v2, a2);
        v11 = v7;
        return struct32 {
            field_0: 1
            field_8: v11.field_0
            field_24: v8
        };
    }
    v11 = v0.field_0;
    v12 = v3;
    v9 = v0.field_0;
    v10 = v12;
    v1 = semver::parse::<impl core::str::traits::FromStr for semver::Version>::from_str(a2, a3);
    if !v1.field_0 {
        v15 = just::function::semver_matches::{{closure}}(v2, a2);
        v13 = v15.field_0;
        v14 = v15.field_16;
        return struct32 {
            field_0: 1
            field_8: v15.field_0
            field_24: v15.field_16
        };
    }
    v18 = v4;
    v16 = v18;
    v13 = *(&v1.field_8 as &i128);
    v14 = v18;
    v6 = struct40 {
        field_0: v1.field_0
        field_8: *(&v1.field_8 as &i128)
        field_24: v18
        field_32: v5
    };
    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec((semver::VersionReq::matches(&v9, &v6) ? &g_467738 : &g_46b313), semver::VersionReq::matches(&v9, &v6) & 255 ^ 5);
    return struct32 {
        field_0: 0
        field_8: v0.field_0
        field_24: v3
    };
}
