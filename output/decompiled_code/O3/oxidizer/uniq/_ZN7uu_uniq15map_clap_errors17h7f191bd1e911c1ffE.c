fn uu_uniq::map_clap_errors(a0: void*) -> u64 {
    let v0: void*;  // [sp-0xb0]
    let v1: &struct_0;  // [sp-0xa8], Other Possible Types: &u64
    let v2: void*;  // [sp-0xa0]
    let v3: u8;  // [bp-0x98]
    let v4: u64;  // [sp-0x90]
    let v5: u64;  // [sp-0x88]
    let v6: void*;  // [sp-0x80], Other Possible Types: u64, struct16, &struct_3
    let v7: &u64;  // [bp-0x78], Other Possible Types: u32
    let v8: void*;  // [sp-0x70], Other Possible Types: u64
    let v9: u64;  // [sp-0x60]
    let v10: u64;  // [sp-0x58]
    let v11: u64;  // [sp-0x50]
    let v12: u8;  // [sp-0x48]
    let v13: &struct_4;  // [sp-0x40]
    let v14: &struct_2;  // [sp-0x38]
    let v16: &u64;  // rax
    let v17: &struct_2;  // rax
    let v18: u64;  // rbx
    let v19: &u64;  // rax
    let v20: &struct_4;  // rax
    let v21: u64;  // rbp
    let v22: &u64;  // rax
    let v23: &struct_5;  // r13
    let v24: u64;  // r12
    let v25: u64;  // r15
    let v26: u32;  // eax
    let v27: u64;  // rax
    let v28: &struct_1;  // r14
    let v29: u8;  // bl
    let v30: u64;  // rbx
    let v31: u64;  // rax
    let v32: u8;  // bl
    let v33: u64;  // rax
    let v34: &struct_0;  // rdi
    let v37: u64;  // rax

    v16 = __rust_alloc(47, 1);
    *((&v16[3] as &char + 7) as &i128) = 13900695143553142186058238527703381097;
    *(&v16[2] as &i128) = 140187479959380255545049593013201366124;
    *(&v16 as &i128) = 129544976386567548975049464944924241197;
    v6 = 47;
    v7 = v16;
    v8 = 47;
    v6 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(47, 39);
    v17 = *((&v6 as &char + 8) as &i64);
    v18 = v8;
    *(&v17->padding_0[16 + v18] as &i128) = 152110414024190315144702871847255285799;
    *(&v17->padding_0[v18] as &i128) = 149436360365712589762961469751537791572;
    v14 = v17;
    *(&v14->padding_0[31 + v18] as &i64) = 3345734071897648498;
    v5 = v6;
    v19 = __rust_alloc(117, 1);
    *(&v19[12] as &i128) = 130467495776721497708343672428758590835;
    *(&v19[10] as &i128) = 52006960588733993906390647576029765677;
    *(&v19[8] as &i128) = 42701655309666758844700458062086742048;
    *(&v19[6] as &i128) = 13595490761083950975161010753524359456;
    *(&v19[4] as &i128) = 133470188960634688805045039405533570848;
    *(&v19[2] as &i128) = 152110407824061971655811057319858546464;
    *(&v19 as &i128) = 154763657361063560819470598513676938857;
    *((&v19[13] as &char + 5) as &i64) = 731668313765193504;
    v6 = 117;
    v7 = v19;
    v8 = 117;
    v6 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(117, 39);
    v20 = *((&v6 as &char + 8) as &i64);
    v21 = v8;
    *(&v20->padding_0[16 + v21] as &i128) = 152110414024190315144702871847255285799;
    *(&v20->padding_0[v21] as &i128) = 149436360365712589762961469751537791572;
    v13 = v20;
    *(&v13->padding_0[31 + v21] as &i64) = 3345734071897648498;
    v22 = __rust_alloc(111, 1);
    v4 = v6;
    *((&v22[11] as &char + 7) as &i128) = 13496837279327161118927683125698895882;
    *(&v22[10] as &i128) = 13496816522784123496448038054955846183;
    *(&v22[8] as &i128) = 134825440303388030215273448392219500659;
    *(&v22[6] as &i128) = 154763657361063560819470598513674816039;
    *(&v22[4] as &i128) = 133449582037243257107241605451840562976;
    *(&v22[2] as &i128) = 152110407824061971655811057319858546464;
    *(&v22 as &i128) = 154763657361063560819470598513676938857;
    v6 = 111;
    v7 = v22;
    v8 = 111;
    v6 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(111, 39);
    v23 = *((&v6 as &char + 8) as &i64);
    v24 = v8;
    *(&v23->padding_0[16 + v24] as &i128) = 152110414024190315144702871847255285799;
    *(&v23->padding_0[v24] as &i128) = 149436360365712589762961469751537791572;
    *(&v23->padding_0[31 + v24] as &i64) = 3345734071897648498;
    v25 = v6;
    switch (v26) {
    case 0:
        v27 = clap_builder::error::Error<F>::get(&v3, 5);
        if v27 {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v11 = 32;
            v12 = 3;
            v6 = 0;
            v8 = 0;
            v9 = &v0;
            v10 = &g_4f2a78;
            if <clap_builder::error::context::ContextValue as core::fmt::Display>::fmt(v27, &v6) as i8 {
                core::result::unwrap_failed(); /* do not return */
            }
            if v2 != 9 {
                v30 = 0;
            } else {
                v29 = !(v1->field_8 ^ 110) && !(8028075837018628450 ^ v1->field_0);
                v30 = v18 | -0x100 | v29;
            }
            if v29 {
                v31 = clap_builder::error::Error<F>::get(&v3, 1);
                if v31 {
                    v0 = 0;
                    v1 = 1;
                    v2 = 0;
                    v11 = 32;
                    v12 = 3;
                    v6 = 0;
                    v8 = 0;
                    v9 = &v0;
                    v10 = &g_4f2a78;
                    if <clap_builder::error::context::ContextValue as core::fmt::Display>::fmt(v31, &v6) as i8 {
                        core::result::unwrap_failed(); /* do not return */
                    }
                    v32 = (v2 < 7 ? 0 : v30 | -0x100 | (!(1886744434 ^ *((v1 as &char + 3) as &i32)) && !(1919364397 ^ *(v1))));
                    if v32 {
                        v28 = __rust_alloc(32, 8);
                        v28->field_0 = v4;
                        *(&v28->field_8 as &&struct_4) = v13;
                        v28->field_10 = v21 + 39;
                        v28->field_18 = 1;
                        if !v25 {
                            return v28;
                        }
                        return v28;
                    }
                }
            }
        }
        v33 = clap_builder::error::Error<F>::get(&v3, 5);
        if !v33 {
            vvar_786{stack -128} = a0;
            v7 = 1;
            vvar_787{reg 16} = __rust_alloc(16, 8);
            v28->field_0 = v6;
            v28->field_8 = 1;
            return v28;
        }
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v11 = 32;
        v12 = 3;
        v6 = 0;
        v8 = 0;
        v9 = &v0;
        v10 = &g_4f2a78;
        if <clap_builder::error::context::ContextValue as core::fmt::Display>::fmt(v33, &v6) as i8 {
            core::result::unwrap_failed(); /* do not return */
        }
        v34 = v1;
        if !(!(v34->field_8 ^ 110)) || !(!(8028075837018628450 ^ v34->field_0)) {
            vvar_820{stack -128} = a0;
            v7 = 1;
            vvar_821{reg 16} = __rust_alloc(16, 8);
            v28->field_0 = v6;
            v28->field_8 = 1;
            return v28;
        }
        v37 = clap_builder::error::Error<F>::get(&v3, 1);
        if !v37 {
            vvar_802{stack -128} = a0;
            v7 = 1;
            vvar_803{reg 16} = __rust_alloc(16, 8);
            v28->field_0 = v6;
            v28->field_8 = 1;
            return v28;
        }
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v11 = 32;
        v12 = 3;
        v6 = 0;
        v8 = 0;
        v9 = &v0;
        v10 = &g_4f2a78;
        if <clap_builder::error::context::ContextValue as core::fmt::Display>::fmt(v37, &v6) as i8 {
            core::result::unwrap_failed(); /* do not return */
        }
        if !(v2 < 14 ? 0 : -136 | (!(7234316338103084402 ^ *((v1 as &char + 6) as &i64)) && !(7309955088873762093 ^ *(v1)))) {
            vvar_811{stack -128} = a0;
            v7 = 1;
            vvar_812{reg 16} = __rust_alloc(16, 8);
            v28->field_0 = v6;
            v28->field_8 = 1;
            return v28;
        }
        v28 = __rust_alloc(32, 8);
        v28->field_0 = v25;
        *(&v28->field_8 as &&struct_5) = v23;
        v28->field_10 = v24 + 39;
        v28->field_18 = 1;
        break;
    case 8:
        v28 = __rust_alloc(32, 8);
        v28->field_0 = v5;
        *(&v28->field_8 as &&struct_2) = v14;
        v28->field_10 = v18 + 39;
        v28->field_18 = 1;
        break;
    default:
        v6 = a0;
        v7 = 1;
        v28 = __rust_alloc(16, 8);
        v28->field_0 = v6;
        v28->field_8 = 1;
        return v28;
    }
    if true {
        return v28;
    }
    return v28;
}
