fn uu_hostname::display_hostname(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i384;  // [sp-0x168], Other Possible Types: Result<struct32, struct16>, struct32, struct24, struct48
    let v1: i64;  // [sp-0x158]
    let v2: i64;  // [sp-0x138], Other Possible Types: Option<struct32>, struct24
    let v3: i64;  // [sp-0x130]
    let v4: i64;  // [sp-0x128]
    let v5: i128;  // [sp-0x118]
    let v6: i64;  // [sp-0x108]
    let v7: i192;  // [sp-0xf8], Other Possible Types: struct24
    let v8: i64;  // [sp-0xf0]
    let v9: i128;  // [sp-0xe8]
    let v10: i256;  // [sp-0xd8], Other Possible Types: struct24, Result<struct32, struct24>, struct16
    let v11: i64;  // [sp-0xd0]
    let v12: i128;  // [bp-0xc8]
    let v13: i128;  // [sp-0xb8]
    let v14: i64;  // [sp-0xa8], Other Possible Types: struct8, struct16
    let v15: i64;  // [sp-0xa0]
    let v16: i64;  // [sp-0x98]
    let v17: i192;  // [sp-0x90], Other Possible Types: struct24
    let v18: i64;  // [sp-0x78]
    let v19: i64;  // [sp-0x70]
    let v20: i64;  // [sp-0x68]
    let v21: i64;  // [sp-0x60]
    let v22: i128;  // [sp-0x58]
    let v23: i128;  // [sp-0x48]
    let v25: i128;  // xmm0
    let v26: i256;  // ymm0
    let v27: i256;  // ymm0
    let v28: i128;  // xmm0
    let v29: i64;  // rdx
    let v30: i64;  // rcx
    let v31: i64;  // r8
    let v32: i64;  // rax
    let v34: i64;  // rsi
    let v35: i64;  // rdx
    let v37: i64;  // rsi
    let v38: i32;  // edx
    let v39: i128;  // xmm0
    let v40: i128;  // xmm1
    let v41: i128;  // xmm0
    let v42: i256;  // ymm0
    let v43: i128;  // xmm1
    let v44: i256;  // ymm1
    let v45: i256;  // ymm1
    let v46: i64;  // r13
    let v47: i64;  // rax
    let v48: i64;  // rax
    let v49: i128;  // xmm0
    let v50: i128;  // xmm1
    let v51: i64;  // rdx
    let v52: i64;  // rdx
    let v53: i64;  // r14
    let v54: i64;  // rax

    v0 = hostname::get(a1, a2);
    v10 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
    if v2 == 0x8000000000000000 {
        return v32;
    }
    v2 = v10;
    v7 = std::sys::os_str::bytes::Slice::to_string_lossy(v3, v4);
    if v7 != 0x8000000000000000 {
        v6 = *((&v7 as &char + 16) as &i64);
        v25 = v7;
        v27 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25;
    } else {
        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v8, *((&v7 as &char + 16) as &i64));
        v6 = v1;
        v27 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0;
    }
    v5 = v25;
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "ip-address") as i8 {
        v1 = v6;
        v28 = v5;
        v0 = v28;
        v2 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v0);
        v0 = <alloc::string::String as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(&v2, v29, v30, v31);
        v10 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
        v32 = v11;
        if !v18 {
            return v32;
        }
        v18 = v10;
        v19 = v32;
        v20 = *((&v10 as &char + 16) as &i64);
        v21 = *((&v10 as &char + 24) as &i64);
        v0 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default(v37, v29);
        v39 = v0;
        v40 = *((&v0 as &char + 16) as &i128);
        v13 = *((&v0 as &char + 32) as &i128);
        v12 = v40;
        v10 = v39;
        v14 = 0;
        v15 = 1;
        v16 = 0;
        v41 = v18;
        v42 = v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v41;
        v43 = v20;
        v45 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43;
        v9 = v43;
        v7 = v41;
        v2 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v7);
        if v2 != 2 {
            do {
                v49 = v2;
                v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49;
                v50 = *((&v2 as &char + 16) as &i128);
                v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50;
                v23 = v50;
                v22 = v49;
                if !hashbrown::map::HashMap<K,V,S,A>::get_inner(&v10, &v22) {
                    v17 = <T as alloc::string::ToString>::to_string(&v22);
                    if core::slice::<impl [T]>::ends_with(*((&v17 as &char + 8) as &i64), *((&v17 as &char + 16) as &i64), ":1") as i8 {
                        alloc::string::String::truncate(&v17, *((&v17 as &char + 16) as &i64) - 2);
                    }
                    v14 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v17 as &char + 8) as &i64), *((&v17 as &char + 16) as &i64) + *((&v17 as &char + 8) as &i64)), v29);
                    v14 = alloc::string::String::push(0x20, v29);
                    v42 = v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22;
                    v45 = v45 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v23;
                    v0 = struct32 {
                        field_0: v26 as u128
                        field_16: v44 as u128
                    };
                    v10 = hashbrown::map::HashMap<K,V,S,A>::insert(&v0);
                }
            } while ((v2 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v7), v2 != 2));
        }
        v53 = v16;
        if v53 {
            v54 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v53 - 1, v15);
            if !v54 {
                core::str::slice_error_fail(); /* do not return */
            }
            v2 = v54;
            v3 = v29;
            println!("{:?}", &v2);
        }
    } else {
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "short") as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "domain") as i8 || (v10 = v5, v38 == 0x110000) {
            println!("{:?}", &v5);
            goto LABEL_4b0299;
        }
        v46 = core::iter::traits::iterator::Iterator::try_fold(&v10, v34, v35);
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "short") as i8 {
            v48 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v46 + 1, *((&v5 as &char + 8) as &i64), v6);
            if !v48 {
LABEL_4b02da:
                core::str::slice_error_fail(); /* do not return */
            }
            v2 = v48;
            v3 = v52;
            println!("{:?}", &v2);
        } else {
            v47 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v46, *((&v5 as &char + 8) as &i64));
            if !v47 {
                goto LABEL_4b02da;
            } else {
                v2 = v47;
                v3 = v51;
                println!("{:?}", &v2);
            }
        }
LABEL_4b0299:
    }
    return 0;
}
