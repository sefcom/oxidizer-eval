fn uu_tail::args::parse_args(a0: &struct80, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [bp-0x400]
    let v1: i8;  // [bp-0x3f8]
    let v2: i8;  // [bp-0x3f0]
    let v3: i192;  // [sp-0x3e8], Other Possible Types: struct24
    let v4: i64;  // [sp-0x3e0]
    let v5: i64;  // [sp-0x3d8]
    let v6: i128;  // [sp-0x3d0]
    let v7: i128;  // [sp-0x3c0]
    let v8: i128;  // [sp-0x3b0]
    let v9: i64;  // [sp-0x3a0]
    let v10: i448;  // [sp-0x398]
    let v11: i128;  // [sp-0x358]
    let v12: i128;  // [sp-0x348]
    let v13: i128;  // [sp-0x338]
    let v14: i64;  // [sp-0x328]
    let v15: i456;  // [sp-0x320], Other Possible Types: Result<struct56, struct8>
    let v16: i640;  // [sp-0x2e8], Other Possible Types: struct712, struct24, Option<struct80>, struct80
    let v18: i64;  // r15
    let v19: i64;  // rdx
    let v20: i64;  // rcx
    let v21: i64;  // rdx
    let v22: i64;  // rax
    let v23: i64;  // rcx
    let v24: i64;  // rax
    let v25: i64;  // r14
    let v28: i64;  // r15
    let v29: i64;  // r12
    let v30: i64;  // rax
    let v31: i64;  // rdx
    let v32: i64;  // rax
    let v33: i64;  // rcx

    core::iter::traits::iterator::Iterator::collect(&v0, a1, a2);
    v16 = uu_tail::args::uu_app();
    v3 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v0);
    v15 = clap_builder::builder::command::Command::try_get_matches_from(&v16, &v3);
    v18 = v15;
    match v15 {
        Ok(_) => {
            v10 = v15;
            v16 = uu_tail::args::Settings::from(&v10);
            v21 = v16;
            v22 = *((&v16 as &char + 8) as &i64);
            v23 = *((&v16 as &char + 16) as &i64);
            if v3 == 5 {
                *((a0 + 8) as &i64) = v4;
                *((a0 + 16) as &i64) = v5;
                *(a0 as &i64) = 5;
            } else {
                v9 = *((&v16 as &char + 72) as &i64);
                v8 = *((&v16 as &char + 56) as &i128);
                v7 = *((&v16 as &char + 40) as &i128);
                v6 = *((&v16 as &char + 24) as &i128);
                v3 = v21;
                v4 = v22;
                v5 = v23;
                if (v2 & -2) != 2 {
                    return struct80 {
                        field_0: v3
                        field_8: v4
                        field_16: v5
                        field_24: v26
                        field_32: v27
                        field_48: *((&v7 as &char + 8) as &i128)
                        field_64: *((&v8 as &char + 8) as &i128)
                    };
                }
                v24 = v1;
                v25 = v24 + 24;
            }
        },
        Err(_) => {
            v4 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v15 as &char + 8) as &i64));
            v5 = v19;
            v3 = 5;
            v20 = v2;
            if (v20 & -2) != 2 {
                return struct80 {
                    field_0: v3
                    field_8: v4
                    field_16: v5
                    field_24: v26
                    field_32: v27
                    field_48: *((&v7 as &char + 8) as &i128)
                    field_64: *((&v8 as &char + 8) as &i128)
                };
            }
            v24 = v1;
            v25 = v24 + 24;
            if v18 == 0x8000000000000000 {
LABEL_4aa694:
                v30 = v24 + 48;
                if 3 > v20 {
                    v30 = 0;
                }
                v16 = uu_tail::args::parse_obsolete(v25, v30);
                v31 = v16;
                v32 = *((&v16 as &char + 8) as &i64);
                v33 = *((&v16 as &char + 16) as &i64);
                if v31 == 6 {
                    *((a0 + 8) as &i64) = v32;
                    *((a0 + 16) as &i64) = v33;
                    *(a0 as &i64) = 5;
                } else {
                    v14 = *((&v16 as &char + 72) as &i64);
                    v13 = *((&v16 as &char + 56) as &i128);
                    v12 = *((&v16 as &char + 40) as &i128);
                    v11 = *((&v16 as &char + 24) as &i128);
                    if v31 as i32 == 5 {
                        return struct80 {
                            field_0: v34
                            field_16: v35
                            field_32: v36
                            field_48: *((&v7 as &char + 8) as &i128)
                            field_64: *((&v8 as &char + 8) as &i128)
                        };
                    }
                    *((a0 + 72) as &i64) = v14;
                    *((a0 + 56) as &i128) = v13;
                    *((a0 + 40) as &i128) = v12;
                    *((a0 + 24) as &i128) = v11;
                    *(a0 as &i64) = v31;
                    *((a0 + 8) as &i64) = v32;
                    *((a0 + 16) as &i64) = v33;
                }
            }
        },
    }
    v16 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v24 + 32) as &i64), *((v24 + 40) as &i64));
    v28 = *((&v16 as &char + 8) as &i64);
    v29 = *((&v16 as &char + 16) as &i64);
    v10 = 0;
    if !core::slice::<impl [T]>::starts_with(v28, v29, core::char::methods::encode_utf8_raw(&v10), v19) as i8 {
        return struct80 {
            field_0: v34
            field_16: v35
            field_32: v36
            field_48: *((&v7 as &char + 8) as &i128)
            field_64: *((&v8 as &char + 8) as &i128)
        };
    }
    v24 = v1;
    v20 = v2;
    goto LABEL_4aa694;
}
