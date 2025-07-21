fn uu_tail::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: Result<struct80, struct24>;  // [bp-0xf8], Other Possible Types: struct24, struct28, u64
    let v1: struct80;  // [bp-0xf8]
    let v2: u64;  // [bp-0xf0]
    let v3: i64;  // [bp-0xe8]
    let v4: core::fmt::Arguments;  // [bp-0xe0]
    let v5: alloc::string::String;  // [bp-0xd8]
    let v6: i64;  // [bp-0xa8]
    let v7: u64;  // [bp-0xa0]
    let v8: struct80;  // [bp-0x98]
    let v9: u64;  // [bp-0x90]
    let v10: void*;  // [bp-0x48]
    let v11: u64;  // [bp-0x40]
    let v12: u64;  // [bp-0x38]
    let v13: u8;  // [bp-0x30]
    let v14: core::fmt::rt::Argument;  // [bp-0x28]
    let v15: i8;  // [bp-0x18]
    let v17: u64;  // rax
    let v18: void*;  // rbx
    let v19: u64;  // rdx

    v0 = uu_tail::args::parse_args(a0, a1);
    match v0 {
        Err(_) => {
            return v9;
        },
        Ok(v8) => {
            uu_tail::args::Settings::check_warnings(&v8);
            v17 = uu_tail::args::Settings::verify(&v8);
            if v17 as u8 == 2 {
                return v18;
            }
            if v17 as u32 == 1 {
                v10 = 0;
                v11 = &g_41f813;
                v12 = 1;
                v13 = 1;
                v6 = &v10;
                v7 = <os_display::Quoted as core::fmt::Display>::fmt;
                v0 = "cannot follow ";
                v2 = 2;
                v5 = 0;
                v3 = &v6;
                v4 = 1;
                v0 = core::option::Option<T>::map_or_else(v19);
                v0 = struct28 {
                    field_0: v14
                    field_16: *(&v15 as &i64)
                    field_24: 1
                };
                v18 = alloc::boxed::Box<T>::new(&v0);
            } else {
                return uu_tail::uu_tail(&v8);
            }
            return v18;
        },
    }
}
