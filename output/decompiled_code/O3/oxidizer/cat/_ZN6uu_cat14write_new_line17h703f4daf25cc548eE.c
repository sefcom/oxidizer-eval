fn uu_cat::write_new_line(a0: &struct24, a1: u32, a2: &u64, a3: void*, a4: u32) -> u64 {
    let v0: u64;  // [sp-0xa8], Other Possible Types: Option<struct8>
    let v2: void*;  // [sp-0x98], Other Possible Types: u64
    let v3: u64;  // [sp-0x90]
    let v4: void*;  // [sp-0x88]
    let v5: u64;  // [sp-0x80]
    let v6: u8;  // [sp-0x78]
    let v7: &struct_0;  // [sp-0x70]
    let v8: u64;  // [sp-0x68]
    let v9: struct48;  // [bp-0x60]
    let v11: Option<struct8>;  // rax
    let v12: u64;  // r8
    let v13: u64;  // rdx
    let v14: u64;  // rcx
    let v15: u64;  // r8
    let v16: u64;  // rdx
    let v17: u64;  // rcx

    if !a3->field_9 {
        v11 = a3->field_8;
        if !v11 as u8 || !*(a2 as &i8) || !a3->field_a {
            a3->field_a = 1;
            if v11 as u8 && *((a2 as &char + 4) as &i8) == 2 {
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
                v11 = std::io::Write::write_fmt(a1, &v9);
                if v11 {
                    return struct16 {
                        field_0: 0x8000000000000000
                        field_8: v11
                    };
                }
                a3->field_0 = a3->field_0 + 1;
            }
            if *((a2 as &char + 2) as &i8) {
                v15 = a4;
                v16 = &g_41ce24;
                v17 = 2;
            } else {
                v15 = a4;
                v16 = &g_41ce0c;
                v17 = 1;
            }
            v0 = uu_cat::write_end_of_line(a1, v16, v17, v15);
            v11 = v0;
            if v11 != 9223372036854775814 {
                return struct24 {
                    field_0: v11
                    field_8: *(&v1 as &i128)
                };
            }
        }
    } else {
        if !*((a2 as &char + 2) as &i8) {
            v11 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, &g_41ce0b, 1);
            if v11 {
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: v11
                };
            }
            a3->field_9 = 0;
            v12 = a4;
            v13 = &g_41ce0c;
            v14 = 1;
        } else {
            v11 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, "^M");
            if v11 {
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: v11
                };
            }
            a3->field_9 = 0;
            v12 = a4;
            v13 = &g_41ce24;
            v14 = 2;
        }
        v11 = uu_cat::write_end_of_line(a1, v13, v14, v12);
        if v0 != 9223372036854775814 {
            v11 = v2;
            return struct24 {
                field_0: *(&v0 as &i128)
                field_16: v11
            };
        }
    }
    return struct8 {
        field_0: 9223372036854775814
    };
}
