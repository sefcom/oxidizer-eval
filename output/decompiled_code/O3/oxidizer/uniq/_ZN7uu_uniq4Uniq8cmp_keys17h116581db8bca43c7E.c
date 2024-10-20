fn uu_uniq::Uniq::cmp_keys(a0: void*, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: struct16;  // [bp-0x60]
    let v1: u64;  // [sp-0x50]
    let v2: u64;  // [sp-0x48]
    let v3: u8;  // [bp-0x40]
    let v4: i8;  // [bp-0x30]
    let v5: &struct_0;  // [sp-0x28]
    let v6: u64;  // [sp-0x20]
    let v7: u64;  // [sp-0x18]
    let v9: &struct_0;  // rbx
    let v10: u64;  // rax
    let v11: u64;  // rdx
    let v12: u64;  // rax
    let v14: u64;  // rcx
    let v15: void*;  // rdx
    let v16: u64;  // rcx
    let v18: u64;  // r8
    let v19: u64;  // r9
    let v20: u64;  // rax
    let v23: u64;  // r8
    let v24: u64;  // r9
    let v26: u64;  // r8
    let v27: u64;  // r9
    let v29: u64;  // r8
    let v30: u64;  // r9
    let v32: u64;  // r8
    let v33: u64;  // r9

    v9 = a0;
    v5 = a0;
    v6 = a3;
    v7 = a4;
    uu_uniq::Uniq::skip_fields(&v3, a0->field_0, a0->field_8, a1, a2, a1);
    v10 = v4;
    v11 = v9->field_20;
    if !v9->field_10 {
        if !v11 {
            if !v10 {
                goto LABEL_488ba4;
            }
            if !v9->field_34 {
LABEL_488bd3:
                v0 = struct16 {
                    field_0: v22
                    field_8: v10 + v22
                };
                v20 = uu_uniq::Uniq::cmp_keys::{{closure}}(&v5, &v0, &g_4f2b48, v16, v23, v24);
                goto LABEL_488c31;
            }
            v14 = v10;
            if false {
LABEL_488b6d:
                v0 = struct16 {
                    field_0: v28
                    field_8: v10 + v28
                };
                v1 = 0;
                v2 = v14;
                v20 = uu_uniq::Uniq::cmp_keys::{{closure}}(&v5, &v0, &g_4f2bf0, v2, v29, v30);
                goto LABEL_488c31;
            }
        } else {
            if !v10 {
                goto LABEL_488ba4;
            }
            v14 = v9->field_28;
            if !v9->field_34 {
                goto LABEL_488bce;
            }
            v15 = 0;
LABEL_488b21:
            if !(!v15) {
                goto LABEL_488b6d;
            }
        }
        if !(v14 == v10) {
            goto LABEL_488b6d;
        }
        v0 = struct16 {
            field_0: v25
            field_8: v10 + v25
        };
        v20 = uu_uniq::Uniq::cmp_keys::{{closure}}(&v5, &v0, &g_4f2bb8, v14, v26, v27);
    } else {
        v14 = v12;
        if !v10 {
LABEL_488ba4:
            v0 = struct16 {
                field_0: v17
                field_8: v10 + v17
            };
            v20 = uu_uniq::Uniq::cmp_keys::{{closure}}(&v5, &v0, &g_4f2b48, v16, v18, v19);
            goto LABEL_488c31;
        }
        v15 = v9->field_18;
        if !(!v9->field_34) {
            goto LABEL_488b21;
        }
        if v15 {
LABEL_488bff:
            v0 = struct16 {
                field_0: v31
                field_8: v10 + v31
            };
            v1 = v15;
            v2 = v16;
            v20 = uu_uniq::Uniq::cmp_keys::{{closure}}(&v5, &v0, &g_4f2b80, v2, v32, v33);
            goto LABEL_488c31;
        }
LABEL_488bce:
        if v14 == v10 {
            goto LABEL_488bd3;
        }
        v15 = 0;
        goto LABEL_488bff;
    }
LABEL_488c31:
    if *(&v3 as &i64) {
        v20 = v20 & 4294967295 & 4294967295;
        return v20;
    }
    return v20;
}
