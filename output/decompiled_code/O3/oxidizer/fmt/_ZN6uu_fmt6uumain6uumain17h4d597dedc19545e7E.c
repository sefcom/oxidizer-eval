fn uu_fmt::uumain::uumain(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x3d8]
    let v1: i64;  // [sp-0x3d0]
    let v2: i64;  // [sp-0x3c8]
    let v3: i192;  // [sp-0x3c0], Other Possible Types: struct24
    let v4: i64;  // [sp-0x3b8]
    let v5: i8;  // [bp-0x388]
    let v6: i8;  // [bp-0x380]
    let v7: i8;  // [bp-0x378]
    let v8: i64;  // [sp-0x370], Other Possible Types: Result<struct56, struct16>
    let v9: i64;  // [sp-0x368]
    let v10: i64;  // [sp-0x360]
    let v11: i128;  // [bp-0x358]
    let v12: i128;  // [sp-0x348]
    let v13: i128;  // [sp-0x338]
    let v14: i64;  // [sp-0x328]
    let v15: i64;  // [sp-0x320]
    let v16: i64;  // [sp-0x318]
    let v17: i192;  // [sp-0x310]
    let v18: i224;  // [bp-0x2f8], Other Possible Types: struct24, struct33, Result<struct80, struct24>, struct712
    let v19: i64;  // [sp-0x2f0]
    let v20: i64;  // [sp-0x2e8]
    let v22: i64;  // rax
    let v23: i64;  // r14
    let v24: i64;  // rdx
    let v25: i64;  // rax
    let v26: i64;  // rcx
    let v27: i64;  // rdx
    let v28: i64;  // rax
    let v29: i64;  // rcx
    let v30: i64;  // rsi
    let v31: i64;  // r14
    let v32: i64;  // rsi
    let v33: i64;  // rdx
    let v34: i64;  // rax
    let v35: i64;  // rcx
    let v36: i64;  // r8
    let v37: i64;  // r9
    let v38: i64;  // rax
    let v40: i64;  // rax
    let v41: struct8;  // rax

    core::iter::traits::iterator::Iterator::collect(&v5, a0, a1);
    if v7 < 2 {
LABEL_4692be:
        v18 = uu_fmt::uu_app(v32, v33);
        v8 = clap_builder::builder::command::Command::try_get_matches_from(&v18, &v5, v35, v36, v37);
        if v3 == 0x8000000000000000 {
            v38 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
            return v38;
        }
        v3 = v8;
        v18 = uu_fmt::extract_files(&v3);
        v38 = v19;
        if v0 != 0x8000000000000000 {
            v0 = v18;
            v1 = v38;
            v2 = v20;
            v18 = uu_fmt::FmtOptions::from_matches(&v3);
            v40 = v18;
            match v18 {
                Ok(_) => {
                    v14 = *((&v18 as &char + 72) as &i64);
                    v13 = *((&v18 as &char + 56) as &i128);
                    v12 = *((&v18 as &char + 40) as &i128);
                    v11 = *((&v18 as &char + 24) as &i128);
                    v8 = v40;
                    v38 = v19;
                    v10 = v20;
                    v18 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::stdout());
                    v15 = v1;
                    v16 = v15 + v2 * 24;
                    do {
                        v41 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                        if !v41 {
                            return 0;
                        }
                    } while ((v38 = uu_fmt::process_file(*((v41 + 8) as &i64), *((v41 + 16) as &i64), &v8, &v18), !v38));
                },
                Err(_) => {
                },
            }
        }
        goto LABEL_4694b5;
    } else {
        v22 = v6;
        v3 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v22 + 32) as &i64), *((v22 + 40) as &i64));
        v23 = *((&v3 as &char + 16) as &i64);
        v18 = 0;
        if core::slice::<impl [T]>::starts_with(v4, v23, core::char::methods::encode_utf8_raw(&v18), v24) as i8 {
            v25 = v4;
            v26 = *((&v3 as &char + 16) as &i64);
            v18 = v25;
            v19 = v26 + v25;
            if !<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(0x1, v24) && core::str::validations::next_code_point(&v18) as i32 && (v27 = (v24 as u32 - 48) as u64, v27 as i32 < 10) {
                v28 = v4;
                v29 = *((&v3 as &char + 16) as &i64);
                v18 = v28;
                v19 = v29 + v28;
                v20 = 2;
                if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(<core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v18, v30, v27) as i32) {
                    goto LABEL_4692b4;
                }
                v31 = *((&v3 as &char + 16) as &i64);
                v18 = 0;
                v34 = <&str as core::str::pattern::Pattern>::strip_prefix_of(core::char::methods::encode_utf8_raw(&v18), v24, v4, v31);
                if !v34 {
                    core::option::unwrap_failed(); /* do not return */
                }
                v8 = 0;
                v9 = v34;
                v10 = v24;
                v11 = 1;
                v17 = format!("invalid width: {:?}", &v8);
                v18 = v17;
                v38 = alloc::boxed::Box<T>::new(&v18);
LABEL_4694b5:
                return v38;
            }
        }
LABEL_4692b4:
        goto LABEL_4692be;
    }
}
