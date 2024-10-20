fn uu_mv::rename_with_fallback() -> u32 {
    let v0: i64;  // [sp-0x298]
    let v1: i64;  // [sp-0x290], Other Possible Types: struct24
    let v2: i64;  // [sp-0x288]
    let v3: i32;  // [sp-0x280]
    let v4: i64;  // [sp-0x278], Other Possible Types: struct24
    let v5: i64;  // [sp-0x260], Other Possible Types: Argument
    let v6: i64;  // [sp-0x250]
    let v7: struct24;  // [sp-0x248], Other Possible Types: i192
    let v8: i8;  // [bp-0x228]
    let v9: i1088;  // [sp-0x218], Other Possible Types: Enum, struct16, struct81, struct136, Arguments
    let v10: i64;  // [sp-0x210]
    let v11: i64;  // [sp-0x208]
    let v12: i128;  // [sp-0x168]
    let v13: i128;  // [sp-0x158]
    let v14: i128;  // [bp-0x148]
    let v15: i64;  // [sp-0x140]
    let v16: i64;  // [sp-0x138]
    let v17: i64;  // [sp-0x130]
    let v18: i64;  // [sp-0x128]
    let v19: i64;  // [sp-0x120]
    let v20: i64;  // [bp-0x118]
    let v21: i8;  // [sp-0x114]
    let v22: i32;  // [bp-0x110]
    let v23: i8;  // [sp-0x10c]
    let v24: i64;  // [bp-0x10b]
    let v25: i128;  // [bp-0x108]
    let v26: i32;  // [sp-0x104]
    let v27: i128;  // [sp-0xf8]
    let v28: i192;  // [bp-0x68]
    let v29: String;  // [sp-0x48], Other Possible Types: i192
    let v31: i64;  // rdi
    let v32: i64;  // rsi
    let v33: i64;  // rdx
    let v34: i64;  // rcx
    let v35: i32;  // eax
    let v36: i64;  // rax
    let v37: i64;  // r8
    let v38: i64;  // rdx
    let v39: i32;  // ecx
    let v40: i8;  // al
    let v41: i128;  // xmm0
    let v42: i128;  // xmm1
    let v43: i64;  // fs
    let v44: i64;  // rax
    let v45: i64;  // r14
    let v46: i64;  // rax
    let v47: i64;  // rax
    let v48: i128;  // xmm0
    let v49: i128;  // xmm2

    v16 = v31;
    v17 = v32;
    v18 = v33;
    v19 = v34;
    v9 = std::sys::pal::unix::fs::rename(v31, v32, v33, v34);
    if !v9 {
        return;
    }
    v9 = std::sys::pal::unix::fs::lstat(v31, v32);
    if v9 == 2 {
        return;
    }
    switch (v35) {
    case 16384:
        v9 = std::sys::pal::unix::fs::stat(v33, v34);
        if v9 == 2 {
            v22 = v10;
            v20 = 2;
            goto LABEL_4a6ef0;
        }
        memcpy(&v20, &v9, 176);
        if v20 == 2 {
LABEL_4a6ef0:
            goto LABEL_4a6efd;
        }
        if !std::sys::pal::unix::fs::remove_dir_impl::remove_dir_all(v33, v34) {
LABEL_4a6efd:
            v3 = 0x10000;
            v1 = 0xfa00;
            v2 = 0;
            v9 = fs_extra::dir::get_size(v31, v32);
            if v9 != 0x8000000000000000 {
                goto LABEL_4a708d;
            } else {
                if !v37 {
LABEL_4a708d:
                    v4 = 0;
                } else {
                    v9 = indicatif::draw_target::ProgressDrawTarget::stderr(v32, v33);
                    v7 = indicatif::progress_bar::ProgressBar::with_draw_target(1, v10, &v9);
                    indicatif::style::Template::from_str();
                    v38 = v9;
                    v39 = *((&v9 as &char + 8) as &i32);
                    v40 = *((&v9 as &char + 12) as &i8);
                    if v38 == 0x8000000000000000 {
                        v20 = v39;
                        v21 = v40;
                        core::result::unwrap_failed(); /* do not return */
                    }
                    v26 = *((&v9 as &char + 20) as &i32);
                    v24 = *((&v9 as &char + 13) as &i64);
                    v20 = v38;
                    v22 = v39;
                    v23 = v40;
                    v9 = indicatif::style::ProgressStyle::new(&v20);
                    if v9 == 0x8000000000000000 {
                        vvar_735{stack -280} = v39;
                        vvar_736{stack -276} = v40;
                        core::result::unwrap_failed(); /* do not return */
                    }
                    memcpy(&v20, &v9, 136);
                    indicatif::progress_bar::ProgressBar::set_style(&v7, &v20);
                    v28 = v7;
                    indicatif::multi::MultiProgress::internalize();
                }
                uucore::features::fsxattr::retrieve_xattrs(&v9, v31, v32);
                if v9 {
                    v41 = v9;
                    v42 = *((&v9 as &char + 16) as &i128);
                    v14 = *((&v9 as &char + 32) as &i128);
                    v13 = v42;
                    v12 = v41;
                } else {
                    v20 = v10;
                    if *((*(v43 as &i64) - 48) as &i64) {
                        v44 = *(v43 as &i64) - 48;
                        v45 = *((v44 + 8) as &i64);
                        v6 = *((v44 + 16) as &i64);
                    } else {
                        v45 = std::sys::pal::unix::rand::hashmap_random_keys();
                        v46 = *(v43 as &i64) - 48;
                        *(v46 as &i64) = 1;
                        *((v46 + 8) as &i64) = v45;
                        v6 = v33;
                        *((v46 + 16) as &i64) = v33;
                    }
                    *((*(v43 as &i64) + -40) as &i64) = v45 + 1;
                    v12 = g_530ce8;
                    v13 = g_530cf8;
                    v14 = v45;
                    v15 = v6;
                }
                if !v4 {
                    fs_extra::dir::move_dir();
                } else {
                    v0 = &v4;
                    fs_extra::dir::move_dir_with_progress();
                }
                v47 = uucore::features::fsxattr::apply_xattrs(v33, v34, &v12);
                if v47 {
                    v9 = v47;
                    core::result::unwrap_failed(); /* do not return */
                }
                if v7 == 0x8000000000000000 {
                    return;
                }
                v48 = v7;
                v49 = v8;
                v25 = v7;
                v27 = v49;
                v20 = v48;
                if *((&v25 as &char + 8) as &i64) != 9223372036854775809 {
                    v5 = Argument {
                        value: &v20
                        formatter: <fs_extra::error::Error as core::fmt::Debug>::fmt
                    };
                    v9 = Arguments {
                        pieces: [&anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654]
                        args: [&v5]
                        fmt: None
                    };
                    v29 = alloc::fmt::format::format_inner(&v9);
                    std::io::error::Error::new(39, &v29);
                } else {
                    std::io::error::Error::new(1, &g_4215c6, 17);
                }
                break;
            }
        }
    case 40960:
        v9 = std::sys::pal::unix::fs::readlink(v31, v32);
        if v9 != 0x8000000000000000 && !std::sys::pal::unix::fs::symlink(v10, v11, v33, v34) {
            std::sys::pal::unix::fs::unlink(v31, v32);
            return;
        }
    default:
        if std::path::Path::is_symlink(v33, v34) as i8 {
            v36 = std::sys::pal::unix::fs::unlink(v33, v34);
            if v36 {
                v5 = v36;
                v1 = std::sys::os_str::bytes::Slice::to_string_lossy(v33, v34);
                v4 = std::sys::os_str::bytes::Slice::to_string_lossy(v31, v32);
                goto *((4327304 + (vvar_219{reg 16} & 3) * 4) as &i32) + 4327304;
            }
        }
        if std::sys::pal::unix::fs::copy(v31, v32, v33, v34) {
            break;
        } else if !uucore::features::fsxattr::copy_xattrs(&v16, &v18) {
            std::sys::pal::unix::fs::unlink(v31, v32);
            break;
        }
    }
    return;
}
