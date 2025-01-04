fn uu_dd::Output::new_stdout(a0: &Result<struct24, struct17>, a1: u64, a2: u32) -> u64 {
    let v0: u8;  // [sp-0x30]
    let v1: u64;  // [sp-0x28]
    let v2: struct16;  // [sp-0x20], Other Possible Types: u128
    let v4: u32;  // rdx
    let v5: u64;  // rax

    v1 = std::io::stdio::stdout();
    v0 = 0;
    v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_dd::Dest::seek(&v0), v4);
    v5 = v2;
    if !v5 {
        *(&a0->field_0 as &i128) = *(&v0 as &i128);
    } else {
        a1 = *((&v2 as &char + 8) as &i64);
        a0->padding_1[7] = v5;
        a0->field_0 = 4;
    }
    a0->field_10 = a1;
    return a0;
}
