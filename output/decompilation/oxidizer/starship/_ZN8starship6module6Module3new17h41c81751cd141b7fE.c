fn starship::module::Module::new(a1: i32, a2: i32, a3: i32, a4: i32, a5: i64) -> : struct92 {
    let a0: i64;  // rdi
    let v0: struct16;  // [bp-0x50], Other Possible Types: u8
    let v1: i64;  // [bp-0x40]
    let v2: struct168;  // [bp-0x38], Other Possible Types: u8
    let v3: i8;  // [bp-0x28]

    serde_core::de::Visitor::visit_borrowed_str(&v0, a1, a2);
    serde_core::de::Visitor::visit_borrowed_str(&v2, a3, a4);
    return struct96 {
        field_0: v0
        field_16: v1
        field_24: v2
        field_40: *(&v3 as &i64)
        field_48: 0
        field_56: 8
        field_64: 0
        field_80: 0
        field_88: a5
    };
}
