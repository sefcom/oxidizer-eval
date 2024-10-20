fn uu_fmt::uumain(a0: i64, a1: i64) -> u64 {
    let v0: i64;  // [bp-0x3e8]
    let v1: i64;  // [sp-0x3e0]
    let v2: i64;  // [sp-0x3d8]
    let v3: i64;  // [sp-0x3d0], Other Possible Types: String
    let v4: i64;  // [sp-0x3c8]
    let v5: i64;  // [sp-0x3b8], Other Possible Types: struct24
    let v6: i64;  // [sp-0x3b0]
    let v7: i192;  // [sp-0x380], Other Possible Types: struct24
    let v8: i64;  // [sp-0x368], Other Possible Types: struct16
    let v9: i64;  // [sp-0x360]
    let v10: i64;  // [sp-0x358]
    let v11: i8;  // [bp-0x350]
    let v12: i128;  // [sp-0x340]
    let v13: i128;  // [sp-0x330]
    let v14: i64;  // [sp-0x320]
    let v15: i192;  // [sp-0x310], Other Possible Types: String
    let v16: i64;  // [bp-0x2f8], Other Possible Types: struct24, struct33, struct712
    let v17: i64;  // [sp-0x2f0]
    let v18: i64;  // [sp-0x2e8]
    let v19: i64;  // [bp-0x2e0]
    let v20: i64;  // [sp-0x2d8]
    let v22: i64;  // rax
    let v23: i64;  // rsi
    let v24: i64;  // rbx
    let v25: i64;  // r14
    let v26: i64;  // rax
    let v27: i64;  // rax
    let v28: i64;  // rcx
    let v29: i32;  // esi
    let v30: i32;  // edx
    let v31: i64;  // rax
    let v32: i32;  // edi
    let v33: i64;  // r8
    let v34: i64;  // r9
    let v35: i64;  // rdx
    let v36: i32;  // esi
    let v37: i32;  // edi
    let v38: i64;  // rax
    let v39: i64;  // rcx
    let v40: i128;  // xmm0
    let v42: i64;  // r14
    let v43: i64;  // rax
    let v44: i64;  // rbp
    let v45: i64;  // r8
    let v46: i64;  // r9
    let v47: i64;  // rdx
    let v48: i32;  // eax
    let v49: i64;  // rsi
    let v50: i64;  // rdi
    let v51: i64;  // r15
    let v52: i64;  // rax

    v7 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a0, a1);
    if *((&v7 as &char + 16) as &i64) >= 2 {
        v22 = *((&v7 as &char + 8) as &i64);
        v5 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v22 + 32) as &i64), *((v22 + 40) as &i64));
        v23 = *((&v5 as &char + 16) as &i64);
        v16 = 45;
        if !(core::slice::<impl [T]>::starts_with(v6, v23, &v16, 1) as i8) || !(v24) || !((v25 = v6, v26 = *((*(v25 as &i8) + &g_410fff) as u64 as &i8) as u8 as u64, v24 != v26)) {
LABEL_43882e:
            goto LABEL_438849;
        } else {
            v27 = v26 + v25;
            v28 = *(v27 as &i8);
            if v28 >= 0 {
                if !(v28 - 48 <= 9) {
                    goto LABEL_43882e;
                }
                v31 = v27 + 1;
                goto LABEL_43879d;
            }
            v29 = v28 & 31;
            v30 = *((v27 + 1) as &i8) & 63;
            if (v28 & 255) < 224 {
                if !((v29 << 6) + v30 - 48 <= 9) {
                    goto LABEL_43882e;
                }
                v31 = v27 + 2;
                goto LABEL_43879d;
            }
            v32 = *((v27 + 2) as &i8) & 63;
            v33 = v30 * 64 | v32;
            if (v28 & 255) < 240 {
                if !(v33 + (v29 << 12) - 48 <= 9) {
                    goto LABEL_43882e;
                }
                v31 = v27 + 3;
            } else {
                v33 *= 64;
                v34 = *((v27 + 3) as &i8) & 62 | v33;
                if !(((v29 & 7) << 18) + v34 - 48 < 10) || !((*((v27 + 3) as &i8) & 63 | v32 << 6 | v30 << 12 | (v28 & 7) << 18) != 0x110000) {
                    goto LABEL_43882e;
                }
                v31 = v27 + 4;
            }
LABEL_43879d:
        }
        do {
            if v31 == v25 + v24 {
                goto LABEL_43882e;
            }
            v35 = *(v31 as &i8);
            if v35 >= 0 {
                v31 += 1;
                goto LABEL_4387b3;
            }
            v36 = v35 & 31;
            v33 = *((v31 + 1) as &i8) & 63;
            if (v35 & 255) <= 223 {
                v31 += 2;
                v35 = v36 * 64 | v33;
                goto LABEL_4387b3;
            }
            v33 *= 64;
            v37 = *((v31 + 2) as &i8) & 63 | v33;
            if (v35 & 255) >= 240 {
                v35 = *((v31 + 3) as &i8) & 63 | v37 * 64 | (v36 & 7) * 0x40000;
                if v35 == 0x110000 {
                    goto LABEL_43882e;
                }
                v31 += 4;
                goto LABEL_4387b3;
            }
            v31 += 3;
            v35 = v37 | v36 * 0x1000;
LABEL_4387b3:
        } while (v35 - 48 < 10);
        v16 = 45;
        if !core::slice::<impl [T]>::starts_with(v25, v24, &v16, 1) as i8 {
            core::option::unwrap_failed(); /* do not return */
        }
        v8 = 0;
        v9 = v25 + 1;
        v10 = v24 - 1;
        v11 = 1;
        *(&v16 as &&str) = "invalid width: ";
        v17 = 1;
        v20 = 0;
        v18 = &v0;
        v19 = 1;
        v3 = alloc::fmt::format::format_inner(&v16);
        v19 = 1;
        v16 = v3;
        v18 = *((&v3 as &char + 16) as &i64);
        v38 = __rust_alloc(32, 8);
        v40 = v16;
        *((v38 + 16) as &i64) = v18;
        *(v38 as &i128) = v40;
        v42 = &g_4e9928;
LABEL_438a60:
        if v38 {
            v3 = v38;
            v4 = v42;
            v8 = &v3;
            v9 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v16 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
            v17 = 1;
            v20 = 0;
            v18 = &v8;
            v19 = 1;
            v15 = alloc::fmt::format::format_inner(&v16);
            v8 = v15;
            v49 = *((&v15 as &char + 16) as &i64);
            v10 = *((&v15 as &char + 16) as &i64);
            v50 = v9;
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v9, *((&v15 as &char + 16) as &i64), 1, 0) as i8 {
                v5 = uucore::util_name();
                v6 = v47;
                v16 = &g_4e9868;
                v17 = 2;
                v20 = 0;
                v18 = &v0;
                v19 = 1;
                std::io::stdio::_eprint(&v16);
                v5 = &v8;
                v6 = <alloc::string::String as core::fmt::Display>::fmt;
                v16 = &g_4e9888;
                v17 = 2;
                v20 = 0;
                v18 = &v5;
                v19 = 1;
                std::io::stdio::_eprint(&v16);
            }
            if *((v4 + 104) as &i64)() {
                v5 = uucore::execution_phrase();
                v6 = v47;
                *(&v16 as &&str) = "Try '";
                v17 = 2;
                v20 = 0;
                v18 = &v0;
                v19 = 1;
                std::io::stdio::_eprint(&v16);
            }
            v48 = *((v4 + 96) as &i64)();
            v51 = v4;
            if *(v51 as &i64) {
                v52();
            }
            if *((v51 + 8) as &i64) {
                return v48;
            }
            return v48;
        }
        goto LABEL_438d3f;
    }
LABEL_438849:
    v16 = uu_fmt::uu_app();
    v8 = clap_builder::builder::command::Command::try_get_matches_from(&v16, &v7, v39);
    if v5 == 0x8000000000000000 {
        v38 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v6);
        goto LABEL_438a60;
    }
    v5 = v8;
    v16 = uu_fmt::extract_files(&v5);
    v38 = v17;
    v42 = v18;
    if v0 != 0x8000000000000000 {
        v0 = v16;
        v1 = v38;
        v2 = v42;
        uu_fmt::FmtOptions::from_matches(&v16, &v5);
        v43 = v16;
        v10 = v10;
        if v8 != 9223372036854775809 {
            v14 = *((&v16 as &char + 72) as &i64);
            v13 = *((&v16 as &char + 56) as &i128);
            v12 = *((&v16 as &char + 40) as &i128);
            v11 = *((&v16 as &char + 24) as &i128);
            v8 = v43;
            v38 = v17;
            v10 = v18;
            v16 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::stdout());
            v44 = v2 * 24;
            do {
                if !v44 {
LABEL_438d3f:
                    v48 = uucore::mods::error::get_exit_code() as i32;
                    return v48;
                }
            } while ((v38 = uu_fmt::process_file(*((v1 + 8) as &i64), *((v1 + 16) as &i64), &v8, &v16, v45, v46), v1 += 24, v44 -= 24, !v38));
            v10 = v47;
        }
    }
    goto LABEL_438a60;
}
