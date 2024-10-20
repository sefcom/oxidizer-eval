fn uu_wc::Inputs::new(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x218]
    let v1: i192;  // [bp-0x210], Other Possible Types: struct24
    let v2: i64;  // [sp-0x208]
    let v3: i64;  // [sp-0x200]
    let v4: i64;  // [sp-0x1f8]
    let v5: i64;  // [sp-0x1f0]
    let v6: i64;  // [sp-0x1e8]
    let v7: i64;  // [sp-0x1e0]
    let v8: i64;  // [sp-0x1d8]
    let v9: i8;  // [bp-0x1d0], Other Possible Types: struct24, Enum, struct16
    let v10: i64;  // [sp-0x1c8]
    let v11: i64;  // [sp-0x1c0]
    let v12: i64;  // [bp-0x1b8]
    let v13: i64;  // [sp-0x1b0]
    let v14: i8;  // [bp-0x1a8]
    let v15: i8;  // [bp-0x1a0]
    let v16: i8;  // [bp-0x198]
    let v17: i8;  // [bp-0x190]
    let v18: i8;  // [bp-0x180]
    let v19: i64;  // [sp-0x120]
    let v20: i128;  // [bp-0x118]
    let v21: i64;  // [sp-0x110]
    let v22: i128;  // [bp-0x108]
    let v23: i128;  // [bp-0x100]
    let v24: i64;  // [sp-0xf8]
    let v25: i128;  // [sp-0xf0]
    let v26: i128;  // [sp-0xe0]
    let v27: i64;  // [sp-0xd0]
    let v28: Enum;  // [bp-0xc8]
    let v29: i592;  // [sp-0x88], Other Possible Types: struct24, struct74
    let v30: i64;  // [sp-0x80]
    let v31: i128;  // [sp-0x78]
    let v32: i64;  // [sp-0x70]
    let v33: i64;  // [sp-0x68]
    let v35: i64;  // r13
    let v37: i128;  // xmm0
    let v38: i64;  // rax
    let v39: i128;  // xmm0
    let v41: i64;  // r12
    let v42: i64;  // r15
    let v43: i64;  // r14
    let v44: i64;  // rax
    let v45: i64;  // rax
    let v46: i64;  // rax
    let v48: i64;  // rax
    let v49: i64;  // r15
    let v50: i64;  // r14
    let v51: i64;  // r15
    let v52: i64;  // rax
    let v53: i64;  // rsi
    let v54: i64;  // rdx
    let v56: i64;  // r12
    let v57: i64;  // rdx
    let v58: i64;  // rax
    let v59: i64;  // rcx
    let v61: i64;  // rax
    let v62: i128;  // xmm0

    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v9, a1, &g_419d46, 5);
    v7 = &g_419d46;
    v8 = 5;
    if v9 {
        v24 = v14;
        v37 = v10;
        v22 = v12;
        v20 = v37;
        v1 = &v7;
        v2 = <&T as core::fmt::Display>::fmt;
        v3 = &v20;
        v4 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v29 = "Mismatch between definition and access of `";
        v30 = 2;
        v33 = 0;
        v31 = &v1;
        v32 = 2;
        v29 = core::panicking::panic_fmt();
    }
    v6 = v14;
    v0 = v15;
    v5 = v16;
    v19 = v17;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v20, a1, &anon.777bb9d9a47a4fd760482fbc11f41de2.4.llvm.10162994613922154447, 11);
    v7 = &anon.777bb9d9a47a4fd760482fbc11f41de2.4.llvm.10162994613922154447;
    v8 = 11;
    if v20 != 2 {
        v33 = v24;
        v39 = v20;
        v31 = v22;
        v29 = v39;
        v1 = &v7;
        v2 = <&T as core::fmt::Display>::fmt;
        v3 = &v29;
        v4 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v9 = "Mismatch between definition and access of `";
        v10 = 2;
        v13 = 0;
        v11 = &v1;
        v12 = 2;
        v9 = core::panicking::panic_fmt();
    }
    v38 = v21;
    if v10 {
        if v38 {
            if !v13 || v13 == v6 {
                do {
                    if !v44 || (v45 += 24, v45 == v12) {
                        if !(v0) || !(v0 != v5) {
                            core::option::unwrap_failed(); /* do not return */
                        }
                        goto LABEL_4849a4;
                    }
                } while (!*((v45 + 16) as &i64));
            }
LABEL_4849a4:
            v46 = v35();
            v9 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v46 + 8) as &i64), *((v46 + 16) as &i64));
            v48 = v9;
            v49 = v10;
            v50 = v11;
            if v48 == 0x8000000000000000 {
                memcpy(v56, v49, v50);
            }
            v10 = v52;
            v11 = v51;
            v12 = v50;
            v9 = 9223372036854775809;
            v61 = __rust_alloc(32, 8);
            v62 = v9;
            *((v61 + 16) as &i64) = v11;
            *(v61 as &i128) = v62;
            v41 = a0;
            *((v41 + 8) as &i64) = v61;
            *((v41 + 16) as &&i64) = &g_4f3120;
            *(v41 as &i64) = 3;
            return v41;
        } else {
            *(&v28.field_0 as &Enum) = Enum {
                field_0: v35
                field_8: vvar_173{reg 56}
                field_16: v40
                field_24: v36
                field_32: v6
                field_40: v0
                field_48: v5
                field_56: v19
            };
            v41 = a0;
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v41 + 8, &v28);
            *(v41 as &i64) = 1;
            return v41;
        }
    } else {
        if v38 {
            v42 = *((v38 + 8) as &i64);
            v43 = *((v38 + 16) as &i64);
            v41 = a0;
            if v43 != 1 || *(v42 as &i8) != 45 {
                v9 = std::sys::pal::unix::fs::stat(v42, v43);
                if v9 == 2 {
                    *((v41 + 8) as &i64) = 0x8000000000000000;
                    *((v41 + 16) as &i64) = v42;
                    *((v41 + 24) as &i64) = v43;
                    *(v41 as &i64) = 2;
                    return v41;
                } else if !((0xf000 & *((&v9 as &char + 56) as &i32)) == 0x8000) || !(*((&v9 as &char + 80) as &i64) <= 0xa00000) {
                    *((v41 + 8) as &i64) = 0x8000000000000000;
                    *((v41 + 16) as &i64) = v42;
                    *((v41 + 24) as &i64) = v43;
                    *(v41 as &i64) = 2;
                    return v41;
                } else {
                    v9 = uu_wc::files0_iter_file(v42, v43);
                    if v20 == 9223372036854775809 {
                        *((v41 + 8) as &i64) = v58;
                        *((v41 + 16) as &i64) = v59;
                        *(v41 as &i64) = 3;
                        return v41;
                    }
                    v27 = *((&v9 as &char + 72) as &i64);
                    v26 = *((&v9 as &char + 56) as &i128);
                    v25 = *((&v9 as &char + 40) as &i128);
                    v23 = *((&v9 as &char + 24) as &i128);
                    v20 = v9;
                    v1 = core::iter::adapters::try_process(&v20);
                    v57 = v1;
                    v58 = v2;
                    v59 = v3;
                    if v57 == 0x8000000000000000 {
                        *((v41 + 8) as &i64) = v58;
                        *((v41 + 16) as &i64) = v59;
                        *(v41 as &i64) = 3;
                        return v41;
                    }
                }
            } else {
                std::io::stdio::stdin();
                v1 = 0;
                v9 = std::fs::File::metadata(&v1);
                if v9 == 2 {
                    *((v41 + 8) as &i64) = 9223372036854775809;
                    *((v41 + 16) as &i64) = 0;
                    *((v41 + 24) as &i64) = v43;
                    *(v41 as &i64) = 2;
                    return v41;
                } else if !((0xf000 & v16) == 0x8000) || !(v18 < 10485761) {
                    v42 = 0;
                    *((v41 + 8) as &i64) = 9223372036854775809;
                    *((v41 + 16) as &i64) = v42;
                    *((v41 + 24) as &i64) = v43;
                    *(v41 as &i64) = 2;
                    return v41;
                } else {
                    v29 = uu_wc::files0_iter_stdin(v53, v54);
                    v9 = core::iter::adapters::try_process(&v29);
                    v57 = v9;
                    v58 = v10;
                    v59 = v11;
                    if v57 == 0x8000000000000000 {
                        *((v41 + 8) as &i64) = v58;
                        *((v41 + 16) as &i64) = v59;
                        *(v41 as &i64) = 3;
                        return v41;
                    }
                }
            }
            *(v41 as &i64) = 1;
            *((v41 + 8) as &i64) = v57;
            *((v41 + 16) as &i64) = v58;
            *((v41 + 24) as &i64) = v59;
            return v41;
        } else {
            v41 = a0;
            *(v41 as &i64) = 0;
            return v41;
        }
    }
}
