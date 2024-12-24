fn uu_fmt::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x3d8]
    let v1: i64;  // [sp-0x3d0]
    let v2: i64;  // [sp-0x3c8]
    let v3: i192;  // [sp-0x3c0], Other Possible Types: struct24
    let v4: i8;  // [bp-0x388]
    let v5: i8;  // [bp-0x380]
    let v6: i8;  // [bp-0x378]
    let v7: i64;  // [sp-0x370], Other Possible Types: Result<struct56, struct16>
    let v8: i64;  // [sp-0x368]
    let v9: i64;  // [sp-0x360]
    let v10: i8;  // [bp-0x358]
    let v11: i128;  // [sp-0x348]
    let v12: i128;  // [sp-0x338]
    let v13: i64;  // [sp-0x328]
    let v14: i64;  // [sp-0x320]
    let v15: i64;  // [sp-0x318]
    let v16: i192;  // [sp-0x310]
    let v17: i64;  // [bp-0x2f8], Other Possible Types: struct33, struct24, struct712, Result<struct80, struct24>
    let v18: i64;  // [sp-0x2f0]
    let v19: i64;  // [sp-0x2e8]
    let v21: i64;  // rax
    let v22: i64;  // r14
    let v23: i64;  // rdx
    let v24: i64;  // rax
    let v25: i64;  // rcx
    let v26: i64;  // rdx
    let v27: i64;  // rax
    let v28: i64;  // rcx
    let v29: i64;  // rsi
    let v30: i64;  // r14
    let v31: i64;  // rsi
    let v32: i64;  // rdx
    let v33: i64;  // rax
    let v34: i64;  // rax
    let v36: i64;  // rax
    let v37: struct8;  // rax

    core::iter::traits::iterator::Iterator::collect(&v4, a0, a1);
    if v6 < 2 {
LABEL_4697fe:
        v17 = uu_fmt::uu_app(v31, v32);
        v7 = clap_builder::builder::command::Command::try_get_matches_from(&v17, &v4);
        if v3 == 0x8000000000000000 {
            v34 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3.field_8);
            return v34;
        }
        v3 = v7;
        v17 = uu_fmt::extract_files(&v3);
        v34 = v17.8;
        if v0 != 0x8000000000000000 {
            v0 = v17;
            v1 = v34;
            v2 = v17.field_16;
            v17 = uu_fmt::FmtOptions::from_matches(&v3);
            v36 = v17;
            match v17 {
                Ok(_) => {
                    v13 = *((&v17 as &char + 72) as &i64);
                    v12 = *((&v17 as &char + 56) as &i128);
                    v11 = *((&v17 as &char + 40) as &i128);
                    v10 = *((&v17 as &char + 24) as &i128);
                    v7 = v36;
                    v34 = v18;
                    v9 = v19;
                    v17 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::stdout());
                    v14 = v1;
                    v15 = v14 + v2 * 24;
                    do {
                        v37 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                        if !v37 {
                            return 0;
                        }
                    } while ((v34 = uu_fmt::process_file(*((v37 + 8) as &i64), *((v37 + 16) as &i64), &v7, &v17), !v34));
                },
                Err(_) => {
                },
            }
        }
        goto LABEL_4699f5;
    } else {
        v21 = v5;
        v3 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v21 + 32) as &i64), *((v21 + 40) as &i64));
        v22 = *((&v3 as &char + 16) as &i64);
        v17 = 0;
        if core::slice::<impl [T]>::starts_with(v3.field_8, v22, core::char::methods::encode_utf8_raw(&v17), v23) as i8 {
            v24 = v3.field_8;
            v25 = *((&v3 as &char + 16) as &i64);
            v17 = v24;
            v18 = v25 + v24;
            if !<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(1, v23) && core::str::validations::next_code_point(&v17) as i32 && (v26 = (v23 as u32 - 48) as u64, v26 as i32 < 10) {
                v27 = v3.field_8;
                v28 = *((&v3 as &char + 16) as &i64);
                v17 = v27;
                v18 = v28 + v27;
                v19 = 2;
                if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(<core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v17, v29, v26) as i32) {
                    goto LABEL_4697f4;
                }
                v30 = *((&v3 as &char + 16) as &i64);
                v17 = 0;
                v33 = <&str as core::str::pattern::Pattern>::strip_prefix_of(core::char::methods::encode_utf8_raw(&v17), v23, v3.field_8, v30);
                if !v33 {
                    core::option::unwrap_failed(); /* do not return */
                }
                v7 = 0;
                v8 = v33;
                v9 = v23;
                v10 = 1;
                v16 = format!("invalid width: {:?}", &v7);
                v17 = v16;
                v34 = alloc::boxed::Box<T>::new(&v17);
LABEL_4699f5:
                return v34;
            }
        }
LABEL_4697f4:
        goto LABEL_4697fe;
    }
}
