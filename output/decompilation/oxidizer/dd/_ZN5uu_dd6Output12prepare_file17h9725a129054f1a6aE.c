fn uu_dd::Output::prepare_file(a1: i32, a2: i64) -> Result<struct24, struct17> {
    let a0: i32;  // esi
    let v0: u64;  // [bp-0x30]
    let v1: u8;  // [bp-0x2f]
    let v2: struct16;  // [bp-0x20]
    let v4: u64;  // rbx
    let v6: i64;  // rdi

    v4 = a1;
    v1 = *((a1 + 144) as &i8) ^ 1;
    v0 = 1;
    v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_dd::Dest::seek(&v0) as u64, a1);
    if v2.field_0 {
        v4 = v2.field_8;
        *((v6 + 8) as &u64) = v2.field_0;
        *(v6 as &i8) = 4;
    } else {
        *(v6 as &i128) = *(&v0 as &i128);
    }
    *((v6 + 16) as &u64) = v4;
    return;
}
