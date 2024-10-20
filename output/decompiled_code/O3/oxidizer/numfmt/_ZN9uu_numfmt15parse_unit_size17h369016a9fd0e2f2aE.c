fn uu_numfmt::parse_unit_size(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i192;  // [sp-0xb8], Other Possible Types: struct24
    let v1: i64;  // [bp-0xa0], Other Possible Types: Arguments, struct16, Enum
    let v2: i64;  // [sp-0x98]
    let v3: i8;  // [bp-0x90]
    let v4: i64;  // [sp-0x70]
    let v5: i64;  // [sp-0x68]
    let v6: i64;  // [sp-0x60]
    let v7: i64;  // [sp-0x58]
    let v8: i64;  // [sp-0x50]
    let v9: i8;  // [sp-0x48]
    let v10: String;  // [sp-0x40], Other Possible Types: i192
    let v12: i64;  // r12
    let v13: i64;  // cc_ndep
    let v14: i64;  // rax
    let v15: i64;  // r13
    let v16: i64;  // rax
    let v17: i64;  // rcx
    let v18: i32;  // edx
    let v19: i32;  // edi
    let v20: i32;  // esi
    let v21: i64;  // rcx
    let v22: i64;  // rax
    let v23: i64;  // rcx
    let v24: i64;  // xmm0lq
    let v25: i64;  // rax
    let v26: i256;  // ymm1
    let v27: i256;  // ymm0
    let v28: i256;  // ymm1
    let v29: i64;  // rax

    v1 = struct16 {
        field_0: a1
        field_8: a1 + a2
    };
    v3 = 0;
    v0 = <alloc::string::String as core::iter::traits::collect::FromIterator<char>>::from_iter(&v1);
    v12 = *((&v0 as &char + 16) as &i64);
    if v12 {
        if a2 <= v12 {
            if a2 != v12 {
                core::str::slice_error_fail(); /* do not return */
            }
        } else {
            if *((a1 + v12) as &i8) <= 191 {
                core::str::slice_error_fail(); /* do not return */
            }
        }
        alloc::str::<impl str>::repeat(&v1, &g_41de9e, 1, v12);
        if v3 == v12 && !bcmp(v2, *((&v0 as &char + 8) as &i64), v12) as i64 {
            if v1 {
LABEL_48d6e3:
                v6 = 0;
                v7 = a1;
                v8 = a2;
                v9 = 1;
                v4 = &v6;
                v5 = <os_display::Quoted as core::fmt::Display>::fmt;
                v1 = Arguments {
                    pieces: ["invalid unit size: "]
                    args: &[&Argument] {
                        ptr: <UNKNOWN>
                        len: 1
                    }
                    fmt: None
                };
                v3 = &v4;
                v10 = alloc::fmt::format::format_inner(&v1);
                *((a0 + 16) as &i64) = *((&v10 as &char + 16) as &i64);
                *(a0 as &i192) = v10;
                return v29;
            }
LABEL_48d6e3:
            v6 = 0;
            v7 = a1;
            v8 = a2;
            v9 = 1;
            v4 = &v6;
            v5 = <os_display::Quoted as core::fmt::Display>::fmt;
            v1 = Arguments {
                pieces: ["invalid unit size: "]
                args: &[&Argument] {
                    ptr: <UNKNOWN>
                    len: 1
                }
                fmt: None
            };
            v3 = &v4;
            v10 = alloc::fmt::format::format_inner(&v1);
            *((a0 + 16) as &i64) = *((&v10 as &char + 16) as &i64);
            *(a0 as &i192) = v10;
            return v29;
        }
    }
    v14 = a2;
    v15 = 1;
    v16 = v14 - v12;
    if v14 != v12 {
        v17 = *((a1 + v12) as &i8);
        if v17 < 0 {
            v18 = v17 & 31;
            v19 = *((a1 + v12 + 1) as &i8) & 63;
            if (v17 & 255) <= 223 {
                v17 = v18 * 64 | v19;
            } else {
                v20 = *((a1 + v12 + 2) as &i8) & 63 | v19 * 64;
                v17 = ((v17 & 255 & 255) < 240 ? *((a1 + v12 + 3) as &i8) & 63 | v20 * 64 | (v18 & 7) * 0x40000 : v20 | v18 * 0x1000);
            }
        }
        switch (v17) {
        case 69:
            v21 = 6;
            if v16 == 1 {
                goto LABEL_48d66c;
            }
            break;
        case 71:
            v21 = 3;
            if v16 == 1 {
                goto LABEL_48d66c;
            }
            break;
        case 75:
            v21 = 1;
            if v16 == 1 {
                goto LABEL_48d66c;
            }
            break;
        case 77:
            v21 = 2;
            if v16 == 1 {
                goto LABEL_48d66c;
            }
            if v16 == 2 && *((a1 + v12 + 1) as &i8) == 105 {
                v22 = &g_41df08;
                goto LABEL_48d673;
            }
        case 80:
            v21 = 5;
            if v16 == 1 {
                goto LABEL_48d66c;
            }
            break;
        case 84:
            v21 = 4;
            if !(v16 == 1) {
                break;
            }
LABEL_48d66c:
            v22 = &g_41deb8;
LABEL_48d673:
            v24 = *((v22 + v23 * 8) as &i64);
            v25 = v24;
            vvar_289{reg 256} = ((((vvar_285{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | ((((vvar_273{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000<256>) | Conv(64->256, vvar_275{reg 224})) & 0xffffffffffffffffffffffffffffffff<256>)) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (Conv(256->128, (((vvar_273{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000<256>) | Conv(64->256, vvar_275{reg 224}))) SubV 0x43e0000000000000<128>)))
            v15 = v28 & v25 >> 63 | v25;
            if !(amd64g_calculate_condition(3, 0, (BinaryOp CmpF & 69) as u32 as u64, 0, v13) as char) {
                v15 = 0;
            }
            if ((BinaryOp CmpF & 69 | (BinaryOp CmpF & 69) >> 6) & 1) != 1 {
                v15 = -1;
                goto LABEL_48d6bc;
            } else {
                goto LABEL_48d6bc;
            }
        default:
LABEL_48d6e3:
            v6 = 0;
            v7 = a1;
            v8 = a2;
            v9 = 1;
            v4 = &v6;
            v5 = <os_display::Quoted as core::fmt::Display>::fmt;
            v1 = Arguments {
                pieces: ["invalid unit size: "]
                args: &[&Argument] {
                    ptr: <UNKNOWN>
                    len: 1
                }
                fmt: None
            };
            v3 = &v4;
            v10 = alloc::fmt::format::format_inner(&v1);
            *((a0 + 16) as &i64) = *((&v10 as &char + 16) as &i64);
            *(a0 as &i192) = v10;
            return v29;
        }
    }
LABEL_48d6bc:
    if v12 {
        v1 = core::num::<impl core::str::traits::FromStr for usize>::from_str(*((&v0 as &char + 8) as &i64), v12);
        if !(!v1) {
            goto LABEL_48d6e3;
        }
        v15 = v2 * v15;
    }
    *((a0 + 8) as &i64) = v15;
    *(a0 as &i64) = 0x8000000000000000;
    return v29;
}
