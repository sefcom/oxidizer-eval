fn starship::modules::rust::RustupSettings::lookup_override(a0: i64, a1: u64, a2: void*, a3: u32) -> void {
    let v0: struct8;  // [bp-0x90]
    let v1: struct24;  // [bp-0x90]
    let v2: u64;  // [bp-0x88]
    let v3: struct24;  // [bp-0x68]
    let v4: struct32;  // [bp-0x50], Other Possible Types: struct8
    let v5: struct40;  // [bp-0x28]

    v3 = std::path::Path::to_path_buf(a2, a3);
    v4 = hashbrown::map::HashMap<K,V,S,A>::iter(a1 + 72);
    v5 = &v3;
    v0 = core::iter::traits::iterator::Iterator::reduce(&v4);
    if !((((0 ^ v2) & (0 ^ -(v2))) >> 63) as char) {
        v4 = v2;
        v1 = starship::modules::rust::RustupSettings::lookup_override::{{closure}}(&v4);
        return struct24 {
            field_0: *(&v1.field_0 as &i128)
            field_16: v1.field_16
        };
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
