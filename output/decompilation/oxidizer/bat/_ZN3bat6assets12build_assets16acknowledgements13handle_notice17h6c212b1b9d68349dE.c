fn bat::assets::build_assets::acknowledgements::handle_notice(a1: i64, a2: i64) -> : struct25 {
    let a0: i64;  // rdi
    let v0: Result<struct24, struct16>;  // [bp-0x20]
    let v2: struct24;  // [bp-0x18]
    let v7: u8;  // dl
    let v8: u8;  // dl
    let v9: u64;  // rax

    v0 = std::fs::read_to_string(a1, a2);
    v7 = 13;
    return struct32 {
        field_0: v8
        padding_1: <UNKNOWN>
        field_8: v9
        field_16: v2
        field_24: *((&v0 as &char + 16) as &i64)
    };
}
