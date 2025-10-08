fn uu_hostname::display_hostname(a0: i64) -> u64 {
    let v0: struct32;  // [bp-0x168], Other Possible Types: core::result::Result<alloc::vec::into_iter::IntoIter<core::net::socket_addr::SocketAddr, alloc::alloc::Global>, std::io::error::Error>
    let v1: u128;  // [bp-0x168]
    let v2: struct48;  // [bp-0x168]
    let v3: struct24;  // [bp-0x168]
    let v4: u64;  // [bp-0x158]
    let v5: Result<struct24, struct24>;  // [bp-0x138], Other Possible Types: alloc::string::String, Option<struct32>, u64
    let v6: struct32;  // [bp-0x138]
    let v7: void*;  // [bp-0x130], Other Possible Types: u64
    let v8: iNone;  // [bp-0x118]
    let v9: u64;  // [bp-0x110]
    let v10: u64;  // [bp-0x108]
    let v11: Result<struct32, struct24>;  // [bp-0xf8], Other Possible Types: struct24, u64
    let v12: struct24;  // [bp-0xf8], Other Possible Types: u64
    let v13: struct16;  // [bp-0xf8]
    let v14: u64;  // [bp-0xf0]
    let v15: u64;  // [bp-0xe8]
    let v16: u64;  // [bp-0xe0]
    let v17: iNone;  // [bp-0xd8]
    let v18: u128;  // [bp-0xc8]
    let v19: iNone;  // [bp-0xb8]
    let v20: void*;  // [bp-0xa8]
    let v21: u64;  // [bp-0xa0]
    let v22: void*;  // [bp-0x98]
    let v23: struct24;  // [bp-0x90], Other Possible Types: struct8
    let v24: u64;  // [bp-0x88]
    let v25: u64;  // [bp-0x88]
    let v26: u64;  // [bp-0x80]
    let v27: u64;  // [bp-0x80]
    let v28: u64;  // [bp-0x78]
    let v29: u64;  // [bp-0x70]
    let v30: u64;  // [bp-0x68]
    let v31: u64;  // [bp-0x60]
    let v32: struct32;  // [bp-0x58]
    let v33: struct32;  // [bp-0x58]
    let v35: iNone;  // xmm0
    let v36: u64;  // rdx
    let v37: u64;  // rcx
    let v38: iNone;  // xmm0
    let v40: u64;  // r12
    let v41: u64;  // r13
    let v42: u64;  // rax
    let v43: u32;  // edx
    let v44: u64;  // rbp
    let v45: u64;  // rcx
    let v47: u64;  // rdx
    let v50: core::option::Option<&str>;  // rax
    let v51: u64;  // rdx

    v0 = hostname::get();
    v12 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
    if (((0 ^ v12.field_0 as i64) & (0 ^ -(v11))) >> 63) as char {
        return v14;
    }
    v5 = alloc::string::String::from_utf8_lossy(v14, v15);
    if let Err(_) = v5 {
        v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v7, *((&v5 as &char + 16) as &i64));
        v10 = v4;
        v35 = v3.field_0;
    }
    v8 = v35;
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "ip-address") {
        v4 = v10;
        v1 = v8 as i128;
        v5 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v0, v36, v37);
        v0 = <alloc::string::String as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(&v5);
        v12 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
        match v12 as u704 {
            Err(_) => {
                return v14;
            },
            Ok(_) => {
                v28 = v11 as i64;
                v29 = v14;
                v30 = v15;
                v31 = v16;
                v2 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
                v38 = v2.field_0;
                v17 = *(&v2.field_32 as &i128);
                v15 = *(&v4 as &i128) as u128;
                *(&v12 as void*) = v38;
                v20 = 0;
                v21 = 1;
                v22 = 0;
                v19 = *(&v30 as &i128);
                v18 = *(&v28 as &i128) as u128;
                v5 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v18 as u8);
                if let Some(v32) = v5 {
                    do {
                        if !hashbrown::map::HashMap<K,V,S,A>::get_inner(&v12 as u704, &v32) {
                            v23 = <T as alloc::string::SpecToString>::spec_to_string(&v32);
                            v27 = v26;
                            v25 = v24;
                            if core::slice::<impl [T]>::ends_with(v25, v27, v36, v37) as u8 {
                                v23 = alloc::string::String::truncate(v26 - 2);
                                v27 = v26;
                                v25 = v24;
                            }
                            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v20, v25, v27 + v25);
                            alloc::string::String::push(&v20, 32);
                            v0 = v33;
                            v13 = hashbrown::map::HashMap<K,V,S,A>::insert(&v0);
                        }
                        v5 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v18 as u8);
                    } while (v5 as i16 != 2);
                }
            },
        }
    } else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "short") || clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "domain") {
        v40 = v9;
        v41 = v10;
        v11 = struct24 {
            field_0: v40
            field_8: v40 + v41
            field_16: 0
        };
        v42 = core::iter::traits::iterator::Iterator::try_fold(&v11);
        if v43 == 0x110000 {
            goto LABEL_458be7;
        }
        v44 = v42;
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "short") {
            v5 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v44, v40, v41, v45) as u64;
            v7 = v47;
            println!("{}", &v5);
        } else {
            v50 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v44 + 1, v40, v41) as u64;
            v5 = v50;
            v7 = v51;
            println!("{}", &v5);
        }
    } else {
LABEL_458be7:
        println!("{}", &v8 as u8);
    }
    return 0;
}
