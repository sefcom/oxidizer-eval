fn uu_cat::write_new_line(a0: &struct24, a1: i64, a2: i64, a3: i64, a4: i8) -> long long {
    let v0: std::io::stdio::Stdin;  // [bp-0xa8], Other Possible Types: u64
    let v1: struct9;  // [bp-0xa8]
    let v2: i8;  // [bp-0xa0]
    let v3: void*;  // [bp-0x98], Other Possible Types: u64
    let v4: u64;  // [bp-0x90]
    let v5: void*;  // [bp-0x88]
    let v6: u64;  // [bp-0x80]
    let v7: u8;  // [bp-0x78]
    let v8: u128;  // [bp-0x70]
    let v9: iNone;  // [bp-0x70]
    let v10: u384;  // [bp-0x60]
    let v12: alloc::string::String;  // rax
    let v13: u64;  // r15
    let v14: core::result::Result<(), std::io::error::Error>;  // rax
    let v15: u8;  // r8b
    let v16: u64;  // rdx
    let v17: i64;  // rdi
    let v18: core::result::Result<(), std::io::error::Error>;  // rcx
    let v19: u8;  // r8b
    let v20: u64;  // rdx
    let v21: i64;  // rdi
    let v22: u64;  // rcx

    if !*((a3 + 9) as &i8) {
        v12 = *((a3 + 8) as &i8);
        if v12 as u8 && *(a2 as &i8) && *((a3 + 10) as &i8) {
            goto LABEL_4b0b42;
        }
        *((a3 + 10) as &i8) = 1;
        if v12 as u8 && *((a2 + 4) as &i8) == 2 {
            v9 = core::fmt::rt::Argument {
                ty: a3
            };
            v0 = 2;
            v3 = 0;
            v4 = 6;
            v5 = 0;
            v6 = 32;
            v7 = 3;
            v10 = core::fmt::Arguments {
                pieces: [&g_518728, "\t"]
                args: [v8]
                fmt: &v0
            };
            v14 = std::io::Write::write_fmt(a1, &v10);
            if let Ok(_) = v14 {
                *(a3 as &i64) = *(a3 as &i64) + 1;
                goto LABEL_4b0aa1;
            }
        } else {
LABEL_4b0aa1:
            if *((a2 + 2) as &i8) {
                v19 = a4;
                v20 = &g_41ce24;
                v21 = &v0;
                v22 = 2;
            } else {
                v19 = a4;
                v20 = &g_41ce0c;
                v21 = &v0;
                v22 = 1;
            }
            uu_cat::write_end_of_line(v21, a1, v20, v22, v19);
            v12 = v0;
            if v0 != 9223372036854775814 {
                return struct32 {
                    field_0: v0
                    field_8: <UNKNOWN>
                };
            }
            goto LABEL_4b0b42;
        }
    } else if *((a2 + 2) as &i8) {
        v13 = a1;
        v14 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, "^M");
        if let Ok(_) = v14 {
            *((a3 + 9) as &i8) = 0;
            v15 = a4;
            v16 = &g_41ce24;
            v17 = &v0;
            v18 = 2;
            goto LABEL_4b0b01;
        }
    } else {
        v13 = a1;
        v14 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, "\r");
        if let Ok(_) = v14 {
            *((a3 + 9) as &i8) = 0;
            v15 = a4;
            v16 = &g_41ce0c;
            v17 = &v0;
            v18 = 1;
LABEL_4b0b01:
            v12 = uu_cat::write_end_of_line(v17, v13, v16, v18, v15);
            if v1 != 9223372036854775814 {
                return struct24 {
                    field_0: *(&v0 as &i128)
                    field_16: v3
                };
            }
LABEL_4b0b42:
            return struct8 {
                field_0: 9223372036854775814
            };
        }
    }
    return struct16 {
        field_0: 0x8000000000000000
        field_8: v14
    };
}
