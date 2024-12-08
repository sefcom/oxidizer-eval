fn uu_fmt::uumain::uumain(a0: u32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x3d8]
    let v1: i64;  // [sp-0x3d0]
    let v2: i64;  // [sp-0x3c8]
    let v3: i64;  // [sp-0x3c0], Other Possible Types: struct56, struct24
    let v4: i8;  // [bp-0x388]
    let v5: i8;  // [bp-0x380]
    let v6: i8;  // [bp-0x378]
    let v7: i64;  // [bp-0x370]
    let v8: i64;  // [sp-0x368]
    let v9: i64;  // [sp-0x360]
    let v10: i128;  // [bp-0x358]
    let v12: i128;  // [sp-0x348]
    let v14: i128;  // [sp-0x338]
    let v15: i64;  // [sp-0x328]
    let v16: i64;  // [sp-0x320]
    let v17: i64;  // [sp-0x318]
    let v18: i192;  // [sp-0x310]
    let v19: i32;  // [bp-0x2f8], Other Possible Types: struct33, struct28, struct712, struct24, Result<struct80, struct24>
    let v20: i64;  // [sp-0x2f0]
    let v21: i64;  // [sp-0x2e8]
    let v23: i64;  // rax
    let v24: i64;  // r14
    let v25: i64;  // rdx
    let v26: i64;  // rax
    let v27: i64;  // rcx
    let v28: i64;  // rdx
    let v29: i64;  // rax
    let v30: i64;  // rcx
    let v31: i64;  // rsi
    let v32: i64;  // r14
    let v33: i64;  // rsi
    let v34: i64;  // rdx
    let v35: i64;  // rax
    let v36: i64;  // rax
    let v38: i64;  // rax
    let v39: struct8;  // rax

    core::iter::traits::iterator::Iterator::collect(&v4, a0, a1);
    if v6 < 2 {
LABEL_4697fe:
        v19 = uu_fmt::uu_app(v33, v34);
        clap_builder::builder::command::Command::try_get_matches_from(&v7, &v19, &v4);
        if v3 == 0x8000000000000000 {
            v36 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3.field_8);
            return v36;
        }
        v3 = struct56 {
            field_0: v7
            field_8: v8
            field_16: v9
            field_32: v11
            field_48: v13
        };
        v19 = uu_fmt::extract_files(&v3);
        v36 = v19.8;
        if v0 != 0x8000000000000000 {
            v0 = v19;
            v1 = v36;
            v2 = v19.field_16;
            v19 = uu_fmt::FmtOptions::from_matches(&v3);
            v38 = v19;
            match v19 {
                Ok(_) => {
                    v15 = *((&v19 as &char + 72) as &i64);
                    v14 = *((&v19 as &char + 56) as &i128);
                    v12 = *((&v19 as &char + 40) as &i128);
                    v10 = *((&v19 as &char + 24) as &i128);
                    v7 = v38;
                    v36 = v20;
                    v9 = v21;
                    v19 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000, std::io::stdio::stdout());
                    v16 = v1;
                    v17 = v16 + v2 * 24;
                    do {
                        v39 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
                        if !v39 {
                            return 0;
                        }
                    } while ((v36 = uu_fmt::process_file(*((v39 + 8) as &i64), *((v39 + 16) as &i64), &v7, &v19), !v36));
                },
                Err(_) => {
                },
            }
        }
        goto LABEL_4699f5;
    } else {
        v23 = v5;
        v3 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v23 + 32) as &i64), *((v23 + 40) as &i64));
        v24 = *((&v3 as &char + 16) as &i64);
        v19 = 0;
        if core::slice::<impl [T]>::starts_with(v3.field_8, v24, core::char::methods::encode_utf8_raw(&v19), v25) as i8 {
            v26 = v3.field_8;
            v27 = *((&v3 as &char + 16) as &i64);
            v19 = v26;
            v20 = v27 + v26;
            if !<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(1, v25) && core::str::validations::next_code_point(&v19) as i32 && (v28 = (v25 as u32 - 48) as u64, v28 as i32 < 10) {
                v29 = v3.field_8;
                v30 = *((&v3 as &char + 16) as &i64);
                v19 = v29;
                v20 = v30 + v29;
                v21 = 2;
                if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(<core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v19, v31, v28) as i32) {
                    goto LABEL_4697f4;
                }
                v32 = *((&v3 as &char + 16) as &i64);
                v19 = 0;
                v35 = <&str as core::str::pattern::Pattern>::strip_prefix_of(core::char::methods::encode_utf8_raw(&v19), v25, v3.field_8, v32);
                if !v35 {
                    core::option::unwrap_failed(); /* do not return */
                }
                v7 = 0;
                v8 = v35;
                v9 = v25;
                v10 = 1;
                v18 = format!("invalid width: {:?}", &v7);
                v19 = struct28 {
                    field_0: v18
                    field_16: *((&v18 as &char + 16) as &i64)
                    field_24: 1
                };
                v36 = alloc::boxed::Box<T>::new(&v19);
LABEL_4699f5:
                return v36;
            }
        }
LABEL_4697f4:
        goto LABEL_4697fe;
    }
}
