fn uu_fmt::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: i64;  // [bp-0x3d8], Other Possible Types: u64
    let v1: u64;  // [bp-0x3d0]
    let v2: u64;  // [bp-0x3c8]
    let v3: alloc::borrow::Cow<str>;  // [bp-0x3c0], Other Possible Types: struct56
    let v4: u64;  // [bp-0x3b8]
    let v5: u64;  // [bp-0x388]
    let v6: i64;  // [bp-0x380]
    let v7: u64;  // [bp-0x378]
    let v8: void*;  // [bp-0x370], Other Possible Types: Result<struct56, struct16>, u64
    let v9: struct56;  // [bp-0x370]
    let v10: u64;  // [bp-0x368]
    let v11: u64;  // [bp-0x360]
    let v12: u8;  // [bp-0x358]
    let v13: u128;  // [bp-0x348]
    let v14: u128;  // [bp-0x338]
    let v15: u64;  // [bp-0x328]
    let v16: struct16;  // [bp-0x320]
    let v17: u128;  // [bp-0x310]
    let v18: u64;  // [bp-0x300]
    let v19: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>;  // [bp-0x2f8], Other Possible Types: struct28, struct712, struct24, u64
    let v20: Result<struct80, struct24>;  // [bp-0x2f8], Other Possible Types: u64
    let v21: u64;  // [bp-0x2f8]
    let v22: u64;  // [bp-0x2f0]
    let v23: u64;  // [bp-0x2f0]
    let v24: i64;  // [bp-0x2e8], Other Possible Types: u64
    let v25: u64;  // [bp-0x2e8]
    let v26: u64;  // [bp-0x2e0]
    let v27: void*;  // [bp-0x2d8]
    let v28: u128;  // [bp-0x2d0]
    let v29: u128;  // [bp-0x2c0]
    let v31: u64;  // rdx
    let v33: u64;  // rax
    let v34: u64;  // rbx
    let v35: u128;  // xmm0
    let v36: i64;  // rax
    let v37: &mut [u8];  // rax:rdx
    let v38: core::option::Option<u32>;  // rax:rax
    let v39: &mut [u8];  // rax:rdx

    core::iter::traits::iterator::Iterator::collect(&v5, a0, a1);
    if v7 >= 2 {
        v3 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v6 + 32) as &i64), *((v6 + 40) as &i64));
        v19 = 0;
        v19 = v20 & -0x100000000;
        v37 = core::char::methods::encode_utf8_raw(&v19 as u32, a1, v31);
        v21 = v19;
        if !core::slice::<impl [T]>::starts_with(v4, *((&v3 as &char + 16) as &i64), v37.data_ptr, v37.length) || (v21 as u128 = struct16 {
    field_0: v4
    field_8: *((&v3 as &char + 16) as &i64) + v4
}, v21 = v20, <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(&v21 as u128, 1) || (v38 = core::str::validations::next_code_point(&v21 as u128) as u128, v21 = v20, !v38 as i32 || (v21 = v20, v31 as u32 - 48 >= 10 || (v21 = v4, v22 = *((&v3 as &char + 16) as &i64) + v4, v24 = 2, !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(<core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v21) as i32 as u32 as u64, a1) as u8)))) {
            goto LABEL_4692be;
        }
        v19 = 0;
        v19 = v20 & -0x100000000;
        v39 = core::char::methods::encode_utf8_raw(&v19 as u32, a1, v31);
        v33 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v39.data_ptr, v39.length, v4, *((&v3 as &char + 16) as &i64));
        if !v33 {
            core::option::unwrap_failed(); /* do not return */
        }
        v8 = 0;
        v10 = v33;
        v11 = v31;
        v12 = 1;
        v0 = &v8;
        v1 = <os_display::Quoted as core::fmt::Display>::fmt;
        v19 = "invalid width: ";
        v22 = 1;
        v27 = 0;
        v24 = &v0;
        v26 = 1;
        v19 = core::option::Option<T>::map_or_else(v31);
        v19 = struct28 {
            field_0: v17
            field_16: v18
            field_24: 1
        };
        v34 = alloc::boxed::Box<T>::new(&v19);
    } else {
LABEL_4692be:
        vvar_611{stack -760} = struct712 OrderedDict({0: 𝜙@64b [((4624929, None), None), ((4625076, None), vvar_405{stack -760})]})
        uu_fmt::uu_app(&v19);
        v8 = clap_builder::builder::command::Command::try_get_matches_from(&v19, &v5);
        match v8 {
            Err(_) => {
                v34 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
            },
            Ok(v3) => {
                v19 = uu_fmt::extract_files(&v3);
                v34 = v23;
                if v19.field_0 as i64 != 0x8000000000000000 {
                    v0 = v19.field_0 as i64;
                    v1 = v34;
                    v2 = v25;
                    v20 = uu_fmt::FmtOptions::from_matches(&v3);
                    if let Ok(_) = v20 {
                        v15 = *((&v20 as &char + 72) as &i64);
                        v35 = *((&v20 as &char + 24) as &i128);
                        v14 = v29;
                        v13 = v28;
                        v12 = v35;
                        v8 = v20 as i64;
                        v34 = v23;
                        v11 = v25;
                        std::io::stdio::stdout();
                        v19 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000);
                        v16 = struct16 {
                            field_0: v1
                            field_8: v1 + v2 * 24
                        };
                        do {
                            v36 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v16);
                            if !v36 {
                                return 0;
                            }
                            v34 = uu_fmt::process_file(*((v36 + 8) as &i64), *((v36 + 16) as &i64), &v8, &v19);
                        } while (!v34);
                    }
                }
            },
        }
    }
    return v34;
}
