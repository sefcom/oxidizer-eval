fn uu_sort::tmp_dir::TmpDirWrapper::new(a0: &struct64, a1: &struct24) -> int {
    let v0: u128;  // [sp-0x38]
    let v1: u64;  // [sp-0x28]
    let v2: i8;  // [bp-0x20]
    let v3: u8;  // [sp-0x10]
    let v6: u128;  // xmm0

    v1 = a1->field_10;
    v0 = a1->field_0;
    v3 = 2;
    v6 = *(&v2 as &i128);
    return struct64 {
        field_0: v0
        field_16: v1
        field_24: v6
        field_40: *(&v3 as &i64)
        field_48:         <alloc::sync::Arc<T> as core::default::Default>::default()
        field_56: 0
    };
}
