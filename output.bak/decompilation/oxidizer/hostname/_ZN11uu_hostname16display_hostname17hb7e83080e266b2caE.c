fn uu_hostname::display_hostname(a0: u32) -> u64 {
    let v0: i200;  // [sp-0x168], Other Possible Types: struct24, Result<struct32, struct8>, struct32, struct48
    let v1: i64;  // [sp-0x158]
    let v2: i64;  // [sp-0x138], Other Possible Types: Option<struct32>, struct24
    let v3: i64;  // [sp-0x130]
    let v4: i64;  // [sp-0x128]
    let v5: i128;  // [sp-0x118]
    let v6: i64;  // [sp-0x108]
    let v7: i64;  // [sp-0xf8], Other Possible Types: struct24, struct104
    let v8: i64;  // [sp-0xf0]
    let v9: struct24;  // [sp-0xd8], Other Possible Types: i264, struct16, Result<struct32, struct16>
    let v10: i64;  // [sp-0xd0]
    let v11: struct8;  // [sp-0xa8], Other Possible Types: struct16
    let v12: i64;  // [sp-0xa0]
    let v13: i64;  // [sp-0x98]
    let v14: struct24;  // [sp-0x90], Other Possible Types: i192
    let v15: i64;  // [sp-0x78]
    let v16: i64;  // [sp-0x70]
    let v17: i64;  // [sp-0x68]
    let v18: i64;  // [sp-0x60]
    let v19: i128;  // [sp-0x58]
    let v20: i128;  // [sp-0x48]
    let v22: i64;  // rax
    let v24: i128;  // xmm0
    let v25: i256;  // ymm0
    let v26: i256;  // ymm0
    let v29: i32;  // edx
    let v30: i256;  // ymm0
    let v31: i256;  // ymm1
    let v32: i256;  // ymm1
    let v33: i64;  // r13
    let v34: i64;  // r14
    let v35: i64;  // r15
    let v36: i64;  // rax
    let v37: i64;  // r13
    let v38: i64;  // rax
    let v39: i128;  // xmm0
    let v40: i128;  // xmm1
    let v41: i64;  // rdx
    let v42: i64;  // rdx
    let v44: i64;  // rdx
    let v45: i64;  // r14
    let v46: i64;  // r15
    let v47: i64;  // r12
    let v48: i64;  // rax

    v0 = hostname::get();
    v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
    if v2 == 0x8000000000000000 {
        return v22;
    }
    v2 = v9;
    v7 = std::sys::os_str::bytes::Slice::to_string_lossy(v3, v4);
    if v7 != 0x8000000000000000 {
        v6 = *((&v7 as &char + 16) as &i64);
        v24 = v7;
        v26 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24;
    } else {
        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v8, *((&v7 as &char + 16) as &i64));
        v6 = v1;
        v26 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0;
    }
    v5 = v24;
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "ip-address") as i8 {
        v0 = struct24 {
            field_0: v25 as u128
            field_16: v6
        };
        v2 = <alloc::string::String as core::ops::arith::Add<&str>>::add(&v0);
        v0 = <alloc::string::String as std::net::socket_addr::ToSocketAddrs>::to_socket_addrs(&v2);
        v9 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v0);
        v22 = v10;
        if !v15 {
            return v22;
        }
        v15 = v9;
        v16 = v22;
        v17 = *((&v9 as &char + 16) as &i64);
        v18 = *((&v9 as &char + 24) as &i64);
        v0 = <hashbrown::map::HashMap<K,V,S,A> as core::default::Default>::default();
        v30 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v5 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v0 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v15;
        v32 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v0 as &char + 16) as &i128) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v17;
        v7 = struct104 {
            field_0: v25 as u128
            field_16: v31 as u128
            field_32: v25 as u128
            field_48: v31 as u128
            field_64: *((&v0 as &char + 32) as &i128)
            field_80: 0
            field_88: 1
            field_96: 0
        };
        v2 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v7);
        if v2 != 2 {
            do {
                v39 = v2;
                v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39;
                v40 = *((&v2 as &char + 16) as &i128);
                v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40;
                v20 = v40;
                v19 = v39;
                if !hashbrown::map::HashMap<K,V,S,A>::get_inner(&v7, &v19) {
                    v14 = <T as alloc::string::ToString>::to_string(&v19);
                    if core::slice::<impl [T]>::ends_with(*((&v14 as &char + 8) as &i64), *((&v14 as &char + 16) as &i64), ":1") as i8 {
                        alloc::string::String::truncate(&v14, *((&v14 as &char + 16) as &i64) - 2);
                    }
                    v11 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(*((&v14 as &char + 8) as &i64), *((&v14 as &char + 16) as &i64) + *((&v14 as &char + 8) as &i64)), v41);
                    v11 = alloc::string::String::push(0x20);
                    v30 = v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v19;
                    v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v20;
                    v0 = struct32 {
                        field_0: v25 as u128
                        field_16: v31 as u128
                    };
                    v9 = hashbrown::map::HashMap<K,V,S,A>::insert(&v0);
                }
            } while ((v2 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v7), v2 != 2));
        }
        v45 = v13;
        if v45 {
            v46 = v45 - 1;
            v47 = v12;
            v48 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v46, v47, v45);
            if !v48 {
                core::str::slice_error_fail(v47, v45, 0, v46, "src/uu/hostname/src/hostname.rs"); /* do not return */
            }
            v2 = v48;
            v3 = v41;
            println!("{:?}", &v2);
        }
    } else if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "short") as i8 && !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "domain") as i8 || (*(&v9.field_0 as &struct24) = struct24 {
    field_0: *((&v5 as &char + 8) as &i64)
    field_8: v6 + v9
    field_16: 0
}, v29 == 0x110000) {
        println!("{:?}", &v5);
    } else {
        v33 = core::iter::traits::iterator::Iterator::try_fold(&v9);
        if !clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "short") as i8 {
            v37 = v33 + 1;
            v34 = *((&v5 as &char + 8) as &i64);
            v33 = v6;
            v38 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v37, v34, v33);
            if !v38 {
                core::str::slice_error_fail(v34, v35, v37, v33, "src/uu/hostname/src/hostname.rs"); /* do not return */
            }
            v2 = v38;
            v3 = v44;
            println!("{:?}", &v2);
        } else {
            v34 = *((&v5 as &char + 8) as &i64);
            v35 = v6;
            v36 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v33, v34, v35);
            if !v36 {
                core::str::slice_error_fail(v34, v35, 0, v33, "src/uu/hostname/src/hostname.rs"); /* do not return */
            }
            v2 = v36;
            v3 = v42;
            println!("{:?}", &v2);
        }
    }
    return 0;
}
