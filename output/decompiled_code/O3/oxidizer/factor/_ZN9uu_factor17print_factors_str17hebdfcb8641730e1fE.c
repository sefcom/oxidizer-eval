fn uu_factor::print_factors_str(a0: i64, a1: i64, a2: i64, a3: i8) -> u64 {
    let v0: i64;  // [sp-0x1f8], Other Possible Types: struct24, Arguments, struct32
    let v1: i64;  // [sp-0x1f0]
    let v2: i64;  // [sp-0x1e8]
    let v3: i64;  // [bp-0x1e0]
    let v4: i64;  // [sp-0x1d8]
    let v5: i8;  // [bp-0x1d0]
    let v6: i128;  // [bp-0x1c8], Other Possible Types: struct24, Arguments, struct16, struct8, Enum
    let v7: i64;  // [sp-0x1c0]
    let v8: i64;  // [sp-0x1b8]
    let v9: i64;  // [bp-0x1b0]
    let v10: i64;  // [sp-0x1a8]
    let v11: i64;  // [sp-0x1a0]
    let v12: i64;  // [sp-0x198]
    let v13: i64;  // [sp-0x190]
    let v14: i64;  // [sp-0x188]
    let v15: i64;  // [sp-0x178]
    let v16: i64;  // [sp-0x170]
    let v17: i64;  // [sp-0x168]
    let v18: i128;  // [sp-0x158], Other Possible Types: String
    let v19: i64;  // [sp-0x150]
    let v20: i64;  // [sp-0x148]
    let v21: i64;  // [sp-0x140]
    let v22: i128;  // [sp-0x138]
    let v23: i64;  // [sp-0x128]
    let v24: i64;  // [sp-0x120]
    let v25: i128;  // [sp-0x118]
    let v26: i64;  // [sp-0x108]
    let v27: i128;  // [sp-0xf8]
    let v28: i64;  // [sp-0xe8]
    let v29: i64;  // [sp-0xe0]
    let v30: i8;  // [sp-0xd8], Other Possible Types: Enum
    let v31: i64;  // [sp-0xb8]
    let v32: i64;  // [sp-0xb0]
    let v33: i64;  // [sp-0xa8]
    let v34: i64;  // [sp-0x98]
    let v35: i64;  // [sp-0x90]
    let v36: i64;  // [sp-0x88]
    let v37: i8;  // [bp-0x78]
    let v38: i8;  // [bp-0x70]
    let v39: i8;  // [bp-0x68]
    let v40: Enum;  // [sp-0x60], Other Possible Types: i72
    let v41: i8;  // [bp-0x50]
    let v42: i64;  // [sp-0x48]
    let v43: i64;  // [sp-0x40]
    let v44: i64;  // [sp-0x38]
    let v46: i64;  // rdx
    let v47: i128;  // xmm0
    let v48: i128;  // xmm0
    let v49: i256;  // ymm0
    let v50: i256;  // ymm0
    let v51: i64;  // rcx
    let v52: i8;  // al
    let v53: i64;  // rbx
    let v54: i128;  // xmm0
    let v55: i64;  // rax
    let v56: i64;  // rax
    let v57: i64;  // rax
    let v58: i64;  // rcx
    let v59: i64;  // rax
    let v60: i128;  // xmm0
    let v61: i128;  // xmm0
    let v62: i128;  // xmm0
    let v63: i128;  // xmm0
    let v64: i64;  // rsi
    let v65: i64;  // r15
    let v66: i64;  // rbp
    let v67: i64;  // rsi

    v40 = num_bigint::biguint::convert::<impl num_traits::Num for num_bigint::biguint::BigUint>::from_str_radix(core::str::<impl str>::trim_matches(a0, a1), v46, &g_0);
    if v40 == 0x8000000000000000 {
        v0 = uucore::util_name();
        v1 = v46;
        v18 = &v0;
        v19 = <&T as core::fmt::Display>::fmt;
        v6 = Arguments {
            pieces: [&g_536cd8, ": warning: "]
            args: &[&Argument] {
                ptr: &v18
                len: <UNKNOWN>
            }
            fmt: None
        };
        v9 = &g_0;
        std::io::stdio::_eprint(&v6);
        v0 = &g_0;
        v1 = a0;
        v2 = a1;
        *(&v3 as &&i64) = &g_0;
        v30 = *((&v40 as &char + 8) as &i8) != &g_0;
        v18 = &v0;
        v19 = <os_display::Quoted as core::fmt::Display>::fmt;
        v20 = &v30;
        v21 = <num_bigint::ParseBigIntError as core::fmt::Display>::fmt;
        v6 = Arguments {
            pieces: [&g_536cf8, ": ", "\n"]
            args: &[&Argument] {
                ptr: &v18
                len: <UNKNOWN>
            }
            fmt: None
        };
        v9 = &g_0;
        std::io::stdio::_eprint(&v6);
        uucore::mods::error::set_exit_code();
        return &g_0;
    }
    v23 = v41;
    v47 = v40;
    v22 = v47;
    v6 = 0x80000000000000000;
    v8 = &g_0;
    v6 = alloc::raw_vec::RawVec<T,A>::grow_one();
    *(v7 as &&i64) = &g_0;
    v48 = v6;
    vvar_17{reg 224} = ((((((vvar_176{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_175{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x80000000000000000<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_192{reg 224}))
    v0 = v48;
    v2 = &g_0;
    v51 = v23;
    v52 = -(v51 < &g_0);
    if !v52 && v51 == 1 {
        core::iter::traits::iterator::Iterator::cmp_by(*((&v22 as &char + 8) as &i64), *((&v22 as &char + 8) as &i64) + v51 * &g_0, v1, (v1 + &g_0 as &u8) as &i64);
    }
    if (v52 | v51 != &g_0) != 1 {
        v0 = &g_0;
        v2 = &g_0;
        v3 = 0x8000000000000000;
    } else {
        v6 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v22);
        v20 = v8;
        v54 = v6;
        vvar_17{reg 224} = ((vvar_17{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_251{reg 224}))
        v18 = v54;
        v6 = struct8 {
            field_0: &g_0
        };
        v0 = num_prime::nt_funcs::factors(&v18, &v6);
    }
    v33 = v2;
    v31 = v0;
    v32 = v1;
    v17 = v5;
    v15 = *((&v0 as &char + 24) as &i64);
    v16 = v4;
    v29 = v15;
    if v29 != 0x8000000000000000 {
        v2 = v17;
        v0 = v15;
        v1 = v16;
        v6 = alloc::raw_vec::RawVec<T,A>::try_allocate_in(44, &g_0);
        v56 = v8;
        *((v56 + &g_1c as &u8) as &i128) = 61743963848231822752248523843128877421;
        *((v56 + &g_10 as &u8) as &i128) = 146762246767445441068010909689432600419;
        *(v56 as &i128) = 146760928493172419236840914235949277510;
        *(&v9 as &&i64) = &g_0;
        v6 = v7;
        v7 = v56;
        v8 = 44;
        v53 = __rust_alloc(&g_1c, &g_0);
        v60 = v6;
        *((v53 + &g_10 as &u8) as &i64) = v8;
        *(v53 as &i128) = v60;
    } else {
        v36 = v33;
        v34 = v31;
        v35 = v32;
        v42 = &v22;
        v0 = &v42;
        v1 = <&T as core::fmt::Display>::fmt;
        v6 = struct24 {
            field_0: &g_536bd0
            field_8: &g_0
            field_16: &v0
        };
        v10 = &g_0;
        v9 = &g_0;
        v55 = std::io::Write::write_fmt(a2, &v6);
        if !v55 {
            v57 = v34;
            v58 = v35;
            if v57 {
                v59 = v36;
            }
            v6 = -0x100 | v57 != &g_0;
            v7 = &g_0;
            v8 = v57;
            v9 = v58;
            v10 = v6;
            v11 = &g_0;
            v12 = v57;
            v13 = v58;
            v14 = v59;
            if !a3 {
                loop {
                    v30 = <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(&v6);
                    if v30 == 0x8000000000000000 {
                        break;
                    }
                    v26 = *((&v30 as &char + 16) as &i64);
                    v62 = v30;
                    v25 = v62;
                    v24 = *((&v30 as &char + 24) as &i64);
                    v43 = &v25;
                    v44 = <num_bigint::biguint::BigUint as core::fmt::Display>::fmt;
                    v0 = Arguments {
                        pieces: [" "]
                        args: &[&Argument] {
                            ptr: &v43
                            len: <UNKNOWN>
                        }
                        fmt: None
                    };
                    v3 = &g_0;
                    v18 = alloc::fmt::format::format_inner(&v0);
                    v63 = v18;
                    vvar_17{reg 224} = ((((vvar_45{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_409{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_419{reg 224}))
                    v27 = v63;
                    v28 = v20;
                    alloc::str::<impl str>::repeat(&v37, *((&v27 as &char + 8) as &i64), v20, v24);
                    v64 = v38;
                    v65 = v39;
                    v66 = *((a2 + &g_10 as &u8) as &i64);
                    if v65 < *(a2 as &i64) - v66 {
                        memcpy(*((a2 + &g_0 as &u8) as &i64) + v66, v64, v65);
                        *((a2 + &g_10 as &u8) as &i64) = v66 + v65;
                    } else {
                        v55 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, v64, v65);
                    }
                }
            } else {
                loop {
                    v30 = <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(&v6);
                    if v30 == 0x8000000000000000 {
                        break;
                    }
                    v26 = *((&v30 as &char + 16) as &i64);
                    v61 = v30;
                    vvar_17{reg 224} = ((vvar_54{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_370{reg 224}))
                    v25 = v61;
                    v24 = *((&v30 as &char + 24) as &i64);
                    if v24 > 1 {
                        v18 = &v25;
                        v19 = <num_bigint::biguint::BigUint as core::fmt::Display>::fmt;
                        v20 = &v24;
                        v21 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
                        v0 = struct24 {
                            field_0: " "
                            field_8: &g_0
                            field_16: &v18
                        };
                        v4 = &g_0;
                        v3 = &g_0;
                        v55 = std::io::Write::write_fmt(a2, &v0);
                    } else {
                        v18 = &v25;
                        v19 = <num_bigint::biguint::BigUint as core::fmt::Display>::fmt;
                        v0 = struct24 {
                            field_0: " "
                            field_8: &g_0
                            field_16: &v18
                        };
                        v4 = &g_0;
                        v3 = &g_0;
                        v55 = std::io::Write::write_fmt(a2, &v0);
                    }
                    if !(v55 == &g_0) {
                        goto LABEL_0x461449;
                    }
                }
            }
            v6 = struct24 {
                field_0: "\n"
                field_8: &g_0
                field_16: &g_0
            };
            *(&v9 as &&i64) = &g_0;
            v55 = std::io::Write::write_fmt(a2, &v6);
            if !v55 {
                v55 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a2, v67, v46);
            }
        }
        v53 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v55);
        if !v53 {
            return &g_0;
        }
    }
    return v53;
}
