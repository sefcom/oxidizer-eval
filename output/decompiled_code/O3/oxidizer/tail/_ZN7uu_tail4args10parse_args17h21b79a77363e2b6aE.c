fn uu_tail::args::parse_args(a0: &struct80, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i8;  // [bp-0x400]
    let v1: i8;  // [bp-0x3f8]
    let v2: i8;  // [bp-0x3f0]
    let v3: i64;  // [sp-0x3e8], Other Possible Types: struct24
    let v4: i64;  // [sp-0x3e0]
    let v5: i64;  // [sp-0x3d8]
    let v6: i128;  // [sp-0x3d0]
    let v7: i128;  // [sp-0x3c0]
    let v8: i128;  // [sp-0x3b0]
    let v9: i64;  // [sp-0x3a0]
    let v10: i448;  // [bp-0x398]
    let v11: i128;  // [sp-0x358]
    let v12: i128;  // [sp-0x348]
    let v13: i128;  // [sp-0x338]
    let v14: i64;  // [sp-0x328]
    let v15: i448;  // [sp-0x320], Other Possible Types: Result<struct56, struct16>
    let v16: i640;  // [sp-0x2e8], Other Possible Types: struct712, struct24, struct80
    let v18: i64;  // rsi
    let v19: i64;  // rdx
    let v20: i64;  // rcx
    let v21: i64;  // r8
    let v22: i64;  // r9
    let v23: i64;  // r15
    let v24: i64;  // rcx
    let v25: i64;  // rdx
    let v26: i64;  // rax
    let v27: i64;  // rcx
    let v28: i64;  // rax
    let v29: i64;  // rsi
    let v30: i128;  // xmm0
    let v31: i64;  // r15
    let v32: i64;  // r12
    let v33: i64;  // rdx
    let v34: i64;  // rax
    let v35: i64;  // rcx
    let v36: i128;  // xmm0
    let v37: i128;  // xmm1
    let v38: i128;  // xmm2

    core::iter::traits::iterator::Iterator::collect(&v0, a1, a2);
    v16 = uu_tail::args::uu_app(v18, v19);
    v3 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v0);
    v15 = clap_builder::builder::command::Command::try_get_matches_from(&v16, &v3, v20, v21, v22);
    v23 = v15;
    match v15 {
        Ok(_) => {
            v10 = v15;
            v16 = uu_tail::args::Settings::from(&v10);
            v25 = v16;
            v26 = *((&v16 as &char + 8) as &i64);
            v27 = *((&v16 as &char + 16) as &i64);
            if v3 == 5 {
                return struct24 {
                    field_0: 5
                    field_8: v4
                    field_16: v5
                };
            }
            v9 = *((&v16 as &char + 72) as &i64);
            v8 = *((&v16 as &char + 56) as &i128);
            v7 = *((&v16 as &char + 40) as &i128);
            v6 = *((&v16 as &char + 24) as &i128);
            v3 = v25;
            v4 = v26;
            v5 = v27;
            if (v2 & -2) != 2 {
                v29 = v6;
                v30 = *((&v6 as &char + 8) as &i128);
                return struct80 {
                    field_0: v3
                    field_8: v4
                    field_16: v5
                    field_24: v29
                    field_32: v30
                    field_48: *((&v7 as &char + 8) as &i128)
                    field_64: *((&v8 as &char + 8) as &i128)
                };
            }
            v28 = v1;
        },
        Err(_) => {
            v4 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((&v15 as &char + 8) as &i64));
            v5 = v19;
            v3 = 5;
            v24 = v2;
            if (v24 & -2) != 2 {
                vvar_415{reg 64} = v6;
                vvar_416{reg 224} = *((&v6 as &char + 8) as &i128);
                return struct80 {
                    field_0: v3
                    field_8: v4
                    field_16: v5
                    field_24: v29
                    field_32: v30
                    field_48: *((&v7 as &char + 8) as &i128)
                    field_64: *((&v8 as &char + 8) as &i128)
                };
            }
            v28 = v1;
            if v23 == 0x8000000000000000 {
LABEL_4aa694:
                uu_tail::args::parse_obsolete();
                v33 = v16;
                v34 = *((&v16 as &char + 8) as &i64);
                v35 = *((&v16 as &char + 16) as &i64);
                if v33 == 6 {
                    return struct24 {
                        field_0: 5
                        field_8: v34
                        field_16: v35
                    };
                }
                v14 = *((&v16 as &char + 72) as &i64);
                v13 = *((&v16 as &char + 56) as &i128);
                v12 = *((&v16 as &char + 40) as &i128);
                v11 = *((&v16 as &char + 24) as &i128);
                if v33 as i32 == 5 {
                    v36 = v3;
                    v37 = v5;
                    v38 = *((&v6 as &char + 8) as &i128);
                    return struct80 {
                        field_0: v36
                        field_16: v37
                        field_32: v38
                        field_48: *((&v7 as &char + 8) as &i128)
                        field_64: *((&v8 as &char + 8) as &i128)
                    };
                }
                return struct80 {
                    field_0: v33
                    field_8: v34
                    field_16: v35
                    field_24: v11
                    field_40: v12
                    field_56: v13
                    field_72: v14
                };
            }
        },
    }
    v16 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v28 + 32) as &i64), *((v28 + 40) as &i64));
    v31 = *((&v16 as &char + 8) as &i64);
    v32 = *((&v16 as &char + 16) as &i64);
    v10 = 0;
    if !core::slice::<impl [T]>::starts_with(v31, v32, core::char::methods::encode_utf8_raw(&v10), v19) as i8 {
        vvar_406{reg 224} = v3;
        vvar_407{reg 256} = v5;
        vvar_408{reg 288} = *((&v6 as &char + 8) as &i128);
        return struct80 {
            field_0: v36
            field_16: v37
            field_32: v38
            field_48: *((&v7 as &char + 8) as &i128)
            field_64: *((&v8 as &char + 8) as &i128)
        };
    }
    v24 = v2;
    goto LABEL_4aa694;
}
