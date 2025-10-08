fn zoxide::cmd::remove::<impl zoxide::cmd::Run for zoxide::cmd::cmd::Remove>::run(a0: i64, a1: u64) -> long long {
    let v0: Result<struct64, struct8>;  // [bp-0xd0]
    let v1: Result<struct24, struct16>;  // [bp-0xd0], Other Possible Types: u64
    let v2: u64;  // [bp-0xd0]
    let v3: struct64;  // [bp-0xc8], Other Possible Types: u64
    let v4: u64;  // [bp-0xc8]
    let v5: i64;  // [bp-0xc0], Other Possible Types: u64
    let v6: u64;  // [bp-0xb8]
    let v7: void*;  // [bp-0xb0]
    let v8: i64;  // [bp-0x88]
    let v9: i64;  // [bp-0x80]
    let v10: u64;  // [bp-0x78]
    let v11: struct64;  // [bp-0x70]
    let v13: u64;  // r15
    let v14: u64;  // r15

    v0 = zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::open();
    match v0 {
        Err(_) => {
            return v4;
        },
        Ok(v11) => {
            if a1 {
                do {
                    v14 = v13;
                    v8 = a0;
                    if !zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::remove(&v11, a0) as u8 {
                        v1 = zoxide::util::resolve_path(a0);
                        v3 = v4;
                        if (((0 ^ v1 as i64) & (0 ^ -(v2))) >> 63) as char {
                            return v3;
                        }
                        v0 = zoxide::util::path_to_str(v4, v5);
                        v3 = v4;
                        if !v0 as i64 {
                            core::mem::drop(v0 as i64, v4);
                            v3 = v3;
                            return v3;
                        } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v0 as i64, v4, *((a0 + 8) as &i64), *((a0 + 16) as &i64)) as u8 && zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::remove(&v11, v0 as i64, v4) as u8 {
                            core::mem::drop(v0 as i64, v4);
                        } else {
                            v9 = &v8;
                            v10 = <&T as core::fmt::Display>::fmt;
                            v1 = "path not found in database: ";
                            v3 = 1;
                            v7 = 0;
                            v5 = &v9;
                            v6 = 1;
                            v3 = anyhow::__private::format_err(&v1);
                            core::mem::drop(v0 as i64, v4);
                            return v3;
                        }
                    }
                    v13 = v14 - 24;
                } while (v14 != 24);
            }
            zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::save(&v11);
            return v3;
        },
    }
}
