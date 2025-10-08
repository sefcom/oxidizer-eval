fn bat::theme::choose_theme_opt(a0: i64, a1: u32, a2: void*) -> long long {
    let v0: Result<struct4, struct8>;  // [bp-0x68], Other Possible Types: u128
    let v1: struct24;  // [bp-0x60]
    let v2: core::str::pattern::CharSearcher;  // [bp-0x58]
    let v3: u64;  // [bp-0x48]
    let v4: struct24;  // [bp-0x40]
    let v5: u64;  // [bp-0x38]
    let v6: struct24;  // [bp-0x30]
    let v8: u64;  // rbx

    v8 = a1;
    if v8 != 2 {
        v6 = bat::theme::choose_theme(a2, v8 & 4294967295);
        v3 = 0x8000000000000000;
        if v6.field_0 as i64 == 9223372036854775809 {
            goto LABEL_84439d;
        }
        v2 = v6.field_16;
        v0 = v6.field_0;
    } else {
LABEL_84439d:
        v2 = v5;
        v0 = 0x8000000000000000;
        v1 = v4;
    }
    return struct32 {
        field_0: v0
        field_8: v1
        field_16: v2
        field_24: v8 as u8
    };
}
