fn uu_seq::numberparse::parse_no_decimal_no_exponent(a0: void*, a1: &u8, a2: u32) -> u64 {
    let v0: i320;  // [bp-0xd8]
    let v1: i128;  // [sp-0xc8]
    let v2: i64;  // [sp-0xb8]
    let v3: Enum;  // [sp-0xb0], Other Possible Types: i320
    let v4: i128;  // [sp-0x88]
    let v5: i128;  // [sp-0x78]
    let v6: i64;  // [sp-0x68]
    let v7: struct17;  // [bp-0x60]
    let v8: struct17;  // [bp-0x48]
    let v10: i64;  // rax
    let v11: i64;  // r12
    let v12: i64;  // r15
    let v14: i64;  // rax
    let v15: i64;  // rcx
    let v16: i256;  // ymm3
    let v17: i256;  // ymm4
    let v18: i256;  // ymm5
    let v19: i256;  // ymm6
    let v20: i256;  // ymm7
    let v21: i128;  // xmm3
    let v22: i128;  // xmm4
    let v23: i128;  // xmm5
    let v24: i128;  // xmm5
    let v25: i128;  // xmm6
    let v26: i128;  // xmm6
    let v27: i128;  // xmm7
    let v28: i128;  // xmm7
    let v29: i128;  // xmm7
    let v30: i128;  // xmm7
    let v31: i128;  // xmm5
    let v32: i128;  // xmm5
    let v33: i128;  // xmm5
    let v34: i128;  // xmm5
    let v35: i128;  // xmm7
    let v36: i128;  // xmm5
    let v37: i64;  // rdx
    let v39: i64;  // rax
    let v40: i128;  // xmm4
    let v41: i128;  // xmm4
    let v42: i64;  // rcx
    let v43: i64;  // rax
    let v44: i64;  // rax
    let v45: i64;  // r12
    let v46: i64;  // cc_op
    let v47: i64;  // cc_dep1
    let v48: i64;  // cc_dep2
    let v49: i64;  // cc_ndep
    let v50: i64;  // rsi

    v3 = bigdecimal::impl_num::<impl num_traits::Num for bigdecimal::BigDecimal>::from_str_radix(a1, a2);
    if v3 != 0x8000000000000000 {
        v0 = v3;
        if a2 && *(a1 as &i8) == 45 {
            v5 = 0x10000000000000000;
            v4 = 0x80000000000000000;
            v6 = 0;
            v7 = struct17 {
                field_0: &v0
                field_8: v2
                field_16: *((&v0 as &char + 24) as &i8)
            };
            v8 = struct17 {
                field_0: &v4
                field_8: 0
                field_16: 1
            };
            if bigdecimal::impl_cmp::check_equality_bigdecimal_ref(&v7, &v8) as i8 {
                *(a0 as &i64) = 9223372036854775810;
                *((a0 + 40) as &i64) = a2;
                *((a0 + 48) as &i64) = 0;
                if v0 {
                    return a0;
                }
                return a0;
            }
        }
        *((a0 + 32) as &i64) = v2;
        *((a0 + 16) as &i128) = v1;
        *(a0 as &i128) = v0;
        *((a0 + 40) as &i64) = a2;
        *((a0 + 48) as &i64) = 0;
        return a0;
    }
    if !a2 {
        *((a0 + 8) as &i8) = 0;
        *(a0 as &i64) = 9223372036854775812;
        return a0;
    }
    v10 = __rust_alloc(a2, 1);
    v11 = v10;
    v12 = v10;
    memcpy(v11, a1, a2);
    if a2 < 8 {
LABEL_4977be:
        do {
            v43 = *(v42 as &i8);
            *(v42 as &u8) = ((v43 - 65 & 4294967295 & 255 & 255) < 26) * 32 | v43;
            v42 += 1;
        } while (v42 != v11 + a2);
    } else {
        if a2 < 32 {
            v14 = 0;
            goto LABEL_49775a;
        }
        v14 = 9223372036854775776 & a2;
        v15 = 0;
        do {
            v21 = *((v12 + v15) as &i128);
            vvar_80{reg 320} = ((vvar_89{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_315{reg 320}))
            v22 = *((v12 + v15 + 16) as &i128);
            vvar_81{reg 352} = ((vvar_90{reg 352} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_317{reg 352}))
            v23 = v21;
            v24 = BinaryOp AddV;
            v25 = v22;
            v26 = BinaryOp AddV;
            vvar_92{reg 416} = ((((vvar_92{reg 416} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_323{reg 416})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_325{reg 416}))
            v27 = v24;
            v28 = BinaryOp MinV;
            v29 = BinaryOp CmpEQV;
            v30 = v29 & 42702100946941297375796029167908167712;
            v31 = v26;
            v32 = BinaryOp MinV;
            v33 = BinaryOp CmpEQV;
            v34 = v33 & 42702100946941297375796029167908167712;
            v35 = v30 | v21;
            vvar_93{reg 448} = ((((((((((vvar_93{reg 448} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_327{reg 448})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_329{reg 448})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_331{reg 448})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_333{reg 448})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_343{reg 448}))
            v36 = v34 | v22;
            vvar_82{reg 384} = ((((((((((((((vvar_91{reg 384} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_319{reg 384})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_321{reg 384})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_335{reg 384})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_337{reg 384})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_339{reg 384})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_341{reg 384})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_345{reg 384}))
            *((v12 + v15) as &i128) = v35;
            *((v12 + v15 + 16) as &i128) = v36;
            v15 += 32;
        } while (v14 != v15);
        if v14 != a2 {
            if !(a2 & 24) {
                v39 = v14 + v11;
                goto LABEL_4977be;
            }
LABEL_49775a:
            v37 = 9223372036854775800 & a2;
            do {
                vvar_80{reg 320} = (((vvar_113{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000<256>) | Conv(64->256, Load(addr=(vvar_250{reg 136} + vvar_112{reg 16}), size=8, endness=Iend_LE)))
                vvar_378{reg 352} = Conv(256->128, vvar_80{reg 320})
                v41 = BinaryOp AddV;
                vvar_81{reg 352} = ((((vvar_114{reg 352} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_378{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_380{reg 352}))
                vvar_82{reg 384} = ((((((((((vvar_115{reg 384} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_380{reg 352})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (vvar_380{reg 352} MaxV 0x1a1a1a1a1a1a1a1a<128>))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((vvar_380{reg 352} MaxV 0x1a1a1a1a1a1a1a1a<128>) CmpEQV vvar_380{reg 352}))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((BitwiseNeg ((vvar_380{reg 352} MaxV 0x1a1a1a1a1a1a1a1a<128>) CmpEQV vvar_380{reg 352})) & 0x2020202020202020<128>))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (((BitwiseNeg ((vvar_380{reg 352} MaxV 0x1a1a1a1a1a1a1a1a<128>) CmpEQV vvar_380{reg 352})) & 0x2020202020202020<128>) | Conv(256->128, vvar_80{reg 320}))))
                *((v12 + v14) as &i64) = v18;
                v14 += 8;
            } while (v37 != v14);
            if v37 == a2 {
                goto LABEL_4977ef;
            }
            goto LABEL_4977be;
        }
    }
LABEL_4977ef:
    v44 = 0;
    switch (a2) {
    case 3:
        v45 = 0x8000000000000000;
        if !(*((v12 + 2) as &i8) ^ 102) && !(*(v12 as &i16) ^ 28265) {
            goto LABEL_4978c6;
        }
        v44 = *(v12 as &i16) ^ 24942;
        v46 = 18;
        v47 = *((v12 + 2) as &i8) ^ 110 | v44;
        v48 = 0;
        break;
    case 4:
        if *(v12 as &i32) == 1718511917 {
            goto LABEL_4978c2;
        }
        v46 = 7;
        v47 = *(v12 as &i32);
        v48 = 1851878957;
        break;
    case 8:
        v45 = 0x8000000000000000;
        if !(*(v12 as &i64) == 8751735898823356009) {
            goto LABEL_497886;
        }
LABEL_4978c6:
        *(a0 as &i64) = v45;
        *((a0 + 40) as &i128) = 0;
        v50 = *((&v3 as &char + 8) as &i64);
        if v50 < 9223372036854775812 {
            return a0;
        } else if !v50 {
            return a0;
        } else {
            return a0;
        }
    case 9:
        if !(*((v12 + 8) as &i8) ^ 121) && !(8388357179923392813 ^ *(v12 as &i64)) {
LABEL_4978c2:
            v45 = 9223372036854775809;
            goto LABEL_4978c6;
        } else {
LABEL_497886:
            v44 = 0;
            goto LABEL_497888;
        }
    default:
LABEL_497888:
        *((a0 + 8) as &i8) = v44;
        *(a0 as &i64) = 9223372036854775812;
        return a0;
    }
    v44 = v44 | -0x100 | amd64g_calculate_condition(4, v46, v47, v48, v49) & 255;
    goto LABEL_497888;
}
