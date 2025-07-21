fn uu_tail::args::parse_args(a1: i64, a2: i64) -> Result<struct80, struct24> {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x400]
    let v1: i64;  // [bp-0x3f8]
    let v2: u64;  // [bp-0x3e8]
    let v3: u64;  // [bp-0x3e0]
    let v4: u64;  // [bp-0x3d8]
    let v5: u128;  // [bp-0x3d0]
    let v6: u64;  // [bp-0x3c8]
    let v7: u128;  // [bp-0x3c0]
    let v8: u64;  // [bp-0x3b8]
    let v9: u128;  // [bp-0x3b0]
    let v10: u64;  // [bp-0x3a8]
    let v11: u64;  // [bp-0x3a0]
    let v12: u32;  // [bp-0x398]
    let v13: struct56;  // [bp-0x398]
    let v14: u128;  // [bp-0x358]
    let v15: u128;  // [bp-0x348]
    let v16: u128;  // [bp-0x338]
    let v17: u64;  // [bp-0x328]
    let v18: Result<struct56, struct16>;  // [bp-0x320]
    let v19: struct56;  // [bp-0x320]
    let v20: u64;  // [bp-0x318]
    let v21: alloc::borrow::Cow<str>;  // [bp-0x2e8], Other Possible Types: u8
    let v22: struct80;  // [bp-0x2e8]
    let v23: struct16;  // [bp-0x2e8]
    let v24: u64;  // [bp-0x2e0]
    let v25: u64;  // [bp-0x2e0]
    let v26: u64;  // [bp-0x2d8]
    let v27: u64;  // [bp-0x2d8]
    let v28: u128;  // [bp-0x2d0]
    let v29: u128;  // [bp-0x2d0]
    let v30: u128;  // [bp-0x2c0]
    let v31: u128;  // [bp-0x2c0]
    let v32: u128;  // [bp-0x2b0]
    let v33: u128;  // [bp-0x2b0]
    let v34: i8;  // [bp-0x2a0]
    let v36: u64;  // rdx
    let v37: i64;  // rax
    let v38: u64;  // r14
    let v39: i64;  // rax
    let v40: i64;  // rdi
    let v41: i64;  // rdi
    let v42: core::fmt::Arguments;  // rsi
    let v43: core::fmt::rt::Argument;  // xmm0
    let v45: u64;  // rcx
    let v46: i64;  // rdi
    let v47: i64;  // rdi
    let v49: i64;  // rdi
    let v50: u128;  // xmm0
    let v51: u128;  // xmm1
    let v52: u128;  // xmm2
    let v55: &str;  // rax:rdx

    core::iter::traits::iterator::Iterator::collect(&v0, a0, a1);
    uu_tail::args::uu_app(&v21);
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v2, &v0);
    v18 = clap_builder::builder::command::Command::try_get_matches_from(&v21, &v2);
    match v18 {
        Err(_) => {
            v3 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
            v4 = v36;
            v2 = 5;
            if !((v45 & -2) == 2) {
                goto LABEL_4aa6ef;
            }
            v37 = v1;
            v38 = v37 + 24;
            v39 = v37;
            if 1 {
                goto LABEL_4aa694;
            }
            goto LABEL_4aa62c;
        },
        Ok(v13) => {
            v23 = uu_tail::args::Settings::from(&v13);
            if v23.field_0 == 5 {
                *((v40 + 8) as &u64) = v24;
                *((v40 + 16) as &u64) = v26;
                *(v40 as &i64) = 5;
            } else {
                v11 = *(&v34 as &i64);
                v9 = v32;
                v7 = v30;
                v5 = v28;
                v2 = v23.field_0;
                v3 = v24;
                v4 = v26;
                if (v45 & -2) == 2 {
                    v37 = v1;
                    v38 = v37 + 24;
LABEL_4aa62c:
                    v21 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v37 + 32) as &i64), *((v37 + 40) as &i64));
                    v12 = 0;
                    v12 = v13.field_0 & 0xffffffffffffffffffffffff00000000;
                    v55 = core::char::methods::encode_utf8_raw(&v12 as u32, a0, a1);
                    if !core::slice::<impl [T]>::starts_with(v24, v26, v55.data_ptr, v55.length) as u8 {
                        goto LABEL_4aa7cb;
                    }
                    v39 = v1;
LABEL_4aa694:
                    vvar_504{stack -744} = struct80 OrderedDict({0: 𝜙@64b [((4892298, None), vvar_304{stack -744}), ((4891936, None), None)], 16: 𝜙@64b [((4892298, None), vvar_319{stack -728}), ((4891936, None), None)]})
                    uu_tail::args::parse_obsolete(&v22, v38, (3 <= v45 ? v39 + 48 : 0));
                    if v22.field_0 as i64 == 6 {
                        *((v46 + 8) as &u64) = v25;
                        *((v46 + 16) as &u64) = v27;
                        *(v46 as &i64) = 5;
                    } else {
                        v17 = *((&v22.field_64 as &char + 8) as &i64);
                        v16 = v33;
                        v15 = v31;
                        v14 = v29;
                        if v22.field_0 as i64 as i32 != 5 {
                            *((v47 + 72) as &u64) = v17;
                            *((v47 + 56) as &u128) = v16;
                            *((v47 + 40) as &u128) = v15;
                            *((v47 + 24) as &u128) = v14;
                            *(v47 as &i64) = v22.field_0 as i64;
                            *((v47 + 8) as &u64) = v25;
                            *((v47 + 16) as &u64) = v27;
                        } else {
LABEL_4aa7cb:
                            *((v49 + 64) as &i128) = *(&v10 as &i128);
                            v50 = *(&v2 as &i128);
                            v51 = *(&v4 as &i128);
                            v52 = *(&v6 as &i128);
                            *((v49 + 48) as &i128) = *(&v8 as &i128);
                            *((v49 + 32) as &u128) = v52;
                            *((v49 + 16) as &u128) = v51;
                            *(v49 as &u128) = v50;
                        }
                    }
                } else {
LABEL_4aa6ef:
                    *((v41 + 64) as &i128) = *(&v10 as &i128);
                    v42 = v5 as i64;
                    v43 = *(&v6 as &i128);
                    *((v41 + 48) as &i128) = *(&v8 as &i128);
                    *((v41 + 32) as &core::fmt::rt::Argument) = v43;
                    *((v41 + 16) as &u64) = v4;
                    *((v41 + 24) as &core::fmt::Arguments) = v42;
                    *(v41 as &u64) = v2;
                    *((v41 + 8) as &u64) = v3;
                }
            }
        },
    }
    return;
}
