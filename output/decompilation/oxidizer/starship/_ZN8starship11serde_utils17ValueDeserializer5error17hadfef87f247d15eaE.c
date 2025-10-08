fn starship::serde_utils::ValueDeserializer::error(a0: i64, a1: i64) -> long long {
    let v0: &mut [u8];  // [bp-0xb8], Other Possible Types: u128
    let v1: &str;  // [bp-0xb0]
    let v2: Option<struct48>;  // [bp-0xa8], Other Possible Types: struct16
    let v3: struct16;  // [bp-0xa0]
    let v4: Option<struct24>;  // [bp-0x98]
    let v5: std::io::stdio::Stdout;  // [bp-0x90]
    let v6: struct16;  // [bp-0x80]
    let v7: struct16;  // [bp-0x70]
    let v8: &str;  // [bp-0x68]
    let v9: struct24;  // [bp-0x60]
    let v10: core::result::Result<(), std::io::error::Error>;  // [bp-0x58]
    let v11: struct16;  // [bp-0x50]
    let v12: struct8;  // [bp-0x48]
    let v13: Option<struct24>;  // [bp-0x40]
    let v14: u8;  // [bp-0x30]
    let v16: &str;  // r15
    let v17: core::option::Option<&str>;  // rax

    if *((a0 + 56) as &i64) && *((a0 + 24) as &i64) {
        v16 = *((a0 + 48) as &i64);
        v6 = struct16 {
            field_0: *((a0 + 56) as &i64)
            field_8: *((a0 + 64) as &i64)
        };
        v17 = <&str as core::str::pattern::Pattern>::strip_suffix_of("Config", *((a0 + 40) as &i64), *((a0 + 48) as &i64)) as u64;
        v7 = v17;
        v8 = v16;
        v0 = &v7;
        v1 = <&T as core::fmt::Display>::fmt;
        v2 = &v6;
        v3 = <&T as core::fmt::Display>::fmt;
        v4 = a1;
        v5 = <alloc::string::String as core::fmt::Display>::fmt;
        v9 = "Error in '";
        v10 = 3;
        v13 = 0;
        v11 = &v0;
        v12 = 3;
        core::option::Option<T>::map_or_else(&v14, 0, v16, &v9);
        return <serde_core::de::value::Error as serde_core::de::Error>::custom(&v14);
    }
    v2 = *((a1 + 16) as &i64);
    v0 = *(a1 as &i128);
    return <serde_core::de::value::Error as serde_core::de::Error>::custom(&v0);
}
