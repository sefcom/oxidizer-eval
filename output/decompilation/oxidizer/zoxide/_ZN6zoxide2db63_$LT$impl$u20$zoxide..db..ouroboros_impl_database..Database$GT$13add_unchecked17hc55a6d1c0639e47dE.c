fn zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::add_unchecked(a1: i64, a2: i64, a3: i64) -> : struct8 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x40]
    let v1: u64;  // [bp-0x28]
    let v2: u64;  // [bp-0x20]
    let v4: u64;  // xmm0lq

    v0 = core::ops::function::FnOnce::call_once(a1, a2);
    v1 = v4;
    v2 = a3;
    alloc::vec::Vec<T,A>::push(a0, &v0, "src/db/mod.rs");
    *((a0 + 56) as &i8) = 1;
    return;
}
