fn starship::formatter::string_formatter::clone_without_meta(a0: u64, a1: i64) -> long long {
    let v0: struct72;  // [bp-0x48], Other Possible Types: u64
    let v2: Result<(), Error>;  // rax
    let v3: i64;  // rdx
    let v4: Result<(), Error>;  // rax

    v2 = *(a1 as &i64);
    v3 = v2;
    v4 = v2;
    if let Ok(_) = v4 {
        v4 = *((a1 + 16) as &i64);
    }
    v0 = struct72 {
        field_0: (v2) as u8 as u64
        field_8: 0
        field_16: v2
        field_24: *((a1 + 8) as &i64)
        field_32: v0
        field_40: 0
        field_48: v2
        field_56: *((a1 + 8) as &i64)
        field_64: v4
    };
    return core::iter::traits::iterator::Iterator::collect(a0, &v0);
}
