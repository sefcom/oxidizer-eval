fn uu_tail::args::parse_args(a0: &struct80, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [bp-0x400]
    let v1: i8;  // [bp-0x3f8]
    let v2: i8;  // [bp-0x3f0]
    let v3: i64;  // [sp-0x3e8], Other Possible Types: struct24
    let v4: i64;  // [sp-0x3e0]
    let v5: i64;  // [sp-0x3d8]
    let v10: iNone;  // [bp-0x398], Other Possible Types: unsigned int
    let v11: iNone;  // [sp-0x388]
    let v12: iNone;  // [sp-0x378]
    let v13: i64;  // [sp-0x368]
    let v14: iNone;  // [sp-0x358]
    let v15: iNone;  // [sp-0x348]
    let v16: iNone;  // [sp-0x338]
    let v17: i64;  // [sp-0x328]
    let v18: i8;  // [bp-0x320]
    let v19: i8;  // [bp-0x318]
    let v20: i8;  // [bp-0x310]
    let v21: i8;  // [bp-0x300]
    let v22: i8;  // [bp-0x2f0]
    let v23: struct712;  // [sp-0x2e8], Other Possible Types: struct24, Option<struct80>
    let v25: i64;  // r15
    let v26: i64;  // rdx
    let v27: i64;  // rcx
    let v28: i64;  // rax
    let v29: i64;  // r14
    let v32: i64;  // r15
    let v33: i64;  // r12
    let v34: i64;  // rdx
    let v35: i64;  // rdx

    core::iter::traits::iterator::Iterator::collect(&v0, a1, a2);
    v23 = uu_tail::args::uu_app();
    v3 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v0);
    clap_builder::builder::command::Command::try_get_matches_from(&v18, &v23, &v3);
    v25 = *(&v18 as &i64);
    if v25 != 0x8000000000000000 {
        v13 = *(&v22 as &i64);
        v12 = *(&v21 as &i128);
        v11 = *(&v20 as &i128);
        *(&v10 as &i128) = *(&v18 as &i128);
        uu_tail::args::Settings::from(&v23, &v10);
        if v3 != 5 {
            if (*(&v2 as &i64) & -2) == 2 {
                v28 = *(&v1 as &i64);
                v29 = v28 + 24;
            } else {
                return struct80 {
                    field_0: v3
                    field_8: v4
                    field_16: v5
                    field_24: v30
                    field_32: v31
                    field_48: *(&v8 as &i128)
                    field_64: *(&v9 as &i128)
                };
            }
        }
    } else {
        v4 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(&v19 as &i64));
        v5 = v26;
        v3 = 5;
        v27 = *(&v2 as &i64);
        if (v27 & -2) != 2 {
            return struct80 {
                field_0: v3
                field_8: v4
                field_16: v5
                field_24: v30
                field_32: v31
                field_48: *(&v8 as &i128)
                field_64: *(&v9 as &i128)
            };
        }
        v28 = *(&v1 as &i64);
        v29 = v28 + 24;
        if v25 == 0x8000000000000000 {
LABEL_4aa694:
            v34 = (3 <= v27 ? 0 : v28 + 48);
            v23 = uu_tail::args::parse_obsolete(v29, v34);
            v35 = v23 as i64;
            if v35 != 6 {
                v17 = *((&v23 as &char + 72) as &i64);
                v16 = *((&v23 as &char + 56) as &i128);
                v15 = *((&v23 as &char + 40) as &i128);
                v14 = *((&v23 as &char + 24) as &i128);
                if v35 as u32 == 5 {
                    return struct80 {
                        field_0: v36
                        field_16: v37
                        field_32: v38
                        field_48: *(&v8 as &i128)
                        field_64: *(&v9 as &i128)
                    };
                }
            }
        }
    }
    v23 = std::sys::os_str::bytes::Slice::to_string_lossy(*((v28 + 32) as &i64), *((v28 + 40) as &i64));
    v32 = v23.field_8;
    v33 = v23.field_16;
    *(&v10 as &i32) = 0;
    if !core::slice::<impl [T]>::starts_with(v32, v33, core::char::methods::encode_utf8_raw(&v10), v26) as i8 {
        return struct80 {
            field_0: v36
            field_16: v37
            field_32: v38
            field_48: *(&v8 as &i128)
            field_64: *(&v9 as &i128)
        };
    }
    v28 = *(&v1 as &i64);
    v27 = *(&v2 as &i64);
    goto LABEL_4aa694;
}
