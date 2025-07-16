fn uu_fmt::uumain::uumain(a0: i64, a1: i64) -> long long {
    let v0: i64;  // [bp-0x3d8], Other Possible Types: u64
    let v1: u64;  // [bp-0x3d0]
    let v2: u64;  // [bp-0x3c8]
    let v3: alloc::borrow::Cow<str>;  // [bp-0x3c0], Other Possible Types: u128
    let v4: u64;  // [bp-0x3b8]
    let v5: u8;  // [bp-0x3a0]
    let v6: u64;  // [bp-0x390]
    let v7: u64;  // [bp-0x388]
    let v8: i64;  // [bp-0x380]
    let v9: u64;  // [bp-0x378]
    let v10: u64;  // [bp-0x370], Other Possible Types: Result<struct56, struct16>, void*
    let v11: u128;  // [bp-0x370]
    let v12: u64;  // [bp-0x368]
    let v13: u64;  // [bp-0x360]
    let v14: u128;  // [bp-0x358]
    let v15: u128;  // [bp-0x348]
    let v16: u64;  // [bp-0x340]
    let v17: u128;  // [bp-0x338]
    let v18: u64;  // [bp-0x328]
    let v19: u64;  // [bp-0x320]
    let v20: u64;  // [bp-0x318]
    let v21: u128;  // [bp-0x310]
    let v22: u64;  // [bp-0x300]
    let v23: u64;  // [bp-0x2f8], Other Possible Types: struct24, std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>
    let v24: u64;  // [bp-0x2f8], Other Possible Types: Result<struct80, struct24>
    let v25: u64;  // [bp-0x2f8]
    let v26: u64;  // [bp-0x2f0]
    let v27: u64;  // [bp-0x2f0]
    let v28: i64;  // [bp-0x2e8], Other Possible Types: u64
    let v29: u64;  // [bp-0x2e8]
    let v30: u64;  // [bp-0x2e0]
    let v31: void*;  // [bp-0x2d8]
    let v32: u128;  // [bp-0x2d0]
    let v33: u128;  // [bp-0x2c0]
    let v35: u64;  // rdx
    let v37: u64;  // rax
    let v38: u64;  // rbx
    let v39: u128;  // xmm0
    let v40: i64;  // rax
    let v41: &mut [u8];  // rax:rdx
    let v42: core::option::Option<u32>;  // rax:rax
    let v43: &mut [u8];  // rax:rdx

    core::iter::traits::iterator::Iterator::collect(&v7, a0, a1);
    if v9 >= 2 {
        v3 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v8 + 32) as &i64), *((v8 + 40) as &i64));
        v23 = 0;
        v23 = v24 & -0x100000000;
        v41 = core::char::methods::encode_utf8_raw(&v23 as u32, a1, v35);
        v25 = v23;
        if !core::slice::<impl [T]>::starts_with(v4, *((&v3 as &char + 16) as &i64), v41.data_ptr, v41.length) || (v25 as u128 = struct16 {
    field_0: v4
    field_8: *((&v3 as &char + 16) as &i64) + v4
}, v25 = v24, <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(&v25 as u128, 1) || (v42 = core::str::validations::next_code_point(&v25 as u128) as u128, v25 = v24, !v42 as i32 || (v25 = v24, v35 as u32 - 48 >= 10 || (v25 = v4, v26 = *((&v3 as &char + 16) as &i64) + v4, v28 = 2, !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(<core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v25) as i32 as u32 as u64, a1) as u8)))) {
            goto LABEL_4692be;
        }
        v23 = 0;
        v23 = v24 & -0x100000000;
        v43 = core::char::methods::encode_utf8_raw(&v23 as u32, a1, v35);
        v37 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v43.data_ptr, v43.length, v4, *((&v3 as &char + 16) as &i64));
        if !v37 {
            core::option::unwrap_failed(); /* do not return */
        }
        v10 = 0;
        v12 = v37;
        v13 = v35;
        v14 = 1;
        v0 = &v10;
        v1 = <os_display::Quoted as core::fmt::Display>::fmt;
        v23 = "invalid width: ";
        v26 = 1;
        v31 = 0;
        v28 = &v0;
        v30 = 1;
        v23 = core::option::Option<T>::map_or_else(v35);
        v23 = struct28 {
            field_0: v21
            field_16: v22
            field_24: 1
        };
        v38 = alloc::boxed::Box<T>::new(&v23);
    } else {
LABEL_4692be:
        vvar_610{stack -760} = struct712 OrderedDict({0: 𝜙@64b [((4624929, None), None), ((4625076, None), vvar_405{stack -760})]})
        uu_fmt::uu_app(&v23);
        v10 = clap_builder::builder::command::Command::try_get_matches_from(&v23, &v7);
        match v10 {
            Err(_) => {
                v38 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v4);
            },
            Ok(_) => {
                v6 = v16;
                memcpy(&v5, &v10, 16);
                memcpy(&v3, &v10, 16);
                v3 = v11;
                v23 = uu_fmt::extract_files(&v3);
                v38 = v27;
                if v23.field_0 as i64 != 0x8000000000000000 {
                    v0 = v23.field_0 as i64;
                    v1 = v38;
                    v2 = v29;
                    v24 = uu_fmt::FmtOptions::from_matches(&v3);
                    if let Ok(_) = v24 {
                        v18 = *((&v24 as &char + 72) as &i64);
                        v39 = *((&v24 as &char + 24) as &i128);
                        v17 = v33;
                        v15 = v32;
                        v14 = v39;
                        v10 = v24 as i64;
                        v38 = v27;
                        v13 = v29;
                        std::io::stdio::stdout();
                        v23 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(0x2000);
                        v19 = v1;
                        v20 = v1 + v2 * 24;
                        do {
                            v40 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v19);
                            if !v40 {
                                return 0;
                            }
                            v38 = uu_fmt::process_file(*((v40 + 8) as &i64), *((v40 + 16) as &i64), &v10, &v23);
                        } while (!v38);
                    }
                }
            },
        }
    }
    return v38;
}
