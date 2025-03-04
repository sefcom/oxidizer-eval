fn uu_realpath::canonicalize_relative_option(a0: &struct24, a1: &struct24, a2: u32, a3: u32) -> u64 {
    let v0: iNone;  // [sp-0x78]
    let v1: i64;  // [sp-0x68]
    let v2: struct24;  // [sp-0x58]
    let v3: Result<struct24, struct8>;  // [sp-0x40]

    if *(a1 as &i64) != 0x8000000000000000 {
        v1 = *((a1 + 16) as &i64);
        v0 = *(a1 as &i128);
        v3 = uu_realpath::canonicalize_relative((&v0)[8] as i64, v1, (a2 & 255) as u64, (a3 & 255) as u64);
        v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v3, &v0);
    }
    return struct24 {
        field_0: v5
        field_8: v6
        field_16: v7
    };
}
