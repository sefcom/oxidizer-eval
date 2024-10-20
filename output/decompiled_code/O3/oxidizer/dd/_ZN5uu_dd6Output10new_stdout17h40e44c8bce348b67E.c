fn uu_dd::Output::new_stdout(a0: void*, a1: void*, a2: u32) -> u64 {
    let v0: u8;  // [sp-0x20]
    let v1: u64;  // [sp-0x18]
    let v3: u64;  // rdx

    v1 = std::io::stdio::stdout();
    v0 = 0;
    if !uu_dd::Dest::seek(&v0, a1->field_88) {
        *(&a0->field_0 as &i128) = *(&v0 as &i128);
        a0->field_10 = a1;
        return a0;
    }
    *(&a0->padding_1[7] as &double) = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v3);
    a0->field_10 = &anon.47fcc33835ba2501a8fd1dfb926be52d.4.llvm.7315772993864627227;
    a0->field_0 = 4;
    if v0 - 1 <= 1 {
        return a0;
    }
    return a0;
}
