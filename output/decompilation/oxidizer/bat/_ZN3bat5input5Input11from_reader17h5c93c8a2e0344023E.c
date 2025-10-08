fn bat::input::Input::from_reader(a0: &struct136, a1: i64, a2: i64) -> u64 {
    let v0: struct16;  // [bp-0x88]
    let v1: u8;  // [bp-0x70]
    let v2: u128;  // [bp-0x60]
    let v3: struct24;  // [bp-0x50]
    let v4: struct16;  // [bp-0x40]
    let v5: iNone;  // [bp-0x30]
    let v6: i8;  // [bp-0x20]

    v0 = struct16 {
        field_0: 9223372036854775809
        field_8: a1
    };
    bat::input::InputKind::description(&v1, &v0);
    return struct160 {
        field_0: 0
        padding_8: <UNKNOWN>
        field_16: 0x8000000000000000
        padding_24: <UNKNOWN>
        field_40: <UNKNOWN>
        padding_48: <UNKNOWN>
        field_56: v2
        field_72: v3
        field_88: v4
        field_104: v5
        field_120: *(&v6 as &i128)
        field_136: *(&v0.field_0 as &i128)
        field_152: a2
    };
}
