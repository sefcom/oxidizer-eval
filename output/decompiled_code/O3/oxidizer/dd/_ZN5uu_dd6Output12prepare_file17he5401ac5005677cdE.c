fn uu_dd::Output::prepare_file(a0: void*, a1: u32, a2: void*) -> u64 {
    let v0: u8;  // [sp-0x20]
    let v1: u8;  // [sp-0x1f]
    let v3: u64;  // rax
    let v4: u64;  // rax
    let v5: u64;  // rdx
    let v6: u64;  // rax

    v1 = a2->field_90 ^ 1;
    v0 = 1;
    v3 = uu_dd::Dest::seek(&v0, a2->field_88);
    if !v3 {
        *(&a0->field_0 as &i128) = *(&v0 as &i128);
        a0->field_10 = a2;
        return v4;
    }
    *(&a0->padding_1[7] as &double) = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v5);
    a0->field_10 = &anon.47fcc33835ba2501a8fd1dfb926be52d.4.llvm.7315772993864627227;
    a0->field_0 = 4;
    v6 = v0;
    if v6 - 1 <= 1 {
        return v4;
    }
    return v4;
}
