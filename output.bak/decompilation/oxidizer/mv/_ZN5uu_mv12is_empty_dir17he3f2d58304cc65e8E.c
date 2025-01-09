fn uu_mv::is_empty_dir(a0: u32, a1: u32) -> u64 {
    let v0: struct9;  // [sp-0x58], Other Possible Types: i72
    let v1: i64;  // [sp-0x48], Other Possible Types: struct48
    let v3: i8;  // [sp-0x10]
    let v7: i64;  // rbx

    v0 = std::fs::read_dir(a0, a1);
    if v3 == 2 {
        v1 = v0;
        return 0;
    }
    v1 = struct48 {
        field_0: 2
        field_16: <UNKNOWN>
        field_32: <UNKNOWN>
    };
    core::option::Option<T>::get_or_insert_with(&v1);
    return v7 | -0x100 | !v1;
}
