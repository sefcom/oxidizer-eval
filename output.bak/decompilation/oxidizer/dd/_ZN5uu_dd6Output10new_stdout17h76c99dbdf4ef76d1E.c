fn uu_dd::Output::new_stdout(a0: &Result<struct24, struct16>, a1: u64) -> u64 {
    let v0: u8;  // [sp-0x30]
    let v1: u64;  // [sp-0x28]
    let v2: u128;  // [sp-0x20], Other Possible Types: struct16
    let v4: u32;  // rdx

    v1 = std::io::stdio::stdout();
    v0 = 0;
    v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_dd::Dest::seek(&v0), v4);
    if v2 as i64 {
        a1 = *((&v2 as &char + 8) as &i64);
        return Err(struct16 {
            field_7: <UNKNOWN>
            field_15: <UNKNOWN>
        });
    }
    return Ok(struct24 {
        field_0: *(&v0 as &i128)
        field_16: a1
    });
}
