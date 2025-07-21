fn uu_dd::Output::prepare_file(a1: i32, a2: i64) -> : struct24 {
    let a0: i32;  // esi
    let v0: u64;  // [bp-0x30]
    let v1: struct16;  // [bp-0x20]
    let v3: u64;  // rbx
    let v5: i64;  // rdi

    v3 = a1;
    v0 = struct2 {
        field_0: 1
        field_1: *((a1 + 144) as u64 as &i8) ^ 1
    };
    v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_dd::Dest::seek(&v0) as u64, a1);
    if v1.field_0 {
        v3 = v1.field_8;
        *((v5 + 8) as &u64) = v1.field_0;
        *(v5 as &i8) = 4;
    } else {
        *(v5 as &i128) = *(&v0 as &i128);
    }
    *((v5 + 16) as &u64) = v3;
    return;
}
