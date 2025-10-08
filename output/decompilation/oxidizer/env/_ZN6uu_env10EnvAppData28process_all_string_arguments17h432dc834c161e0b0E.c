fn uu_env::EnvAppData::process_all_string_arguments(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: u64;  // [bp-0x168]
    let v1: struct24;  // [bp-0x168], Other Possible Types: Result<struct16, struct9>, u64
    let v2: struct24;  // [bp-0x168], Other Possible Types: u64
    let v3: u32;  // [bp-0x168]
    let v4: struct24;  // [bp-0x168], Other Possible Types: u64
    let v6: struct24;  // [bp-0x168]
    let v7: i64;  // [bp-0x160]
    let v8: i64;  // [bp-0x160]
    let v9: u32;  // [bp-0x150]
    let v10: i64;  // [bp-0x130]
    let v11: struct24;  // [bp-0x128], Other Possible Types: u64
    let v12: struct24;  // [bp-0x128], Other Possible Types: u32
    let v13: u64;  // [bp-0x128]
    let v14: struct24;  // [bp-0x128]
    let v15: i64;  // [bp-0x120]
    let v16: void*;  // [bp-0x110]
    let v18: struct16;  // [bp-0x110]
    let v19: struct16;  // [bp-0x110]
    let v20: u64;  // [bp-0x108]
    let v21: void*;  // [bp-0x100]
    let v22: Result<struct24, struct24>;  // [bp-0xf8]
    let v23: Result<struct24, struct24>;  // [bp-0xf8]
    let v24: u64;  // [bp-0xf0]
    let v25: u64;  // [bp-0xe8]
    let v26: void*;  // [bp-0xe0]
    let v27: u64;  // [bp-0xd8]
    let v28: u64;  // [bp-0xd0]
    let v29: void*;  // [bp-0xc8]
    let v30: &str;  // [bp-0xa8]
    let v31: &str;  // [bp-0x98]
    let v32: &str;  // [bp-0x88]
    let v33: &str;  // [bp-0x78]
    let v34: &str;  // [bp-0x68]
    let v35: u128;  // [bp-0x58]
    let v36: alloc::string::String;  // [bp-0x48]
    let v38: u64;  // rax
    let v39: i64;  // rdx
    let v41: i64;  // r14
    let v42: struct24;  // r14
    let v44: core::fmt::Arguments;  // rax
    let v45: struct32;  // rcx
    let v46: u64;  // r15
    let v47: u64;  // rbx
    let v48: core::option::Option<&str>;  // rax
    let v49: u8;  // bpl
    let v50: core::option::Option<&str>;  // rax
    let v51: i64;  // rdx
    let v52: Result<struct40, struct5>;  // rdx
    let v53: i64;  // rdx
    let v56: u64;  // rax
    let v58: i64;  // r12
    let v60: &mut [u8];  // rax:rdx
    let v61: &mut [u8];  // rax:rdx
    let v62: core::option::Option<u32>;  // rax:rax
    let v63: core::option::Option<u32>;  // rax:rax
    let v64: u64;  // [bp-0x158]

    v16 = 0;
    v20 = 8;
    v21 = 0;
    v30 = "argv0";
    v31 = "chdir";
    v32 = "file";
    v33 = "ignore-signal";
    v34 = "unset";
    v35 = 9269695016050495394250779263073;
    v27 = *((a2 + 8) as &i64);
    v28 = *((a2 + 8) as &i64) + *((a2 + 16) as &i64) * 24;
    v29 = 0;
    v38 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v27);
    if v39 {
        do {
            v42 = v39;
            v22 = alloc::string::String::from_utf8_lossy(*((v42 + 8) as &i64), *((v42 + 16) as &i64));
            v1 = v0;
            if !((!v38 | v49) & 1) {
                v2 = v0;
                if !<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v42 + 8) as &i64), *((v42 + 16) as &i64), &g_41ec91) {
                    v3 = 0;
                    v60 = core::char::methods::encode_utf8_raw(45, &v3, a2);
                    v1 = v4;
                    if core::slice::<impl [T]>::starts_with(v24, v25, v60.data_ptr, v60.length) {
                        goto LABEL_473f7c;
                    }
                    v2 = v4;
                    v1 = v4;
                    if <char as core::str::pattern::Pattern>::is_contained_in(v24, v25, a2) {
                        goto LABEL_473f7c;
                    }
                }
                <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v2, *((v42 + 8) as &i64), *((v42 + 16) as &i64));
                v12 = v4;
                v18 = alloc::vec::Vec<T,A>::push(&v12, "src/uu/env/src/env.rs");
                v56 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v27);
                if v39 {
                    v58 = v39;
                    do {
                        v23 = alloc::string::String::from_utf8_lossy(*((v58 + 8) as &i64), *((v58 + 16) as &i64));
                        v1 = v2;
                        if !((!v56 | v49) & 1) {
                            v1 = v2;
                            if !<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v58 + 8) as &i64), *((v58 + 16) as &i64), &g_41ec91) {
                                v4 = 0;
                                v61 = core::char::methods::encode_utf8_raw(45, &v4, a2);
                                v1 = v6;
                                if !core::slice::<impl [T]>::starts_with(v24, v25, v61.data_ptr, v61.length) {
                                    <char as core::str::pattern::Pattern>::is_contained_in(v24, v25, a2);
                                    v1 = v6;
                                }
                            }
                        }
                        v2 = v1;
                        <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v2, *((v58 + 8) as &i64), *((v58 + 16) as &i64));
                        v11 = v6;
                        v19 = alloc::vec::Vec<T,A>::push(&v11, "src/uu/env/src/env.rs");
                        <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v27);
                        v58 = v39;
                    } while (v39);
                }
            } else {
LABEL_473f7c:
                v0 = v1;
                v1 = uu_env::check_and_handle_string_args(*((v42 + 8) as &i64), *((v42 + 16) as &i64), "--split-string", &v16 as u128, 0);
                v45 = v7;
                if let Ok(_) = v1 {
                    *(&v26[8] as &core::fmt::Arguments) = v44;
                    *(&v26[16] as &struct32) = v45;
                    *(v26 as &i64) = 0x8000000000000000;
                    return v26;
                }
                if !(v7 as u8 & 1) {
                    v1 = uu_env::check_and_handle_string_args(*((v42 + 8) as &i64), *((v42 + 16) as &i64), "-S", &v16 as u128, 0);
                    v45 = v7;
                    if let Ok(_) = v1 {
                        *(&v26[8] as &core::fmt::Arguments) = v44;
                        *(&v26[16] as &struct32) = v45;
                        *(v26 as &i64) = 0x8000000000000000;
                        return v26;
                    }
                    if (v7 as u8 & 1) {
                        goto LABEL_474000;
                    }
                    v1 = uu_env::check_and_handle_string_args(*((v42 + 8) as &i64), *((v42 + 16) as &i64), "-vS", &v16 as u128, 0);
                    v45 = v7;
                    if let Ok(_) = v1 {
                        *(&v26[8] as &core::fmt::Arguments) = v44;
                        *(&v26[16] as &struct32) = v45;
                        *(v26 as &i64) = 0x8000000000000000;
                        return v26;
                    }
                    if (v7 as u8 & 1) {
                        *(a1 as &i16) = 257;
                        continue;
                    }
                    v1 = uu_env::check_and_handle_string_args(*((v42 + 8) as &i64), *((v42 + 16) as &i64), "-vvS", &v16 as u128, a2);
                    v45 = v7;
                    if let Ok(_) = v1 {
                        *(&v26[8] as &core::fmt::Arguments) = v44;
                        *(&v26[16] as &struct32) = v45;
                        *(v26 as &i64) = 0x8000000000000000;
                        return v26;
                    }
                    if (v7 as u8 & 1) {
                        *(v10 as &i16) = 257;
                        *((v10 + 2) as &i8) = 0;
                        continue;
                    }
                    v46 = v24;
                    v47 = v25;
                    v48 = <&str as core::str::pattern::Pattern>::strip_prefix_of("--", v46, v47) as u64;
                    if let Some(_) = v48 {
                        v1 = v48;
                        v7 = v39;
                        <T as core::slice::cmp::SliceContains>::slice_contains(&v1, &v22 as u64);
                        goto LABEL_4741b5;
                    }
                    v50 = <&str as core::str::pattern::Pattern>::strip_prefix_of("-", v46, v47) as u64;
                    v2 = v0;
                    if let Some(_) = v50 {
                        v2 as u128 = core::slice::iter::Iter<u8> {
                            ptr: core::ptr::non_null::NonNull<u8> {
                                pointer: v50
                            }
                            end_or_len: v39 + v50
                            _marker: core::marker::PhantomData<&u8> { }
                        };
                        v63 = core::str::validations::next_code_point(&v2 as u128) as u128;
                        v2 = v4;
                        v7 = v8;
                        v51 = v39;
                        v52 = v39;
                        if ((v51 as u32 != 0x110000) as u8 as u8 & v63 as i8) == 1 {
                            loop {
                                <char as core::slice::cmp::SliceContains>::slice_contains(&v12 as u64, &v35, 4);
                                v62 = core::str::validations::next_code_point(&v2 as u128) as u128;
                                v1 = v4;
                                v7 = v8;
                                v11 = v13;
                                if let None = v62 {
                                    break;
                                }
                                v1 = v4;
                                v7 = v8;
                                v11 = v13;
                                v52 = v39;
                                if v39 as u32 == 0x110000 {
                                    break;
                                }
                            }
                            goto LABEL_4741b5;
                        }
                    }
                    v1 = v2;
                    v53 = v51;
LABEL_4741b5:
                    v0 = v1;
                    if <char as core::str::pattern::Pattern>::is_contained_in(v46, v47, v53) && core::slice::<impl [T]>::starts_with(v46, v47, "-u") && !core::slice::<impl [T]>::starts_with(v46, v47, "--") {
                        v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v46, v47, a2) as u64;
                        v15 = v39;
                        v36 = format!("cannot unset '{}': Invalid argument", &v11);
                        v9 = 125;
                        v4 = *(&v36.vec.buf.inner.cap as &i128);
                        v64 = v36.vec.len;
                        alloc::boxed::Box<T>::new(&v4);
                        *(&v26[8] as &core::fmt::Arguments) = v44;
                        *(&v26[16] as &struct32) = v45;
                        *(v26 as &i64) = 0x8000000000000000;
                        return v26;
                    }
                    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v0, *((v42 + 8) as &i64), *((v42 + 16) as &i64));
                    v14 = v4;
                    v16 as u128 = alloc::vec::Vec<T,A>::push(&v14, "src/uu/env/src/env.rs");
                } else {
LABEL_474000:
                    *((a1 + 1) as &i8) = 1;
                }
            }
            <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v27);
        } while (v41);
    }
    *(&v26[16] as &i64) = 0;
    *(v26 as &i128) = *(&v19.field_0 as &i128);
    return v26;
}
