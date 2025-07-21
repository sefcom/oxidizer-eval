fn uu_mv::is_empty_dir(a0: i64, a1: i64) -> long long {
    let v0: struct9;  // [bp-0x58]
    let v1: struct9;  // [bp-0x58]
    let v2: struct48;  // [bp-0x48]
    let v3: struct9;  // [bp-0x18]
    let v5: u32;  // ebx

    v0 = std::fs::read_dir(a0, a1);
    if v0.field_8 == 2 {
        return 0;
    }
    v3 = v1;
    v2 = struct48 {
        field_0: 2
        field_16: <UNKNOWN>
        field_32: <UNKNOWN>
    };
    core::option::Option<T>::get_or_insert_with(&v2, &v3);
    return v5 & -0x100;
}
