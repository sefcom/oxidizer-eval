fn uu_uniq::Uniq::cmp_key(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i128;  // [bp-0x50]
    let v1: i64;  // [sp-0x40]
    let v2: i64;  // [sp-0x38]
    let v3: i192;  // [sp-0x30], Other Possible Types: struct24
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
            v0 = *((&v3 as &char + 8) as &i128);
            v11 = uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0) as i32;
            return v11;
        }
        v10 = *((a0 + 24) as &i64);
        if !*((a0 + 52) as &i8) {
            if v10 {
                v0 = *((&v3 as &char + 8) as &i128);
                v1 = v10;
                v2 = v13;
                v11 = uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0) as i32;
                return v11;
            }
        } else {
LABEL_4bcec6:
            if v10 {
                v0 = *((&v3 as &char + 8) as &i128);
                vvar_272{stack -64} = 0;
                vvar_273{stack -56} = v9;
                uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0);
                return v11;
            }
            goto LABEL_4bcecb;
        }
    } else if v6 {
        if !v5 {
            v0 = *((&v3 as &char + 8) as &i128);
            uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0);
            return v11;
        }
        v9 = *((a0 + 40) as &i64);
        if *((a0 + 52) as &i8) {
            v10 = 0;
            goto LABEL_4bcec6;
        }
    } else {
        if !v5 {
            v0 = *((&v3 as &char + 8) as &i128);
            uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0);
            return v11;
        } else if !*((a0 + 52) as &i8) {
            v0 = *((&v3 as &char + 8) as &i128);
            v11 = uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0) as i32;
            return v11;
        } else {
            v9 = v5;
            if false {
                v0 = *((&v3 as &char + 8) as &i128);
                v1 = 0;
                v2 = v9;
                v11 = uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0) as i32;
                return v11;
            }
        }
LABEL_4bcecb:
        if v9 != v5 {
            v0 = *((&v3 as &char + 8) as &i128);
            vvar_282{stack -64} = 0;
            vvar_283{stack -56} = v9;
            uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0);
            return v11;
        }
        v0 = *((&v3 as &char + 8) as &i128);
        v11 = uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0) as i32;
        return v11;
    }
    if v9 == v5 {
        v0 = *((&v3 as &char + 8) as &i128);
        uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0);
        return v11;
    }
    v0 = *((&v3 as &char + 8) as &i128);
    vvar_292{stack -64} = v10;
    vvar_293{stack -56} = v13;
    uu_uniq::Uniq::cmp_keys::{{closure}}::{{closure}}(a3, a4, &v0);
    return v11;
}
