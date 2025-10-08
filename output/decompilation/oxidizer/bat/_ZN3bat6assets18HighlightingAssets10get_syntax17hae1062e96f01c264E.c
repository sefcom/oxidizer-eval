fn bat::assets::HighlightingAssets::get_syntax(a0: i64, a1: i320, a2: void*, a3: u64, a4: i64, a5: u64) -> int {
    let v0: Result<struct80, struct9>;  // [bp-0xe8], Other Possible Types: struct81
    let v1: struct72;  // [bp-0xe8]
    let v2: u128;  // [bp-0xe1]
    let v3: u128;  // [bp-0xe0]
    let v4: u32;  // [bp-0xdf]
    let v5: u16;  // [bp-0xdb]
    let v6: u8;  // [bp-0xd9]
    let v7: u64;  // [bp-0xd1]
    let v8: struct24;  // [bp-0xd0]
    let v9: struct16;  // [bp-0xa0]
    let v10: struct24;  // [bp-0x98]
    let v11: struct24;  // [bp-0x98]
    let v12: u128;  // [bp-0x97]
    let v13: u64;  // [bp-0x90]
    let v14: u64;  // [bp-0x88], Other Possible Types: unsigned long
    let v15: struct24;  // [bp-0x80]
    let v16: struct72;  // [bp-0x78]
    let v17: core::fmt::Arguments;  // [bp-0x68]
    let v18: struct40;  // [bp-0x58]
    let v19: struct24;  // [bp-0x48]
    let v21: u64;  // rax
    let v22: u64;  // r12
    let v23: u64;  // rax
    let v24: u64;  // rax
    let v25: Option<struct80>;  // rcx
    let v26: u32;  // ecx
    let v27: struct32;  // rcx
    let v28: core::fmt::Arguments;  // r12
    let v29: u64;  // rax
    let v30: struct24;  // xmm0
    let v31: Result<struct40, struct16>;  // xmm1
    let v32: u64;  // rax
    let v33: u64;  // rcx
    let v34: u64;  // rcx
    let v35: u64;  // r8
    let v36: struct24;  // xmm0
    let v37: struct24;  // ecx
    let v38: iNone;  // xmm1
    let v39: iNone;  // xmm2
    let v40: iNone;  // xmm0

    if a2 {
        v0 = bat::assets::HighlightingAssets::get_syntax_set(a1);
        v21 = v0 as i8;
        if v21 != 13 {
            v26 = *((&v0 as &char + 1) as &i32);
            v27 = *((&v0 as &char + 8) as &i64);
            return struct88 {
                field_0: v21 as u8
                field_1: *((&v0 as &char + 4) as &i32)
                field_4: v27
                field_8: *((&v0 as &char + 16) as &i128)
                field_16: <UNKNOWN>
                field_32: <UNKNOWN>
                field_48: <UNKNOWN>
                field_64: <UNKNOWN>
            };
        }
        v22 = *((&v0 as &char + 8) as &i64);
        v23 = syntect::parsing::syntax_set::SyntaxSet::find_syntax_by_token(v22, a2, a3);
        if !v23 {
            v10 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a2, a3);
            *(&v7 as &unsigned long) = v14;
            v2 = *(&v10.field_0 as &i128);
            v24 = *((&v2 as &char + 8) as &i64);
            v25 = v7;
            return struct40 {
                field_0: 8
                field_1: <UNKNOWN>
                field_16: v25
                field_24: <UNKNOWN>
            };
        }
        return struct24 {
            field_0: 13
            padding_1: <UNKNOWN>
            field_8: v23
            field_16: v22
        };
    } else {
        if !((((0 ^ *((a4 + 16) as &i64)) & (0 ^ -(*((a4 + 16) as &i64)))) >> 63) as char) || *((a4 + 184) as &i64) > 9223372036854775809 {
            path_abs::abs::PathAbs::new(&v0 as u8, v28);
            v19 = core::result::Result<T,E>::map_or_else(&v0 as u8, *((v28 + 8) as &i64), *((v28 + 16) as &i64));
            v29 = bat::assets::HighlightingAssets::get_syntax_for_path(&v11, a1, &v19, a5);
            if v10 != 7 {
                v30 = *(&v10.field_0 as &i128);
                v31 = *(&v14 as &i128);
                return struct80 {
                    field_0: v30
                    field_16: v31
                    field_32: v16
                    field_48: v17
                    field_64: v18
                };
            }
        } else {
            v19 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("[unknown]");
            v7 = v19.field_16;
            v2 = *(&v19.field_0 as &i128);
            v11 = 7;
            v12 = v0 as i128;
            v14 = *((&v0 as &char + 15) as &i64);
            v15 = v7;
        }
        vvar_366{stack -232} = struct81 OrderedDict([(0, 𝜙@8b [((8609646, None), vvar_325{stack -232}), ((8609813, None), vvar_320{stack -232})]), (1, 𝜙@24b [((8609646, None), None), ((8609813, None), None)]), (9, 𝜙@32b [((8609646, None), None), ((8609813, None), None)])])
        bat::assets::HighlightingAssets::get_first_line_syntax(&v0, a1, *((a4 + 48) as &i64), *((a4 + 56) as &i64));
        if &v0 != "\r" {
            v37 = *(&(&v0.field_0)[1] as &i32);
            v38 = v0.field_32;
            v39 = v0.field_48;
            v40 = *(&v0.field_4 as &i128);
            return struct88 {
                field_0: v0.field_0
                field_1: v0.field_1
                field_4: v40
                field_8: <UNKNOWN>
                field_24: <UNKNOWN>
                field_40: <UNKNOWN>
                field_56: <UNKNOWN>
                field_72: <UNKNOWN>
            };
        }
        v32 = *(&v0.field_4 as &i64);
        v33 = v0.field_8;
        v8 = v15;
        v3 = *(&v13 as &i128);
        v1 = 7;
        if !v32 {
            v34 = *(&(&v0.field_0)[1] as &i64);
            v35 = *((&v3 as &char + 8) as &i64);
            v36 = *((&v0.field_16 as &char + 8) as &i128);
            return struct88 {
                field_0: 7
                field_1: <UNKNOWN>
                field_9: v35
                field_13: <UNKNOWN>
                field_15: <UNKNOWN>
                field_16: v8
                field_24: v36
                field_32: <UNKNOWN>
                field_48: <UNKNOWN>
                field_64: <UNKNOWN>
            };
        }
        return struct24 {
            field_0: 13
            padding_1: <UNKNOWN>
            field_8: v32
            field_16: v33
        };
    }
}
