fn uu_dd::Output::prepare_file(a0: &struct24, a1: u32, a2: void*) -> u64 {
    let v0: u8;  // [sp-0x30]
    let v1: u8;  // [sp-0x2f]
    let v2: struct16;  // [sp-0x20]
    let v5: u64;  // rax
    let v6: &struct_0;  // rbx
    let v7: &struct_0;  // rbx
    let v8: u64;  // rax
    let v9: u64;  // rax

    v1 = a2->field_90 ^ 1;
    v0 = 1;
    v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_dd::Dest::seek(&v0), a2);
    v5 = v2.field_0;
    if v5 {
        v7 = v6;
        v9 = v8;
    } else {
        a0->field_0 = *(&v0 as &i128);
        v7 = a2;
        v9 = v5;
    }
    a0->field_10 = v7;
    return v9;
}
