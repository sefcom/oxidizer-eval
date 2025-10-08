fn fd::filter::size::SizeFilter::parse_opt(a0: i64, a1: i64) -> u64 {
    let v0: void*;  // [bp-0xf0], Other Possible Types: Option<struct24>, struct16, struct24, struct8
    let v1: struct32;  // [bp-0xf0], Other Possible Types: struct48
    let v2: u64;  // [bp-0xf0]
    let v3: u64;  // [bp-0xf0]
    let v4: u64;  // [bp-0xf0]
    let v5: u64;  // [bp-0xf0]
    let v6: Option<struct72>;  // [bp-0xf0]
    let v7: u64;  // [bp-0xe8]
    let v8: u128;  // [bp-0xe0]
    let v9: void*;  // [bp-0xd8]
    let v10: u64;  // [bp-0xd0]
    let v11: u8;  // [bp-0xc8]
    let v12: u128;  // [bp-0xc0]
    let v13: u64;  // [bp-0xb0]
    let v14: struct48;  // [bp-0xa8], Other Possible Types: u128
    let v15: u128;  // [bp-0x98]
    let v16: iNone;  // [bp-0x88]
    let v17: u128;  // [bp-0x78]
    let v18: void*;  // [bp-0x70]
    let v19: u64;  // [bp-0x68]
    let v20: alloc::string::String;  // [bp-0x60]
    let v21: struct8;  // [bp-0x48]
    let v22: i8;  // [bp-0x40]
    let v24: i64;  // r15
    let v25: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // xmm0
    let v26: iNone;  // xmm1
    let v27: iNone;  // xmm2
    let v28: struct24;  // rax
    let v29: void*;  // rbx
    let v30: void*;  // rax
    let v32: u32;  // rdx
    let v34: u64;  // r12
    let v35: &mut [u8];  // rax:rdx
    let v36: &mut [u8];  // rax:rdx
    let v37: &mut [u8];  // rax:rdx
    let v38: &mut [u8];  // rax:rdx

    v24 = std::sync::once_lock::OnceLock<T>::get_or_try_init();
    v0 = struct16 {
        field_24: 0
        field_32: a0
    };
    v8 = a1;
    v9 = 0;
    v10 = a1;
    v11 = 1;
    regex_automata::util::search::Input::set_span(&v0, a1);
    v14 = v1;
    v0 = regex_automata::meta::regex::Regex::search_half(*(v24 as &i64), *((v24 + 8) as &i64), &v14);
    if let None = v0 {
        return 3;
    }
    v6 = regex::regex::string::Regex::captures_at(v24, a0, a1);
    if let Some(_) = v6 {
        v19 = v13;
        v25 = v6 as i128;
        v26 = *((&v6 as &char + 16) as &i128);
        v27 = *((&v6 as &char + 32) as &i128);
        v17 = v12;
        v16 = v27;
        v15 = v26;
        v14 = v25;
        v21 = regex_automata::util::captures::Captures::get_group(&v15, 1);
        if v21.field_0 as i32 == 1 {
            v28 = v18;
            v7 = v19;
            v8 = *(&v22 as &i128) as u128;
        }
        v0 = v28;
        v29 = core::option::Option<T>::map_or(&v0);
        v0 = regex_automata::util::captures::Captures::get_group(&v15, 2);
        if v0.field_0 as i32 == 1 {
            v1 = struct32 {
                field_0: v18
                field_8: v19
                field_16: *(&v7 as &i128)
            };
            if (fd::filter::size::SizeFilter::parse_opt::{{closure}}(&v1) as u8 & 1) {
                v21 = regex_automata::util::captures::Captures::get_group(&v15, 3);
                if v21.field_0 as i32 == 1 {
                    v30 = v18;
                    v7 = v19;
                    v8 = *(&v22 as &i128) as u128;
                }
                v0 = v30;
                v20 = alloc::str::<impl str>::to_lowercase(core::option::Option<T>::map_or(&v0), v32);
                if !core::slice::<impl [T]>::starts_with(v20, "ki") as u8 {
                    v2 = 0;
                    v35 = core::char::methods::encode_utf8_raw(107, &v2 as u64, v32);
                    if !core::slice::<impl [T]>::starts_with(v20, v35.data_ptr, v35.length) as u8 && !core::slice::<impl [T]>::starts_with(v20, "mi") as u8 {
                        v3 = 0;
                        v37 = core::char::methods::encode_utf8_raw(109, &v3 as u64, v32);
                        if !core::slice::<impl [T]>::starts_with(v20, v37.data_ptr, v37.length) as u8 && !core::slice::<impl [T]>::starts_with(v20, "gi") as u8 {
                            v4 = 0;
                            v38 = core::char::methods::encode_utf8_raw(103, &v4 as u64, v32);
                            if !core::slice::<impl [T]>::starts_with(v20, v38.data_ptr, v38.length) as u8 && !core::slice::<impl [T]>::starts_with(v20, "ti") as u8 {
                                v5 = 0;
                                v36 = core::char::methods::encode_utf8_raw(116, &v5 as u64, v32);
                                if !core::slice::<impl [T]>::starts_with(v20, v36.data_ptr, v36.length) as u8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v20, "b") as u8 {
                                    goto LABEL_0x5f497e;
                                }
                            }
                        }
                    }
                }
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v29, v32, "+") as u8 {
                    return v34;
                }
                v34 = (!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v29, v32, "-") as u8 ? <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v29, v32, 1, 0) as u32 as u64 ^ 3 : 0);
                return v34;
            }
        }
    }
    return 3;
}
