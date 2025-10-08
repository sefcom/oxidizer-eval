fn uu_dd::Output::new_file(a1: i64, a2: i64, a3: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: struct16;  // [bp-0x50], Other Possible Types: u64
    let v1: u64;  // [bp-0x48]
    let v2: Result<struct4, struct8>;  // [bp-0x40], Other Possible Types: u64

    v2 = uu_dd::Output::new_file::open_dst(a1, a2, *((a3 + 145) as &i8), *((a3 + 146) as &i8), a3 + 150);
    v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v2, a1, a2);
    if v0.field_0 {
        return struct24 {
            field_0: 4
            padding_1: <UNKNOWN>
            field_8: v0.field_0
            field_16: v1
        };
    }
    v0 = v0.field_8 as i32;
    if !*((a3 + 147) as &i8) {
        v2 = std::fs::File::set_len(&v0, *((a3 + 136) as &i64));
    }
    uu_dd::Output::prepare_file(a0, v0, a3);
    return;
}
