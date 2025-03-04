fn uu_uniq::Uniq::cmp_key(a0: void*, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: iNone;  // [sp-0x48]
    let v1: i64;  // [sp-0x38]
    let v2: i64;  // [sp-0x30]
    let v3: struct24;  // [sp-0x28]
    let v5: i64;  // rax
    let v6: i64;  // rdx
    let v7: i64;  // rcx
    let v8: i64;  // rdx
    let v14: i32;  // eax

    v3 = uu_uniq::Uniq::skip_fields(*(a0 as &i64), *((a0 + 8) as &i64), a1, a2);
    v5 = v3.field_16;
    v6 = *((a0 + 32) as &i64);
    if *((a0 + 16) as &i64) {
        v7 = v5;
        if v6 {
            v7 = *((a0 + 40) as &i64);
        }
        if !v5 {
            v0 = *(&v3.field_8 as &i128);
            uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530318);
            return v14 as u64;
        }
        v8 = *((a0 + 24) as &i64);
        if !*((a0 + 52) as &i8) {
            if v8 {
                v0 = *(&v3.field_8 as &i128);
                v1 = v8;
                v2 = v7;
                uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530350);
                return v14 as u64;
            }
        } else {
LABEL_4bcf51:
            if v8 {
                vvar_240{stack -72} = *(&v3.field_8 as &i128);
                vvar_241{stack -56} = 0;
                vvar_242{stack -48} = v7;
                uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_5303c0);
                return v14 as u64;
            }
            goto LABEL_4bcf56;
        }
    } else if v6 {
        if !v5 {
            vvar_228{stack -72} = *(&v3.field_8 as &i128);
            uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530318);
            return v14 as u64;
        }
        v7 = *((a0 + 40) as &i64);
        if *((a0 + 52) as &i8) {
            v8 = 0;
            goto LABEL_4bcf51;
        }
    } else {
        if !v5 {
            vvar_223{stack -72} = *(&v3.field_8 as &i128);
            uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530318);
            return v14 as u64;
        } else if !*((a0 + 52) as &i8) {
            v0 = *(&v3.field_8 as &i128);
            uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530318);
            return v14 as u64;
        } else {
            v7 = v5;
            if false {
                v0 = *(&v3.field_8 as &i128);
                v1 = 0;
                v2 = v7;
                uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_5303c0);
                return v14 as u64;
            }
        }
LABEL_4bcf56:
        if v7 != v5 {
            vvar_249{stack -72} = *(&v3.field_8 as &i128);
            vvar_250{stack -56} = 0;
            vvar_251{stack -48} = v7;
            uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_5303c0);
            return v14 as u64;
        }
        v0 = *(&v3.field_8 as &i128);
        uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530388);
        return v14 as u64;
    }
    if v7 == v5 {
        vvar_233{stack -72} = *(&v3.field_8 as &i128);
        uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530318);
        return v14 as u64;
    }
    vvar_258{stack -72} = *(&v3.field_8 as &i128);
    vvar_259{stack -56} = v8;
    vvar_260{stack -48} = v7;
    uu_uniq::Uniq::cmp_keys::{{closure}}(a3, &v0, &g_530350);
    return v14 as u64;
}
