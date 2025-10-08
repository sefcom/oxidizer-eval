fn uu_realpath::canonicalize_relative_option(a1: &struct24, a2: i8, a3: i8) -> Result<struct24, struct24> {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x60]
    let v1: u64;  // [bp-0x60]
    let v2: u64;  // [bp-0x58]
    let v3: u64;  // [bp-0x50]
    let v4: Result<struct24, struct16>;  // [bp-0x48]
    let v6: u64;  // r12

    if (((0 ^ *(a1 as &i64)) & (0 ^ -(*(a1 as &i64)))) >> 63) as char {
        return Ok(struct24 {
            field_0: 0x8000000000000000
            field_8: v6
            field_16: vvar_19{reg 56}
        });
    }
    v4 = uu_realpath::canonicalize_relative(*((a1 + 8) as &i64), *((a1 + 16) as &i64), a2, a3);
    v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v4, *((a1 + 8) as &i64), *((a1 + 16) as &i64));
    if v0.field_0 as i64 != 0x8000000000000000 {
        return Ok(struct24 {
            field_0: v1
            field_8: v2
            field_16: v3
        });
    }
    return struct24 {
        field_0: 9223372036854775809
        field_8: v2
        field_16: v3
    };
}
