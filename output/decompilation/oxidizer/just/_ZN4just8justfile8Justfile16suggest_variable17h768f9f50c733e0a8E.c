fn just::justfile::Justfile::suggest_variable(a0: u64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: struct72;  // [bp-0x48], Other Possible Types: u64
    let v2: u64;  // rax
    let v3: i64;  // r9
    let v4: u64;  // rax

    v2 = *((a1 + 640) as &i64);
    v3 = v2;
    v4 = v2;
    if v4 {
        v4 = *((a1 + 656) as &i64);
    }
    v0 = struct72 {
        field_0: (v2) as u8 as u64
        field_8: 0
        field_16: v2
        field_24: *((a1 + 648) as &i64)
        field_32: v0
        field_40: 0
        field_48: v2
        field_56: *((a1 + 648) as &i64)
        field_64: v4
    };
    return just::justfile::Justfile::find_suggestion(a0, a2, a3, &v0);
}
