fn uu_tail::args::parse_args(a0: u32, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i8;  // [bp-0x400]
    let v1: i8;  // [bp-0x3f8]
    let v2: i8;  // [bp-0x3f0]
    let v3: i192;  // [sp-0x3e8], Other Possible Types: struct24
    let v6: i128;  // [sp-0x3d0]
    let v7: i128;  // [sp-0x3c0]
    let v8: i128;  // [sp-0x3b0]
    let v9: i64;  // [sp-0x3a0]
    let v10: i32;  // [bp-0x398], Other Possible Types: struct56
    let v11: i128;  // [sp-0x358]
    let v12: i128;  // [sp-0x348]
    let v13: i128;  // [sp-0x338]
    let v14: i64;  // [sp-0x328]
    let v15: i8;  // [bp-0x320]
    let v19: i640;  // [sp-0x2e8], Other Possible Types: struct80, struct24, struct712
    let v21: i64;  // rsi
    let v22: i64;  // rdx
    let v23: i64;  // rcx
    let v24: i64;  // r15
    let v25: i64;  // rcx
    let v26: i64;  // rdx
    let v27: i64;  // rax
    let v28: i64;  // rcx
    let v29: i64;  // rax
    let v30: i64;  // rsi
    let v31: i128;  // xmm0
    let v32: i64;  // r15
    let v33: i64;  // r12
    let v34: i64;  // rdx
    let v35: i64;  // rax
    let v36: i64;  // rcx
    let v37: i128;  // xmm0
    let v38: i128;  // xmm1
    let v39: i128;  // xmm2

    core::iter::traits::iterator::Iterator::collect(&v0, a1, a2);
    v19 = uu_tail::args::uu_app(v21, v22);
    v3 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v0);
    clap_builder::builder::command::Command::try_get_matches_from(&v15, &v19, &v3, v23);
    v24 = v15;
    if v24 != 0x8000000000000000 {
        v10 = struct56 {
            field_0: v15
            field_16: v16
            field_32: v17
            field_48: v18
        };
        v19 = uu_tail::args::Settings::from(&v10);
        v26 = v19;
        v27 = *((&v19 as &char + 8) as &i64);
        v28 = *((&v19 as &char + 16) as &i64);
        if v3 == 5 {
            return struct24 {
                field_0: 5
                field_8: v3.field_8
                field_16: v3.field_16
            };
        }
        v9 = *((&v19 as &char + 72) as &i64);
        v8 = *((&v19 as &char + 56) as &i128);
        v7 = *((&v19 as &char + 40) as &i128);
        v6 = *((&v19 as &char + 24) as &i128);
        v3 = v26;
        v3.field_8 = vvar_145{reg 16};
        v3.field_16 = vvar_146{reg 24};
        if (v2 & -2) != 2 {
            v30 = v6;
            v31 = *((&v6 as &char + 8) as &i128);
            return struct80 {
                field_0: v3
                field_8: v4
                field_16: v5
                field_24: v30
                field_32: v31
                field_48: *((&v7 as &char + 8) as &i128)
                field_64: *((&v8 as &char + 8) as &i128)
            };
        }
        v29 = v1;
    } else {
        v3.field_8 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from((stack_base)[792] as i64);
        v3.field_16 = vvar_137{reg 32};
        v3 = 5;
        v25 = v2;
        if (v25 & -2) != 2 {
            vvar_410{reg 64} = v6;
            vvar_411{reg 224} = *((&v6 as &char + 8) as &i128);
            return struct80 {
                field_0: v3
                field_8: v4
                field_16: v5
                field_24: v30
                field_32: v31
                field_48: *((&v7 as &char + 8) as &i128)
                field_64: *((&v8 as &char + 8) as &i128)
            };
        }
        v29 = v1;
        if v24 == 0x8000000000000000 {
LABEL_4ab5c4:
            uu_tail::args::parse_obsolete();
            v34 = v19;
            v35 = *((&v19 as &char + 8) as &i64);
            v36 = *((&v19 as &char + 16) as &i64);
            if v34 == 6 {
                return struct24 {
                    field_0: 5
                    field_8: v35
                    field_16: v36
                };
            }
            v14 = *((&v19 as &char + 72) as &i64);
            v13 = *((&v19 as &char + 56) as &i128);
            v12 = *((&v19 as &char + 40) as &i128);
            v11 = *((&v19 as &char + 24) as &i128);
            if v34 == 5 {
                v37 = v3;
                v38 = *((&v3 as &char + 16) as &i128);
                v39 = *((&v6 as &char + 8) as &i128);
                return struct80 {
                    field_0: v37
                    field_16: v38
                    field_32: v39
                    field_48: *((&v7 as &char + 8) as &i128)
                    field_64: *((&v8 as &char + 8) as &i128)
                };
            }
            return struct80 {
                field_0: v34
                field_8: v35
                field_16: v36
                field_24: v11
                field_40: v12
                field_56: v13
                field_72: v14
            };
        }
    }
    v19 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v29 + 32) as &i64), *((v29 + 40) as &i64));
    v32 = *((&v19 as &char + 8) as &i64);
    v33 = *((&v19 as &char + 16) as &i64);
    v10 = 0;
    if !core::slice::<impl [T]>::starts_with(v32, v33, core::char::methods::encode_utf8_raw(&v10), v22) as i8 {
        vvar_401{reg 224} = v3;
        vvar_402{reg 256} = *((&v3 as &char + 16) as &i128);
        vvar_403{reg 288} = *((&v6 as &char + 8) as &i128);
        return struct80 {
            field_0: v37
            field_16: v38
            field_32: v39
            field_48: *((&v7 as &char + 8) as &i128)
            field_64: *((&v8 as &char + 8) as &i128)
        };
    }
    v25 = v2;
    goto LABEL_4ab5c4;
}
