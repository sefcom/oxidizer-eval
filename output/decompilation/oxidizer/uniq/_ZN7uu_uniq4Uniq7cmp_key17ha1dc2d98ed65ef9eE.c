fn uu_uniq::Uniq::cmp_key(a0: i64, a1: i32, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: u128;  // [bp-0x50]
    let v1: u64;  // [bp-0x40], Other Possible Types: void*
    let v2: u64;  // [bp-0x38]
    let v3: u64;  // [bp-0x28]
    let v4: i8;  // [bp-0x20]
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
                    goto LABEL_4bd1e9;
                }
                goto LABEL_4bd1b7;
            } else {
LABEL_4bd106:
                goto LABEL_4bd154;
            }
        }
LABEL_4bd18c:
        v0 = struct16 {
            field_0: v3
            field_8: v7 + v3
        };
        v12 = uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0, &g_530318);
    } else if *((a0 + 32) as &i64) {
        if !v7 {
            goto LABEL_4bd18c;
        }
        v10 = *((a0 + 40) as &i64);
        if !(!*((a0 + 52) as &i8)) {
            goto LABEL_4bd106;
        }
LABEL_4bd1b7:
        if v10 == v7 {
            goto LABEL_4bd1bc;
        }
LABEL_4bd1e9:
        v0 = struct16 {
            field_0: v3
            field_8: v7 + v3
        };
        v1 = v11;
        v2 = v10;
        v12 = uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0, &g_530350);
    } else {
        if !v7 {
            goto LABEL_4bd18c;
        }
        if *((a0 + 52) as &i8) {
            v11 = 0;
            v10 = v7;
            if v10 == v7 {
                v0 = struct16 {
                    field_0: v3
                    field_8: v7 + v3
                };
                v12 = uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0, &g_5303f8);
            } else {
LABEL_4bd154:
                v0 = struct16 {
                    field_0: v3
                    field_8: v7 + v3
                };
                v1 = v11;
                v2 = v10;
                v12 = uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0, &g_530430);
            }
        } else {
LABEL_4bd1bc:
            v0 = struct16 {
                field_0: v3
                field_8: v7 + v3
            };
            v12 = uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0, &g_530318);
        }
    }
    return v12;
}
