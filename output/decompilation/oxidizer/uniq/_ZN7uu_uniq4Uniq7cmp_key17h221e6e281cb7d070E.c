fn uu_uniq::Uniq::cmp_key(a0: i64, a1: i64, a2: i64, a3: &struct24) -> long long {
    let v0: struct32;  // [bp-0x48], Other Possible Types: struct16
    let v1: core::fmt::rt::Argument;  // [bp-0x20], Other Possible Types: u64
    let v2: i8;  // [bp-0x18]
    let v4: u64;  // r9
    let v5: u64;  // rax
    let v6: u64;  // rax
    let v8: u64;  // rcx
    let v9: void*;  // rdx
    let v10: u32;  // eax

    uu_uniq::Uniq::skip_fields(*(a0 as &i64), *((a0 + 8) as &i64), a1, a2, v4);
    v5 = *(&v2 as &i64);
    if *((a0 + 16) as &i64) {
        v6 = v5;
        if *((a0 + 32) as &i64) {
            v6 = *((a0 + 40) as &i64);
        }
        v8 = v6;
        if v5 {
            v9 = *((a0 + 24) as &i64);
            if !*((a0 + 52) as &i8) {
                if !(!v9) {
                    goto LABEL_4bd019;
                }
                goto LABEL_4bcfed;
            } else {
LABEL_4bcf51:
                goto LABEL_4bcf99;
            }
        }
LABEL_4bcfc8:
        v0 = struct16 {
            field_0: v1
            field_8: v5 + v1
        };
        v0 = struct16 {
            field_0: v1
            field_8: v5 + v1
        };
        v10 = uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530318) as i32;
    } else if *((a0 + 32) as &i64) {
        if !v5 {
            goto LABEL_4bcfc8;
        }
        v8 = *((a0 + 40) as &i64);
        if !(!*((a0 + 52) as &i8)) {
            goto LABEL_4bcf51;
        }
LABEL_4bcfed:
        if v8 == v5 {
            goto LABEL_4bcff2;
        }
LABEL_4bd019:
        v0 = struct32 {
            field_0: v1
            field_8: v5 + v1
            field_16: v9
            field_24: v8
        };
        v0 = struct16 {
            field_0: v1
            field_8: v5 + v1
        };
        v10 = uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530350) as i32;
    } else {
        if !v5 {
            goto LABEL_4bcfc8;
        }
        if *((a0 + 52) as &i8) {
            v9 = 0;
            if v5 == v5 {
                v0 = struct16 {
                    field_0: v1
                    field_8: v5 + v1
                };
                v0 = struct16 {
                    field_0: v1
                    field_8: v5 + v1
                };
                v10 = uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530388) as i32;
            } else {
LABEL_4bcf99:
                v0 = struct32 {
                    field_0: v1
                    field_8: v5 + v1
                    field_16: v9
                    field_24: v8
                };
                v0 = struct16 {
                    field_0: v1
                    field_8: v5 + v1
                };
                v10 = uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_5303c0) as i32;
            }
        } else {
LABEL_4bcff2:
            v0 = struct16 {
                field_0: v1
                field_8: v5 + v1
            };
            v0 = struct16 {
                field_0: v1
                field_8: v5 + v1
            };
            v10 = uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530318) as i32;
        }
    }
    return v10;
}
