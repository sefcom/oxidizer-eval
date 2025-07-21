fn uu_split::Settings::from(a1: &struct56, a2: i64) -> : struct168 {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x378]
    let v1: u32;  // [bp-0x24c]
    let v2: struct64;  // [bp-0x248], Other Possible Types: u128
    let v3: alloc::string::String;  // [bp-0x248], Other Possible Types: u192
    let v4: u128;  // [bp-0x248]
    let v5: u64;  // [bp-0x238]
    let v6: u128;  // [bp-0x238]
    let v7: u128;  // [bp-0x238]
    let v8: i8;  // [bp-0x228], Other Possible Types: u128
    let v9: i64;  // [bp-0x200]
    let v10: struct24;  // [bp-0x1f8], Other Possible Types: u128
    let v11: alloc::string::String;  // [bp-0x1f8]
    let v12: u128;  // [bp-0x1e8]
    let v13: u64;  // [bp-0x1d8]
    let v14: struct42;  // [bp-0x1c8], Other Possible Types: u64
    let v15: struct56;  // [bp-0x1c8]
    let v16: struct64;  // [bp-0x1c8]
    let v17: u64;  // [bp-0x1c8]
    let v18: struct32;  // [bp-0x1c8]
    let v19: i8;  // [bp-0x1c0], Other Possible Types: u64
    let v20: u128;  // [bp-0x1b8]
    let v21: u64;  // [bp-0x1b0]
    let v22: u64;  // [bp-0x1a8]
    let v23: u128;  // [bp-0x1a0]
    let v24: u64;  // [bp-0x190]
    let v25: u128;  // [bp-0x188]
    let v26: u128;  // [bp-0x178]
    let v27: u128;  // [bp-0x168]
    let v28: u128;  // [bp-0x158]
    let v29: u64;  // [bp-0x148]
    let v30: u128;  // [bp-0x140]
    let v31: u64;  // [bp-0x130]
    let v32: i8;  // [bp-0x128]
    let v33: u8;  // [bp-0x127]
    let v34: u8;  // [bp-0x126]
    let v35: u128;  // [bp-0x118]
    let v37: u64;  // [bp-0x108]
    let v38: u128;  // [bp-0xf8]
    let v39: u128;  // [bp-0xf0]
    let v40: u64;  // [bp-0xe8]
    let v41: u128;  // [bp-0xe0]
    let v42: u64;  // [bp-0xd0]
    let v43: u128;  // [bp-0xc8]
    let v44: struct24;  // [bp-0xc8]
    let v45: u64;  // [bp-0xb8]
    let v46: alloc::string::String;  // [bp-0xa8]
    let v47: u64;  // [bp-0x98]
    let v48: alloc::string::String;  // [bp-0x90]
    let v49: u64;  // [bp-0x80]
    let v50: struct24;  // [bp-0x78]
    let v51: Result<struct40, struct32>;  // [bp-0x58]
    let v52: u128;  // [bp-0x50]
    let v54: i64;  // rdi
    let v55: u64;  // rcx
    let v56: i64;  // rdi
    let v58: i64;  // rax
    let v59: u32;  // eax
    let v60: u64;  // rcx
    let v62: u64;  // r12
    let v63: i64;  // rdi
    let v64: i64;  // r15
    let v65: u64;  // r15
    let v66: u64;  // rax
    let v67: i64;  // rdi
    let v69: u64;  // rax
    let v70: u64;  // rax
    let v71: u8;  // al
    let v72: u8;  // al
    let v73: u64;  // rax
    let v74: u64;  // cc_ndep
    let v75: u64;  // rdi
    let v76: i64;  // rdi

    v51 = uu_split::strategy::Strategy::from(a0, a1);
    match v51 {
        Err(_) => {
            v5 = *((&v51 as &char + 24) as &i64);
            v7 = v6 & 0xffffffffffffffff0000000000000000 | v5 as u128;
            v4 = v52;
        },
        Ok(_) => {
            core::ops::function::FnOnce::call_once(&v14, &v51);
            v4 = *(&v19 as &i128);
            v5 = v21;
            v7 = v6 & 0xffffffffffffffff0000000000000000 | v5 as u128;
            if v14 != 9 {
                v40 = v6;
                v38 = v4;
                *((v54 + 32) as &u64) = v6;
                *((v54 + 16) as &u128) = v4;
                *((v54 + 8) as &u64) = v14;
                *((v54 + 40) as &u64) = v22;
                *(v54 as &i64) = 2;
                return;
            }
        },
    }
    vvar_748{stack -456} = struct42 OrderedDict({0: 𝜙@64b [((5026702, None), None), ((5026751, None), vvar_632{stack -456})], 24: 𝜙@64b [((5026702, None), None), ((5026751, None), vvar_635{stack -432})]})
    v43 = v4;
    v45 = v5;
    v50 = v44;
    uu_split::filenames::Suffix::from(&v14, a0, &v50);
    if v14.field_0 as i64 == 0x8000000000000000 {
        core::ops::function::FnOnce::call_once(&v4, &v14 as u64);
        v13 = *(&v8 as &i64);
        v12 = v7;
        v10 = v4;
        *((v56 + 40) as &i64) = *(&v8 as &i64);
        *((v56 + 24) as &u128) = v7;
        *((v56 + 8) as &u128) = v4;
        *(v56 as &i64) = 2;
        return;
    }
    v55 = *(&v14.field_40 as &i64);
    v12 = *(&v14.field_24 as &i128);
    v39 = *(&v14 as u64 as &i128);
    v41 = v12;
    v42 = v55;
    v38 = v14.field_0;
    v15 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a0, "separator");
    clap_builder::parser::error::MatchesError::unwrap(&v4, "separator", &v15);
    if v4 as i64 {
        v16 = v2;
        v58 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v16);
        if !v58 {
            core::option::unwrap_failed(); /* do not return */
        }
        v9 = v58;
        if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v16, &v9), a0) {
            if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((v9 + 8) as &i64), *((v9 + 16) as &i64), "\\0") as i8) {
                goto LABEL_4cb5f5;
            }
            if v62 == 1 {
                goto LABEL_4cb5f1;
            }
            v10 = <T as alloc::slice::hack::ConvertVec>::to_vec(*((v9 + 8) as &i64), *((v9 + 16) as &i64));
            *((v63 + 32) as &u64) = v10.field_16;
            *((v63 + 16) as &u128) = v10.field_0;
        }
        *((v63 + 8) as &u64) = v60;
        *(v63 as &i64) = 2;
        return;
    } else {
LABEL_4cb5f1:
        v1 = v59;
LABEL_4cb5f5:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v17, a0, "-io-blksize");
        v64 = clap_builder::parser::error::MatchesError::unwrap("-io-blksize", &v17);
        if v64 {
            v18 = uucore::parser::parse_size::parse_size_u64(*((v64 + 8) as &i64), *((v64 + 16) as &i64));
            if v18.field_0 as i32 == 3 {
                v62 = v19;
                if !v19 {
                    v3 = <alloc::string::String as core::clone::Clone>::clone(v64);
                    *((v67 + 32) as &u64) = v5;
                    *((v67 + 16) as &i128) = v3;
                    *((v67 + 8) as &i64) = 8;
                    *(v67 as &i64) = 2;
                    return;
                }
                if v19 < 536870913 {
                    goto LABEL_4cb697;
                }
            }
            v3 = <alloc::string::String as core::clone::Clone>::clone(v64);
            *((v67 + 32) as &u64) = v5;
            *((v67 + 16) as &i128) = v3;
            *((v67 + 8) as &i64) = 8;
            *(v67 as &i64) = 2;
            return;
        } else {
LABEL_4cb697:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v4, a0, "prefix");
            v66 = clap_builder::parser::error::MatchesError::unwrap("prefix", &v4);
            if !v66 {
                core::option::unwrap_failed(); /* do not return */
            }
            v46 = <alloc::string::String as core::clone::Clone>::clone(v66);
            v8 = *((&v41 as &char + 8) as &i128);
            v5 = *((&v39 as &char + 8) as &i128);
            v2 = *(&v38 as &i128);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v10 as u8, a0, "input");
            v69 = clap_builder::parser::error::MatchesError::unwrap("input", &v10 as u8);
            if !v69 {
                core::option::unwrap_failed(); /* do not return */
            }
            v48 = <alloc::string::String as core::clone::Clone>::clone(v69);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v10 as u8, a0, "filter");
            v70 = clap_builder::parser::error::MatchesError::unwrap("filter", &v10 as u8);
            if v70 {
                v11 = <alloc::string::String as core::clone::Clone>::clone(v70);
            }
            v71 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(a0, "verbose") as i32;
            v72 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "elide-empty-files") as i8;
            v24 = v47;
            v23 = *(&v46.vec.buf.cap as &i128);
            v25 = v2;
            v26 = v5;
            v27 = v8;
            v28 = *(&v48.vec.buf.cap as &i128);
            v29 = v49;
            v30 = v35;
            v31 = v37;
            v22 = v45;
            v20 = v43;
            v32 = v71 == 2;
            v34 = v1;
            v33 = v72;
            v14 = v65;
            v19 = v62;
            v73 = v20;
            if v73 <= 5 && amd64g_calculate_condition(6, 8, v73, 5, v74) as char {
                v0 = 42;
                if (*((&v0 + ((v73 & 63) >> 3)) as &i8) >> (v73 & 63 & 7) & 1) && v30 as i64 != 0x8000000000000000 {
                    *((v76 + 8) as &i64) = 7;
                    *(v76 as &i64) = 2;
                    return;
                }
            }
            memcpy(v75, &v14, 168);
            return;
        }
    }
}
