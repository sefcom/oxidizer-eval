fn just::function::replace_regex(a0: i64, a1: i64, a2: u64, a3: u64, a4: u64, a5: u64, a6: u64, a7: u64) -> long long {
    let v0: struct24;  // [bp-0x98], Other Possible Types: u8
    let v1: u192;  // [bp-0x98]
    let v2: u64;  // [bp-0x90]
    let v3: u8;  // [bp-0x88]
    let v4: struct24;  // [bp-0x78], Other Possible Types: u128
    let v5: i64;  // [bp-0x68]
    let v6: struct24;  // [bp-0x58], Other Possible Types: u8
    let v7: iNone;  // [bp-0x50], Other Possible Types: struct24, u192
    let v8: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x40], Other Possible Types: unsigned long
    let v9: struct24;  // [bp-0x38]

    regex::regex::string::Regex::new(&v6, a4, a5);
    if !v6 {
        v4 = v7;
        v0 = just::function::replace_regex::{{closure}}(&v4);
        v4 = v1;
        return struct32 {
            field_0: 1
            field_8: v4.field_0
            field_24: v0.field_16
        };
    }
    v4 = v7;
    v5 = v8;
    v7 = v4;
    v8 = v5;
    regex::regex::string::Regex::replacen(&v0, &v6, a2, a3, a6, a7);
    v9 = <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(v2, *(&v3 as &i64));
    return struct32 {
        field_0: 0
        field_8: v9.field_0
        field_24: v9.field_16
    };
}
