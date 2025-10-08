fn zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::dedup() -> : struct1 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x9]

    zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::sort_by_path(a0);
    v0 = 0;
    zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::dedup::{{closure}}(&v0, a0);
    *((a0 + 56) as &u64) = *((a0 + 56) as &i8) | v0;
    return;
}
