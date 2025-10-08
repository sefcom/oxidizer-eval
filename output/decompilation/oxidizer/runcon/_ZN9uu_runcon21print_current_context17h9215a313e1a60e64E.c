fn uu_runcon::print_current_context() -> : struct72 {
    let a0: i64;  // rdi
    let v0: core::fmt::Arguments;  // [bp-0xd0], Other Possible Types: struct28
    let v1: Result<struct16, struct10>;  // [bp-0xd0]
    let v2: struct28;  // [bp-0xd0]
    let v3: u32;  // [bp-0xcc]
    let v4: struct32;  // [bp-0xc8], Other Possible Types: u64
    let v5: i8;  // [bp-0xb0]
    let v6: core::fmt::Arguments;  // [bp-0xac]
    let v7: i8;  // [bp-0xa8]
    let v8: alloc::string::String;  // [bp-0xa0]
    let v9: core::fmt::rt::Argument;  // [bp-0x98], Other Possible Types: u128
    let v10: u128;  // [bp-0x90]
    let v11: core::fmt::rt::Argument;  // [bp-0x68], Other Possible Types: struct32
    let v12: core::fmt::Arguments;  // [bp-0x58]
    let v13: core::fmt::Arguments;  // [bp-0x48]
    let v14: u128;  // [bp-0x38]
    let v15: u64;  // [bp-0x28]
    let v16: u64;  // [bp-0x20]
    let v17: u128;  // [bp-0x18]
    let v19: u32;  // eax
    let v20: u32;  // eax
    let v21: iNone;  // xmm0

    v0 = selinux::SecurityContext::current(None);
    v19 = v0.field_0;
    if v19 != 10 {
        v13 = v6;
        v12 = v4.field_0;
        v11 = *(&(&v0.field_0)[1] as &i128);
        v9 = v11;
        return struct80 {
            field_0: v19
            field_4: <UNKNOWN>
            field_20: <UNKNOWN>
            field_36: *(&v7 as &i128)
            field_40: <UNKNOWN>
            field_56: 47
            field_64: <UNKNOWN>
        };
    }
    v11 = v4;
    v2 = selinux::SecurityContext::to_c_string(&v11);
    v20 = v2.field_0;
    if v20 != 10 {
        v9 = *(&v2.field_16 as &i128);
        v21 = v9;
        *(&v14 as void*) = v21;
        return struct72 {
            field_0: v20
            field_4: v3
            field_8: v4
            field_16: v21
            field_32: *(&v5 as &i128)
            field_48: v8
            field_56: &g_41b25a
            field_64: 47
        };
    }
    v17 = *(&v2.field_16 as &i128);
    if v4 == 2 {
        v0 = core::fmt::Arguments {
            pieces: ["\n"]
            args: []
            fmt: 0
        };
        std::io::stdio::_print(&v0);
    } else {
        v9 = v4;
        v10 = v17;
        v1 = core::ffi::c_str::CStr::to_str(v10 as i64, *((&v10 as &char + 8) as &i64));
        match v1 {
            Err(_) => {
                return struct24 {
                    field_0: 12
                    padding_4: <UNKNOWN>
                    field_8: v4
                    field_16: v16
                };
            },
            Ok(_) => {
                v15 = v4;
                v16 = *((&v1 as &char + 16) as &i64);
                println!("{}", &v15);
            },
        }
    }
    return struct4 {
        field_0: 17
    };
}
