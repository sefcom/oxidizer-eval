fn uu_dd::Output::new_fifo(a0: &struct17, a1: u32, a2: u32, a3: void*) -> u64 {
    let v0: u8;  // [bp-0x48]
    let v1: u32;  // [bp-0x44]
    let v2: u8;  // [sp-0x3e]
    let v3: u8;  // [sp-0x3c]
    let v4: u8;  // [sp-0x3b]
    let v5: Result<struct4, struct8>;  // [sp-0x38], Other Possible Types: u64
    let v6: u8;  // [bp-0x30]
    let v8: u32;  // rdx
    let v11: u32;  // eax
    let v14: u64;  // rdx

    if a3->field_88 {
        v5 = std::fs::File::open(a1, a2) as u64;
        if v5 as i32 {
            *(&a0->field_8 as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(&v6 as &i64));
            a0->field_10 = v14;
            a0->field_0 = 4;
        }
        v1 = *((&v5 as &char + 4) as &i32);
        v0 = 2;
        if uu_dd::Dest::seek(&v0) {
            *(&a0->field_8 as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v8);
            a0->field_10 = v8;
            a0->field_0 = 4;
        }
    }
    return struct9 {
        field_0: 3
        field_16: <UNKNOWN>
    };
    v1 = 1099511628214;
    v3 = a3->field_92 ^ 1;
    v4 = a3->field_91;
    v2 = a3->field_96;
    v0 = v11;
    v5 = std::fs::OpenOptions::open(&v0, a1, a2) as u64;
    return struct13 {
        field_0: 2
        field_4: <UNKNOWN>
        field_16: <UNKNOWN>
    };
    *(&a0->field_8 as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(&v6 as &i64));
    a0->field_10 = v14;
    a0->field_0 = 4;
}
