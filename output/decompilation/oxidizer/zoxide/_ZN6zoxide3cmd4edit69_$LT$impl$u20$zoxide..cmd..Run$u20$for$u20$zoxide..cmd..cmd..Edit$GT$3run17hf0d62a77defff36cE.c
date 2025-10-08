fn zoxide::cmd::edit::<impl zoxide::cmd::Run for zoxide::cmd::cmd::Edit>::run(a0: i64) -> long long {
    let v0: Result<struct64, struct8>;  // [bp-0xe8]
    let v2: u64;  // [bp-0x88]
    let v4: u64;  // rdx

    if (zoxide::util::current_time() & 1) {
        return v4;
    }
    v0 = zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::open();
    return v2;
}
