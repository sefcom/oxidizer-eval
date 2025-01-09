fn uu_cat::write_new_line(a0: &struct24, a1: u32, a2: &u64, a3: void*, a4: u32) -> u64 {
    let v0: Option<struct8>;  // [sp-0xa8], Other Possible Types: i64
    let v2: i64;  // [sp-0x98]
    let v3: i64;  // [sp-0x90]
    let v4: i64;  // [sp-0x88]
    let v5: i64;  // [sp-0x80]
    let v6: i8;  // [sp-0x78]
    let v7: i64;  // [sp-0x70]
    let v8: i64;  // [sp-0x68]
    let v9: struct48;  // [bp-0x60]
    let v11: i64;  // rax
    let v12: i64;  // r8
    let v13: i64;  // rdx
    let v14: i64;  // rcx
    let v15: i64;  // r8
    let v16: i64;  // rdx
    let v17: i64;  // rcx

    if !*((a3 + 9) as &i8) {
        v11 = *((a3 + 8) as &i8);
        if v11 && *(a2 as &i8) {
            return struct8 {
                field_0: 9223372036854775814
            };
        }
        *((a3 + 10) as &i8) = 1;
        if v11 && *((a2 + 4) as &i8) == 2 {
            v7 = a3;
            v8 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
            v0 = 2;
            v2 = 0;
            v3 = 6;
            v4 = 0;
            v5 = 32;
            v6 = 3;
            v9 = struct48 {
                field_0: &g_518728
                field_8: 2
                field_16: &v7
                field_24: 1
                field_32: &v0
                field_40: 1
            };
            std::io::Write::write_fmt(a1, &v9);
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v11
            };
            *(a3 as &i64) = *(a3 as &i64) + 1;
        }
        if *((a2 + 2) as &i8) {
            v15 = a4;
            v16 = &g_41ce24;
            v17 = 2;
        } else {
            v15 = a4;
            v16 = &g_41ce0c;
            v17 = 1;
        }
        v0 = uu_cat::write_end_of_line(a1, v16, v17, v15);
        return struct24 {
            field_0: v11
            field_8: v1
        };
    } else {
        if *((a2 + 2) as &i8) {
            <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, "^M");
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v11
            };
            *((a3 + 9) as &i8) = 0;
            v12 = a4;
            v13 = &g_41ce24;
            v14 = 2;
        } else {
            <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, &g_41ce0b, 1);
            return struct16 {
                field_0: 0x8000000000000000
                field_8: v11
            };
            *((a3 + 9) as &i8) = 0;
            v12 = a4;
            v13 = &g_41ce0c;
            v14 = 1;
        }
        uu_cat::write_end_of_line(a1, v13, v14, v12);
        return struct8 {
            field_0: 9223372036854775814
        };
    }
}
