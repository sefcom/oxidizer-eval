fn zoxide::db::ouroboros_impl_database::Database::new(a1: &struct24, a2: &struct24) -> : struct57 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x48]
    let v1: u128;  // [bp-0x30]
    let v2: struct96;  // [bp-0x28]
    let v3: Result<struct24, struct16>;  // [bp-0x20]
    let v5: u64;  // rax

    v5 = alloc::boxed::Box<T>::new(a2) as u64;
    v0 = zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::open_dir::{{closure}}();
    v3 = *((a1 + 16) as &i64);
    v1 = *(a1 as &i128);
    return struct64 {
        field_0: *(&v0.field_0 as &i128)
        field_16: *(&v0.field_16 as &i128)
        field_32: v2
        field_40: v3
        field_48: v5
        field_56: 0
    };
}
