fn zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::sort_by_score(a1: i64) -> : struct1 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x10]

    v0 = a1;
    core::slice::<impl [T]>::sort_unstable_by(*((a0 + 8) as &i64), *((a0 + 16) as &i64), &v0);
    *((a0 + 56) as &i8) = 1;
    return;
}
