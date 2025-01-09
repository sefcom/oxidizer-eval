fn uu_fmt::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x3d8]
    let v1: i64;  // [sp-0x3d0]
    let v2: i64;  // [sp-0x3c8]
    let v3: i448;  // [sp-0x3c0], Other Possible Types: Result<struct56, struct8>, struct24
    let v4: i64;  // [sp-0x3b8]
    let v5: i8;  // [bp-0x388]
    let v6: i8;  // [bp-0x380]
    let v7: i8;  // [bp-0x378]
    let v8: i64;  // [sp-0x370], Other Possible Types: Result<struct56, struct8>
    let v9: i64;  // [sp-0x368]
    let v10: i64;  // [sp-0x360]
    let v11: i128;  // [bp-0x358]
    let v12: i128;  // [sp-0x348]
    let v13: i128;  // [sp-0x338]
    let v14: i64;  // [sp-0x328]
    let v15: i64;  // [sp-0x320]
    let v16: i64;  // [sp-0x318]
    let v18: i64;  // [bp-0x2f8], Other Possible Types: struct712, Result<struct80, struct16>, struct24, struct33
    let v19: i64;  // [sp-0x2f0]
    let v20: i64;  // [sp-0x2e8]
    let v21: i64;  // [bp-0x2e0]
    let v22: i64;  // [sp-0x2d8]
    let v24: i64;  // rax
    let v25: i64;  // r14
    let v26: i64;  // rdx
    let v27: i64;  // rax
    let v28: i64;  // rcx
    let v29: i64;  // rax
    let v30: i64;  // rcx
    let v31: i64;  // r14
    let v32: i64;  // rax
    let v33: i64;  // rax
    let v35: i64;  // rax
    let v36: struct8;  // rax

    core::iter::traits::iterator::Iterator::collect(&v5, a0, a1);
    if v7 < 2 {
LABEL_4692be:
        v18 = uu_fmt::uu_app();
        v8 = clap_builder::builder::command::Command::try_get_matches_from(&v18, &v5);
        if v3 == 0x8000000000000000 {
            v33 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
            return v33;
        }
        v3 = v8;
        v18 = uu_fmt::extract_files(&v3);
        v33 = v19;
        if v0 != 0x8000000000000000 {
            v0 = v18;
            v1 = v33;
            v2 = v20;
            v18 = uu_fmt::FmtOptions::from_matches(&v3);
            v35 = v18;
            match v18 {
                Ok(_) => {
                    v14 = *((&v18 as &char + 72) as &i64);
                    v13 = *((&v18 as &char + 56) as &i128);
                    v12 = *((&v18 as &char + 40) as &i128);
                    v11 = *((&v18 as &char + 24) as &i128);
                    v8 = v35;
                    v33 = v19;
                    v10 = v20;
                    v18 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::stdout());
                    v15 = v1;
                    v16 = v15 + v2 * 24;
                    do {
                        v36 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                        if !v36 {
                            return 0;
                        }
                    } while ((v33 = uu_fmt::process_file(*((v36 + 8) as &i64), *((v36 + 16) as &i64), &v8, &v18), !v33));
                },
                Err(_) => {
                },
            }
        }
        goto LABEL_4694b5;
    } else {
        v24 = v6;
        v3 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v24 + 32) as &i64), *((v24 + 40) as &i64));
        v25 = *((&v3 as &char + 16) as &i64);
        v18 = 0;
        if core::slice::<impl [T]>::starts_with(v4, v25, core::char::methods::encode_utf8_raw(&v18), v26) as i8 {
            v27 = v4;
            v28 = *((&v3 as &char + 16) as &i64);
            v18 = v27;
            v19 = v28 + v27;
            if !<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(0x1) && core::str::validations::next_code_point(&v18) as i32 && v26 as u32 - 48 < 10 {
                v29 = v4;
                v30 = *((&v3 as &char + 16) as &i64);
                v18 = v29;
                v19 = v30 + v29;
                v20 = 2;
                if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(<core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v18) as i32) {
                    goto LABEL_4692b4;
                }
                v31 = *((&v3 as &char + 16) as &i64);
                v18 = 0;
                v32 = <&str as core::str::pattern::Pattern>::strip_prefix_of(core::char::methods::encode_utf8_raw(&v18), v26, v4, v31);
                if !v32 {
                    core::option::unwrap_failed("/home/34r7hm4n/dev/oxidizer/oxidizer-eval/dataset-src/coreutils/src/uu/fmt/src/fmt.rs"); /* do not return */
                }
                v8 = 0;
                v9 = v32;
                v10 = v26;
                v11 = 1;
                v0 = &v8;
                v1 = <os_display::Quoted as core::fmt::Display>::fmt;
                *(&v18 as &&str) = "invalid width: ";
                v19 = 1;
                v22 = 0;
                v20 = &v0;
                v21 = 1;
                core::option::Option<T>::map_or_else();
                v33 = alloc::boxed::Box<T>::new(&v18);
LABEL_4694b5:
                return v33;
            }
        }
LABEL_4692b4:
        goto LABEL_4692be;
    }
}
