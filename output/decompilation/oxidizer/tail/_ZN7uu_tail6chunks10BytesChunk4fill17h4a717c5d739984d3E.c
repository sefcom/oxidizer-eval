fn uu_tail::chunks::BytesChunk::fill(a1: i64, a2: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct56;  // [bp-0x18]
    let v2: struct56;  // rax
    let v4: u64;  // rdx
    let v5: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v0 = v2;
    v5 = <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read(a2, a1, 0x2000);
    match v5 {
        Err(_) => {
            return struct24 {
                field_0: 1
                field_8: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v5 as &char + 8) as &i64))
                field_16: v4
            };
        },
        Ok(_) => {
            *((a1 + 0x2000) as &i64) = *((&v5 as &char + 8) as &i64);
            if !*((&v5 as &char + 8) as &i64) {
                return struct16 {
                    field_0: 0
                };
            }
            return struct24 {
                field_0: 0
                field_8: 1
                field_16: *((&v5 as &char + 8) as &i64)
            };
        },
    }
}
