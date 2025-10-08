fn forc_fmt::format_workspace_at_dir(a0: i32, a1: &struct112, a2: &[u8], a3: i32) -> u64 {
    let v0: u32;  // [bp-0x490]
    let v1: u32;  // [bp-0x48c]
    let v2: struct9;  // [bp-0x488]
    let v3: iNone;  // [bp-0x488]
    let v4: core::fmt::rt::Argument;  // [bp-0x480]
    let v5: u64;  // [bp-0x478]
    let v6: struct24;  // [bp-0x468], Other Possible Types: u64
    let v7: u8;  // [bp-0x460]
    let v8: u64;  // [bp-0x458]
    let v9: struct32;  // [bp-0x438], Other Possible Types: struct40, u128
    let v10: u128;  // [bp-0x428]
    let v11: iNone;  // [bp-0x418]
    let v12: iNone;  // [bp-0x408]
    let v13: iNone;  // [bp-0x3f8]
    let v14: iNone;  // [bp-0x3e8]
    let v15: void*;  // [bp-0x3d8], Other Possible Types: struct16
    let v16: u64;  // [bp-0x3d0]
    let v17: void*;  // [bp-0x3c8]
    let v18: iNone;  // [bp-0x3c0], Other Possible Types: Option<struct24>
    let v19: u64;  // [bp-0x3b0]
    let v20: u128;  // [bp-0x3a8]
    let v21: iNone;  // [bp-0x398]
    let v22: iNone;  // [bp-0x388]
    let v23: u128;  // [bp-0x378]
    let v24: iNone;  // [bp-0x368]
    let v25: u128;  // [bp-0x358]
    let v26: Result<struct269, struct104>;  // [bp-0x348]
    let v27: struct1;  // [bp-0x348], Other Possible Types: struct24
    let v28: struct9;  // [bp-0x348], Other Possible Types: u64
    let v29: std::path::PathBuf;  // [bp-0x348]
    let v30: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x348]
    let v31: Result<struct269, struct104>;  // [bp-0x348]
    let v32: u128;  // [bp-0x348]
    let v33: u64;  // [bp-0x340]
    let v34: u64;  // [bp-0x338]
    let v35: u128;  // [bp-0x330]
    let v36: u128;  // [bp-0x328]
    let v37: u128;  // [bp-0x318]
    let v38: u128;  // [bp-0x308]
    let v39: u128;  // [bp-0x2f8]
    let v40: iNone;  // [bp-0x2f0]
    let v41: u64;  // [bp-0x228]
    let v42: u64;  // [bp-0x220]
    let v43: u64;  // [bp-0x218]
    let v44: iNone;  // [bp-0x210]
    let v45: struct24;  // [bp-0x200]
    let v46: struct104;  // [bp-0x1e8], Other Possible Types: core::fmt::Arguments
    let v47: core::fmt::Arguments;  // [bp-0x1e8]
    let v48: iNone;  // [bp-0x1e0]
    let v49: iNone;  // [bp-0x1d0]
    let v50: iNone;  // [bp-0x1c0]
    let v51: iNone;  // [bp-0x1b0]
    let v52: iNone;  // [bp-0x1a0]
    let v53: iNone;  // [bp-0x190]
    let v54: u8;  // [bp-0x180]
    let v57: u64;  // rcx
    let v58: u64;  // rbx
    let v65: void*;  // rbx
    let v66: u64;  // r14
    let v67: u64;  // r15
    let v69: u64;  // rbp
    let v71: &u8;  // rdx
    let v72: u64;  // rax
    let v77: struct16;  // r13
    let v79: iNone;  // xmm0
    let v80: iNone;  // xmm1
    let v81: struct24;  // [bp-0x230]

    v1 = a0;
    v32 = swayfmt::formatter::Formatter::from_dir(a2, v57);
    v58 = v26 as i64;
    v9 = *((&v26 as &char + 8) as &i128);
    v10 = *((&v26 as &char + 24) as &i128);
    v11 = *((&v26 as &char + 40) as &i128);
    v12 = *((&v26 as &char + 56) as &i128);
    v13 = *((&v26 as &char + 72) as &i128);
    v14 = v40;
    if v58 == 2 {
        *(&v39 as void*) = v14;
        *(&v38 as void*) = v13;
        v79 = v9;
        v80 = v10;
        *(&v37 as void*) = v12;
        *(&v36 as void*) = v11;
        *(&v34 as void*) = v80;
        *(&v32 as void*) = v79;
        return anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v32);
    }
    memcpy(&v54, &v31 as u8, 168);
    v48 = v9;
    v49 = v10;
    v50 = v11;
    v51 = v12;
    v52 = v13;
    v53 = v14;
    v46 = v58;
    v15 = 0;
    v16 = 8;
    v17 = 0;
    if *((a1 + 48) as &i64) {
        v66 = *((a1 + 96) as &i64);
        v67 = *((a1 + 104) as &i64);
        loop {
            v69 -= 24;
            v27 = std::path::Path::join(forc_pkg::manifest::GenericManifestFile::dir(v66, v67), v71, v65);
            v72 = v27.field_0;
            v9 = *((&v27.field_0 as &char + 8) as &i128);
            if v72 == 0x8000000000000000 {
                break;
            }
            v43 = v72;
            v44 = v9;
            v15 = alloc::vec::Vec<T,A>::push(&v43, "forc-plugins/forc-fmt/src/main.rs");
            if v69 == 24 {
                break;
            }
        }
    }
    v2 = std::fs::read_dir(a2);
    v0 = v1;
    if v2.field_8 as i8 != 2 {
        v6 = *(&v2.field_0 as &i64);
        v7 = v2.field_8;
        loop {
            core::iter::traits::iterator::Iterator::try_fold(&v32, &v6);
            if !v26 as i64 {
                break;
            }
            v9 = struct40 {
                field_0: v26 as i64
                field_8: *((&v26 as &char + 8) as &i128)
                field_24: *((&v26 as &char + 24) as &i128)
            };
            v81 = std::fs::DirEntry::path(&v9);
            if sway_utils::helpers::is_sway_file(v41, v42) {
                v28 = forc_fmt::format_file(v0, &v81, &v46);
                if v28.field_0 == 1 {
                    return v33;
                }
            }
        }
    }
    v29 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2);
    forc_fmt::get_sway_dirs(&v6, &v29);
    v9 = <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v6);
    v18 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v9);
    if let Some(_) = v18 {
        do {
            v5 = v19;
            v3 = v18;
            v6 = std::path::Path::join(v4, v5, "Forc.toml");
            v30 = std::fs::metadata(*((&v6.field_0 as &char + 8) as &i64), v8);
            v46 = v46;
            if v30 as i64 as i32 != 2 {
                v32 as u2176 = swayfmt::formatter::Formatter::from_dir(v4, v5, a3);
                v20 = *((&v31 as &char + 8) as &i128);
                v21 = *((&v31 as &char + 24) as &i128);
                v22 = *((&v31 as &char + 40) as &i128);
                v23 = *((&v31 as &char + 56) as &i128);
                v24 = *((&v31 as &char + 72) as &i128);
                v25 = v40;
                match v32 as u2176 {
                    Err(_) => {
                        v39 = v25;
                        *(&v38 as void*) = v24;
                        v37 = v23;
                        *(&v36 as void*) = v22;
                        *(&v34 as void*) = v21;
                        v32 = v20;
                        anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v32 as u2176);
                        return v33;
                    },
                    Ok(_) => {
                        memcpy(v77, &v31 as u8, 168);
                        v46 = struct104 {
                            field_0: v31 as i64
                            field_8: v20
                            field_24: v21
                            field_40: v22
                            field_56: v23
                            field_72: v24
                            field_88: v25
                        };
                        memcpy(&v54, v77, 168);
                        v46 = v47;
                    },
                }
            }
            v46 = v46;
            forc_fmt::format_pkg_at_dir(v0, v4, v5, &v46);
            if v33 {
                return v33;
            }
            v18 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v9);
        } while (v18 as i64 != 0x8000000000000000);
    }
    v45 = std::path::Path::join(a2, v57, &g_567230);
    v28 = forc_fmt::format_manifest(v0, &v45);
    if v27.field_0 {
        return v33;
    }
    if !(v1 as i8 & 1) || !(*((&v31 as &char + 1) as &i8) & 1) {
        return 0;
    }
    *(&v28 as &&str) = "Files contain formatting violations.";
    v33 = 1;
    v34 = 8;
    v35 = 0;
    anyhow::__private::format_err(&v28);
    return v33;
    return 0;
}
