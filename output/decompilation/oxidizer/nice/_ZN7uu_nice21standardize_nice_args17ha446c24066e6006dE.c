fn uu_nice::standardize_nice_args(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: u32;  // [bp-0x17c]
    let v1: struct24;  // [bp-0x178], Other Possible Types: u64
    let v2: struct24;  // [bp-0x178], Other Possible Types: u64
    let v3: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x178]
    let v4: Result<struct40, struct32>;  // [bp-0x178]
    let v5: u32;  // [bp-0x178]
    let v6: u64;  // [bp-0x178]
    let v7: u64;  // [bp-0x170]
    let v8: u64;  // [bp-0x170], Other Possible Types: unsigned long
    let v9: u64;  // [bp-0x170]
    let v10: u64;  // [bp-0x168]
    let v11: u64;  // [bp-0x168], Other Possible Types: unsigned long
    let v12: u64;  // [bp-0x168]
    let v13: u64;  // [bp-0x150]
    let v14: void*;  // [bp-0x148]
    let v15: struct16;  // [bp-0x148]
    let v16: struct16;  // [bp-0x148]
    let v17: struct16;  // [bp-0x148]
    let v18: struct16;  // [bp-0x148]
    let v19: struct16;  // [bp-0x148]
    let v20: struct16;  // [bp-0x148]
    let v21: u64;  // [bp-0x140]
    let v22: void*;  // [bp-0x138]
    let v23: u64;  // [bp-0x130]
    let v24: u64;  // [bp-0x128]
    let v25: u128;  // [bp-0x128]
    let v26: u128;  // [bp-0x120]
    let v27: u64;  // [bp-0x118]
    let v28: u64;  // [bp-0x110]
    let v29: u128;  // [bp-0x108]
    let v30: u64;  // [bp-0x100]
    let v31: u64;  // [bp-0xf8]
    let v32: struct16;  // [bp-0xe8]
    let v33: u64;  // [bp-0xd0]
    let v34: struct24;  // [bp-0xc8]
    let v35: iNone;  // [bp-0xa8]
    let v36: u64;  // [bp-0x98]
    let v37: struct8;  // [bp-0x88]
    let v38: u64;  // [bp-0x88]
    let v39: u64;  // [bp-0x68]
    let v40: u64;  // [bp-0x60]
    let v41: iNone;  // [bp-0x58]
    let v42: u8;  // [bp-0x48]
    let v44: u8;  // bl
    let v45: u64;  // r13
    let v46: u64;  // rbp
    let v47: u64;  // r15
    let v48: u64;  // rax
    let v49: u128;  // xmm0
    let v50: u64;  // r15
    let v51: u64;  // r12
    let v53: u64;  // rcx
    let v54: core::option::Option<&str>;  // rax
    let v55: u128;  // xmm0
    let v56: &mut [u8];  // rax:rdx
    let v57: core::result::Result<i64, core::num::error::ParseIntError>;  // rax:rdx
    let v59: struct8;  // [bp-0x70]

    v32 = struct16 {
        field_0: a1
        field_8: a2
    };
    v14 = 0;
    v21 = 8;
    v22 = 0;
    v37 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v32);
    if !((((0 ^ v37) & (0 ^ -(v38))) >> 63) as char) {
        v19 = alloc::vec::Vec<T,A>::push(&v37, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/nice/src/nice.rs");
    }
    v41 = *(&v32.field_0 as &i128);
    v0 = 0;
    loop {
        v11 = v10;
        v8 = v7;
        v59 = <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v41);
        v45 = v59;
        if v45 == 0x8000000000000000 {
            break;
        }
        v46 = v39;
        v47 = v40;
        if (v44 & 1) {
            v1 = v45;
            v7 = v46;
            v10 = v47;
            v15 = alloc::vec::Vec<T,A>::push(&v1, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/nice/src/nice.rs");
            goto LABEL_452065;
        }
        if (v0 as i8 & 1) {
            v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-n");
            v34 = v2;
            v1 = struct24 {
                field_0: v45
                field_8: v46
                field_16: v47
            };
            std::ffi::os_str::OsString::push(&v34, &v1);
            v16 = alloc::vec::Vec<T,A>::push(&v34, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/nice/src/nice.rs");
            v0 = 0;
            v1 = v2;
            v7 = v9;
            v10 = v12;
            continue;
        }
        v3 = core::str::converts::from_utf8(v46, v47);
        if let Ok(_) = v3 {
            v48 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v11, "-n");
            if (v48 & 255) {
                goto LABEL_452191;
            }
        }
        v3 = core::str::converts::from_utf8(v46, v47);
        match v3 {
            Ok(_) => {
                v48 = uu_nice::is_prefix_of(v8, v11, "--adjustment", 3);
                if !(v48 & 255) {
                    goto LABEL_45219e;
                }
LABEL_452191:
                v0 = v48 as u32 & -0x100 | 1;
                goto LABEL_4523b4;
            },
            Err(_) => {
LABEL_45219e:
                <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v42, v46, v47);
                v4 = alloc::string::String::from_utf8(&v42);
                match v4 {
                    Err(_) => {
                        v31 = *((&v4 as &char + 24) as &i64);
                        v49 = *((&v4 as &char + 8) as &i128);
                        v29 = v49;
                        v28 = v31;
                        v26 = v49;
                        v24 = 0;
                        v13 = v26 as i64;
                        v50 = v27;
                        v51 = v28;
                        v5 = 0;
                        v56 = core::char::methods::encode_utf8_raw(&v5 as u64 as u32, a1, a2);
                        v54 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v56.data_ptr, v50, v51, v53) as u64;
                        v44 = (!v54) as u8 as u8;
                        match v54 {
                            Some(_) => {
                                v23 = v50;
                                v57 = core::num::<impl i64>::from_ascii_radix(&v29 as u8, v54, a2 as u32);
                                if v29 as i8 {
                                    v6 = v13;
                                    v8 = v23;
                                    v11 = v51;
                                    v14 as u128 = alloc::vec::Vec<T,A>::push(&v6, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/nice/src/nice.rs");
                                } else {
                                    v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-n");
                                    v36 = v11;
                                    v35 = *(&v1.field_0 as &i128);
                                    v1 = <i64 as alloc::string::SpecToString>::spec_to_string(v30);
                                    std::ffi::os_str::OsString::push(&v35, &v1);
                                    v18 = alloc::vec::Vec<T,A>::push(&v35, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/nice/src/nice.rs");
                                    v1 = v2;
LABEL_4523b4:
                                    v7 = v8;
                                    v10 = v11;
                                    continue;
                                }
                            },
                            None => {
                                v6 = v13;
                                v8 = v50;
                                v11 = v51;
                                v17 = alloc::vec::Vec<T,A>::push(&v5 as u64, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/nice/src/nice.rs");
                            },
                        }
                        v1 = v6;
                        goto LABEL_4523b4;
                    },
                    Ok(_) => {
                        v31 = v11;
                        v55 = v4 as i128;
                        v29 = v55;
                        v28 = v31;
                        v26 = v55;
                        v24 = 1;
                        v1 = v45;
                        v7 = v46;
                        v10 = v47;
                        v15 = alloc::vec::Vec<T,A>::push(&v1, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/nice/src/nice.rs");
LABEL_452065:
                        v44 = 1;
                    },
                }
            },
        }
    }
    if (v0 as i8 & 1) {
        v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-n");
        v27 = v11;
        v25 = *(&v1.field_0 as &i128);
        v20 = alloc::vec::Vec<T,A>::push(&v25, "/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/coreutils/src/uu/nice/src/nice.rs");
    }
    return <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v33, &v14 as u128);
}
