fn uu_ls::get_inode(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x48]
    let v1: i64;  // [bp-0x40]
    let v2: u64;  // [bp-0x38]
    let v3: u320;  // [bp-0x30]

    v0 = a1;
    v1 = &v0;
    v2 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
    v3 = struct40 {
        field_0: &g_423c10
        field_8: 1
        field_16: &v1
        field_24: 1
        field_32: 0
    };
    return core::option::Option<T>::map_or_else(a0, &v3);
}
