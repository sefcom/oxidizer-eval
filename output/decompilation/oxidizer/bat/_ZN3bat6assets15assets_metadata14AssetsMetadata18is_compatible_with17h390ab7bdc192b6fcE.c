fn bat::assets::assets_metadata::AssetsMetadata::is_compatible_with(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: struct40;  // [bp-0x88]
    let v1: Result<struct40, struct16>;  // [bp-0x88]
    let v2: u128;  // [bp-0x78]
    let v4: struct24;  // [bp-0x68]
    let v5: struct40;  // [bp-0x60]
    let v7: Option<struct40>;  // [bp-0x38]
    let v8: u128;  // [bp-0x28]
    let v10: u32;  // ebx

    v0 = semver::Version::parse(a1, a2);
    v5 = core::result::Result<T,E>::expect(&v0);
    v10 = 0;
    if !((((0 ^ *(a0 as &i64)) & (0 ^ -(*(a0 as &i64)))) >> 63) as char) {
        v7 = bat::assets::assets_metadata::AssetsMetadata::is_compatible_with::{{closure}}(*((a0 + 8) as &i64), *((a0 + 16) as &i64));
        if let Some(_) = v7 {
            v2 = v8;
            v4 = *((&v7 as &char + 32) as &i64);
            v1 = v7 as i128;
        }
    }
    return v10;
}
