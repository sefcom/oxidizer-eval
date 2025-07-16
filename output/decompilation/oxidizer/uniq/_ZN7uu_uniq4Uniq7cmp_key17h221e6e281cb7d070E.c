fn uu_uniq::Uniq::cmp_key(a0: i64, a1: i64, a2: i64, a3: &struct24) -> long long {
    let v0: u128;  // [bp-0x48]
    let v1: void*;  // [bp-0x38], Other Possible Types: u64
    let v2: u64;  // [bp-0x30]
    let v3: u64;  // [bp-0x20]
    let v4: i8;  // [bp-0x18]
    let v6: u64;  // r9
    let v7: u64;  // rax
    let v8: u64;  // rax
    let v10: u64;  // rcx
    let v11: void*;  // rdx
    let v12: u32;  // eax

    uu_uniq::Uniq::skip_fields(*(a0 as &i64), *((a0 + 8) as &i64), a1, a2, v6);
    v7 = *(&v4 as &i64);
    if *((a0 + 16) as &i64) {
        v8 = v7;
        if *((a0 + 32) as &i64) {
            v8 = *((a0 + 40) as &i64);
        }
        v10 = v8;
        if v7 {
            v11 = *((a0 + 24) as &i64);
            if !*((a0 + 52) as &i8) {
                if !(!v11) {
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
            field_0: v3
            field_8: v7 + v3
        };
        v12 = uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530318) as i32;
    } else if *((a0 + 32) as &i64) {
        if !v7 {
            goto LABEL_4bcfc8;
        }
        v10 = *((a0 + 40) as &i64);
        if !(!*((a0 + 52) as &i8)) {
            goto LABEL_4bcf51;
        }
LABEL_4bcfed:
        if v10 == v7 {
            goto LABEL_4bcff2;
        }
LABEL_4bd019:
        v0 = struct16 {
            field_0: v3
            field_8: v7 + v3
        };
        v1 = v11;
        v2 = v10;
        v12 = uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530350) as i32;
    } else {
        if !v7 {
            goto LABEL_4bcfc8;
        }
        if *((a0 + 52) as &i8) {
            v11 = 0;
            v10 = v7;
            if v10 == v7 {
                v0 = struct16 {
                    field_0: v3
                    field_8: v7 + v3
                };
                v12 = uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530388) as i32;
            } else {
LABEL_4bcf99:
                v0 = struct16 {
                    field_0: v3
                    field_8: v7 + v3
                };
                v1 = v11;
                v2 = v10;
                v12 = uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_5303c0) as i32;
            }
        } else {
LABEL_4bcff2:
            v0 = struct16 {
                field_0: v3
                field_8: v7 + v3
            };
            v12 = uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530318) as i32;
        }
    }
    return v12;
}
