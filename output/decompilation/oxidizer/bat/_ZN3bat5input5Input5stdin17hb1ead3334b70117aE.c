fn bat::input::Input::stdin() -> : struct136 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x88]
    let v1: struct24;  // [bp-0x78]
    let v2: u8;  // [bp-0x70]
    let v3: iNone;  // [bp-0x60]
    let v4: u128;  // [bp-0x50]
    let v5: u128;  // [bp-0x40]
    let v6: u128;  // [bp-0x30]
    let v7: i8;  // [bp-0x20]

    v0 = 0x8000000000000000;
    bat::input::InputKind::description(&v2, &v0);
    return struct160 {
        field_0: 0
        padding_8: <UNKNOWN>
        field_16: 0x8000000000000000
        padding_24: <UNKNOWN>
        field_40: <UNKNOWN>
        padding_48: <UNKNOWN>
        field_56: v3
        field_72: v4
        field_88: v5
        field_104: v6
        field_120: *(&v7 as &i128)
        field_136: v0.field_0
        field_152: v1
    };
}
