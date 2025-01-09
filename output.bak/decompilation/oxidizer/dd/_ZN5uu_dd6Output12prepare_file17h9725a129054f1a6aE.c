fn uu_dd::Output::prepare_file(a0: &Result<struct24, struct16>, a1: u32, a2: void*) -> u64 {
    let v0: u8;  // [sp-0x30]
    let v1: u8;  // [sp-0x2f]
    let v2: u128;  // [sp-0x20], Other Possible Types: struct16
    let v4: u32;  // rdx
    let v5: u64;  // rax
    let v6: u64;  // rax
    let v7: u64;  // rax

    v1 = a2->field_90 ^ 1;
    v0 = 1;
    v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_dd::Dest::seek(&v0), v4);
    v5 = v2;
    if !v5 {
        *(&a0->field_0 as &i128) = *(&v0 as &i128);
        v6 = v5;
    } else {
        a2 = *((&v2 as &char + 8) as &i64);
        a0->padding_1[7] = v5;
        a0->field_0 = 4;
        v6 = v7;
    }
    a0->field_10 = a2;
    return v6;
}
