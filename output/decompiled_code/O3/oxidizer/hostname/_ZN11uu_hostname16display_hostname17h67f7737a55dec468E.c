fn uu_hostname::display_hostname(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i192;  // [sp-0x168], Other Possible Types: Result<struct24, struct16>, struct24, struct32, struct48
    let v1: i64;  // [sp-0x138], Other Possible Types: Option<struct32>, struct24
    let v2: i64;  // [sp-0x130]
    let v3: i64;  // [sp-0x128]
    let v4: i128;  // [sp-0x118]
    let v5: i64;  // [sp-0x108]
    let v6: i64;  // [sp-0xf8], Other Possible Types: struct24
    let v7: i128;  // [sp-0xd8], Other Possible Types: struct24, struct16, Result<struct32, struct24>
    let v8: i64;  // [sp-0xd0]
    let v9: i128;  // [bp-0xc8]
    let v10: i128;  // [sp-0xb8]
    let v11: struct16;  // [sp-0xa8], Other Possible Types: i64, struct8
    let v12: i64;  // [sp-0xa0]
    let v13: i64;  // [sp-0x98]
    let v14: i192;  // [sp-0x90], Other Possible Types: struct24
    let v15: i64;  // [sp-0x78]
    let v16: i64;  // [sp-0x70]
    let v17: i64;  // [sp-0x68]
    let v18: i64;  // [sp-0x60]
    let v19: i128;  // [sp-0x58]
    let v20: i128;  // [sp-0x48]
    let v22: i64;  // rax
    let v23: i128;  // xmm0
    let v24: i256;  // ymm0
    let v25: i256;  // ymm0
    let v26: i128;  // xmm0
    let v27: i64;  // rdx
    let v28: i64;  // rcx
    let v29: i64;  // r8
    let v31: i64;  // rsi
    let v32: i64;  // rdx
    let v34: i64;  // rsi
    let v35: i32;  // edx
    let v36: i128;  // xmm0
    let v37: i128;  // xmm1
    let v38: i128;  // xmm0
    let v39: i256;  // ymm0
    let v41: i256;  // ymm1
    let v42: i256;  // ymm1
    let v43: i64;  // r13
    let v44: i64;  // rax
    let v45: i64;  // rax
    let v46: i128;  // xmm0
    let v47: i128;  // xmm1
    let v48: i64;  // rdx
    let v49: i64;  // rdx
    let v50: i64;  // r14
    let v51: i64;  // rax

    v0 = hostname::get(a1, a2);
    v7 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
    v22 = v7.8;
    if v1 == 0x8000000000000000 {
        return v22;
    }
    v1 = v7;
    v6 = std::sys::os_str::bytes::Slice::to_string_lossy(v2, v3);
    if v6 != 0x8000000000000000 {
        v5 = *((&v6 as &char + 16) as &i64);
        v23 = v6;
        v25 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23;
    } else {
        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v6.field_8, *((&v6 as &char + 16) as &i64));
        v5 = v0.field_16;
        v25 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0;
    }
    v4 = v23;
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "ip-address") as i8 {
        v0.field_16 = vvar_606{stack -264};
        v26 = v4;
        v0 = v26;
        v1 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v0);
        v0 = <alloc::string::String as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(&v1, v27, v28, v29);
        v7 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
        v22 = v8;
        if !v15 {
            return v22;
        }
        v15 = v7;
        v16 = v22;
        v17 = *((&v7 as &char + 16) as &i64);
        v18 = *((&v7 as &char + 24) as &i64);
        v0 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v34, v27);
        v36 = v0;
        v37 = *((&v0 as &char + 16) as &i128);
        v10 = *((&v0 as &char + 32) as &i128);
        v9 = v37;
        v7 = v36;
        v11 = 0;
        v12 = 1;
        v13 = 0;
        v38 = v15;
        v39 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38;
        v42 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v17;
        v6.field_16 = vvar_296{reg 256};
        v6 = v38;
        v1 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v6);
        if v1 != 2 {
            do {
                v46 = v1;
                v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46;
                v47 = *((&v1 as &char + 16) as &i128);
                v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
                v20 = v47;
                v19 = v46;
                if !hashbrown::map::HashMap<K,V,S,A>::get_inner(&v7, &v19) {
                    v14 = <T as alloc::string::ToString>::to_string(&v19);
                    if core::slice::<impl [T]>::ends_with(*((&v14 as &char + 8) as &i64), *((&v14 as &char + 16) as &i64), ":1") as i8 {
                        alloc::string::String::truncate(&v14, *((&v14 as &char + 16) as &i64) - 2);
                    }
                    v11 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v14 as &char + 8) as &i64), *((&v14 as &char + 16) as &i64) + *((&v14 as &char + 8) as &i64)), v27);
                    v11 = alloc::string::String::push(32, v27);
                    v39 = v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v19;
                    v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20;
                    v0 = struct32 {
                        field_0: v24 as u128
                        field_16: v41 as u128
                    };
                    v7 = hashbrown::map::HashMap<K,V,S,A>::insert(&v0);
                }
            } while ((v1 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v6), v1 != 2));
        }
        v50 = v13;
        if v50 {
            v51 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v50 - 1, v11.field_8);
            if !v51 {
                core::str::slice_error_fail(); /* do not return */
            }
            v1 = v51;
            v2 = v27;
            println!("{:?}", &v1);
        }
    } else {
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "short") as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "domain") as i8 || (v7 = v4, v35 == 0x110000) {
            println!("{:?}", &v4);
            goto LABEL_4b0679;
        }
        v43 = core::iter::traits::iterator::Iterator::try_fold(&v7, v31, v32);
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "short") as i8 {
            v45 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v43 + 1, *((&v4 as &char + 8) as &i64), v5);
            if !v45 {
LABEL_4b06ba:
                core::str::slice_error_fail(); /* do not return */
            }
            v1 = v45;
            v2 = v49;
            println!("{:?}", &v1);
        } else {
            v44 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v43, *((&v4 as &char + 8) as &i64));
            if !v44 {
                goto LABEL_4b06ba;
            } else {
                v1 = v44;
                v2 = v48;
                println!("{:?}", &v1);
            }
        }
LABEL_4b0679:
    }
    return 0;
}
