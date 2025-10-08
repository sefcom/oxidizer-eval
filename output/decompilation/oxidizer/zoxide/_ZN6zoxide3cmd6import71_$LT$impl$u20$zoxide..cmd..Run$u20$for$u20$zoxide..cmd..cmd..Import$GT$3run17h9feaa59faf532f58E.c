fn zoxide::cmd::import::<impl zoxide::cmd::Run for zoxide::cmd::cmd::Import>::run(a0: i64) -> long long {
    let v0: u64;  // [bp-0xc0]
    let v1: u64;  // [bp-0xb8]
    let v2: u64;  // [bp-0xb0]
    let v3: Result<struct24, struct16>;  // [bp-0xa8], Other Possible Types: u64
    let v4: u64;  // [bp-0xa8]
    let v5: u128;  // [bp-0xa0]
    let v6: u64;  // [bp-0x98]
    let v7: iNone;  // [bp-0x90]
    let v8: iNone;  // [bp-0x80]
    let v9: u64;  // [bp-0x70]
    let v10: Result<struct24, struct16>;  // [bp-0x68], Other Possible Types: u64
    let v11: Result<struct64, struct8>;  // [bp-0x68]
    let v12: u64;  // [bp-0x60]
    let v13: u64;  // [bp-0x58]
    let v14: u128;  // [bp-0x50]
    let v15: iNone;  // [bp-0x48]
    let v16: iNone;  // [bp-0x38]
    let v18: u64;  // r12

    v10 = std::fs::read_to_string(a0);
    v3 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v10, *((a0 + 8) as &i64), *((a0 + 16) as &i64));
    if (((0 ^ v3 as i64) & (0 ^ -(v4))) >> 63) as char {
        return v1;
    }
    v0 = v3 as i64;
    v1 = *((&v3 as &char + 8) as &i64);
    v2 = v6;
    v11 = zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::open();
    v18 = v12;
    if let Err(_) = v11 {
        return v18;
    }
    v9 = *((&v11 as &char + 64) as &i64);
    v8 = v16;
    v7 = v15;
    v5 = *((&v11 as &char + 16) as &i128);
    v3 = v18;
    if *((a0 + 25) as &i8) || !v6 {
        v18 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context((!*((a0 + 24) as &i8) ? zoxide::cmd::import::import_autojump(&v3, v1, v2) : zoxide::cmd::import::import_z(&v3, v1, v2)), "import error");
        if !v18 {
            return zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::save(&v3);
        }
    } else {
        v10 = "current database is not empty, specify --merge to continue anyway";
        v12 = 1;
        v13 = 8;
        v14 = 0;
        v18 = anyhow::__private::format_err(&v10);
    }
    return v18;
}
