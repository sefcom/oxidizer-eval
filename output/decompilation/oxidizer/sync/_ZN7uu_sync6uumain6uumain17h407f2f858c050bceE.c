fn uu_sync::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: u64;  // [bp-0x3a8]
    let v1: struct24;  // [bp-0x3a8]
    let v2: u128;  // [bp-0x3a0]
    let v3: void*;  // [bp-0x398]
    let v4: u64;  // [bp-0x390]
    let v5: struct24;  // [bp-0x388], Other Possible Types: struct56
    let v6: Result<struct56, struct16>;  // [bp-0x388], Other Possible Types: struct64
    let v7: u128;  // [bp-0x378]
    let v8: u128;  // [bp-0x368]
    let v9: u128;  // [bp-0x358]
    let v10: struct56;  // [bp-0x348]
    let v11: u64;  // [bp-0x340]
    let v12: struct24;  // [bp-0x310]
    let v13: u128;  // [bp-0x308]
    let v14: struct16;  // [bp-0x2f8], Other Possible Types: struct24, u8
    let v15: u128;  // [bp-0x2f8]
    let v16: u128;  // [bp-0x2f8]
    let v17: struct56;  // [bp-0x2f8]
    let v18: u64;  // [bp-0x2e8]
    let v19: u32;  // [bp-0x2e0]
    let v22: i64;  // rax
    let v23: u64;  // r15
    let v24: u32;  // edx
    let v25: u64;  // rax

    uu_sync::uu_app(&v14);
    v6 = clap_builder::builder::command::Command::try_get_matches_from(&v14, a0, a1);
    match v6 {
        Err(_) => {
            return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v11);
        },
        Ok(v10) => {
            v17 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v10, _ZN7uu_sync9ARG_FILES17h820dfc7d3384a8c3E.field_0, g_50f058.field_0);
            v6 = clap_builder::parser::error::MatchesError::unwrap(_ZN7uu_sync9ARG_FILES17h820dfc7d3384a8c3E.field_0, g_50f058.field_0, &v17);
            if v6.field_0 as i64 {
                v16 as u512 = struct64 {
                    field_0: v6.field_0
                    field_16: v7
                    field_32: v8
                    field_48: v9
                };
                v12 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v16 as u512);
                v15 = v13;
                if v12.field_0 as i64 != 0x8000000000000000 {
                    v2 = v15;
                    v0 = v12.field_0 as i64;
                }
            }
            if ((!v3) as u8 as u8 & clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN7uu_sync7options4DATA17hcbeac84d6578fd4cE.field_0, g_50f048.field_0) as i8) {
                v5 = <T as alloc::slice::hack::ConvertVec>::to_vec();
                v18 = v5.field_16;
                v16 = v5.field_0;
                v19 = 1;
                v23 = alloc::boxed::Box<T>::new(&v16 as u512);
                return v23;
            }
            v4 = _ZN7uu_sync7options4DATA17hcbeac84d6578fd4cE.field_0;
            v14 = struct16 {
                field_0: v2
                field_8: v2 + v3 * 24
            };
            v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v14);
            if v22 {
                while (nix::fcntl::open(*((v22 + 8) as &i64), *((v22 + 16) as &i64), 0x800, 0) as i32 != 1 || v24 == 13 && !std::path::Path::is_dir(*((v22 + 8) as &i64), *((v22 + 16) as &i64)) as u8 || !((v23 = <nix::errno::consts::Errno as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v24 as u64, v22), v23))) {
                    v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v14);
                    if !v22 {
                        goto LABEL_460606;
                    }
                }
            }
LABEL_460606:
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, _ZN7uu_sync7options11FILE_SYSTEM17hd312cdc539073d0fE.field_0, g_50f038.field_0) as i8 {
                v14 = v1;
                v25 = uu_sync::syncfs(&v14);
                goto LABEL_460671;
            } else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v10, v4, g_50f048.field_0) as i8 {
                v14 = v1;
                v25 = uu_sync::fdatasync(&v14);
LABEL_460671:
                v23 = v25;
            } else {
                v23 = uu_sync::sync();
            }
            return 0;
        },
    }
}
