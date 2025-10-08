fn uu_csplit::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: Result<struct16, struct12>;  // [bp-0x400], Other Possible Types: struct40
    let v1: u128;  // [bp-0x3f0]
    let v2: u64;  // [bp-0x3e0]
    let v3: u8;  // [bp-0x3d8]
    let v4: u64;  // [bp-0x3d0]
    let v5: u64;  // [bp-0x3c8]
    let v6: std::io::stdio::Stdin;  // [bp-0x3c0]
    let v7: struct16;  // [bp-0x3b8], Other Possible Types: u64
    let v8: struct56;  // [bp-0x3b8], Other Possible Types: struct64, u64
    let v9: u128;  // [bp-0x3b0]
    let v10: u128;  // [bp-0x3a0]
    let v11: u64;  // [bp-0x390]
    let v12: core::option::Option<&str>;  // [bp-0x388], Other Possible Types: u128
    let v13: iNone;  // [bp-0x378]
    let v14: iNone;  // [bp-0x368]
    let v15: u64;  // [bp-0x358]
    let v16: struct56;  // [bp-0x350]
    let v17: u128;  // [bp-0x318]
    let v18: iNone;  // [bp-0x308]
    let v19: u64;  // [bp-0x2f8]
    let v20: struct44;  // [bp-0x2e8], Other Possible Types: struct56, struct64, struct712, Result<struct40, struct16>, struct40
    let v21: struct100;  // [bp-0x2e8]
    let v22: u64;  // [bp-0x2c0]
    let v23: iNone;  // [bp-0x2b8]
    let v24: iNone;  // [bp-0x2a8]
    let v25: iNone;  // [bp-0x298]
    let v27: void*;  // rbx
    let v30: u64;  // rax
    let v33: u8;  // dl
    let v35: u64;  // rax

    v20 = uu_csplit::uu_app();
    v7 = clap_builder::builder::command::Command::try_get_matches_from(&v20, a0, a1);
    if (((0 ^ v7.field_0) & (0 ^ -(v8))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v7.field_8);
    }
    v16 = v8;
    v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v16);
    v27 = clap_builder::parser::error::MatchesError::unwrap(&v20);
    if v27 {
        v20 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v16);
        v8 = clap_builder::parser::error::MatchesError::unwrap(&v20);
        if v8.field_0 as i64 {
            v20 = struct64 {
                field_0: v8.field_0
                field_16: v8.field_16
                field_32: v8.field_32
                field_48: v12
            };
            core::iter::traits::iterator::Iterator::collect(&v3, &v20);
            v21 = uu_csplit::CsplitOptions::new(&v16);
            v19 = v22;
            v30 = v21.field_0;
            v17 = v21.field_8;
            v18 = v21.field_24;
            if v30 == 0x8000000000000000 {
                alloc::boxed::Box<T>::new(&v17);
            } else {
                v15 = *(&v21.field_96 as &i64);
                v14 = v25;
                v13 = v24;
                v12 = v23;
                v9 = v17;
                *(&v10 as void*) = v18;
                v11 = v19;
                v7 = v30;
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v27[8] as i64, v27[16] as i64, "-") {
                    v6 = std::io::stdio::stdin();
                    v0 = uu_csplit::csplit(&v7, v4, v5, std::io::stdio::Stdin::lock(&v6), v33 & 1);
                    if v0.field_0 as i32 == 13 {
                        return 0;
                    }
                    v20 = struct40 {
                        field_0: v0.field_0
                        field_16: v1
                        field_32: v2
                    };
                    alloc::boxed::Box<T>::new(&v20);
                    goto LABEL_5196e7;
                } else {
                    v20 = std::fs::File::open(v27);
                    v0 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v20, v27[8] as i64, v27[16] as i64);
                    if let Err(_) = v0 {
                        v20 = std::io::buffered::bufreader::BufReader<R>::with_capacity(*((&v0 as &char + 8) as &i32) as u32 as u64);
                        v0 = uu_csplit::csplit(&v7, v4, v5, &v20);
                        if v0.field_0 as i32 == 13 {
                            return 0;
                        }
                        v20 = struct40 {
                            field_0: v0.field_0
                            field_16: v1
                            field_32: v2
                        };
                        alloc::boxed::Box<T>::new(&v20);
LABEL_5196e7:
                    }
                }
            }
            return v35;
        }
    }
    core::option::unwrap_failed(); /* do not return */
}
