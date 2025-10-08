fn zoxide::cmd::query::<impl zoxide::cmd::Run for zoxide::cmd::cmd::Query>::run(a0: &u64) -> long long {
    let v0: struct64;  // [bp-0x90]
    let v1: Result<struct64, struct8>;  // [bp-0x50], Other Possible Types: u64
    let v2: struct64;  // [bp-0x48], Other Possible Types: u64

    v1 = zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::open();
    match v1 {
        Err(_) => {
            return v2;
        },
        Ok(v0) => {
            v1 = zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::query(a0, &v0);
            return core::result::Result<T,E>::and(v1, zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::save(&v0));
        },
    }
}
