fn uu_uniq::Uniq::cmp_key(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i128;  // [sp-0x50]
    let v1: i64;  // [sp-0x40]
    let v2: i64;  // [sp-0x38]
    let v3: i192;  // [sp-0x30], Other Possible Types: struct24
    let v5: i64;  // rax
    let v6: i64;  // rdx
    let v7: i64;  // rax
    let v9: i64;  // rcx
    let v10: i64;  // rdx
    let v16: i64;  // rcx
    let v18: i32;  // eax

    v3 = uu_uniq::Uniq::skip_fields(*(a0 as &i64), *((a0 + 8) as &i64), a1, a2);
    v5 = *((&v3 as &char + 16) as &i64);
    v6 = *((a0 + 32) as &i64);
    if *((a0 + 16) as &i64) {
        if v6 {
            v7 = *((a0 + 40) as &i64);
        }
        v9 = v7;
        if !v5 {
            v0 = *((&v3 as &char + 8) as &i128);
            uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0, &g_530318);
            return v18;
        }
        v10 = *((a0 + 24) as &i64);
        if !*((a0 + 52) as &i8) {
            if v10 {
                v0 = *((&v3 as &char + 8) as &i128);
                v1 = v10;
                v2 = v16;
                uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0, &g_530350);
                return v18;
            }
        } else {
LABEL_4bd106:
            if v10 {
                vvar_256{stack -80} = *((&v3 as &char + 8) as &i128);
                vvar_257{stack -64} = 0;
                vvar_258{stack -56} = v9;
                uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0, &g_530430);
                return v18;
            }
            goto LABEL_4bd10b;
        }
    } else if v6 {
        if !v5 {
            vvar_246{stack -80} = *((&v3 as &char + 8) as &i128);
            uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0, &g_530318);
            return v18;
        }
        v9 = *((a0 + 40) as &i64);
        if *((a0 + 52) as &i8) {
            v10 = 0;
            goto LABEL_4bd106;
        }
    } else {
        if !v5 {
            vvar_242{stack -80} = *((&v3 as &char + 8) as &i128);
            uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0, &g_530318);
            return v18;
        } else if !*((a0 + 52) as &i8) {
            v0 = *((&v3 as &char + 8) as &i128);
            uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0, &g_530318);
            return v18;
        } else {
            v9 = v5;
            if false {
                v0 = *((&v3 as &char + 8) as &i128);
                v1 = 0;
                v2 = v9;
                uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0, &g_530430);
                return v18;
            }
        }
LABEL_4bd10b:
        if v9 != v5 {
            vvar_264{stack -80} = *((&v3 as &char + 8) as &i128);
            vvar_265{stack -64} = 0;
            vvar_266{stack -56} = v9;
            uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0, &g_530430);
            return v18;
        }
        v0 = *((&v3 as &char + 8) as &i128);
        uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0, &g_5303f8);
        return v18;
    }
    if v9 == v5 {
        vvar_250{stack -80} = *((&v3 as &char + 8) as &i128);
        uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0, &g_530318);
        return v18;
    }
    vvar_272{stack -80} = *((&v3 as &char + 8) as &i128);
    vvar_273{stack -64} = v10;
    vvar_274{stack -56} = v16;
    uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0, &g_530350);
    return v18;
}
