fn bat::decorations::LineNumberDecoration::new(a0: i64, a1: i64) -> void {
    let v0: struct24;  // [bp-0x78]
    let v1: struct24;  // [bp-0x68]
    let v2: struct24;  // [bp-0x60]
    let v3: std::io::stdio::Stdout;  // [bp-0x48]
    let v4: u128;  // [bp-0x30]
    let v5: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x20]
    let v7: struct24;  // r14

    v2 = alloc::slice::<impl [T]>::repeat(" ", 4);
    v5 = *((a1 + 118) as &i8);
    v4 = *((a1 + 102) as &i128);
    v3 = 9223372036854775810;
    v0 = <T as alloc::string::SpecToString>::spec_to_string(&v2);
    v7 = a1 + 102;
    return struct64 {
        field_0: v0.field_0
        field_16: v1
        field_24: 4
        field_32: 10000
        field_40: *(v7 as &i128)
        field_56: *((v7 + 16) as &i8)
    };
}
