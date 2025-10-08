fn zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::remove(a0: i64, a1: i64) -> u64 {
    let v0: Result<struct24, struct16>;  // [bp-0x28]
    let v1: struct16;  // [bp-0x20]
    let v3: u64;  // rax
    let v4: u64;  // rdx

    v0 = a1;
    v1 = struct16 {
        field_0: *((a0 + 8) as &i64)
        field_8: *((a0 + 8) as &i64) + *((a0 + 16) as &i64) * 40
    };
    v3 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v1, &v0);
    if (v3 & 1) {
        zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::swap_remove(a0, v4);
    }
    return v3 & -0x100 | v3 & 1;
}
