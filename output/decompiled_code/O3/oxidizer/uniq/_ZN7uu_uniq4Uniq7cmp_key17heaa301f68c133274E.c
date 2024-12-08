fn uu_uniq::Uniq::cmp_key(a0: void*, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: struct16;  // [bp-0x48]
    let v1: i64;  // [sp-0x38]
    let v2: i64;  // [sp-0x30]
    let v3: i192;  // [sp-0x28], Other Possible Types: struct24
    let v5: i64;  // rax
    let v6: i64;  // rdx
    let v7: i64;  // rax
    let v9: i64;  // rcx
    let v10: i64;  // rdx
    let v11: i32;  // eax
    let v13: i64;  // rcx

    v3 = uu_uniq::Uniq::skip_fields(*(a0 as &i64), *((a0 + 8) as &i64), a1, a2);
    v5 = *((&v3 as &char + 16) as &i64);
    v6 = *((a0 + 32) as &i64);
    if *((a0 + 16) as &i64) {
        v9 = v7;
        if !v5 {
            v0 = struct16 {
                field_0: *((&v3 as &char + 8) as &i64)
                field_8: v5 + v0
            };
            v11 = uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530ee8) as i32;
            return v11;
        }
        v10 = *((a0 + 24) as &i64);
        if !*((a0 + 52) as &i8) {
            if v10 {
                v0 = struct16 {
                    field_0: *((&v3 as &char + 8) as &i64)
                    field_8: v5 + v0
                };
                v1 = v10;
                v2 = v13;
                v11 = uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530f20) as i32;
                return v11;
            }
        } else {
LABEL_4bd091:
            if v10 {
                v0 = struct16 {
                    field_0: *((&v3 as &char + 8) as &i64)
                    field_8: v5 + v0
                };
                vvar_260{stack -56} = 0;
                vvar_261{stack -48} = v9;
                uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_531000);
                return v11;
            }
            goto LABEL_4bd096;
        }
    } else if v6 {
        if !v5 {
            v0 = struct16 {
                field_0: *((&v3 as &char + 8) as &i64)
                field_8: v5 + v0
            };
            uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530ee8);
            return v11;
        }
        v9 = *((a0 + 40) as &i64);
        if *((a0 + 52) as &i8) {
            v10 = 0;
            goto LABEL_4bd091;
        }
    } else {
        if !v5 {
            v0 = struct16 {
                field_0: *((&v3 as &char + 8) as &i64)
                field_8: v5 + v0
            };
            uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530ee8);
            return v11;
        } else if !*((a0 + 52) as &i8) {
            v0 = struct16 {
                field_0: *((&v3 as &char + 8) as &i64)
                field_8: v5 + v0
            };
            v11 = uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530ee8) as i32;
            return v11;
        } else {
            v9 = v5;
            if false {
                v0 = struct16 {
                    field_0: *((&v3 as &char + 8) as &i64)
                    field_8: v5 + v0
                };
                v1 = 0;
                v2 = v9;
                v11 = uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_531000) as i32;
                return v11;
            }
        }
LABEL_4bd096:
        if v9 != v5 {
            v0 = struct16 {
                field_0: *((&v3 as &char + 8) as &i64)
                field_8: v5 + v0
            };
            vvar_270{stack -56} = 0;
            vvar_271{stack -48} = v9;
            uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_531000);
            return v11;
        }
        v0 = struct16 {
            field_0: *((&v3 as &char + 8) as &i64)
            field_8: v5 + v0
        };
        v11 = uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530fc8) as i32;
        return v11;
    }
    if v9 == v5 {
        v0 = struct16 {
            field_0: *((&v3 as &char + 8) as &i64)
            field_8: v5 + v0
        };
        uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530ee8);
        return v11;
    }
    v0 = struct16 {
        field_0: *((&v3 as &char + 8) as &i64)
        field_8: v5 + v0
    };
    vvar_280{stack -56} = v10;
    vvar_281{stack -48} = v13;
    uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530f20);
    return v11;
}
