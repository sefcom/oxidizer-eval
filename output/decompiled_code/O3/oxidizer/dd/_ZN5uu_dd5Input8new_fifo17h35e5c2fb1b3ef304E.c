fn uu_dd::Input::new_fifo(a0: &struct24, a1: u32, a2: u32, a3: void*) -> u64 {
    let v0: u32;  // [sp-0x48]
    let v1: u32;  // [bp-0x44]
    let v2: u32;  // [sp-0x40]
    let v3: u64;  // [bp-0x3c]
    let v4: u8;  // [sp-0x38]
    let v5: u16;  // [sp-0x34]
    let v6: Result<struct4, struct8>;  // [sp-0x30], Other Possible Types: u64
    let v9: u32;  // eax
    let v10: u32;  // eax
    let v11: u32;  // edx
    let v14: u64;  // rdx

    v3 = 438;
    v5 = 0;
    v4 = 1;
    v9 = uu_dd::make_linux_iflags(&a3->padding_0[64] as &struct_1) as i32;
    if !v9 {
        v10 = v9;
    } else {
        v10 = v11;
    }
    v2 = v10;
    v6 = std::fs::OpenOptions::open(&v2, a1, a2);
    match v6 {
        Err(_) => {
            return struct24 {
                field_0: 1
                field_8:                 uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v14)
                field_16: v14
            };
        },
        Ok(v1) => {
            v0 = 2;
            if a3->field_80 && uu_dd::Source::skip(&v0, a3->field_80, v14) {
                return struct24 {
                    field_0: 1
                    field_8:                     uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v14)
                    field_16: v14
                };
            }
            return struct24 {
                field_0: 1
                field_8:                 uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v14)
                field_16: v14
            };
        },
    }
}
