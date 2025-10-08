fn bat::decorations::LineChangesDecoration::generate_cached(a0: i64, a1: i64, a2: u64, a3: i64) -> void {
    let v0: struct24;  // [bp-0x78]
    let v1: u64;  // [bp-0x68]
    let v2: struct16;  // [bp-0x60]
    let v3: u64;  // [bp-0x58]
    let v4: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x50]
    let v5: u64;  // [bp-0x48]
    let v6: struct24;  // [bp-0x30]
    let v7: u8;  // [bp-0x20]

    v7 = *((a1 + 16) as &i8);
    v6 = *(a1 as &i128);
    v2 = 0x8000000000000000;
    v3 = a2;
    v4 = a3;
    v5 = 9223372036854775810;
    v0 = <T as alloc::string::SpecToString>::spec_to_string(&v2);
    return struct32 {
        field_0: *(&v0.field_0 as &i128)
        field_16: v1
        field_24: <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(a2, a3 + a2)
    };
}
