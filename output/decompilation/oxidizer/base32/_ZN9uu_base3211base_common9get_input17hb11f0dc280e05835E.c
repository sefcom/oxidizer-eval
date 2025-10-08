fn uu_base32::base_common::get_input(a1: &struct48) -> Result<struct16, struct16> {
    let a0: i64;  // rdi
    let v0: struct16;  // [bp-0x50], Other Possible Types: struct24
    let v1: u64;  // [bp-0x48]
    let v2: Result<struct4, struct8>;  // [bp-0x38], Other Possible Types: std::io::stdio::Stdin, struct32
    let v6: u64;  // rax
    let v7: u64;  // rax
    let v8: u64;  // rax

    if (((0 ^ *((a1 + 16) as &i64)) & (0 ^ -(*((a1 + 16) as &i64)))) >> 63) as char {
        v0 = struct24 {
            field_0: 0
            field_8: ""
        };
        v2 = std::io::stdio::stdin();
        <std::io::stdio::Stdin as std::io::Read>::read_to_end(&v2 as u128, &v0)?;
        v2 = struct32 {
            field_0: *(&v0.field_0 as &i128)
            field_16: ""
        };
        v6 = &g_50dee0;
        return Ok(struct16 {
            field_0: alloc::boxed::Box<T>::new(&v2) as u64
            field_8: v7
        });
    }
    v2 = std::fs::File::open(a1 + 16);
    v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v2, *((a1 + 24) as &i64), *((a1 + 32) as &i64));
    if !v0.field_0 {
        *((a0 + 8) as &u64) = alloc::boxed::Box<T>::new(v0.field_8);
        v8 = &g_50dfa8;
    }
    return Err(struct16 {
        field_0: v0.field_0
        field_8: v1
    });
}
