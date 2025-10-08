fn uu_stdbuf::get_preload_env(a1: i64) -> Result<struct48, struct24> {
    let a0: i64;  // rdi
    let v0: struct4;  // [bp-0x7c]
    let v1: Result<struct4, struct8>;  // [bp-0x78], Other Possible Types: struct24, u128
    let v2: struct4;  // [bp-0x74]
    let v3: u64;  // [bp-0x70]
    let v4: u64;  // [bp-0x68]
    let v5: u128;  // [bp-0x60]
    let v6: u64;  // [bp-0x58]
    let v7: u64;  // [bp-0x50]
    let v8: struct24;  // [bp-0x40]
    let v9: u64;  // [bp-0x30]
    let v10: u128;  // [bp-0x28]
    let v11: i8;  // [bp-0x18]
    let v13: u64;  // rdx
    let v14: u64;  // rdx
    let v15: Result<(), &BOT>;  // rax

    v1 = std::path::Path::join(*(a1 as &i64), *((a1 + 8) as &i64));
    v8 = std::path::Path::with_extension(v3, v4);
    v1 = std::fs::File::create(&v8);
    match v1 {
        Err(_) => {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3)
                field_16: v13
            };
        },
        Ok(v0) => {
            v15 = std::io::Write::write_all(&v0, a1, v14);
            match v15 {
                Ok(_) => {
                    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v10, "LD_PRELOAD");
                    v4 = *(&v11 as &i64);
                    v1 = v10;
                    v7 = v9;
                    v5 = v8.field_0;
                    return Ok(struct48 {
                        field_0: v10
                        field_16: v4
                        field_24: v5 as i64
                        field_32: v6
                        field_40: v7
                    });
                },
                Err(_) => {
                    return struct24 {
                        field_0: 0x8000000000000000
                        field_8: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15)
                        field_16: v14
                    };
                },
            }
        },
    }
}
