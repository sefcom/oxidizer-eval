fn uu_cp::copy_attributes(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: struct24;  // [sp-0x230], Other Possible Types: i64
    let v1: i64;  // [sp-0x228]
    let v2: i64;  // [sp-0x220]
    let v3: i8;  // [sp-0x218]
    let v4: i64;  // [sp-0x210]
    let v5: i64;  // [sp-0x208]
    let v6: i192;  // [sp-0x200]
    let v7: i1408;  // [sp-0x1e8], Other Possible Types: Option<struct64>, Result<struct176, struct16>, struct40
    let v9: i64;  // [sp-0x138]
    let v10: i64;  // [sp-0x130]
    let v11: i64;  // [sp-0x128]
    let v12: i64;  // [sp-0x120]
    let v13: i128;  // [sp-0xf8]
    let v14: i64;  // [sp-0xe0]
    let v15: i64;  // [sp-0xd8]
    let v16: i64;  // [sp-0xd0]
    let v17: i8;  // [sp-0xc8]
    let v18: i8;  // [bp-0xc0]
    let v20: i64;  // r12
    let v21: i64;  // r8
    let v22: i64;  // r9
    let v23: i128;  // xmm0
    let v24: i128;  // xmm1
    let v25: i128;  // xmm2
    let v26: i64;  // rax
    let v27: i128;  // xmm0
    let v28: i128;  // xmm1

    v9 = a1;
    v10 = a2;
    v4 = a3;
    v5 = a4;
    v0 = 1;
    v1 = a1;
    v2 = a2;
    v3 = 1;
    v14 = 1;
    v15 = a3;
    v16 = a4;
    v17 = 1;
    v6 = format!("{:?} -> {:?}", &v0, &v14);
    v11 = *((&v6 as &char + 8) as &i64);
    v12 = *((&v6 as &char + 16) as &i64);
    v7 = std::fs::symlink_metadata(a1, a2);
    v20 = v7;
    if v20 == 2 {
        *(&v0.field_0 as &struct24) = struct24 {
            field_0: v11
            field_16: v8
        };
        v7 = <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(&v0);
    } else {
        v13 = *((&v7 as &char + 16) as &i128);
        memcpy(&v18, &v7, 144);
        v14 = v20;
        v15 = v2;
        v16 = v13;
        v0 = struct24 {
            field_0: &v14
            field_8: &v4
            field_16: &v11
        };
        v7 = uu_cp::handle_preserve(*(a5 as &i8), *((a5 + 1) as &i8), &v0, v21, v22);
        if v7 == 13 {
            v0 = struct24 {
                field_0: &v4
                field_8: &v14
                field_16: &v11
            };
            v7 = uu_cp::handle_preserve(*((a5 + 2) as &i8), *((a5 + 3) as &i8), &v0, v21, v22);
            if v7 == 13 {
                v7 = uu_cp::handle_preserve(*((a5 + 4) as &i8), *((a5 + 5) as &i8), &v14, &v4, v22);
                if v7 == 13 {
                    v7 = uu_cp::handle_preserve(*((a5 + 10) as &i8), *((a5 + 11) as &i8), &v9, &v4, v22);
                    v26 = v7;
                    if v26 == 13 {
                        return struct8 {
                            field_0: 13
                        };
                    }
                    v27 = *((&v7 as &char + 8) as &i128);
                    v28 = *((&v7 as &char + 24) as &i128);
                    return struct64 {
                        field_0: v26
                        field_8: v27
                        field_24: v28
                        field_40: *((&v7 as &char + 40) as &i128)
                        field_56: *((&v7 as &char + 56) as &i64)
                    };
                }
            }
        }
    }
    v23 = v7;
    v24 = *((&v7 as &char + 16) as &i128);
    v25 = *((&v7 as &char + 32) as &i128);
    return struct64 {
        field_0: v23
        field_16: v24
        field_32: v25
        field_48: *((&v7 as &char + 48) as &i128)
    };
}
