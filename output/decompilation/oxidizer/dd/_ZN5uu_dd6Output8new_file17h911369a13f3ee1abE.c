fn uu_dd::Output::new_file(a0: &struct24, a1: u32, a2: u32, a3: void*) -> u64 {
    let v0: i32;  // [sp-0x54]
    let v1: i128;  // [sp-0x50], Other Possible Types: Result<struct16, struct4>
    let v2: i64;  // [sp-0x40], Other Possible Types: Result<struct4, struct8>

    v2 = uu_dd::Output::new_file::open_dst(a1, a2, *((a3 + 145) as &i8), *((a3 + 146) as &i8), a3 + 150);
    v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v2, a1, a2);
    match v1 {
        Ok(_) => {
            return struct17 {
                field_0: 4
                field_8: <UNKNOWN>
                field_16: <UNKNOWN>
            };
        },
        Err(v0) => {
        },
    }
    if !*((a3 + 147) as &i8) {
        v2 = std::fs::File::set_len(&v0, *((a3 + 136) as &i64));
    }
    uu_dd::Output::prepare_file(a0, v0, a3);
}
