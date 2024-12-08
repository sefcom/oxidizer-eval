fn uu_mv::is_empty_dir(a0: u32, a1: u32) -> u64 {
    let v0: i72;  // [sp-0x58], Other Possible Types: struct9
    let v1: i64;  // [sp-0x48], Other Possible Types: struct48
    let v2: struct9;  // [bp-0x18]
    let v3: i8;  // [sp-0x10]
    let v6: i64;  // rdx
    let v8: i64;  // rbx

    v0 = std::fs::read_dir(a0, a1);
    if v3 != 2 {
        v2 = struct9 {
            field_0: v0
            field_8: v5
        };
        v1 = struct48 {
            field_0: 2
            field_16: <UNKNOWN>
            field_32: <UNKNOWN>
        };
        core::option::Option<T>::get_or_insert_with(&v1, &v2, v6);
        return v8 | -0x100 | !v1;
    }
    v1 = v0;
    return 0;
}
