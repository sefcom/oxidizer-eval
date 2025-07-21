fn uu_dd::Output::new_stdout(a1: i64) -> : struct24 {
    let a0: u64;  // rsi
    let v0: struct16;  // [bp-0x30]
    let v1: struct16;  // [bp-0x20]
    let v3: u64;  // r14
    let v5: i64;  // rdi

    v3 = a0;
    v0 = struct16 {
        field_0: 0
        padding_1: <UNKNOWN>
        field_8: std::io::stdio::stdout()
    };
    v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_dd::Dest::seek(&v0) as u64, a1);
    if *(&v1.field_0 as &i64) {
        v3 = v1.padding_1;
        *((v5 + 8) as &i64) = *(&v1.field_0 as &i64);
        *(v5 as &i8) = 4;
    } else {
        *(v5 as &i128) = *(&v0.field_0 as &i128);
    }
    *((v5 + 16) as &u64) = v3;
    return;
}
