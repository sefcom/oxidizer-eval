fn uu_realpath::canonicalize_relative_option(a0: &struct24, a1: &struct24, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [sp-0x78]
    let v1: i64;  // [sp-0x68]
    let v2: struct24;  // [sp-0x58], Other Possible Types: i192
    let v3: i192;  // [sp-0x40], Other Possible Types: Result<struct24, struct16>
    let v5: i64;  // r13
    let v6: i64;  // r15
    let v7: i64;  // r12

    if *(a1 as &i64) == 0x8000000000000000 {
        v5 = 0x8000000000000000;
    } else {
        v1 = *((a1 + 16) as &i64);
        v0 = *(a1 as &i128);
        v3 = uu_realpath::canonicalize_relative(*((&v0 as &char + 8) as &i64), v1, a2);
        v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v3, &v0);
        v5 = v2;
        v6 = *((&v2 as &char + 8) as &i64);
        v7 = *((&v2 as &char + 16) as &i64);
        if v5 == 0x8000000000000000 {
            return struct24 {
                field_0: 9223372036854775809
                field_8: v6
                field_16: v7
            };
        }
    }
    return struct24 {
        field_0: v5
        field_8: v6
        field_16: v7
    };
}
