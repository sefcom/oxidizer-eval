fn uu_hostname::display_hostname(a0: i64) -> long long {
    let v0: core::result::Result<alloc::vec::into_iter::IntoIter<core::net::socket_addr::SocketAddr, alloc::alloc::Global>, std::io::error::Error>;  // [bp-0x168], Other Possible Types: u128
    let v1: struct24;  // [bp-0x168]
    let v2: u128;  // [bp-0x168]
    let v3: struct48;  // [bp-0x168]
    let v4: u64;  // [bp-0x158]
    let v5: u128;  // [bp-0x158]
    let v6: alloc::string::String;  // [bp-0x138], Other Possible Types: u64
    let v7: u64;  // [bp-0x138]
    let v8: Option<struct32>;  // [bp-0x138]
    let v9: u64;  // [bp-0x130]
    let v10: u64;  // [bp-0x128]
    let v11: u128;  // [bp-0x118]
    let v12: u64;  // [bp-0x110]
    let v13: u64;  // [bp-0x108]
    let v14: u128;  // [bp-0xf8]
    let v15: alloc::borrow::Cow<str>;  // [bp-0xf8]
    let v16: void*;  // [bp-0xf0]
    let v17: u128;  // [bp-0xe8]
    let v18: Result<struct32, struct24>;  // [bp-0xd8], Other Possible Types: struct24
    let v19: struct24;  // [bp-0xd8], Other Possible Types: u128
    let v20: u64;  // [bp-0xd0]
    let v21: u128;  // [bp-0xc8]
    let v22: u64;  // [bp-0xc0]
    let v23: u128;  // [bp-0xb8]
    let v24: void*;  // [bp-0xa8]
    let v25: u64;  // [bp-0xa0]
    let v26: void*;  // [bp-0x98]
    let v27: struct24;  // [bp-0x90]
    let v28: u64;  // [bp-0x88]
    let v29: u64;  // [bp-0x80]
    let v30: u64;  // [bp-0x78]
    let v31: u64;  // [bp-0x70]
    let v32: u64;  // [bp-0x68]
    let v33: u64;  // [bp-0x60]
    let v34: u128;  // [bp-0x58]
    let v35: u128;  // [bp-0x48]
    let v37: u128;  // xmm0
    let v38: u64;  // rdx
    let v39: u64;  // rcx
    let v40: u64;  // rax
    let v41: u32;  // edx
    let v42: u128;  // xmm0
    let v43: u64;  // r13
    let v46: u64;  // rcx
    let v47: core::option::Option<&str>;  // rax
    let v51: core::option::Option<&str>;  // rax
    let v52: u64;  // rdx
    let v54: u64;  // rdx
    let v56: u64;  // rdx
    let v61: &[u8];  // rax:rdx

    v0 = hostname::get();
    v19 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
    if v19.field_0 as i64 == 0x8000000000000000 {
        return v20;
    }
    v7 = v19.field_0;
    v9 = v20;
    v10 = v21;
    v15 = std::sys::os_str::bytes::Slice::to_string_lossy(v9, v21);
    if v15 as i64 == 0x8000000000000000 {
        v2 = <T as alloc::slice::hack::ConvertVec>::to_vec(v16, *((&v15 as &char + 16) as &i64));
        v13 = v4;
        v37 = v1.field_0;
    }
    v11 = v37;
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "ip-address") as i8 {
        v4 = v13;
        v2 = v11;
        v6 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v2, v38, v39);
        v0 = <alloc::string::String as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(&v6);
        v19 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
        match v19 as u704 {
            Err(_) => {
                return v20;
            },
            Ok(_) => {
                v30 = v18 as i64;
                v31 = v20;
                v32 = v21;
                v33 = v22;
                v0 as u384 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
                v42 = v3.field_0;
                v23 = *(&v3.field_32 as &i128);
                v21 = *(&v4 as &i128) as u128;
                v19 = v42;
                v24 = 0;
                v25 = 1;
                v26 = 0;
                v17 = *(&v32 as &i128);
                v14 = *(&v30 as &i128) as u128;
                v8 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v15);
                if let Some(_) = v8 {
                    do {
                        v35 = *((&v8 as &char + 16) as &i128);
                        v34 = v8 as i128;
                        if !hashbrown::map::HashMap<K,V,S,A>::get_inner(&v19 as u704, &v34, v52) {
                            v27 = <T as alloc::string::ToString>::to_string(&v34);
                            if core::slice::<impl [T]>::ends_with(v28, v29, ":1") as u8 {
                                alloc::string::String::truncate(&v27, v29 - 2);
                            }
                            v61 = core::slice::iter::Iter<T>::make_slice(v28);
                            alloc::vec::Vec<T,A>::append_elements(&v24, v61.ptr, v38);
                            alloc::string::String::push(&v24, 32);
                            v5 = v35;
                            v0 = v34;
                            hashbrown::map::HashMap<K,V,S,A>::insert(&v19 as u704, &v0 as u384, v38, v39);
                        }
                        v8 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v15);
                    } while (v8 as i16 != 2);
                }
            },
        }
    } else if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "short") as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "domain") as i8 || (v18 = struct24 {
    field_0: v12
    field_8: v13 + v12
    field_16: 0
}, v18 = struct24 {
    field_0: v12
    field_8: v13 + v12
    field_16: 0
}, v40 = core::iter::traits::iterator::Iterator::try_fold(&v18), v41 == 0x110000) {
        println!("{}", &v11 as u8);
    } else {
        v43 = core::iter::traits::iterator::Iterator::try_fold(&v18);
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "short") as i8 {
            v47 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v43, v12, v13, v46) as u64;
            v6 = v47;
            v9 = v54;
            println!("{}", &v6);
        } else {
            v51 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v43 + 1, v12, v13) as u64;
            v6 = v51;
            v9 = v56;
            println!("{}", &v6);
        }
    }
    return 0;
}
