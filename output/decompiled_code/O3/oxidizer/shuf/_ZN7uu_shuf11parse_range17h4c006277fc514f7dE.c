fn uu_shuf::parse_range(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xb8], Other Possible Types: Result<struct8, struct1>
    let v1: i64;  // [sp-0xb0]
    let v2: i64;  // [sp-0xa8]
    let v3: i8;  // [sp-0xa0]
    let v4: struct24;  // [sp-0x98], Other Possible Types: i64
    let v5: i64;  // [sp-0x90]
    let v6: i64;  // [sp-0x88]
    let v7: i64;  // [sp-0x80]
    let v8: i64;  // [sp-0x78]
    let v9: i64;  // [sp-0x68]
    let v10: i64;  // [sp-0x60]
    let v11: i64;  // [sp-0x58]
    let v12: Option<struct32>;  // [sp-0x50], Other Possible Types: i256
    let v14: i64;  // rbp
    let v15: i64;  // r12
    let v16: i64;  // r13
    let v17: i64;  // r12
    let v18: i64;  // rax
    let v19: i64;  // rax

    v12 = core::str::<impl str>::split_once(a1, a2);
    v14 = v12;
    match v12 {
        None => {
            v0 = 0;
            v1 = a1;
            v2 = a2;
            v3 = 1;
            v10 = &v0;
            goto LABEL_4c1822;
        },
        Some(_) => {
            v15 = *((&v12 as &char + 8) as &i64);
            v9 = *((&v12 as &char + 16) as &i64);
            v16 = *((&v12 as &char + 24) as &i64);
            v0 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v14, v15);
            match v0 {
                Err(_) => {
                    v4 = uu_shuf::parse_range::{{closure}}(v14, v15);
                },
                Ok(_) => {
                    v17 = v1;
                    v0 = core::num::<impl core::str::traits::FromStr for usize>::from_str(v9, v16);
                    if v0 {
                        v4 = uu_shuf::parse_range::{{closure}}(v9, v16);
                    } else {
                        v18 = v1;
                        if v17 <= v18 || v17 == v18 + 1 {
                            *((a0 + 8) as &i64) = v17;
                            *((a0 + 16) as &i64) = v18;
                            *((a0 + 24) as &i8) = 0;
                            v19 = 0;
                        } else {
                            v0 = 0;
                            v1 = a1;
                            v2 = a2;
                            v3 = 1;
                            v10 = &v0;
LABEL_4c1822:
                            v11 = <os_display::Quoted as core::fmt::Display>::fmt;
                            v4 = "invalid input range: ";
                            v5 = 1;
                            v8 = 0;
                            v6 = &v10;
                            v7 = 1;
                            core::option::Option<T>::map_or_else(a0 + 8, &v4);
                            v19 = 1;
                        }
                        return struct8 {
                            field_0: v19
                        };
                    }
                },
            }
            return struct8 {
                field_0: v19
            };
        },
    }
}
