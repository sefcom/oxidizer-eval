fn uu_tail::args::parse_args(a0: &struct80, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [bp-0x400]
    let v1: i8;  // [bp-0x3f8]
    let v2: i8;  // [bp-0x3f0]
    let v3: i192;  // [sp-0x3e8], Other Possible Types: struct24
    let v4: i64;  // [sp-0x3e0]
    let v5: i64;  // [sp-0x3d8]
    let v10: i32;  // [sp-0x398]
    let v11: i128;  // [sp-0x358]
    let v12: i128;  // [sp-0x348]
    let v13: i128;  // [sp-0x338]
    let v14: i64;  // [sp-0x328]
    let v15: i8;  // [bp-0x320]
    let v16: i8;  // [bp-0x318]
    let v17: i640;  // [sp-0x2e8], Other Possible Types: Option<struct80>, struct24, struct712, struct80
    let v19: i64;  // r15
    let v20: i64;  // rdx
    let v21: i64;  // rcx
    let v22: i64;  // rax
    let v23: i64;  // r14
    let v26: i64;  // r15
    let v27: i64;  // r12
    let v28: i64;  // rax
    let v29: i64;  // rdx

    core::iter::traits::iterator::Iterator::collect(&v0, a1, a2);
    v17 = uu_tail::args::uu_app();
    v3 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v0);
    clap_builder::builder::command::Command::try_get_matches_from(&v15, &v17, &v3);
    v19 = v15;
    if v19 != 0x8000000000000000 {
        v10 = v15;
        v17 = uu_tail::args::Settings::from(&v10);
        if v3 != 5 {
            if (v2 & -2) == 2 {
                v22 = v1;
                v23 = v22 + 24;
            } else {
                return struct80 {
                    field_0: v3
                    field_8: v4
                    field_16: v5
                    field_24: v24
                    field_32: v25
                    field_48: v8
                    field_64: v9
                };
            }
        }
    } else {
        v4 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
        v5 = v20;
        v3 = 5;
        v21 = v2;
        if (v21 & -2) != 2 {
            return struct80 {
                field_0: v3
                field_8: v4
                field_16: v5
                field_24: v24
                field_32: v25
                field_48: v8
                field_64: v9
            };
        }
        v22 = v1;
        v23 = v22 + 24;
        if v19 == 0x8000000000000000 {
LABEL_4aa694:
            v28 = v22 + 48;
            if 3 > v21 {
                v28 = 0;
            }
            v17 = uu_tail::args::parse_obsolete(v23, v28);
            v29 = v17;
            if v29 != 6 {
                v14 = *((&v17 as &char + 72) as &i64);
                v13 = *((&v17 as &char + 56) as &i128);
                v12 = *((&v17 as &char + 40) as &i128);
                v11 = *((&v17 as &char + 24) as &i128);
                if v29 == 5 {
                    return struct80 {
                        field_0: v30
                        field_16: v31
                        field_32: v32
                        field_48: v8
                        field_64: v9
                    };
                }
            }
        }
    }
    v17 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v22 + 32) as &i64), *((v22 + 40) as &i64));
    v26 = *((&v17 as &char + 8) as &i64);
    v27 = *((&v17 as &char + 16) as &i64);
    v10 = 0;
    if !core::slice::<impl [T]>::starts_with(v26, v27, core::char::methods::encode_utf8_raw(&v10), v20) as i8 {
        return struct80 {
            field_0: v30
            field_16: v31
            field_32: v32
            field_48: v8
            field_64: v9
        };
    }
    v22 = v1;
    v21 = v2;
    goto LABEL_4aa694;
}
