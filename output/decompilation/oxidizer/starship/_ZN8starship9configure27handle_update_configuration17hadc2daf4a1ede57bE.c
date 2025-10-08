fn starship::configure::handle_update_configuration(a1: i64, a2: &str, a3: i64, a4: i64) -> Option<struct24> {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0x230]
    let v1: u64;  // [bp-0x228]
    let v2: struct16;  // [bp-0x220]
    let v3: u576;  // [bp-0x220]
    let v4: core::str::pattern::CharSearcher;  // [bp-0x210]
    let v5: u16;  // [bp-0x1e0]
    let v6: struct72;  // [bp-0x1d8]
    let v7: struct8;  // [bp-0x190], Other Possible Types: Result<struct168, struct40>
    let v8: struct48;  // [bp-0x190]
    let v9: u128;  // [bp-0x180]
    let v10: struct176;  // [bp-0xe0], Other Possible Types: u8
    let v12: u64;  // rdx
    let v13: u64;  // rcx
    let v14: u64;  // rax
    let v15: void*;  // rsi
    let v16: u64;  // rdx
    let v18: struct24;  // rax
    let v19: i64;  // rbp
    let v20: u64;  // rax
    let v21: u64;  // r12
    let v22: core::fmt::Arguments;  // rax
    let v23: core::fmt::Arguments;  // rax
    let v25: core::fmt::Arguments;  // rcx
    let v26: i64;  // r15
    let v28: i64;  // rbx

    v4 = <char as core::str::pattern::Pattern>::into_searcher(0x2e, v12, v13);
    v2 = struct16 {
        field_0: 0
        field_8: v13
    };
    v5 = 1;
    v14 = core::str::iter::SplitInternal<P>::next(&v2);
    if (!v12 | !v14) != 1 {
        v7 = toml_edit::table::Table::entry(toml_edit::document::DocumentMut::as_table_mut(a1), v14, v12);
        toml_edit::table::Entry::or_insert_with(&v7);
        v6 = v3;
        loop {
            v20 = core::str::iter::SplitInternal<P>::next(v19);
            if !v20 {
                v7 = <toml_edit::value::Value as core::str::traits::FromStr>::from_str(v0, v1);
                v10 = core::result::Result<T,E>::map_or_else(&v7, v0, v1);
                if *(v18 as &i64) - 8 >= 4 {
                    v8 = <toml_edit::repr::Decor as core::clone::Clone>::clone(toml_edit::value::Value::decor(v18), v12);
                    if v10.field_0 - 8 < 4 {
                        core::option::unwrap_failed(); /* do not return */
                    }
                    v28 = toml_edit::value::Value::decor(&v10);
                    *((v28 + 32) as &i128) = *(&v8.field_32 as &i128);
                    *((v28 + 16) as &u128) = v9;
                    *(v28 as &u128) = v8.field_0;
                }
                memcpy(&v7, &v10, 176);
                memcpy(v18, &v7, 176);
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v21 = v20;
            if !toml_edit::item::Item::is_table_like(v18) || !v12 {
                break;
            }
            v22 = *(v18 as &i64) - 8;
            if v22 < 4 {
                v23 = v22;
            } else {
                v23 = 1;
            }
            v25 = v23;
            if v25 != 1 {
                if v25 != 2 {
                    core::option::unwrap_failed(); /* do not return */
                }
            } else {
                if v22 >= -6 {
                    core::option::unwrap_failed(); /* do not return */
                }
            }
            if !*((v26 + 112) as &i64)(v18, v21, v12) as i8 {
                v7 = toml_edit::item::table();
                *((v26 + 120) as &i64)(&v10, v18, v21, v12, &v7);
            }
            core::option::unwrap(*((v26 + 88) as &i64)(v18, v21, v12) as i64);
        }
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a0, v15, v16);
    return;
}
