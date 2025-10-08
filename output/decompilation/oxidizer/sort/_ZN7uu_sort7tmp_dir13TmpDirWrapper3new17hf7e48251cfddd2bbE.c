fn uu_sort::tmp_dir::TmpDirWrapper::new(a1: &struct24) -> : struct64 {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0x28]
    let v1: u8;  // [bp-0x18]
    let v3: u64;  // rax

    v1 = 2;
    v3 = <alloc::sync::Arc<T> as core::default::Default>::default();
    return struct64 {
        field_0: *(a1 as &i128)
        field_16: *((a1 + 16) as &i64)
        field_24: v0
        field_40: *(&v1 as &i64)
        field_48: v3
        field_56: 0
    };
}
