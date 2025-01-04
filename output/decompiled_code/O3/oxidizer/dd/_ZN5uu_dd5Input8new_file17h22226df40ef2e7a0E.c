fn uu_dd::Input::new_file(a0: &struct24, a1: u32, a2: u32, a3: void*) -> u64 {
    let v0: u32;  // [sp-0x58], Other Possible Types: Result<struct4, struct8>
    let v1: u32;  // [sp-0x54]
    let v2: u64;  // [bp-0x48]
    let v3: u8;  // [bp-0x40]
    let v4: u16;  // [sp-0x3c]
    let v5: u128;  // [sp-0x38], Other Possible Types: Result<struct16, struct12>
    let v7: u32;  // edx
    let v8: u64;  // rax
    let v9: u64;  // rcx
    let v11: u64;  // rdx

    v2 = 0x1b600000000;
    v3 = 0;
    v4 = 0;
    v3 = 1;
    if uu_dd::make_linux_iflags(&a3->padding_0[64] as &struct_0) as i32 == 1 {
        v2 = v7;
    }
    v0 = std::fs::OpenOptions::open(&v2, a1, a2);
    v5 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0, a1, a2);
    v8 = v5;
    match v5 {
        Ok(_) => {
            v9 = *((&v5 as &char + 8) as &i64);
            return struct24 {
                field_0: 1
                field_8:                 uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11)
                field_16: v11
            };
        },
        Err(_) => {
            v1 = *((&v5 as &char + 8) as &i32);
            v0 = 0;
            if a3->field_80 && uu_dd::Source::skip(&v0, a3->field_80, v11) {
                return struct24 {
                    field_0: 1
                    field_8:                     uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11)
                    field_16: v11
                };
            }
            return struct24 {
                field_0: 1
                field_8:                 uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11)
                field_16: v11
            };
        },
    }
}
