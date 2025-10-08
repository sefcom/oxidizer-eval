fn zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::query_first(a0: i64, a1: &struct120, a2: i64) -> u64 {
    let v0: std::io::stdio::Stdout;  // [bp-0x98]
    let v1: i64;  // [bp-0x90]
    let v2: u64;  // [bp-0x88]
    let v3: core::result::Result<u64, core::num::error::ParseIntError>;  // [bp-0x80]
    let v5: i64;  // [bp-0x70]
    let v6: u32;  // [bp-0x68]
    let v7: u64;  // [bp-0x60]
    let v8: u64;  // [bp-0x58]
    let v9: i64;  // [bp-0x50]
    let v10: u64;  // [bp-0x48]
    let v11: void*;  // [bp-0x40]
    let v13: i64;  // rdx
    let v14: i64;  // r12
    let v15: u64;  // rax

    v0 = std::io::stdio::stdout();
    if (anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::context(zoxide::db::stream::Stream::next(a1), "no match found") & 1) {
        return v14;
    }
    if !((((0 ^ *((a0 + 24) as &i64)) & (0 ^ -(*((a0 + 24) as &i64)))) >> 63) as char) {
        while (<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v14 + 8) as &i64), *((v14 + 16) as &i64), *((a0 + 32) as &i64), *((a0 + 40) as &i64))) {
            v14 = v13;
            if (anyhow::context::<impl anyhow::Context<T,core::convert::Infallible> for core::option::Option<T>>::context(zoxide::db::stream::Stream::next(a1), "you are already in the only match") & 1) {
                return v13;
            }
        }
    }
    v3 = v15;
    v5 = v14;
    v6 = 32;
    v1 = &v3;
    v2 = <zoxide::db::dir::DirDisplay as core::fmt::Display>::fmt;
    v7 = &g_534950;
    v8 = 2;
    v11 = 0;
    v9 = &v1;
    v10 = 1;
    return <core::result::Result<(),std::io::error::Error> as zoxide::error::BrokenPipeHandler>::pipe_exit(<std::io::stdio::Stdout as std::io::Write>::write_fmt(&v0, &v7), "stdout");
}
