fn bat::assets::build_assets::acknowledgements::normalize_license_text(a1: i64, a2: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: u8;  // [bp-0xa0]
    let v1: u64;  // [bp-0x98]
    let v2: u64;  // [bp-0x90]
    let v3: struct32;  // [bp-0x88]
    let v4: struct32;  // [bp-0x88]
    let v5: void*;  // [bp-0x80]
    let v6: struct32;  // [bp-0x68]
    let v7: struct32;  // [bp-0x48]

    v3 = regex::regex::string::Regex::new("\\s");
    v7 = core::result::Result<T,E>::unwrap(&v3, "src/assets/build_assets/acknowledgements.rs");
    regex::regex::string::Regex::replacen(&v0, &v7, a1, a2);
    v4 = regex::regex::string::Regex::new(" +");
    v6 = core::result::Result<T,E>::unwrap(&v4, "src/assets/build_assets/acknowledgements.rs");
    regex::regex::string::Regex::replacen(&v4, &v6, v1, v2);
    <&str as alloc::string::SpecToString>::spec_to_string(a0, v5, v4.field_16);
    return;
}
