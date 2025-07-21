fn uu_dd::Output::new_fifo(a1: i64, a2: i64, a3: i64) -> : struct17 {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x48]
    let v1: u64;  // [bp-0x48]
    let v2: core::fmt::Arguments;  // [bp-0x44], Other Possible Types: u64
    let v3: u8;  // [bp-0x3e]
    let v4: i8;  // [bp-0x3c]
    let v5: u8;  // [bp-0x3b]
    let v6: Result<struct4, struct8>;  // [bp-0x38], Other Possible Types: u8
    let v7: core::fmt::Arguments;  // [bp-0x38]
    let v8: core::fmt::Arguments;  // [bp-0x34]
    let v10: i64;  // rdi
    let v11: u64;  // rdx
    let v13: i64;  // rdi
    let v15: i64;  // rdi
    let v16: u64;  // rdx

    if *((a2 + 136) as &i64) {
        std::fs::File::open(&v6, a0, a1);
        if v7 {
            *((v15 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v6 as &char + 8) as &i64));
            *((v15 + 16) as &u64) = v16;
            *(v15 as &i8) = 4;
            return;
        }
        v2 = v8;
        v0 = 2;
        v0 = v1 & -0x100 | 2;
        if uu_dd::Dest::seek(&v0) as u64 {
            *((v10 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11);
            *((v10 + 16) as &u64) = v11;
            *(v10 as &i8) = 4;
            return;
        }
    }
    if *(a2 as &i64) && *(a2 as &i64) != 1 || *((a2 + 8) as &i64) {
        v2 = 1099511628214;
        v4 = *((a2 + 146) as &i8) ^ 1;
        v5 = *((a2 + 145) as &i8);
        v3 = *((a2 + 150) as &i8);
        v0 = uu_dd::make_linux_oflags(a2 + 150) as i32;
        v6 = std::fs::OpenOptions::open(&v0);
        match v6 {
            Err(_) => {
                *((v15 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v6 as &char + 8) as &i64));
                *((v15 + 16) as &u64) = v16;
                *(v15 as &i8) = 4;
                return;
            },
            Ok(_) => {
                *(v13 as &i8) = 2;
                *((v13 + 4) as &core::fmt::Arguments) = v8;
            },
        }
    } else {
        *(v13 as &i8) = 3;
    }
    *((v13 + 16) as &struct_1 *) = a2;
    return;
}
