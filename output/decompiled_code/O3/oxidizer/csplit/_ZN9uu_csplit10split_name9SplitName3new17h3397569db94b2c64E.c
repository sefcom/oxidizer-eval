fn uu_csplit::split_name::SplitName::new(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i128;  // [sp-0x148]
    let v1: i64;  // [sp-0x138]
    let v2: i192;  // [sp-0x128], Other Possible Types: Result<struct24, struct8>, struct24
    let v3: i64;  // [sp-0x120]
    let v4: i64;  // [sp-0x118]
    let v5: i64;  // [bp-0x110]
    let v6: i128;  // [bp-0x108]
    let v7: i128;  // [sp-0x100]
    let v8: i8;  // [bp-0xf8]
    let v9: i128;  // [sp-0xf0]
    let v10: i8;  // [bp-0xe8]
    let v11: i128;  // [sp-0xe0]
    let v12: i64;  // [sp-0xd0]
    let v13: i64;  // [sp-0xc8]
    let v14: i64;  // [sp-0xc0], Other Possible Types: struct24
    let v15: i64;  // [sp-0xb8]
    let v16: i128;  // [sp-0xb0]
    let v17: i128;  // [sp-0xa0]
    let v18: i128;  // [sp-0x90]
    let v19: i64;  // [sp-0x80]
    let v20: i128;  // [sp-0x78], Other Possible Types: struct24
    let v21: struct24;  // [bp-0x58]
    let v22: i192;  // [sp-0x40]
    let v24: i128;  // xmm0
    let v25: i256;  // ymm0
    let v26: i256;  // ymm0
    let v27: i64;  // 4096
    let v28: i256;  // ymm0
    let v30: i64;  // rax
    let v31: i128;  // xmm0
    let v33: i64;  // rax
    let v34: i128;  // xmm0
    let v36: i128;  // xmm0

    if *(a1 as &i64) != 0x8000000000000000 {
        v1 = *((a1 + 16) as &i64);
        v24 = *(a1 as &i128);
        v26 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24;
    } else {
        v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("xx");
        v1 = v4;
        v26 = v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v2;
    }
    v0 = v24;
    if v14 == 0x8000000000000000 {
        v30 = 2;
        goto LABEL_5ba823;
    } else {
        v31 = *((a3 + 8) as &i128);
        *(&v14.field_0 as &struct24) = struct24 {
            field_0: v32
            field_8: v31
        };
        v2 = uu_csplit::split_name::SplitName::new::{{closure}}(&v14);
        v33 = v2;
        v34 = *((&v2 as &char + 8) as &i128);
        v20 = v5;
        if v33 != 12 {
            *((a0 + 32) as &i128) = v20;
            *((a0 + 8) as &i64) = v33;
            *((a0 + 16) as &i128) = v34;
            *(a0 as &i64) = 0x8000000000000000;
        } else {
            v30 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34;
LABEL_5ba823:
            v13 = v30;
            if *(a2 as &i64) == 0x8000000000000000 {
                v22 = format!("%0{:?}u", &v13);
            }
            *(&v21.field_0 as &struct24) = struct24 {
                field_0: *(v35 as &i128)
                field_16: *((v35 + 16) as &i64)
            };
            uucore::features::format::Format<F>::parse(&v2, &v21, v27);
            if v14 != 0x8000000000000000 {
                v18 = v8;
                v19 = v10;
                v16 = *((&v2 as &char + 16) as &i128);
                v17 = v6;
                v14 = v2;
                v15 = v3;
                v20 = <T as alloc::slice::hack::ConvertVec>::to_vec(*((&v0 as &char + 8) as &i64), v1);
                v12 = v19;
                v11 = v18;
                v9 = v17;
                v7 = v16;
                v5 = v14;
                v4 = *((&v20 as &char + 16) as &i64);
                v36 = v20;
                v2 = v36;
                *((a0 + 80) as &i64) = *((&v11 as &char + 8) as &i64);
                *((a0 + 88) as &i64) = v12;
                *((a0 + 64) as &i128) = *((&v9 as &char + 8) as &i128);
                *((a0 + 48) as &i128) = *((&v7 as &char + 8) as &i128);
                *((a0 + 32) as &i128) = *((&v5 as &char + 8) as &i128);
                *((a0 + 16) as &i64) = v4;
                *((a0 + 24) as &i64) = v5;
                *(a0 as &i128) = v36;
                return a0;
            }
            *((a0 + 8) as &u64) = (-0x100 | v3 == 10) + 9;
            *(a0 as &i64) = 0x8000000000000000;
        }
        return a0;
    }
}
