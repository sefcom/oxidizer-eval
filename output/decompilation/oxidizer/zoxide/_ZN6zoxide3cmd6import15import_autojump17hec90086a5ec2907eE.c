fn zoxide::cmd::import::import_autojump(a0: i64, a1: &str) -> u64 {
    let v0: Result<struct32, struct16>;  // [bp-0xd8]
    let v1: struct16;  // [bp-0xd8]
    let v2: Result<struct8, struct8>;  // [bp-0xd8]
    let v3: u64;  // [bp-0xd0]
    let v4: u64;  // [bp-0xc8]
    let v5: Result<struct24, struct16>;  // [bp-0xc0]
    let v6: u64;  // [bp-0xb0]
    let v7: struct16;  // [bp-0xa8]
    let v8: void*;  // [bp-0x98]
    let v9: u64;  // [bp-0x90]
    let v10: core::str::pattern::CharSearcher;  // [bp-0x88]
    let v11: u16;  // [bp-0x58]
    let v12: core::option::Option<(&str, &str)>;  // [bp-0x50]
    let v14: u64;  // rdx
    let v15: u64;  // rax
    let v16: u64;  // rdx
    let v18: u8;  // cl
    let v19: &str;  // rax:rdx
    let v20: core::result::Result<f64, core::num::dec2flt::ParseFloatError>;  // rax:rdx

    v10 = <char as core::str::pattern::Pattern>::into_searcher(0xa, a1);
    v8 = 0;
    v9 = v14;
    v11 = 0;
    v15 = core::str::iter::SplitInternal<P>::next_inclusive(&v8);
    if v15 {
        do {
            v19 = <core::str::LinesMap as core::ops::function::Fn<(&str,)>>::call(v15, v16, v16);
            v6 = v19.length;
            if v19.length {
                v12 = core::str::<impl str>::split_once(v19.data_ptr, v14, v18);
                v0 = anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::with_context(&v12, &v19.data_ptr);
                match v0 {
                    Err(_) => {
                        return v3;
                    },
                    Ok(_) => {
                        v7 = v1;
                        v20 = core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(&v12, v0 as i64);
                        v2 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context(&v12, &v7);
                        match v2 {
                            Err(_) => {
                                return v3;
                            },
                            Ok(_) => {
                                zoxide::cmd::import::sigmoid();
                                zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::add_unchecked(a0, v4, v5, 0);
                            },
                        }
                    },
                }
            }
            v15 = core::str::iter::SplitInternal<P>::next_inclusive(&v8);
        } while (v15);
    }
    if *((a0 + 56) as &i8) == 1 {
        zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::dedup(a0);
    }
    return 0;
}
