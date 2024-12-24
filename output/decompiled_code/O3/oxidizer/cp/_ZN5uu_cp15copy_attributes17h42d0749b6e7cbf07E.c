fn uu_cp::copy_attributes(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i192;  // [sp-0x230], Other Possible Types: struct24
    let v1: i64;  // [sp-0x228]
    let v2: i64;  // [sp-0x220]
    let v3: i8;  // [sp-0x218]
    let v4: i64;  // [sp-0x210]
    let v5: i64;  // [sp-0x208]
    let v6: i192;  // [sp-0x200]
    let v7: i512;  // [sp-0x1e8], Other Possible Types: Option<struct64>, Result<struct176, struct16>, struct40
    let v8: i64;  // [sp-0x138]
    let v9: i64;  // [sp-0x130]
    let v10: i64;  // [sp-0x128]
    let v11: i64;  // [sp-0x120]
    let v12: i128;  // [sp-0xf8]
    let v13: i64;  // [sp-0xe0]
    let v14: i64;  // [sp-0xd8]
    let v15: i128;  // [sp-0xd0]
    let v16: i8;  // [sp-0xc8]
    let v17: i8;  // [bp-0xc0]
    let v19: i64;  // r12
    let v20: i64;  // r8
    let v21: i64;  // r9
    let v22: i128;  // xmm0
    let v23: i128;  // xmm1
    let v24: i128;  // xmm2
    let v25: i64;  // rax
    let v26: i128;  // xmm0
    let v27: i128;  // xmm1

    v8 = a1;
    v9 = a2;
    v4 = a3;
    v5 = a4;
    v0 = 1;
    v1 = a1;
    v2 = a2;
    v3 = 1;
    v13 = 1;
    v14 = a3;
    v15 = a4;
    v16 = 1;
    v6 = format!("{:?} -> {:?}", &v0, &v13);
    v10 = *((&v6 as &char + 8) as &i64);
    v11 = *((&v6 as &char + 16) as &i64);
    v7 = std::fs::symlink_metadata(a1, a2);
    v19 = v7;
    if v19 == 2 {
        v0 = v10;
        v7 = <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(&v0);
    } else {
        v12 = *((&v7 as &char + 16) as &i128);
        memcpy(&v17, &v7, 144);
        v13 = v19;
        v14 = v2;
        v15 = v12;
        v0 = struct24 {
            field_0: &v13
            field_8: &v4
            field_16: &v10
        };
        v7 = uu_cp::handle_preserve(*(a5 as &i8), *((a5 + 1) as &i8), &v0, v20, v21);
        if v7 == 13 {
            v0 = struct24 {
                field_0: &v4
                field_8: &v13
                field_16: &v10
            };
            v7 = uu_cp::handle_preserve(*((a5 + 2) as &i8), *((a5 + 3) as &i8), &v0, v20, v21);
            if v7 == 13 {
                v7 = uu_cp::handle_preserve(*((a5 + 4) as &i8), *((a5 + 5) as &i8), &v13, &v4, v21);
                if v7 == 13 {
                    v7 = uu_cp::handle_preserve(*((a5 + 10) as &i8), *((a5 + 11) as &i8), &v8, &v4, v21);
                    v25 = v7;
                    if v25 == 13 {
                        return struct8 {
                            field_0: 13
                        };
                    }
                    v26 = *((&v7 as &char + 8) as &i128);
                    v27 = *((&v7 as &char + 24) as &i128);
                    return struct64 {
                        field_0: v25
                        field_8: v26
                        field_24: v27
                        field_40: *((&v7 as &char + 40) as &i128)
                        field_56: *((&v7 as &char + 56) as &i64)
                    };
                }
            }
        }
    }
    v22 = v7;
    v23 = *((&v7 as &char + 16) as &i128);
    v24 = *((&v7 as &char + 32) as &i128);
    return struct64 {
        field_0: v22
        field_16: v23
        field_32: v24
        field_48: *((&v7 as &char + 48) as &i128)
    };
}
