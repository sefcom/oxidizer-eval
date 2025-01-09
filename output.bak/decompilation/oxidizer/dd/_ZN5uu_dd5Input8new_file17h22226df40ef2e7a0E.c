fn uu_dd::Input::new_file(a0: &struct24, a1: u32, a2: u32, a3: void*) -> u64 {
    let v0: i32;  // [sp-0x58], Other Possible Types: Result<struct4, struct8>
    let v1: i32;  // [bp-0x54]
    let v2: i32;  // [bp-0x48]
    let v3: i8;  // [bp-0x40]
    let v4: i16;  // [sp-0x3c]
    let v5: Result<struct16, struct4>;  // [sp-0x38], Other Possible Types: i136
    let v7: i32;  // edx
    let v9: i64;  // rcx
    let v12: i64;  // rdx

    v2 = 0x1b600000000;
    v3 = 0;
    v4 = 0;
    v3 = 1;
    if uu_dd::make_linux_iflags(a3 + 64) as i32 == 1 {
        v2 = v7;
    }
    v0 = std::fs::OpenOptions::open(&v2, a1, a2) as u64;
    v5 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0, a1, a2);
    match v5 {
        Ok(_) => {
            v9 = *((&v5 as &char + 8) as &i64);
            return struct24 {
                field_0: 1
                field_8: v8
                field_16: v9
            };
        },
        Err(v1) => {
            v0 = 0;
        },
    }
    if !*((a3 + 128) as &i64) {
        v0 = 0;
    }
    if !uu_dd::Source::skip(&v0, *((a3 + 128) as &i64)) {
        return struct24 {
            field_0: 0
            field_8: v0
            field_12: v11
            field_16: a3
        };
    }
    *((a0 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
    *((a0 + 16) as &i64) = v12;
    *(a0 as &i64) = 1;
}
