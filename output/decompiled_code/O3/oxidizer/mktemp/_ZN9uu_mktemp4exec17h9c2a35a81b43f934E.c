fn uu_mktemp::exec(a0: &u64, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x170]
    let v1: i64;  // [sp-0x168], Other Possible Types: struct24, Argument, Enum
    let v2: i64;  // [sp-0x160], Other Possible Types: Argument
    let v3: i64;  // [sp-0x158], Other Possible Types: Argument
    let v4: i64;  // [sp-0x150]
    let v5: i64;  // [sp-0x148]
    let v6: i64;  // [sp-0x140]
    let v7: i64;  // [sp-0x138]
    let v8: i8;  // [sp-0x130]
    let v9: i128;  // [bp-0x128], Other Possible Types: struct24, String
    let v10: i64;  // [sp-0x120]
    let v11: i64;  // [sp-0x118]
    let v12: i64;  // [sp-0x108], Other Possible Types: struct24, Arguments
    let v13: i64;  // [sp-0x100]
    let v14: i64;  // [sp-0xf8]
    let v15: i192;  // [bp-0xd8], Other Possible Types: struct24
    let v16: i8;  // [bp-0xc8]
    let v17: i64;  // [sp-0xb8], Other Possible Types: String, struct9
    let v18: i64;  // [sp-0xb0]
    let v19: i8;  // [bp-0xa8]
    let v20: i64;  // [sp-0xa0]
    let v21: i64;  // [sp-0x98]
    let v22: i64;  // [sp-0x90]
    let v23: i64;  // [sp-0x88]
    let v24: i32;  // [bp-0x80], Other Possible Types: struct4
    let v25: i64;  // [sp-0x78]
    let v26: i64;  // [sp-0x70]
    let v27: i64;  // [sp-0x68]
    let v28: i64;  // [sp-0x60]
    let v29: i64;  // [sp-0x58]
    let v30: i16;  // [sp-0x50]
    let v31: i192;  // [sp-0x48], Other Possible Types: struct24
    let v32: i64;  // [bp+0x8]
    let v33: i8;  // [bp+0x10]
    let v34: i8;  // [bp+0x18]
    let v35: i64;  // rax
    let v36: i64;  // r9
    let v37: i64;  // r12
    let v38: i64;  // r14
    let v39: i64;  // rax
    let v40: i64;  // r14
    let v41: i64;  // rax
    let v42: i64;  // rbp
    let v43: i128;  // xmm0
    let v44: i64;  // rdx
    let v45: i64;  // rcx
    let v46: i64;  // rax
    let v47: i128;  // xmm0
    let v48: i64;  // rdx
    let v49: i64;  // rax
    let v50: i64;  // rax
    let v51: i128;  // xmm0
    let v52: i128;  // xmm1
    let v53: i128;  // xmm0
    let v54: i128;  // xmm1

    v35 = v33;
    v36 = v32;
    if !v34 {
        v20 = a3;
        v21 = a4;
        v22 = v36;
        v23 = v35;
        v30 = 0;
        v24 = 0;
        v25 = a3;
        v26 = a4;
        v29 = a5;
        v27 = v36;
        v28 = v35;
        tempfile::util::create_helper(&v15, a1, a2, a3, a4, v36, v35, a5, &v24);
        if v16 == 2 {
            v38 = v15;
            if std::io::error::Error::kind(v38) as i8 {
                v1 = 0x8000000000000000;
                v4 = v38;
                v39 = __rust_alloc(32, 8);
                vvar_969{reg 224} = v1;
                *((v39 + 16) as &i128) = *(&v3.value as &i128);
                *(v39 as &i128) = v43;
                *((a0 + 8) as &i64) = v39;
                *((a0 + 16) as &&i64) = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
                *(a0 as &i64) = 0x8000000000000000;
                return a0;
            }
            v0 = v38;
            alloc::str::<impl str>::repeat(&v9, &g_41b0b9, 1, a5);
            v1 = Argument {
                value: &v20
                formatter: <&T as core::fmt::Display>::fmt
            };
            v2 = Argument {
                value: <&T as core::fmt::Display>::fmt
                formatter: &v9
            };
            v3 = Argument {
                value: &v9
                formatter: <alloc::string::String as core::fmt::Display>::fmt
            };
            v5 = &v22;
            v6 = <&T as core::fmt::Display>::fmt;
            v12 = Arguments {
                pieces: [&g_41b0c0, &g_41b0d0, &g_41b0e0]
                args: [&v1, &v2, &v3]
                fmt: None
            };
            v17 = alloc::fmt::format::format_inner(&v12);
            v9 = std::path::Path::_join(a1, a2, v18, *((&v17 as &char + 16) as &i64));
            v17 = v10;
            v18 = v11;
            v12 = 0;
            v13 = 1;
            v14 = 0;
            v7 = 32;
            v8 = 3;
            v1 = 0;
            v3 = 0;
            v5 = &v12;
            v6 = &g_4f0000;
            if <std::path::Display as core::fmt::Display>::fmt(&v17, &v1) as i8 {
                core::result::unwrap_failed(); /* do not return */
            }
            v50 = __rust_alloc(4, 1);
            *(v50 as &i32) = 1701603686;
            v4 = v12;
            v5 = v13;
            v6 = v14;
            v1 = 4;
            v2 = v50;
            v3 = 4;
            v39 = __rust_alloc(48, 8);
            v53 = v1;
            v54 = v3;
            *((v39 + 32) as &i64) = v5;
            *((v39 + 16) as &i128) = v54;
            *(v39 as &i128) = v53;
        } else {
            v11 = v16;
            v9 = v15;
            v12 = 0;
            v13 = 1;
            v14 = 0;
            v12 = std::ffi::os_str::OsString::into_boxed_os_str();
            v0 = a2;
            v1 = std::ffi::os_str::OsStr::into_os_string(v9, v10);
            v42 = v1;
            v39 = v2;
            v40 = v3;
            if v42 == 0x8000000000000000 {
                *((a0 + 8) as &i64) = v39;
                *((a0 + 16) as &i64) = v40;
                *(a0 as &i64) = 0x8000000000000000;
                return a0;
            }
            goto LABEL_48bbbc;
        }
    } else {
        v20 = a3;
        v21 = a4;
        v22 = v36;
        v23 = v35;
        v30 = 0;
        v24 = struct4 {
            field_0: 0
        };
        v25 = a3;
        v26 = a4;
        v29 = a5;
        v27 = v36;
        v28 = v35;
        v0 = a2;
        v17 = tempfile::Builder::tempdir_in(&v24, a1, a2);
        if v19 == 2 {
            v37 = v17;
            if std::io::error::Error::kind(v37) as i8 {
                v1 = 0x8000000000000000;
                v4 = v37;
                v39 = __rust_alloc(32, 8);
                v43 = v1;
                *((v39 + 16) as &i128) = *(&v3.value as &i128);
                *(v39 as &i128) = v43;
                *((a0 + 8) as &i64) = v39;
                *((a0 + 16) as &&i64) = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
                *(a0 as &i64) = 0x8000000000000000;
                return a0;
            }
            alloc::str::<impl str>::repeat(&v15, &g_41b0b9, 1, a5);
            v1 = &v20;
            v2 = Argument {
                value: <&T as core::fmt::Display>::fmt
                formatter: &v15
            };
            v3 = Argument {
                value: &v15
                formatter: <alloc::string::String as core::fmt::Display>::fmt
            };
            v5 = &v22;
            v6 = <&T as core::fmt::Display>::fmt;
            v12 = Arguments {
                pieces: [&g_41b0c0, &g_41b0d0, &g_41b0e0]
                args: [&v1, &v2, &v3]
                fmt: None
            };
            v14 = &v1;
            v9 = alloc::fmt::format::format_inner(&v12);
            v15 = std::path::Path::_join(a1, v0, v10, v11);
            v0 = *((&v15 as &char + 8) as &i64);
            v9 = v0;
            v10 = *((&v15 as &char + 16) as &i64);
            v12 = 0;
            v13 = 1;
            v14 = 0;
            v7 = 32;
            v8 = 3;
            v1 = 0;
            v3 = 0;
            v5 = &v12;
            v6 = &g_4f0000;
            if <std::path::Display as core::fmt::Display>::fmt(&v9, &v1) as i8 {
                core::result::unwrap_failed(); /* do not return */
            }
            v49 = __rust_alloc(9, 1);
            *(v49 as &i64) = 8245937412991248740;
            *((v49 + 8) as &i8) = 121;
            v4 = v12;
            v5 = v13;
            v6 = v14;
            v1 = 9;
            v2 = v49;
            v3 = 9;
            v39 = __rust_alloc(48, 8);
            v51 = v1;
            v52 = v3;
            *((v39 + 32) as &i64) = v5;
            *((v39 + 16) as &i128) = v52;
            *(v39 as &i128) = v51;
        } else {
            v1 = 0;
            v2 = 1;
            v3 = 0;
            v1 = std::ffi::os_str::OsString::into_boxed_os_str();
            v12 = std::ffi::os_str::OsStr::into_os_string(v17, v18);
            v39 = v13;
            v40 = v14;
            v41 = std::sys::pal::unix::fs::set_perm(v39, v40, 448);
            if v41 {
                v1 = 0x8000000000000000;
                v4 = v41;
                v39 = __rust_alloc(32, 8);
                v47 = v1;
                *((v39 + 16) as &i128) = *((&v1 as &char + 16) as &i128);
                *(v39 as &i128) = v47;
                *((a0 + 8) as &i64) = v39;
                *((a0 + 16) as &&i64) = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
                *(a0 as &i64) = 0x8000000000000000;
                return a0;
            }
            v42 = v12;
            if v42 == 0x8000000000000000 {
                *((a0 + 8) as &i64) = v39;
                *((a0 + 16) as &i64) = v40;
                *(a0 as &i64) = 0x8000000000000000;
                return a0;
            }
LABEL_48bbbc:
            v46 = std::path::Path::file_name(v39, v40, v44, v45);
            if !v46 {
                core::option::unwrap_failed(); /* do not return */
            }
            v1 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v46, v48);
            if !v1 {
                v31 = std::path::Path::_join(a1, v0, v2, v3);
                *((a0 + 16) as &i64) = *((&v31 as &char + 16) as &i64);
                *(a0 as &i192) = v31;
                if v42 {
                    return a0;
                }
                return a0;
            }
        }
    }
    *((a0 + 8) as &i64) = v39;
    *((a0 + 16) as &&i64) = &g_4f02e8;
    *(a0 as &i64) = 0x8000000000000000;
    return a0;
}
