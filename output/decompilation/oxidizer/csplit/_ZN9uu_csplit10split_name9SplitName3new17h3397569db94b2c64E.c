fn uu_csplit::split_name::SplitName::new(a0: &struct48, a1: void*, a2: void*, a3: void*) -> u64 {
    let v0: iNone;  // [sp-0x148]
    let v1: i64;  // [sp-0x138]
    let v2: iNone;  // [sp-0x128], Other Possible Types: struct32, struct24
    let v3: i64;  // [sp-0x128]
    let v4: i64;  // [sp-0x120]
    let v5: i64;  // [sp-0x118]
    let v6: iNone;  // [bp-0x110]
    let v7: i8;  // [bp-0xf8]
    let v8: i8;  // [bp-0xe8]
    let v9: i64;  // [sp-0xc8]
    let v10: i64;  // [sp-0xc0], Other Possible Types: struct24
    let v11: i64;  // [sp-0xb8]
    let v12: iNone;  // [sp-0xb0]
    let v13: iNone;  // [sp-0xa0]
    let v14: iNone;  // [sp-0x90]
    let v15: i64;  // [sp-0x80]
    let v16: struct24;  // [sp-0x78], Other Possible Types: int
    let v17: struct24;  // [bp-0x58]
    let v18: i8;  // [bp-0x40], Other Possible Types: String
    let v20: iNone;  // xmm0
    let v21: iNone;  // ymm0
    let v22: iNone;  // ymm0
    let v23: iNone;  // ymm0
    let v24: i64;  // rax
    let v25: i64;  // rax
    let v26: iNone;  // xmm0
    let v29: i64;  // r15

    if *(a1 as &i64) != 0x8000000000000000 {
        v1 = *((a1 + 16) as &i64);
        v20 = *(a1 as &i128);
        v22 = v21 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20 as u256;
    } else {
        v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("xx");
        v1 = v5;
        v22 = v23 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v2.field_0 as &i128);
    }
    v0 = v20;
    v24 = *(a3 as &i64);
    if v10 == 0x8000000000000000 {
        v25 = 2;
    } else {
        v26 = *((a3 + 8) as &i128);
        *(&v10.field_0 as &struct24) = struct24 {
            field_0: v24
            field_8: v26
        };
        v2 = uu_csplit::split_name::SplitName::new::{{closure}}(&v10);
        v16 = v6 as i128;
        if v3 != 12 {
            return struct48 {
                field_0: 0x8000000000000000
                field_8: v27
                field_16: v28
                field_32: v16
            };
        }
        v25 = ((v22 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v2.field_8) as u64;
    }
    v9 = v25;
    if *(a2 as &i64) != 0x8000000000000000 {
        v29 = a2;
    } else {
        v29 = &v18;
        v18 = format!("%0{}u", &v9);
    }
    *(&v17.field_0 as &struct24) = struct24 {
        field_0: *(v29 as &i128)
        field_16: *((v29 + 16) as &i64)
    };
    uucore::features::format::Format<F>::parse(&v3, &v17);
    if v10 != 0x8000000000000000 {
        v14 = *(&v7 as &i128);
        v15 = *(&v8 as &i64);
        v12 = (&v2)[16] as i128;
        v13 = v6 as i128;
        v10 = v3;
        v11 = v4;
        v16 = <T as alloc::slice::hack::ConvertVec>::to_vec((&v0)[8] as i64, v1);
    }
}
