fn uu_dd::Output::new_stdout(a1: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct16;  // [bp-0x30]
    let v1: Result<struct16, struct16>;  // [bp-0x20]
    let v3: u64;  // r14
    let v5: u64;  // rdx
    let v6: core::fmt::Arguments;  // r14
    let v7: u64;  // r14

    v3 = a1;
    v0 = struct16 {
        field_0: 0
        padding_1: <UNKNOWN>
        field_8: std::io::stdio::stdout()
    };
    v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_dd::Dest::seek(&v0) as u64, v5);
    match v1 {
        Err(_) => {
            return struct24 {
                field_0: *(&v0.field_0 as &i128)
                field_16: v7
            };
        },
        Ok(_) => {
            v6 = *((&v1 as &char + 8) as &i64);
            return struct16 {
                field_0: 4
                padding_1: <UNKNOWN>
                field_8: v1 as i64
            };
        },
    }
}
