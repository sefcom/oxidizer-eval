fn uu_ptx::WordFilter::new(a1: i64, a2: &struct96) -> Result<struct122, struct24> {
    let a0: u64;  // rsi
    let v0: struct48;  // [bp-0x188], Other Possible Types: u8
    let v1: u64;  // [bp-0x188]
    let v2: alloc::string::String;  // [bp-0x188], Other Possible Types: struct24
    let v3: struct40;  // [bp-0x188]
    let v4: u64;  // [bp-0x180]
    let v6: u64;  // [bp-0x178]
    let v7: i8;  // [bp-0x170]
    let v8: u64;  // [bp-0x160]
    let v9: u128;  // [bp-0x158]
    let v10: struct48;  // [bp-0x148], Other Possible Types: struct64, u128
    let v11: Result<struct48, struct24>;  // [bp-0x148]
    let v12: Result<struct48, struct24>;  // [bp-0x148]
    let v13: Result<struct48, struct24>;  // [bp-0x148]
    let v14: struct48;  // [bp-0x148]
    let v15: alloc::string::String;  // [bp-0x148]
    let v16: u128;  // [bp-0x138]
    let v17: u128;  // [bp-0x128]
    let v18: u64;  // [bp-0x120]
    let v19: u128;  // [bp-0x108]
    let v20: u128;  // [bp-0x108]
    let v21: Result<struct24, struct24>;  // [bp-0x108], Other Possible Types: u64
    let v22: u64;  // [bp-0x100]
    let v23: u64;  // [bp-0xf8]
    let v24: u64;  // [bp-0xf8]
    let v25: u128;  // [bp-0xf0]
    let v26: u64;  // [bp-0xe0]
    let v27: Result<struct122, struct24>;  // [bp-0xd8]
    let v28: void*;  // [bp-0xc8], Other Possible Types: u128
    let v29: u64;  // [bp-0xc0]
    let v30: u128;  // [bp-0xb8]
    let v31: u64;  // [bp-0xb0]
    let v32: u128;  // [bp-0xa8]
    let v33: u64;  // [bp-0xa0]
    let v34: u64;  // [bp-0x98]
    let v35: u64;  // [bp-0x90]
    let v36: u64;  // [bp-0x88]
    let v37: u128;  // [bp-0x80]
    let v38: u64;  // [bp-0x70]
    let v39: u64;  // [bp-0x68]
    let v40: u64;  // [bp-0x60]
    let v41: u64;  // [bp-0x58]
    let v42: u128;  // [bp-0x50]
    let v43: u64;  // [bp-0x40]
    let v45: u8;  // al
    let v46: u64;  // r8
    let v48: u64;  // rax
    let v49: u64;  // rdx
    let v50: i64;  // rdi
    let v51: u8;  // al
    let v53: u64;  // rax
    let v54: u64;  // rdx
    let v55: i64;  // rdi
    let v56: u64;  // rax
    let v57: u64;  // rcx
    let v58: i64;  // rdi
    let v60: u128;  // xmm0
    let v61: u128;  // xmm1
    let v64: u128;  // xmm1
    let v65: u128;  // xmm2
    let v66: i64;  // rax
    let v70: u64;  // rax
    let v72: u128;  // xmm0
    let v73: u128;  // xmm1
    let v74: i64;  // rdi
    let v75: u128;  // xmm1
    let v76: u128;  // xmm2
    let v77: u64;  // [bp-0x168]

    v45 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a0, "only-file") as i8;
    if v45 {
        uu_ptx::read_word_filter_file(a0, "only-file", v46);
        v11 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
        match v11 {
            Err(_) => {
                *((v50 + 8) as &u64) = v48;
                *((v50 + 16) as &u64) = v49;
                *(v50 as &i64) = 0x8000000000000000;
                return;
            },
            Ok(_) => {
                v23 = v18;
                v19 = *((&v11 as &char + 24) as &i128) as u128;
            },
        }
    } else {
        <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(a0);
        v48 = v4;
        v49 = v6;
        v19 = *(&v7 as &i128);
        v23 = v8;
    }
    v34 = v1;
    v35 = v48;
    v36 = v49;
    v37 = v19;
    v38 = v23;
    v51 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a0, "ignore-file") as i8;
    if v51 {
        uu_ptx::read_word_filter_file(a0, "ignore-file", v46);
        v12 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v1);
        match v12 {
            Err(_) => {
                *((v55 + 8) as &u64) = v53;
                *((v55 + 16) as &u64) = v54;
                *(v55 as &i64) = 0x8000000000000000;
                return;
            },
            Ok(_) => {
                v23 = v18;
                v20 = *((&v12 as &char + 24) as &i128) as u128;
            },
        }
    } else {
        <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(a0);
        v53 = v4;
        v54 = v6;
        v20 = *(&v7 as &i128);
        v23 = v8;
    }
    v39 = v1;
    v40 = v53;
    v41 = v54;
    v42 = v20;
    v43 = v23;
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a0, "break-file") as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a0, "word-regexp") as i8 {
        uu_ptx::read_char_filter_file(a0, a1);
        v13 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v1);
        v56 = *((&v13 as &char + 8) as &i64);
        v57 = *((&v13 as &char + 16) as &i64);
        match v13 {
            Err(_) => {
                *((v58 + 8) as &u64) = v22;
                *((v58 + 16) as &u64) = v24;
                *(v58 as &i64) = 0x8000000000000000;
                return;
            },
            Ok(_) => {
                v26 = v18;
                v25 = *((&v13 as &char + 24) as &i128) as u128;
                v21 = v13 as i64;
                v22 = v56;
                v24 = v57;
                if *((a1 + 88) as &i8) {
                    v0 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
                    v60 = v0.field_0;
                    v61 = v0.field_16;
                    v17 = *(&v77 as &i128) as u128;
                    v16 = v61;
                    v10 = v60;
                } else {
                    v14 = <std::collections::hash::set::HashSet<T,S> as core::iter::traits::collect::FromIterator<T>>::from_iter();
                }
                v0 = struct48 {
                    field_0: *(&v21 as &i128)
                    field_16: *(&v24 as &i128)
                    field_32: *((&v25 as &char + 8) as &i128)
                };
                <hashbrown::set::HashSet<T,S,A> as core::iter::traits::collect::Extend<T>>::extend(&v10, &v0);
                v64 = v14.field_16;
                v65 = *(&v14.field_32 as &i128);
                v28 = v14.field_0;
                v30 = v64;
                v32 = v65;
            },
        }
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(a0, "word-regexp") as i8 {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(a0, "word-regexp", v46);
        v66 = clap_builder::parser::error::MatchesError::unwrap("word-regexp", &v1);
        if !v66 || !*((v66 + 16) as &i64) {
            goto LABEL_5b5d35;
        }
        v2 = <alloc::string::String as core::clone::Clone>::clone(v66);
    } else {
LABEL_5b5d35:
        if v28 {
            v10 = struct48 {
                field_0: v28
                field_8: *(&v29 as &i128)
                field_24: *(&v31 as &i128)
                field_40: v33
            };
            v3 = <hashbrown::map::HashMap<K,V,S,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v10);
            v10 = struct64 {
                field_0: v3.field_24
                field_16: v3.field_40
                field_32: *(&v0.field_32 as &i128)
                field_48: v9
            };
            v21 = <alloc::string::String as core::iter::traits::collect::FromIterator<alloc::string::String>>::from_iter(&v10);
            v15 = format!("[^{}]+", &v21);
        } else if *((a1 + 88) as &i8) {
            v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("\\w+");
        } else {
            v2 = <T as alloc::slice::hack::ConvertVec>::to_vec("[^ \t\n]+");
        }
    }
    v72 = *(&v34 as &i128);
    v73 = *(&v36 as &i128);
    *((v74 + 56) as &i128) = *((&v37 as &char + 8) as &i128);
    *((v74 + 40) as &u128) = v73;
    *((v74 + 24) as &u128) = v72;
    v75 = *(&v41 as &i128);
    v76 = *((&v42 as &char + 8) as &i128);
    *((v74 + 72) as &i128) = *(&v39 as &i128);
    *((v74 + 88) as &u128) = v75;
    *((v74 + 104) as &u128) = v76;
    *(v74 as &u64) = v70;
    *((v74 + 8) as &Result<struct122, struct24>) = v27;
    *((v74 + 120) as &u8) = v45;
    *((v74 + 121) as &u8) = v51;
    return;
}
