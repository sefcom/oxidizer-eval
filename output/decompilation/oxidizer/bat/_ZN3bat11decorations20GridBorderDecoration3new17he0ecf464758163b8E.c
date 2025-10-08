fn bat::decorations::GridBorderDecoration::new(a0: i64, a1: i64) -> void {
    let v0: struct24;  // [bp-0x68]
    let v1: u64;  // [bp-0x58]
    let v2: u64;  // [bp-0x50]
    let v3: &str;  // [bp-0x48]
    let v4: u64;  // [bp-0x38]
    let v5: Result<struct24, struct24>;  // [bp-0x20]
    let v6: u8;  // [bp-0x10]

    v6 = *((a1 + 16) as &i8);
    v5 = *(a1 as &i128);
    v2 = 0x8000000000000000;
    v3 = "│";
    v4 = 9223372036854775810;
    v0 = <T as alloc::string::SpecToString>::spec_to_string(&v2);
    return struct32 {
        field_0: v0.field_0
        field_16: v1
        field_24: 1
    };
}
