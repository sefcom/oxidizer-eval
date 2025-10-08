fn uu_fmt::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: u64;  // [bp-0x3c8]
    let v1: i64;  // [bp-0x3c0]
    let v2: u64;  // [bp-0x3b8]
    let v3: void*;  // [bp-0x3b0], Other Possible Types: struct16, u64
    let v4: struct56;  // [bp-0x3b0], Other Possible Types: u64
    let v5: u64;  // [bp-0x3a8]
    let v6: u64;  // [bp-0x3a0]
    let v7: iNone;  // [bp-0x398], Other Possible Types: u8
    let v8: u128;  // [bp-0x388]
    let v9: iNone;  // [bp-0x378]
    let v10: u64;  // [bp-0x368]
    let v11: Result<struct24, struct24>;  // [bp-0x360], Other Possible Types: struct56
    let v12: u64;  // [bp-0x358]
    let v13: u8;  // [bp-0x328]
    let v14: i64;  // [bp-0x320]
    let v15: u64;  // [bp-0x318]
    let v16: alloc::string::String;  // [bp-0x310]
    let v17: u64;  // [bp-0x300]
    let v18: struct24;  // [bp-0x2f8], Other Possible Types: struct28, struct33, struct712, u64
    let v19: Result<struct80, struct24>;  // [bp-0x2f8]
    let v20: struct16;  // [bp-0x2f8], Other Possible Types: u64
    let v21: u64;  // [bp-0x2f8]
    let v22: i64;  // [bp-0x2f0]
    let v23: u64;  // [bp-0x2e8]
    let v24: u64;  // [bp-0x2e8]
    let v25: u128;  // [bp-0x2d0]
    let v26: iNone;  // [bp-0x2c0]
    let v28: u64;  // rbx
    let v29: u64;  // r13
    let v30: u64;  // rdx
    let v32: u64;  // rcx
    let v33: core::option::Option<&str>;  // rax
    let v34: i64;  // r14
    let v35: iNone;  // xmm0
    let v37: u64;  // rbp
    let v38: i64;  // r15
    let v39: core::option::Option<u32>;  // rax:rax
    let v40: &mut [u8];  // rax:rdx
    let v41: &mut [u8];  // rax:rdx

    core::iter::traits::iterator::Iterator::collect(&v13, a0, a1);
    if v15 >= 2 {
        v11 = alloc::string::String::from_utf8_lossy(*((v14 + 32) as &i64), *((v14 + 40) as &i64));
        v28 = v12;
        v29 = *((&v11 as &char + 16) as &i64);
        v20 = 0;
        v40 = core::char::methods::encode_utf8_raw(&v20 as u32, a1, v30);
        if core::slice::<impl [T]>::starts_with(v28, v29, v40.data_ptr, v32) {
            v20 = struct16 {
                field_0: v28
                field_8: v28 + v29
            };
            if !<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(&v20, 1) {
                v39 = core::str::validations::next_code_point(&v20) as u128;
                if (v30 - 48 < 10 & v39 as i8) {
                    v21 = v28;
                    v24 = 2;
                    if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(<core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(&v21) as i32, a1) {
                        v18 = 0;
                        v41 = core::char::methods::encode_utf8_raw(&v18 as u32, a1, v30);
                        v33 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v41.data_ptr, v28, v29, v32) as u64;
                        core::option::unwrap(v33);
                        v3 = 0;
                        v5 = v33;
                        v6 = v30;
                        v7 = 1;
                        v16 = format!("invalid width: {}", &v3);
                        v18 = struct28 {
                            field_0: *(&v16.vec.buf.inner.cap as &i128)
                            field_16: v17
                            field_24: 1
                        };
                        v34 = alloc::boxed::Box<T>::new(&v18) as u64;
                        goto LABEL_4595c4;
                    }
                }
            }
        }
    }
    vvar_557{stack -760} = struct712 OrderedDict([(0, 𝜙@64b [((4559332, None), None), ((4559834, None), vvar_394{stack -760})])])
    uu_fmt::uu_app(&v18);
    v3 = clap_builder::builder::command::Command::try_get_matches_from(&v18, v14, v15);
    if (((0 ^ v3.field_0) & (0 ^ -(v4))) >> 63) as char {
        v34 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
    } else {
        v11 = v4;
        v18 = uu_fmt::extract_files(&v11);
        v34 = v22;
        if v18.field_0 as i64 != 0x8000000000000000 {
            v0 = v18.field_0;
            v1 = v34;
            v2 = v23;
            v19 = uu_fmt::FmtOptions::from_matches(&v11);
            if let Ok(_) = v19 {
                v10 = *((&v19 as &char + 72) as &i64);
                v35 = *((&v19 as &char + 24) as &i128);
                v9 = v26;
                v8 = v25;
                v7 = v35;
                v3 = v19 as i64;
                v34 = v22;
                v6 = v23;
                v18 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(std::io::stdio::stdout());
                v37 = v34 + v2 * 24;
                do {
                    v38 = v34 + 24;
                    if v34 == v37 {
                        v38 = v34;
                        if v34 == v37 {
                            break;
                        }
                    } else if v34 == v37 {
                        break;
                    }
                    if !v34 {
                        break;
                    }
                    continue;
                    v34 = uu_fmt::process_file(*((v34 + 8) as &i64), *((v34 + 16) as &i64), &v3, &v18);
                    v34 = v38;
                } while (!v34);
            }
        }
    }
LABEL_4595c4:
    return v34;
}
