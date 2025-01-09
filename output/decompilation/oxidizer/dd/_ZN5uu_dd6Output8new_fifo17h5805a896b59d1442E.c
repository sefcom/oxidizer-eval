fn uu_dd::Output::new_fifo(a0: &struct17, a1: u32, a2: u32, a3: void*) -> u64 {
    let v0: i32;  // [bp-0x48]
    let v1: i64;  // [sp-0x44]
    let v2: i8;  // [sp-0x3e]
    let v3: i8;  // [sp-0x3c]
    let v4: i8;  // [sp-0x3b]
    let v5: i96;  // [sp-0x38], Other Possible Types: Result<struct4, struct8>
    let v9: i32;  // eax
    let v11: i32;  // eax
    let v12: i64;  // rdx

    if *((a3 + 136) as &i64) {
        v5 = std::fs::File::open(a1, a2);
        match v5 {
            Err(_) => {
                *((a0 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
                *((a0 + 16) as &i64) = v12;
                *(a0 as &i8) = 4;
            },
            Ok(v1) => {
                v0 = 2;
            },
        }
    }
    if (!*(a3 as &i64) || *(a3 as &i64) == 1) && !*((a3 + 8) as &i64) {
        return struct9 {
            field_0: 3
            field_16: <UNKNOWN>
        };
    }
    v1 = 1099511628214;
    v3 = *((a3 + 146) as &i8) ^ 1;
    v4 = *((a3 + 145) as &i8);
    v2 = *((a3 + 150) as &i8);
    v0 = v9;
    v5 = std::fs::OpenOptions::open(&v0, a1, a2);
    match v5 {
        Ok(v11) => {
            return struct5 {
                field_0: 2
                field_4: <UNKNOWN>
            };
        },
        Err(_) => {
            *((a0 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
            *((a0 + 16) as &i64) = v12;
            *(a0 as &i8) = 4;
        },
    }
}
