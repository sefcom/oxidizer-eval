fn uu_dd::Input::new_file(a1: i64, a2: i64, a3: i64) -> Result<struct16, struct16> {
    let a0: u64;  // rsi
    let v0: core::result::Result<std::fs::File, std::io::error::Error>;  // [bp-0x58], Other Possible Types: u32
    let v1: u32;  // [bp-0x54]
    let v2: struct16;  // [bp-0x48]
    let v4: u64;  // [bp-0x48]
    let v5: u8;  // [bp-0x40]
    let v6: Result<struct16, struct12>;  // [bp-0x38]
    let v9: u64;  // rcx
    let v10: i64;  // rdi
    let v11: core::result::Result<u64, std::io::error::Error>;  // eax
    let v12: u32;  // eax
    let v13: i64;  // rdi
    let v14: u64;  // rdx
    let v16: i64;  // rdi

    v2 = struct16 {
        field_0: 0x1b600000000
        field_8: 0
        field_12: 0
    };
    v5 = 1;
    v0 = std::fs::OpenOptions::open(&v4, a0, a1);
    v6 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0, a0, a1);
    match v6 {
        Ok(_) => {
            v9 = *((&v6 as &char + 8) as &i64);
            *((v10 + 8) as &i64) = v6 as i64;
            *((v10 + 16) as &u64) = v9;
            *(v10 as &i64) = 1;
            return;
        },
        Err(_) => {
            v11 = *((&v6 as &char + 8) as &i32);
            v1 = *((&v6 as &char + 8) as &i32);
            v0 = 0;
            if !*((a2 + 128) as &i64) {
                v12 = v11;
            } else if uu_dd::Source::skip(&v0, *((a2 + 128) as &i64)) {
                *((v13 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v14);
                *((v13 + 16) as &u64) = v14;
                *(v13 as &i64) = 1;
                return;
            } else {
                v12 = v1;
            }
            *((v16 + 8) as &i32) = 0;
            *((v16 + 12) as &u32) = v12;
            *((v16 + 16) as &struct_3 *) = a2;
            *(v16 as &i64) = 0;
            return;
        },
    }
}
