fn uu_csplit::split_name::SplitName::new(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i128;  // [sp-0x148]
    let v1: i64;  // [sp-0x138]
    let v2: i192;  // [sp-0x128], Other Possible Types: struct24, Result<struct24, struct8>
    let v3: i64;  // [sp-0x120]
    let v4: i8;  // [bp-0x110]
    let v5: i128;  // [bp-0x108]
    let v6: i128;  // [sp-0x100]
    let v7: i8;  // [bp-0xf8]
    let v8: i128;  // [sp-0xf0]
    let v9: i8;  // [bp-0xe8]
    let v10: i128;  // [sp-0xe0]
    let v11: i64;  // [sp-0xd0]
    let v12: i64;  // [sp-0xc8]
    let v13: i64;  // [sp-0xc0], Other Possible Types: struct24
    let v14: i64;  // [sp-0xb8]
    let v15: i128;  // [sp-0xb0]
    let v16: i128;  // [sp-0xa0]
    let v17: i128;  // [sp-0x90]
    let v18: i64;  // [sp-0x80]
    let v19: i128;  // [sp-0x78], Other Possible Types: struct24
    let v20: struct24;  // [bp-0x58]
    let v21: i192;  // [sp-0x40]
    let v23: i128;  // xmm0
    let v24: i256;  // ymm0
    let v25: i256;  // ymm0
    let v26: i64;  // 4096
    let v27: i256;  // ymm0
    let v29: i64;  // rax
    let v30: i128;  // xmm0
    let v32: i64;  // rax
    let v33: i128;  // xmm0
    let v35: i128;  // xmm0

    if *(a1 as &i64) != 0x8000000000000000 {
        v1 = *((a1 + 16) as &i64);
        v23 = *(a1 as &i128);
        v25 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23;
    } else {
        v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("xx");
        v1 = v2.field_16;
        v25 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v2;
    }
    v0 = v23;
    if v13 == 0x8000000000000000 {
        v29 = 2;
        goto LABEL_5bc823;
    } else {
        v30 = *((a3 + 8) as &i128);
        *(&v13.field_0 as &struct24) = struct24 {
            field_0: v31
            field_8: v30
        };
        v2 = uu_csplit::split_name::SplitName::new::{{closure}}(&v13);
        v32 = v2;
        v33 = *((&v2 as &char + 8) as &i128);
        v19 = v4;
        if v32 != 12 {
            *((a0 + 32) as &i128) = v19;
            *((a0 + 8) as &i64) = v32;
            *((a0 + 16) as &i128) = v33;
            *(a0 as &i64) = 0x8000000000000000;
        } else {
            v29 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33;
LABEL_5bc823:
            v12 = v29;
            if *(a2 as &i64) == 0x8000000000000000 {
                v21 = format!("%0{:?}u", &v12);
            }
            *(&v20.field_0 as &struct24) = struct24 {
                field_0: *(v34 as &i128)
                field_16: *((v34 + 16) as &i64)
            };
            uucore::features::format::Format<F>::parse(&v2, &v20, v26);
            if v13 != 0x8000000000000000 {
                v17 = v7;
                v18 = v9;
                v15 = *((&v2 as &char + 16) as &i128);
                v16 = v5;
                v13 = v2;
                v14 = v3;
                v19 = <T as alloc::slice::hack::ConvertVec>::to_vec(*((&v0 as &char + 8) as &i64), v1);
                v11 = v18;
                v10 = v17;
                v8 = v16;
                v6 = v15;
                v4 = v13;
                v2.field_16 = (stack_base)[104] as i64;
                v35 = v19;
                v2 = v35;
                *((a0 + 80) as &i64) = *((&v10 as &char + 8) as &i64);
                *((a0 + 88) as &i64) = v11;
                *((a0 + 64) as &i128) = *((&v8 as &char + 8) as &i128);
                *((a0 + 48) as &i128) = *((&v6 as &char + 8) as &i128);
                *((a0 + 32) as &i128) = *((&v4 as &char + 8) as &i128);
                *((a0 + 16) as &struct24) = v2.field_16;
                *((a0 + 24) as &i64) = v4;
                *(a0 as &i128) = v35;
                return a0;
            }
            *((a0 + 8) as &u64) = (-0x100 | v3 == 10) + 9;
            *(a0 as &i64) = 0x8000000000000000;
        }
        return a0;
    }
}
