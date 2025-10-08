fn uu_shuf::read_input_file(a1: i64, a2: i64) -> Result<struct24, struct24> {
    let a0: u64;  // rdi
    let v0: Result<struct24, struct16>;  // [bp-0x50], Other Possible Types: struct24
    let v1: std::io::stdio::Stdin;  // [bp-0x38]
    let v2: Result<struct16, struct16>;  // [bp-0x30]
    let v5: u64;  // rcx
    let v6: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, a2, "-") {
        v0 = std::fs::read(a1, a2);
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(a0, &v0, a1, a2);
        return;
    }
    v0 = struct24 {
        field_0: 0
        field_8: ""
    };
    v1 = std::io::stdio::stdin();
    v6 = <std::io::stdio::Stdin as std::io::Read>::read_to_end(&v1, &v0);
    v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v6 as i8, a2);
    match v2 {
        Err(_) => {
            return Ok(struct24 {
                field_0: *(&v0.field_0 as &i128)
                field_16: 0
            });
        },
        Ok(_) => {
            v5 = *((&v2 as &char + 8) as &i64);
            return struct24 {
                field_0: 0x8000000000000000
                field_8: v2 as i64
                field_16: v5
            };
        },
    }
}
