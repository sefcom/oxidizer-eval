fn bat::assets::build_assets::asset_to_contents(a0: i64, a1: u64, a2: u64, a3: u64) -> int {
    let v0: struct40;  // [bp-0x48]
    let v1: struct24;  // [bp-0x20]
    let v3: u64;  // rax

    v0 = struct40 {
        field_0: 0
        field_8: ""
        field_24: a2
        field_32: a3
    };
    v3 = bincode::internal::serialize_into(&v0, a1);
    if !v3 {
        return struct32 {
            field_0: 13
            padding_1: <UNKNOWN>
            field_8: *(&v0.field_0 as &i128)
            field_24: 0
        };
    }
    v1 = bat::assets::build_assets::asset_to_contents::{{closure}}(&v0 as u64, v3);
    return struct32 {
        field_0: 11
        padding_1: <UNKNOWN>
        field_8: v1.field_0 as i64
        field_16: *((&v1.field_0 as &char + 8) as &i128)
    };
}
