fn uu_env::string_parser::StringParser::new(a1: i64, a2: i64) -> : struct40 {
    let a0: i64;  // rdi
    let v0: core::option::Option<usize>;  // [bp-0x30], Other Possible Types: struct16
    let v1: u64;  // [bp-0x28]
    let v2: u64;  // [bp-0x20]
    let v3: u64;  // [bp-0x18]
    let v4: void*;  // [bp-0x10]
    let v6: &mut [u8];  // xmm0

    v0 = a1;
    v1 = a2;
    v4 = 0;
    v2 = a1;
    v3 = a2;
    v0 = uu_env::string_parser::StringParser::set_pointer(None);
    v6 = v0.field_16;
    return struct40 {
        field_0: v6
        field_16: *(&v2 as &i128)
        field_32: 0
    };
}
