fn uu_dd::Output::prepare_file(a1: i32, a2: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct2;  // [bp-0x30]
    let v1: Result<struct16, struct16>;  // [bp-0x20]
    let v3: i64;  // rbx
    let v5: core::fmt::rt::Argument;  // rbx
    let v6: u64;  // rbx

    v3 = a2;
    v0 = struct2 {
        field_0: 1
        field_1: *((a2 + 144) as &i8) ^ 1
    };
    v1 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_dd::Dest::seek(&v0) as u64, a2);
    match v1 {
        Err(_) => {
            return struct24 {
                field_0: *(&v0 as &i128)
                field_16: v6
            };
        },
        Ok(_) => {
            v5 = *((&v1 as &char + 8) as &i64);
            return struct16 {
                field_0: 4
                padding_1: <UNKNOWN>
                field_8: v1 as i64
            };
        },
    }
}
