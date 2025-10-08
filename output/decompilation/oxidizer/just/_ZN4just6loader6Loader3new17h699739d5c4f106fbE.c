fn just::loader::Loader::new() -> : struct112 {
    let a0: i64;  // rdi
    let v0: struct56;  // [bp-0x78]
    let v1: u128;  // [bp-0x68]
    let v2: iNone;  // [bp-0x58]
    let v3: u64;  // [bp-0x48]
    let v4: struct56;  // [bp-0x40]
    let v5: u128;  // [bp-0x30]
    let v6: struct24;  // [bp-0x20]

    v0 = typed_arena::Arena<T>::new();
    v4 = typed_arena::Arena<T>::new();
    return struct112 {
        field_0: *(&v4.field_0 as &i128)
        field_16: v5
        field_32: v6
        field_48: v4.field_48
        field_56: *(&v0.field_0 as &i128)
        field_72: v1
        field_88: v2
        field_104: v3
    };
}
