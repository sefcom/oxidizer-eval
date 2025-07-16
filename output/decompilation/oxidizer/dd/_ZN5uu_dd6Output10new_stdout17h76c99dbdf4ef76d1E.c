fn uu_dd::Output::new_stdout(a1: i64) -> Result<struct24, struct17> {
    let a0: u64;  // rsi
    let v0: core::result::Result<u64, std::io::error::Error>;  // [bp-0x30]
    let v1: std::io::stdio::Stdout;  // [bp-0x28]
    let v2: struct16;  // [bp-0x20]
    let v4: u64;  // r14
    let v6: i64;  // rdi

    v4 = a0;
    v1 = std::io::stdio::stdout();
    v0 = 0;
    v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_dd::Dest::seek(&v0) as u64, a1);
    if v2.field_0 {
        v4 = v2.field_8;
        *((v6 + 8) as &u64) = v2.field_0;
        *(v6 as &i8) = 4;
    } else {
        *(v6 as &core::result::Result<u64, std::io::error::Error>) = v0;
    }
    *((v6 + 16) as &u64) = v4;
    return;
}
