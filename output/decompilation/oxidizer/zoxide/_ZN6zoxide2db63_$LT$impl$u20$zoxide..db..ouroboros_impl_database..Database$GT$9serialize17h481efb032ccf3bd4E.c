fn zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::serialize(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: struct16;  // [bp-0x38]
    let v1: Result<struct24, struct16>;  // [bp-0x28]

    v0 = struct16 {
        field_0: a1
        field_8: a2
    };
    v1 = zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::serialize::{{closure}}(&v0);
    return anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(a0, &v1);
}
