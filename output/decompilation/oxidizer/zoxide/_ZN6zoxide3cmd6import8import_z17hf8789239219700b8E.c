fn zoxide::cmd::import::import_z(a0: i64, a1: &str) -> u64 {
    let v0: struct16;  // [bp-0x118]
    let v1: u64;  // [bp-0x110]
    let v2: u64;  // [bp-0x100]
    let v3: u64;  // [bp-0xf8]
    let v4: u64;  // [bp-0xf0]
    let v5: u64;  // [bp-0xe8]
    let v6: u64;  // [bp-0xe0]
    let v7: u64;  // [bp-0xe0]
    let v8: Result<struct8, struct8>;  // [bp-0xd8]
    let v9: u64;  // [bp-0xd0]
    let v10: void*;  // [bp-0xc8], Other Possible Types: u64
    let v11: struct16;  // [bp-0xc0]
    let v12: core::str::pattern::CharSearcher;  // [bp-0xb0]
    let v13: u16;  // [bp-0x80]
    let v14: void*;  // [bp-0x78]
    let v15: u64;  // [bp-0x70]
    let v16: core::str::pattern::CharSearcher;  // [bp-0x68]
    let v17: u16;  // [bp-0x38]
    let v19: u64;  // rdx
    let v20: u64;  // rax
    let v21: u64;  // rdx
    let v23: u64;  // rsi
    let v24: void*;  // rax
    let v25: struct1;  // rax
    let v26: struct1;  // rax
    let v27: core::result::Result<f64, core::num::dec2flt::ParseFloatError>;  // rax:rdx
    let v28: core::result::Result<u64, core::num::error::ParseIntError>;  // rax:rdx
    let v29: &str;  // rax:rdx

    v16 = <char as core::str::pattern::Pattern>::into_searcher(0xa, a1);
    v14 = 0;
    v15 = v19;
    v17 = 0;
    v20 = core::str::iter::SplitInternal<P>::next_inclusive(&v14);
    if v20 {
        do {
            v29 = <core::str::LinesMap as core::ops::function::Fn<(&str,)>>::call(v20, v21, v21);
            v2 = v29.length;
            if v29.length {
                v12 = <char as core::str::pattern::Pattern>::into_searcher(0x7c, v29.data_ptr, v29.length);
                v11 = struct16 {
                    field_0: 0
                    field_8: v29.length
                };
                v13 = 1;
                v10 = 2;
                v24 = core::str::iter::SplitInternal<P>::next_back(&v11, v23, v19);
                v0 = anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::with_context(v24, v19, &v29.data_ptr);
                if !v0.field_0 {
                    return v1;
                }
                v3 = v0.field_0;
                v4 = v1;
                v28 = core::num::<impl u64>::from_ascii_radix(&v0, v0.field_0, v4);
                if (anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v0, &v3, v19) & 1) {
                    return v19;
                }
                if v10 {
                    if v10 == 1 {
                        v10 = 0;
                        v25 = core::str::iter::SplitInternal<P>::get_end();
                    } else {
                        v10 = 1;
                        v25 = core::str::iter::SplitInternal<P>::next_back(&v11, v23, v19);
                    }
                }
                v0 = anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::with_context(v25, v19, &v29.data_ptr);
                v7 = v6;
                if !v0.field_0 {
                    return v7;
                }
                v5 = v0.field_0;
                v6 = v1;
                v27 = core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(&v0, v0.field_0);
                v8 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v0, &v5);
                v7 = v9;
                match v8 {
                    Err(_) => {
                        return v7;
                    },
                    Ok(_) => {
                        if v10 {
                            if v10 == 1 {
                                v10 = 0;
                                v26 = core::str::iter::SplitInternal<P>::get_end();
                            } else {
                                v10 -= 1;
                                v26 = core::str::iter::SplitInternal<P>::next_back(&v11, v23, v19);
                            }
                        }
                        v0 = anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::with_context(v26, v19, &v29.data_ptr);
                        if !v0.field_0 {
                            v7 = v1;
                            return v7;
                        }
                        zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::add_unchecked(a0, v0.field_0, v1, v19);
                    },
                }
            }
            v20 = core::str::iter::SplitInternal<P>::next_inclusive(&v14);
        } while (v20);
    }
    if *((a0 + 56) as &i8) == 1 {
        zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::dedup(a0);
    }
    return 0;
}
