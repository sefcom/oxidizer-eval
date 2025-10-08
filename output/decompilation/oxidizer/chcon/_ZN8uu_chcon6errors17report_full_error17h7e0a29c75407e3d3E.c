fn uu_chcon::errors::report_full_error(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: u64;  // [bp-0xa0]
    let v1: i64;  // [bp-0x98]
    let v2: u64;  // [bp-0x90]
    let v3: i64;  // [bp-0x88]
    let v4: void*;  // [bp-0x80]
    let v5: u128;  // [bp-0x78]
    let v6: core::fmt::rt::Argument;  // [bp-0x78]
    let v7: i64;  // [bp-0x68]
    let v8: core::fmt::Arguments;  // [bp-0x60]
    let v10: i64;  // rdx
    let v12: u64;  // rax

    v0 = a1;
    v1 = a2;
    v2 = alloc::raw_vec::RawVecInner<A>::with_capacity_in(0x100, 0x1, 1, "/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs");
    v3 = v10;
    v4 = 0;
    v6 = core::fmt::rt::Argument {
        ty: &v0
    };
    v8 = core::fmt::Arguments {
        pieces: [&g_419d80]
        args: [v5]
        fmt: 0
    };
    core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v2, &v8), "src/uu/chcon/src/errors.rs");
    loop {
        v12 = *((v1 + 48) as &i64)(v0) as i64;
        if !v12 {
            break;
        }
        v0 = v12;
        v1 = v10;
        v6 = core::fmt::rt::Argument {
            ty: &v0
        };
        v8 = core::fmt::Arguments {
            pieces: [". "]
            args: [v5]
            fmt: 0
        };
        core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v2, &v8), "src/uu/chcon/src/errors.rs");
    }
    *((v7 + 16) as &i64) = 0;
    *(v7 as &i128) = *(&v2 as &i128);
    return v7;
}
