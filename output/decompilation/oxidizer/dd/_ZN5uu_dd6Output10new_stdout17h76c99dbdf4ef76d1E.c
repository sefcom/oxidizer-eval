fn uu_dd::Output::new_stdout(a0: &struct24, a1: u32) -> u64 {
    let v0: u8;  // [sp-0x30]
    let v1: u64;  // [sp-0x28]
    let v2: struct16;  // [sp-0x20], Other Possible Types: u128
    let v4: u32;  // rdx
    let v5: u64;  // r14
    let v6: u64;  // r14

    v1 = std::io::stdio::stdout();
    v0 = 0;
    v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_dd::Dest::seek(&v0), v4);
    if !v2 as i64 {
        a0->field_0 = *(&v0 as &i128);
        v6 = a1;
    } else {
        v6 = v5;
    }
    a0->field_10 = v6;
    return a0;
}
