fn uu_hostname::display_hostname(a0: u32) -> u64 {
    let v0: struct24;  // [sp-0x168], Other Possible Types: struct48, struct32, Result<struct32, struct8>
    let v1: i64;  // [sp-0x158]
    let v2: i64;  // [sp-0x138], Other Possible Types: struct24
    let v3: Option<struct32>;  // [sp-0x138], Other Possible Types: int
    let v4: i64;  // [sp-0x130]
    let v5: i64;  // [sp-0x128]
    let v6: iNone;  // [sp-0x118]
    let v7: i8;  // [bp-0x110]
    let v8: i64;  // [sp-0x108]
    let v9: struct16;  // [bp-0xf8], Other Possible Types: struct104, struct8
    let v10: i64;  // [sp-0xf8], Other Possible Types: struct24
    let v11: i64;  // [sp-0xf0]
    let v12: Result<struct32, struct16>;  // [sp-0xd8], Other Possible Types: struct24, int
    let v13: i64;  // [sp-0xd0]
    let v14: i64;  // [sp-0xa0]
    let v15: i64;  // [sp-0x98]
    let v16: struct24;  // [sp-0x90]
    let v17: i64;  // [sp-0x78]
    let v18: i8;  // [bp-0x68]
    let v19: iNone;  // [sp-0x58]
    let v20: iNone;  // [sp-0x48]
    let v22: i64;  // rax
    let v29: iNone;  // ymm0
    let v30: iNone;  // ymm0
    let v32: iNone;  // ymm1
    let v33: iNone;  // ymm1
    let v34: i32;  // edx
    let v35: i64;  // r13
    let v36: iNone;  // xmm0
    let v37: iNone;  // xmm1
    let v38: i64;  // rdx
    let v41: i64;  // rax
    let v42: i64;  // rax
    let v43: i64;  // r14
    let v44: i64;  // rdx
    let v45: i64;  // rdx

    v0 = hostname::get();
    v12 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
    v22 = v13;
    if v2 == 0x8000000000000000 {
        return v22;
    }
    v2 = v12;
    v10 = std::sys::os_str::bytes::Slice::to_string_lossy(v4, v5);
    if v10 != 0x8000000000000000 {
        v8 = v10.field_16;
    } else {
        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v11, v10.field_16);
        v8 = v1;
    }
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "ip-address") as i8 {
        v0 = struct24 {
            field_0: v24
            field_16: v8
        };
        v2 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v0);
        v0 = <alloc::string::String as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(&v2);
        v12 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
        v22 = v13;
        if !v17 {
            return v22;
        }
        v0 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
        v30 = ((v29 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v6 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0.field_0) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v17 as &i128);
        v33 = (v32 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0.field_16) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v18 as &i128);
        v9 = struct104 {
            field_0: v28
            field_16: v31
            field_32: v26
            field_48: v27
            field_64: *(&v0.field_32 as &i128)
            field_80: 0
            field_88: 1
            field_96: 0
        };
        v3 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v9);
        match v3 {
            Some(_) => {
                do {
                    v36 = v3 as i128;
                    v30 = v30 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36 as u256;
                    v37 = (&v3)[16] as i128;
                    v33 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37 as u256;
                    v20 = v37;
                    v19 = v36;
                    if !hashbrown::map::HashMap<K,V,S,A>::get_inner(&v9, &v19) {
                        v16 = <T as alloc::string::ToString>::to_string(&v19);
                        if core::slice::<impl [T]>::ends_with(*((&v16.field_0 as &char + 8) as &i64), v16.field_16, ":1") as i8 {
                            alloc::string::String::truncate(&v16, v16.field_16 - 2);
                        }
                        v9 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v16.field_0 as &char + 8) as &i64), v16.field_16 + *((&v16.field_0 as &char + 8) as &i64)), v38);
                        v9 = alloc::string::String::push(0x20);
                        v30 = v30 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v19 as u256;
                        v33 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20 as u256;
                        v0 = struct32 {
                            field_0: v39
                            field_16: v40
                        };
                        v9 = hashbrown::map::HashMap<K,V,S,A>::insert(&v0);
                    }
                } while ((v3 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v9), v3 as i16 != 2));
            },
            None => {
                v43 = v15;
            },
        }
        if v43 {
            v2 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v43 - 1, v14, v43);
            v4 = v38;
            println!("{}", &v2);
        }
    } else if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "short") as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "domain") as i8 || (v12 = *(&v7 as &i192), v34 == 0x110000) {
        println!("{}", &<0x4afce0[is_34]|Stack bp-0x118, 1 B>);
    } else {
        v35 = core::iter::traits::iterator::Iterator::try_fold(&v12);
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "short") as i8 {
            v42 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v35 + 1, *(&v7 as &i64), v8);
            if v42 {
                v2 = v42;
                v4 = v45;
                println!("{}", &v2);
            }
        } else {
            v41 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v35, *(&v7 as &i64), v8);
            if v41 {
                v2 = v41;
                v4 = v44;
                println!("{}", &v2);
            }
        }
    }
    return 0;
}
