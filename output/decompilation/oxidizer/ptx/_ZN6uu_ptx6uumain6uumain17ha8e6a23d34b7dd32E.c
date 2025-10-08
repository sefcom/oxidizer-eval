fn uu_ptx::uumain::uumain(a0: i64, a1: i64) -> u64 {
    let v0: struct16;  // [bp-0x578], Other Possible Types: u64
    let v1: i64;  // [bp-0x570]
    let v2: u64;  // [bp-0x568]
    let v3: Option<struct24>;  // [bp-0x558], Other Possible Types: Result<struct48, struct24>, u8
    let v4: struct16;  // [bp-0x558]
    let v5: u64;  // [bp-0x550]
    let v6: u64;  // [bp-0x548]
    let v7: u128;  // [bp-0x540]
    let v8: u64;  // [bp-0x530]
    let v9: void*;  // [bp-0x528], Other Possible Types: struct16, struct24, Option<struct24>
    let v10: struct56;  // [bp-0x528], Other Possible Types: struct64
    let v11: u64;  // [bp-0x528]
    let v12: u64;  // [bp-0x520]
    let v13: u64;  // [bp-0x520]
    let v14: u64;  // [bp-0x518]
    let v15: u8;  // [bp-0x510]
    let v16: iNone;  // [bp-0x500]
    let v17: iNone;  // [bp-0x4f0]
    let v18: iNone;  // [bp-0x4e0]
    let v19: iNone;  // [bp-0x4d0]
    let v20: iNone;  // [bp-0x4c0]
    let v21: u64;  // [bp-0x4b0]
    let v22: struct48;  // [bp-0x4a8]
    let v23: struct56;  // [bp-0x478]
    let v24: u64;  // [bp-0x470]
    let v25: u64;  // [bp-0x440]
    let v26: u64;  // [bp-0x438]
    let v27: u64;  // [bp-0x430]
    let v28: iNone;  // [bp-0x428]
    let v29: iNone;  // [bp-0x418]
    let v30: iNone;  // [bp-0x408]
    let v31: iNone;  // [bp-0x3f8]
    let v32: u64;  // [bp-0x3e8]
    let v33: alloc::string::String;  // [bp-0x3e0]
    let v34: u64;  // [bp-0x3d0]
    let v35: struct28;  // [bp-0x3c8], Other Possible Types: struct56, struct712, struct8, struct24
    let v36: struct122;  // [bp-0x3c8], Other Possible Types: struct24
    let v37: Result<struct96, struct24>;  // [bp-0x3c8]
    let v38: u64;  // [bp-0x3c0]
    let v39: u64;  // [bp-0x3c0]
    let v40: u64;  // [bp-0x3b8]
    let v41: u64;  // [bp-0x3b8]
    let v42: iNone;  // [bp-0x3a0]
    let v43: iNone;  // [bp-0x390]
    let v44: iNone;  // [bp-0x380]
    let v45: u128;  // [bp-0x370]
    let v46: iNone;  // [bp-0x360]
    let v47: u64;  // [bp-0xf8]
    let v48: iNone;  // [bp-0xf0]
    let v49: iNone;  // [bp-0xe0]
    let v50: iNone;  // [bp-0xd0]
    let v51: iNone;  // [bp-0xc0]
    let v52: void*;  // [bp-0xb0]
    let v53: void*;  // [bp-0x70]
    let v55: u64;  // rdi
    let v56: u64;  // r15
    let v57: u64;  // r13
    let v59: i64;  // rbx
    let v60: u128;  // xmm0

    v35 = uu_ptx::uu_app();
    v9 = clap_builder::builder::command::Command::try_get_matches_from(&v35, a0, a1);
    v55 = v12;
    if (((0 ^ v9.field_0) & (0 ^ -(v11))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24);
    }
    v23 = v10;
    v37 = uu_ptx::get_config(&v23);
    v56 = v12;
    if let Err(_) = v37 {
        return v56;
    }
    v32 = *((&v37 as &char + 88) as &i64);
    v31 = v44;
    v30 = v43;
    v29 = v42;
    v28 = *((&v37 as &char + 24) as &i128);
    v25 = v37 as i64;
    v26 = v56;
    v27 = v40;
    v35 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v23, _ZN6uu_ptx7options4FILE17h5148080f63805a6cE.field_0, g_651e38.field_0);
    v10 = clap_builder::parser::error::MatchesError::unwrap(_ZN6uu_ptx7options4FILE17h5148080f63805a6cE.field_0, g_651e38.field_0, &v35);
    v48 = v10.field_0;
    v49 = v10.field_16;
    v50 = v10.field_32;
    v51 = v10.field_48;
    v47 = 1;
    v52 = 0;
    v53 = 0;
    if v32 as i8 {
        core::iter::traits::iterator::Iterator::collect(&v3, &v47);
        if !v6 {
            v35 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-");
            v9 = v36;
            v4 = alloc::vec::Vec<T,A>::push(&v9);
        }
        v2 = v6;
        *(&v0.field_0 as &i128) = *(&v4.field_0 as &i128);
        v35 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-");
        v57 = v40;
LABEL_51b73d:
        vvar_689{stack -968} = struct122 OrderedDict([(0, 𝜙@64b [((5354985, None), vvar_538{stack -968}), ((5355301, None), vvar_559{stack -968})]), (8, 𝜙@64b [((5354985, None), vvar_543{stack -960}), ((5355301, None), vvar_560{stack -960})])])
        uu_ptx::WordFilter::new(&v36, &v23, &v25);
        v56 = v39;
        if v36.field_0 != 0x8000000000000000 {
            v21 = *(&v36.field_120 as &i64);
            v20 = v46;
            v19 = v45;
            v60 = v36.field_24;
            v18 = v44;
            v17 = v43;
            v16 = v42;
            v15 = v60;
            v3 as u64 = v36.field_0;
            v13 = v56;
            v14 = v40;
            v35 = uu_ptx::read_input(v1, v2);
            v3 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v35);
            v56 = v5;
            if let Ok(_) = v3 {
                v22 = struct48 {
                    field_0: v3 as i64
                    field_8: v56
                    field_16: v6
                    field_24: v7
                    field_40: v8
                };
                uu_ptx::create_word_set(&v35, &v25, &v3 as u64, &v22);
                v56 = uu_ptx::write_traditional_output(&v25, &v22, &v35, v12, v57);
            }
        }
    } else {
        v59 = alloc::alloc::Global::alloc_impl(8, 24);
        v9 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v47);
        v35 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-");
        match v9 {
            None => {
                v41 = v40;
                v38 = v12;
            },
            Some(_) => {
                v14 = v41;
                v38 = v12;
            },
        }
        *(v59 as &u64) = v11;
        *((v59 + 8) as &u64) = v38;
        *((v59 + 16) as &u64) = v41;
        v0 = 1;
        v1 = v59;
        v2 = 1;
        v9 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v47);
        v35 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-");
        match v9 {
            None => {
                v57 = v40;
            },
            Some(_) => {
                v57 = v14;
            },
        }
        v3 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v47);
        if let None = v3 {
            goto LABEL_51b73d;
        }
        v9 = 0;
        v12 = v5;
        v14 = v6;
        v15 = 1;
        v33 = format!("extra operand {}", &v9);
        v35 = struct28 {
            field_0: *(&v33.vec.buf.inner.cap as &i128)
            field_16: v34
            field_24: 1
        };
        v56 = alloc::boxed::Box<T>::new(&v35) as u64;
    }
    return v56;
}
