fn uu_realpath::canonicalize_relative_option(a1: i64, a2: i8, a3: i8) -> Result<struct24, struct24> {
    let a0: i64;  // rsi
    let v0: u128;  // [bp-0x78]
    let v1: u64;  // [bp-0x70]
    let v2: u64;  // [bp-0x68]
    let v3: Result<struct24, struct24>;  // [bp-0x58]
    let v4: u64;  // [bp-0x50]
    let v5: u64;  // [bp-0x48]
    let v6: Result<struct24, struct16>;  // [bp-0x40]
    let v8: u64;  // r13
    let v9: i64;  // rdi
    let v10: i64;  // rdi

    if *(a0 as &i64) != 0x8000000000000000 {
        v2 = *((a0 + 16) as &i64);
        v0 = *(a0 as &i128);
        v6 = uu_realpath::canonicalize_relative(v1, v2, a1, a2);
        v3 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v6, &v0);
        if let Err(_) = v3 {
            *((v9 + 8) as &u64) = v4;
            *((v9 + 16) as &u64) = v5;
            *(v9 as &i64) = 9223372036854775809;
            return;
        }
    }
    *(v10 as &u64) = v8;
    *((v10 + 8) as &u64) = v4;
    *((v10 + 16) as &u64) = v5;
    return;
}
