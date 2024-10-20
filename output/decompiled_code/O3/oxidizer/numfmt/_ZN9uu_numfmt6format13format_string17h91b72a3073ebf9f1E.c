fn uu_numfmt::format::format_string() -> u32 {
    let v0: i64;  // [sp-0x268], Other Possible Types: Argument
    let v1: i64;  // [sp-0x260]
    let v2: i64;  // [sp-0x258]
    let v3: i8;  // [sp-0x250]
    let v4: i192;  // [bp-0x238], Other Possible Types: String, Argument
    let v6: Argument;  // [bp-0x1f8], Other Possible Types: i64
    let v7: i64;  // [sp-0x1e0]
    let v8: String;  // [sp-0x1d8], Other Possible Types: i192
    let v9: Arguments;  // [bp-0x1b8]
    let v10: i64;  // [sp-0x138]
    let v11: i128;  // [sp-0x130], Other Possible Types: Enum
    let v12: i64;  // [sp-0x108]
    let v13: i64;  // [sp-0xf8]
    let v14: i64;  // [sp-0xf0]
    let v16: i64;  // r9
    let v17: i64;  // r8
    let v18: i64;  // rcx
    let v19: i64;  // r12
    let v20: i64;  // rdx
    let v21: i64;  // rsi
    let v22: i64;  // r13
    let v23: i64;  // r15
    let v25: i64;  // rbx
    let v26: i64;  // rbx
    let v27: i64;  // rax
    let v28: i64;  // r12
    let v29: i64;  // rax
    let v30: i64;  // rdx
    let v31: i64;  // rdx
    let v32: i64;  // rbx
    let v33: i64;  // r14
    let v34: i64;  // rax
    let v35: i64;  // rdx
    let v36: i32;  // esi
    let v37: i32;  // r8d
    let v38: i32;  // edi
    let v39: i64;  // r13
    let v40: i64;  // rax
    let v43: i64;  // rax
    let v44: i64;  // rcx
    let v46: i256;  // ymm1
    let v48: i64;  // rbx
    let v49: i64;  // rcx
    let v50: i64;  // rdx
    let v51: i64;  // rsi
    let v53: i32;  // edx
    let v54: i64;  // rbx
    let v55: i64;  // rcx
    let v56: i8;  // al
    let v57: i64;  // rcx
    let v58: i256;  // ymm1
    let v59: i256;  // ymm1
    let v60: i256;  // ymm1
    let v61: i64;  // r12
    let v62: i256;  // ymm0
    let v63: i256;  // ymm0
    let v64: i8;  // al
    let v65: i64;  // rax
    let v66: i32;  // ecx
    let v67: i256;  // ymm1
    let v68: i64;  // rdx
    let v69: i32;  // edx

    v10 = v16;
    v14 = v17;
    v13 = *((v18 + 136) as &i64);
    if v13 != 0x8000000000000000 {
        v19 = *((v18 + 152) as &i64);
        if v20 < v19 {
            v19 = 0;
        } else if bcmp(*((v18 + 144) as &i64), v20 - v19 + v21, v19) as i64 {
            v19 = 0;
        }
        v22 = v20 - v19;
    }
    if *((v18 + 16) as &i64) {
        v7 = *((v18 + 24) as &i64);
        v23 = *((v18 + 176) as &i8);
        goto LABEL_492620;
    }
    v23 = *((v18 + 176) as &i8);
    v7 = 0;
    if v23 == 5 && *((v18 + 177) as &i8) == 5 {
        v7 = 0;
        loop {
            v26 = v25;
            v27 = v22 - v26;
            v28 = v26 + v21;
            if v27 <= 15 {
                v23 = v23 | -0x100 | 5;
                if v22 == v26 {
                    goto LABEL_492620;
                }
                v30 = 0;
                while (*((v28 + v30) as &i8) != 46) {
                    v30 += 1;
                    if v27 == v30 {
                        goto LABEL_492620;
                    }
                }
            }
            v29 = core::slice::memchr::memchr_aligned(46, v28);
            if v29 != 1 {
                break;
            }
            v29 = v26 + v31 + 1;
            v26 += v31;
            if !(v26 < v22) || !(*((v31 + v28) as &i8) == 46) {
                v23 = v23 | -0x100 | 5;
                v32 = v29;
                if v22 < v32 {
                    goto LABEL_492620;
                }
            } else {
                if !(v32 == v22) {
                    goto LABEL_49323f;
                }
                v12 = v18;
                v33 = *((v18 + 160) as &i64);
                v23 = v23 | -0x100 | 5;
                v7 = 0;
LABEL_492638:
                v43 = *((v21 + v22 - 1) as &i8);
                if v44 != v21 {
                    v49 = *((v44 - 1) as &i8);
                    if v49 < 0 {
                        v50 = *((v44 - 2) as &i8);
                        if v50 >= 192 {
                            v53 = v50 & 31;
                        } else {
                            v51 = *((v44 - 3) as &i8);
                            v53 = v50 & 63 | (v51 < 192 ? v51 & 63 | (*((v44 - 4) as &i8) & 7) * 64 : v51 & 15) * 64;
                        }
                        v49 = v49 & 63 | v53 * 64;
                    }
                    switch (v49) {
                    case 69:
                        break;
                    case 71:
                        break;
                    case 75:
                        v54 = -0x100 | v43 == 105;
                        v55 = ~(v54);
                        v56 = 0;
LABEL_49292b:
                        v57 = v55 + v22;
                        if v55 + v22 {
                            if v57 >= v22 {
                                if !v56 {
                                    core::str::slice_error_fail(); /* do not return */
                                }
                            } else {
                                if *((v21 + v57) as &i8) <= 191 {
                                    core::str::slice_error_fail(); /* do not return */
                                }
                            }
                        }
                        v11 = core::num::dec2flt::<impl core::str::traits::FromStr for f64>::from_str(v21, v57);
                        if !v11 {
                            vvar_86{reg 256} = (((vvar_655{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000<256>) | Conv(64->256, Load(addr=stack_base-296, size=8, endness=Iend_LE)))
                        } else {
                            v0 = 0;
                            v1 = v21;
                            v2 = v22;
                            v3 = 1;
                            v6 = Argument {
                                value: &v0
                                formatter: <os_display::Quoted as core::fmt::Display>::fmt
                            };
                            v9 = Arguments {
                                pieces: ["invalid number: "]
                                args: [&v6]
                                fmt: None
                            };
                            v4 = alloc::fmt::format::format_inner(&v9);
                            v39 = v4;
                            vvar_86{reg 256} = (((vvar_661{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000<256>) | Conv(64->256, vvar_952{stack -560}))
                            if v39 != 0x8000000000000000 {
                                v61 = *((&v4 as &char + 16) as &i64);
                                v48 = (v61 & 4294967295 & 4294967295) >> 8 & 4294967295;
                                v65 = (v48 & 4294967295 & 4294967295) * 0x100 & 4294967295 | 18 | (v61 >> 16) * 0x10000;
                                *((v68 + 8) as &i64) = v39;
                                *((v68 + 16) as &i64) = v67;
                                *((v68 + 24) as &i64) = v65;
                                *(v68 as &i64) = 1;
                                return;
                            }
                        }
LABEL_492a6c:
                        vvar_692{reg 224} = ((((((((vvar_685{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_222{reg 128})) - 0x45300000000000004330000000000000<128>))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_222{reg 128})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>)) CONCAT Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_222{reg 128})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>))))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, ((Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_222{reg 128})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>)) CONCAT Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_222{reg 128})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>))) + ((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_222{reg 128})) - 0x45300000000000004330000000000000<128>)))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, (((Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_222{reg 128})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>)) CONCAT Conv(128->64, (((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_222{reg 128})) - 0x45300000000000004330000000000000<128>) >> 0x40<8>))) + ((0x4530000043300000<128> InterleaveLOV Conv(64->128, vvar_222{reg 128})) - 0x45300000000000004330000000000000<128>)) * Conv(256->128, vvar_141{reg 256}))))
                        v6 = v63;
                        v64 = v23 - 2 & 4294967295;
                        if v54 != 2 {
                            v66 = (v64 < 4 ? v64 : 2);
                            goto *((4319408 + vvar_235{reg 24} * 4) as &i32) + 4319408;
                        } else {
                            if !(v64 < 4 & v64 != 2) {
                                v0 = Argument {
                                    value: &v6
                                    formatter: core::fmt::float::<impl core::fmt::Display for f64>::fmt
                                };
                                v9 = Arguments {
                                    pieces: ["missing 'i' suffix in input: '", "' (e.g Ki/Mi/Gi)"]
                                    args: [&v0]
                                    fmt: None
                                };
                                v4 = alloc::fmt::format::format_inner(&v9);
                                v39 = v4;
                                if v39 != 0x8000000000000000 {
                                    v65 = *((&v4 as &char + 16) as &i64);
                                    vvar_127{reg 256} = ((vvar_141{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | ((((vvar_692{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000<256>) | Conv(64->256, vvar_898{stack -560})) & 0xffffffffffffffffffffffffffffffff<256>))
                                    *((v68 + 8) as &i64) = v39;
                                    *((v68 + 16) as &i64) = v67;
                                    *((v68 + 24) as &i64) = v65;
                                    *(v68 as &i64) = 1;
                                    return;
                                }
                            }
                            v0 = 0x706050403020100;
                            v69 = (*((v12 + 177) as &i8) - 2 < 4 ? *((v12 + 177) as &i8) - 2 : 2);
                            goto *((0x41e900 + vvar_218{reg 32} * 4) as &i32) + 0x41e900;
                        }
                    case 77:
                        break;
                    case 80:
                        break;
                    case 84:
                        break;
                    case 89:
                        break;
                    case 90:
                        break;
                    default:
                        if v43 != 105 && v49 - 58 >= -10 {
                            v55 = 0;
                            v54 = v26 | -0x100 | 2;
                            v56 = v43 | -0x100 | 1;
                            goto LABEL_49292b;
                        }
                    }
                }
                v0 = 0;
                v1 = v21;
                v2 = v22;
                v3 = 1;
                v4 = Argument {
                    value: &v0
                    formatter: <os_display::Quoted as core::fmt::Display>::fmt
                };
                v9 = Arguments {
                    pieces: ["invalid suffix in input: "]
                    args: [&v4]
                    fmt: None
                };
                v8 = alloc::fmt::format::format_inner(&v9);
                vvar_86{reg 256} = (((vvar_603{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000<256>) | Conv(64->256, Load(addr=stack_base-464, size=8, endness=Iend_LE)))
                v48 = *((&v8 as &char + 17) as &i8);
                if v8 != 0x8000000000000000 {
                    *((v68 + 8) as &i64) = v39;
                    *((v68 + 16) as &i64) = v67;
                    *((v68 + 24) as &i64) = v65;
                    *(v68 as &i64) = 1;
                    return;
                }
                goto LABEL_492a6c;
            }
        }
        if !v29 {
            v23 = v23 | -0x100 | 5;
            v7 = v29;
            goto LABEL_492620;
        }
LABEL_49323f:
        v34 = v29 + v21;
        v7 = 0;
        do {
            v35 = *(v34 as &i8);
            if v35 >= 0 {
                v34 += 1;
            } else {
                v36 = v35 & 31;
                v37 = *((v34 + 1) as &i8) & 63;
                if (v35 & 255) <= 223 {
                    v34 += 2;
                    v35 = v36 * 64 | v37;
                } else {
                    v38 = *((v34 + 2) as &i8) & 63 | v37 * 64;
                    if (v35 & 255) < 240 {
                        v34 += 3;
                        v35 = v38 | v36 * 0x1000;
                    } else {
                        v35 = *((v34 + 3) as &i8) & 63 | v38 * 64 | (v36 & 7) * 0x40000;
                        if v35 != 0x110000 {
                            v34 += 4;
                        } else {
                            v23 = v23 | -0x100 | 5;
                            break;
                        }
                    }
                }
            }
        } while ((v23 = v23 | -0x100 | 5, v35 as i32 - 48 <= 9 && (v7 += 1, v34 != v21 + v22)));
    }
LABEL_492620:
    if !v22 {
        v40 = __rust_alloc(18, 1);
        *(v40 as &i128) = 42838769310113416591687283243360874089;
        *((v40 + 16) as &i16) = 10023;
        *((v68 + 8) as &i64) = v39;
        *((v68 + 16) as &i64) = v67;
        *((v68 + 24) as &i64) = v65;
        *(v68 as &i64) = 1;
        return;
    }
    v12 = v18;
    v33 = *((v18 + 160) as &i64);
    goto LABEL_492638;
}
