fn uu_dd::Output::new_fifo(a1: i64, a2: i64, a3: i64) -> : struct17 {
    let a0: i64;  // rdi
    let v0: core::fmt::Arguments;  // [bp-0x48], Other Possible Types: u32
    let v1: struct4;  // [bp-0x44], Other Possible Types: u64
    let v2: u8;  // [bp-0x3f]
    let v3: core::fmt::Arguments;  // [bp-0x3e]
    let v4: i8;  // [bp-0x3c]
    let v5: u8;  // [bp-0x3b]
    let v6: Result<struct4, struct8>;  // [bp-0x38], Other Possible Types: u128
    let v7: core::fmt::rt::Argument;  // [bp-0x34]
    let v9: u64;  // rdx
    let v10: u32;  // edx
    let v12: u64;  // rdx

    if *((a3 + 136) as &i64) {
        v6 = std::fs::File::open(a1, a2);
        match v6 {
            Err(_) => {
                return struct24 {
                    field_0: 4
                    padding_1: <UNKNOWN>
                    field_8: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v6 as &char + 8) as &i64))
                    field_16: v12
                };
            },
            Ok(v1) => {
                v0 = 2;
                if (uu_dd::Dest::seek(&v0 as u32) as u8 & 1) {
                    return struct24 {
                        field_0: 4
                        padding_1: <UNKNOWN>
                        field_8: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9)
                        field_16: v9
                    };
                }
            },
        }
    }
    if *(a3 as &i32) != 2 && !*((a3 + 8) as &i64) {
        return struct16 {
            field_0: 3
            padding_1: <UNKNOWN>
            field_16: <UNKNOWN>
        };
    }
    v1 = 438;
    v2 = 1;
    v4 = *((a3 + 146) as &i8) ^ 1;
    v5 = *((a3 + 145) as &i8);
    v3 = *((a3 + 150) as &i8);
    v0 = ((uu_dd::make_linux_oflags(a3 + 150) & 1) ? v10 : 0);
    v6 = std::fs::OpenOptions::open(&v0, a1, a2);
    match v6 {
        Ok(_) => {
            return struct8 {
                field_0: 2
                padding_1: <UNKNOWN>
                field_4: v7
            };
        },
        Err(_) => {
            return struct24 {
                field_0: 4
                padding_1: <UNKNOWN>
                field_8: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v6 as &char + 8) as &i64))
                field_16: v12
            };
        },
    }
}
