fn uu_chown::parse_gid_uid_and_filter(a0: i64, a1: u64) -> long long {
    let v0: i64;  // [bp-0x268]
    let v1: struct712;  // [bp-0x260]
    let v2: i32;  // [bp-0x25c]
    let v3: struct24;  // [bp-0x258]
    let v7: struct24;  // [bp-0x240]
    let v11: alloc::string::String;  // [bp-0x228], Other Possible Types: struct24, Result<struct40, struct16>
    let v12: struct20;  // [bp-0x228]
    let v13: struct20;  // [bp-0x228]
    let v14: u32;  // [bp-0x224]
    let v15: i64;  // [bp-0x220]
    let v16: u64;  // [bp-0x218]
    let v17: alloc::string::String;  // [bp-0x178]
    let v18: i64;  // [bp-0x170]
    let v19: u64;  // [bp-0x168]
    let v20: Result<struct176, struct24>;  // [bp-0x160]
    let v21: u32;  // [bp-0x124]
    let v22: Result<struct128, struct16>;  // [bp-0xb0]
    let v24: i64;  // rax
    let v25: i64;  // rcx
    let v26: u32;  // ebp
    let v27: u32;  // ebp
    let v28: i64;  // rax
    let v29: u64;  // rdx
    let v30: i64;  // r14
    let v31: u32;  // r13d
    let v32: alloc::string::String;  // rdx
    let v33: u32;  // eax
    let v34: u32;  // ecx
    let v35: u64;  // rax
    let v36: u64;  // r12

    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "from");
    v24 = clap_builder::parser::error::MatchesError::unwrap("from", &v11);
    if v24 {
        v12 = uu_chown::parse_spec(*((v24 + 8) as &i64), *((v24 + 16) as &i64), 58);
        if v12.field_0 == 1 {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: *(&v12.field_8 as &i128)
            };
        }
        v25 = v15;
        v26 = (v25 >> 32) as u32;
        v2 = v12.field_16 as i32;
        if !((&v12.field_0)[1] as i8 & 1) {
            goto LABEL_4608f5;
        }
        v0 = v25;
        v27 = (v26 & 1) * 2 + 1;
    } else {
LABEL_4608f5:
        v0 = v24;
    }
    v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "reference");
    v28 = clap_builder::parser::error::MatchesError::unwrap("reference", &v11);
    if v28 {
        v11 = std::fs::metadata(v28, v29);
        v20 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v11, *((v28 + 8) as &i64), *((v28 + 16) as &i64));
        match v20 {
            Err(_) => {
                return struct24 {
                    field_0: 0x8000000000000000
                    field_8: *((&v20 as &char + 8) as &i128)
                };
            },
            Ok(_) => {
                v30 = v21 as u64;
                v31 = *((&v20 as &char + 64) as &i32);
                v22 = <uucore::features::entries::Passwd as uucore::features::entries::Locate<u32>>::locate(v30 & 4294967295);
                if let Ok(_) = v22 {
                    v11 = uucore::features::entries::uid2usr::{{closure}}(&v22);
                    v32 = v15;
                    if v11.field_0 as i64 != 0x8000000000000000 {
                        goto LABEL_460ab0;
                    }
                }
                v3 = uu_chown::parse_gid_uid_and_filter::{{closure}}(v30 & 4294967295, v32);
LABEL_460ab0:
                v11 = <uucore::features::entries::Group as uucore::features::entries::Locate<u32>>::locate(v31 as u64);
                if let Err(_) = v11 {
                    v7 = uu_chown::parse_gid_uid_and_filter::{{closure}}(v31 as u64, v15);
                }
                v1 = v31;
                v17 = format!("{}:{}", &v3, &v7 as u8);
                v33 = 1;
                v34 = 1;
            },
        }
    } else {
        v11 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a1, "OWNER");
        v35 = clap_builder::parser::error::MatchesError::unwrap("OWNER", &v11);
        core::option::unwrap(v35);
        v11 = <alloc::string::String as core::clone::Clone>::clone(v35);
        v36 = v11.vec.buf.inner.cap.__0;
        v13 = uu_chown::parse_spec(v11, 58);
        if (v13.field_0 as i8 & 1) {
            return struct24 {
                field_0: 0x8000000000000000
                field_8: *(&v13.field_8 as &i128)
            };
        }
        v34 = v14;
        v30 = v15;
        v1 = v13.field_16 as i32;
        v33 = (v30 >> 32) as u32;
        v18 = v15;
        v19 = v16;
    }
    return struct56 {
        field_0: v36
        field_8: v18
        field_16: v19
        field_24: v33
        field_28: v1
        field_32: v34
        field_36: v30 as u32
        field_40: v27
        field_44: v0 as u32
        field_48: v2
    };
}
