fn uu_hostname::display_hostname(a0: u32) -> u64 {
    let v0: struct24;  // [sp-0x168], Other Possible Types: i192, struct32, Result<struct32, struct8>, struct48
    let v1: i64;  // [sp-0x158]
    let v2: i64;  // [sp-0x138], Other Possible Types: Option<struct32>, struct24
    let v3: i64;  // [sp-0x130]
    let v4: i64;  // [sp-0x128]
    let v5: i128;  // [sp-0x118]
    let v6: i8;  // [bp-0x110]
    let v7: i64;  // [sp-0x108]
    let v8: i64;  // [sp-0xf8], Other Possible Types: struct24, struct104
    let v9: i64;  // [sp-0xf0]
    let v10: i192;  // [sp-0xd8], Other Possible Types: Result<struct32, struct16>, struct24, struct16
    let v11: i64;  // [sp-0xd0]
    let v12: struct16;  // [sp-0xa8], Other Possible Types: struct8
    let v13: i64;  // [sp-0xa0]
    let v14: i64;  // [sp-0x98]
    let v15: struct24;  // [sp-0x90], Other Possible Types: i192
    let v16: i64;  // [sp-0x78]
    let v17: i8;  // [bp-0x68]
    let v18: i128;  // [sp-0x58]
    let v19: i128;  // [sp-0x48]
    let v23: i64;  // rax
    let v29: i256;  // ymm0
    let v30: i256;  // ymm0
    let v32: i256;  // ymm1
    let v33: i256;  // ymm1
    let v34: i32;  // edx
    let v35: i64;  // r13
    let v36: i128;  // xmm0
    let v37: i128;  // xmm1
    let v38: i64;  // rdx
    let v41: i64;  // rax
    let v42: i64;  // rax
    let v43: i64;  // r14
    let v44: i64;  // rdx
    let v45: i64;  // rdx

    v0 = hostname::get();
    v10 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
    v23 = v11;
    if v2 == 0x8000000000000000 {
        return v23;
    }
    v2 = v10;
    v8 = std::sys::os_str::bytes::Slice::to_string_lossy(v3, v4);
    if v8 != 0x8000000000000000 {
        v7 = *((&v8 as &char + 16) as &i64);
    } else {
        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v9, *((&v8 as &char + 16) as &i64));
        v7 = v1;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "ip-address") as i8 {
        v0 = struct24 {
            field_0: v24
            field_16: v7
        };
        v2 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v0);
        v0 = <alloc::string::String as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(&v2);
        v10 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
        if !v16 {
            v23 = v11;
            return v23;
        }
        v0 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
        v30 = ((v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v5) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v16;
        v33 = (v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v0 as &char + 16) as &i128)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v17;
        v8 = struct104 {
            field_0: v28
            field_16: v31
            field_32: v26
            field_48: v27
            field_64: *((&v0 as &char + 32) as &i128)
            field_80: 0
            field_88: 1
            field_96: 0
        };
        v2 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v8);
        match v2 {
            Some(_) => {
                do {
                    v36 = v2;
                    v30 = v30 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36 as u128 as u256;
                    v37 = *((&v2 as &char + 16) as &i128);
                    v33 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 as u128 as u256;
                    v19 = v37;
                    v18 = v36;
                    if !hashbrown::map::HashMap<K,V,S,A>::get_inner(&v8, &v18) {
                        v15 = <T as alloc::string::ToString>::to_string(&v18);
                        if core::slice::<impl [T]>::ends_with(*((&v15 as &char + 8) as &i64), *((&v15 as &char + 16) as &i64), ":1") as i8 {
                            alloc::string::String::truncate(&v15, *((&v15 as &char + 16) as &i64) - 2);
                        }
                        v12 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v15 as &char + 8) as &i64), *((&v15 as &char + 16) as &i64) + *((&v15 as &char + 8) as &i64)), v38);
                        v12 = alloc::string::String::push(0x20);
                        v30 = v30 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18 as u128 as u256;
                        v33 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v19 as u128 as u256;
                        v0 = struct32 {
                            field_0: v39
                            field_16: v40
                        };
                        v10 = hashbrown::map::HashMap<K,V,S,A>::insert(&v0);
                    }
                } while ((v2 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v8), v2 != 2));
            },
            None => {
                v43 = v14;
            },
        }
        if v43 {
            v2 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v43 - 1, v13, v43);
            v3 = v38;
            println!("{}", &v2);
        }
    } else if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "short") as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "domain") as i8 || (v10 = v6, v34 == 0x110000) {
        println!("{}", &<0x4afce0[is_48]|Stack bp-0x118, 1 B>);
    } else {
        v35 = core::iter::traits::iterator::Iterator::try_fold(&v10);
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "short") as i8 {
            v42 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v35 + 1, v6, v7);
            if v42 {
                v2 = v42;
                v3 = v45;
                println!("{}", &v2);
            }
        } else {
            v41 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v35, v6, v7);
            if v41 {
                v2 = v41;
                v3 = v44;
                println!("{}", &v2);
            }
        }
    }
    return 0;
}
