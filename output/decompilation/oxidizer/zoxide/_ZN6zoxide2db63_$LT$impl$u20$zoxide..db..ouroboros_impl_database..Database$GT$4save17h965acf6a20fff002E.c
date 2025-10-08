fn zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::save(a0: i64) -> u64 {
    let v0: Result<struct24, struct16>;  // [bp-0x38]
    let v1: struct24;  // [bp-0x38], Other Possible Types: u64
    let v2: u64;  // [bp-0x30]
    let v3: struct24;  // [bp-0x20]
    let v4: u64;  // [bp-0x8]
    let v6: u64;  // rbx
    let v7: u64;  // rax

    if *((a0 + 56) as &i8) != 1 {
        return 0;
    }
    v4 = v6;
    v0 = zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::serialize(*((a0 + 8) as &i64), *((a0 + 16) as &i64));
    if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
        return v2;
    }
    v3 = v1;
    v7 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(zoxide::util::write(a0 + 24, &v3), "could not write to database");
    if !v7 {
        *((a0 + 56) as &i8) = 0;
        return 0;
    }
    return v7;
}
