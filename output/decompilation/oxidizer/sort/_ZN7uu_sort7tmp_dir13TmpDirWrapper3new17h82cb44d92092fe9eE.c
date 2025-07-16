fn uu_sort::tmp_dir::TmpDirWrapper::new(a1: &struct24) -> : struct64 {
    let a0: i64;  // rsi
    let v0: u128;  // [bp-0x38]
    let v1: &str;  // [bp-0x28]
    let v2: u128;  // [bp-0x20]
    let v3: u8;  // [bp-0x10]
    let v5: u64;  // rax
    let v6: i64;  // rdi

    v1 = *((a0 + 16) as &i64);
    v0 = *(a0 as &i128);
    v3 = 2;
    v5 = <alloc::sync::Arc<T> as core::default::Default>::default();
    *((v6 + 40) as &i64) = *(&v3 as &i64);
    *((v6 + 24) as &u128) = v2;
    *(v6 as &u128) = v0;
    *((v6 + 16) as &&str) = v1;
    *((v6 + 56) as &i64) = 0;
    *((v6 + 48) as &u64) = v5;
    return;
}
