fn bat::assets::build_assets::acknowledgements::handle_license(a1: i64, a2: i64) -> : struct33 {
    let a0: i64;  // rdi
    let v0: Result<struct24, struct16>;  // [bp-0x98]
    let v1: struct40;  // [bp-0x98]
    let v2: u128;  // [bp-0x91]
    let v3: u64;  // [bp-0x81]
    let v4: Result<struct24, struct16>;  // [bp-0x68]
    let v5: struct24;  // [bp-0x60]
    let v6: struct24;  // [bp-0x58]
    let v7: u64;  // [bp-0x50]
    let v8: u64;  // [bp-0x48]
    let v9: i64;  // [bp-0x40]
    let v10: u64;  // [bp-0x38]
    let v11: struct24;  // [bp-0x30]
    let v13: u64;  // rax
    let v14: core::str::pattern::CharSearcher;  // rcx

    v7 = a1;
    v8 = a2;
    v0 = std::fs::read_to_string(a1, a2);
    if (((0 ^ v0 as i64) & (0 ^ -(v0 as i64))) >> 63) as char {
        return struct16 {
            field_0: 0
            padding_1: <UNKNOWN>
            field_8: v5
        };
    }
    v4 = v0 as i64;
    v5 = *((&v0 as &char + 8) as &i64);
    v6 = *((&v0 as &char + 16) as &i64);
    if bat::assets::build_assets::acknowledgements::include_license_in_acknowledgments(v5, v6) {
        return struct32 {
            field_0: 13
            padding_1: <UNKNOWN>
            field_8: v4 as i128
            field_24: v6
        };
    } else if bat::assets::build_assets::acknowledgements::license_not_needed_in_acknowledgements(v5, v6) {
        return struct16 {
            field_0: 13
            padding_1: <UNKNOWN>
            field_8: 0x8000000000000000
        };
    } else {
        v9 = &v7;
        v10 = <&T as core::fmt::Debug>::fmt;
        v1 = struct40 {
            field_0: "ERROR: License is of unknown type: "
            field_8: 1
            field_16: &v9
            field_24: 1
        };
        v11 = core::option::Option<T>::map_or_else(None, a2, &v1);
        v2 = v11.field_0;
        v3 = v11.field_16;
        v13 = *((&v2 as &char + 8) as &i64);
        v14 = v3;
        return struct40 {
            field_0: 11
            field_1: <UNKNOWN>
            field_16: v14
            field_24: <UNKNOWN>
        };
    }
}
