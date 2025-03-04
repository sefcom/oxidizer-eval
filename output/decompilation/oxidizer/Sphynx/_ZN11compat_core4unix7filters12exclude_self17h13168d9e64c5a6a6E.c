fn compat_core::unix::filters::exclude_self(a0: void*) -> u64 {
    let v0: struct32;  // [sp-0xc8], Other Possible Types: Result<struct32, struct16>, unsigned long
    let v1: iNone;  // [sp-0xc0]
    let v2: i64;  // [bp-0xa8], Other Possible Types: struct24, Option<struct24>
    let v3: i64;  // [sp-0x98]
    let v4: i64;  // [sp-0x90]
    let v5: i64;  // [sp-0x88]
    let v6: i64;  // [sp-0x78]
    let v7: i64;  // [sp-0x70]
    let v8: i64;  // [sp-0x68]
    let v9: struct8;  // [sp-0x60]
    let v11: i8;  // [bp-0x50]
    let v12: iNone;  // [sp-0x48]
    let v22: i64;  // r12
    let v24: i64;  // rbp
    let v25: i64;  // rax
    let v26: i64;  // rbx
    let v27: i64;  // rax
    let v28: i64;  // rdx
    let v29: i64;  // r8
    let v31: i64;  // rsi
    let v32: i64;  // rdx
    let v35: i64;  // r15
    let v36: i64;  // r14
    let v37: i64;  // rax
    let v39: i64;  // rbp
    let v40: i64;  // rbp
    let v41: i64;  // rsi
    let v42: i64;  // rax
    let v43: i64;  // rsi
    let v45: i64;  // r14
    let v46: i64;  // rbp
    let v47: i64;  // rax
    let v49: i64;  // rbx
    let v50: i64;  // rbx
    let v51: i64;  // rsi
    let v52: i64;  // rax
    let v53: i64;  // rsi

    v0 = std::env::current_dir();
    compat_kernel::app::AppError::zero();
    if v0.field_0 as i32 == 1 {
        if v0.field_8 as i8 < 2 {
            return 1;
        }
        *(*((*((&v0.field_8 as &char + 8) as &i64) + 8) as &i64) as &i64)();
    } else {
        v4 = *((&v0.field_8 as &char + 8) as &i64);
        v0 = std::env::args_os();
        v2 = <std::env::ArgsOs as core::iter::traits::iterator::Iterator>::next(&v0);
        v22 = v2;
        if !v22 {
            compat_kernel::app::AppError::zero();
            v26 = *((&v0.field_8 as &char + 8) as &i64);
            v27 = v0.field_24;
            v4 = v4;
        } else {
            v6 = v0.field_8 as i64;
            v12 = *((&v2 as &char + 8) as &i128);
            compat_kernel::app::AppError::zero();
            v24 = *((&v0.field_8 as &char + 8) as &i64);
            v25 = v0.field_24;
            v0 = v22;
            v1 = v12;
            v29 = v28;
            v9 = std::path::Path::_join(v6, v0.field_24, <std::error::<impl core::convert::From<alloc::string::String> for alloc::boxed::Box<dyn std::error::Error+core::marker::Sync+core::marker::Send>>::from::StringError as std::error::Error>::description(&v0), v28);
            v31 = v9.field_16;
            v32 = *(&v11 as &i64);
            v0 = std::path::Path::canonicalize(v31, v32);
            compat_kernel::app::AppError::zero();
            if v0.field_0 as i32 != 1 {
                v5 = v0.field_8 as i64;
                v8 = *((&v0.field_8 as &char + 8) as &i64);
                v0 = std::path::Path::to_string_lossy(v31, v32);
                v35 = *((&v0 as &char + 8) as &i64);
                v36 = *((&v0 as &char + 16) as &i64);
                if v0 == 1 {
                    v36 = *((&v0 as &char + 24) as &i64);
                }
                v7 = v0.field_24;
                if v36 {
                    v37 = __rust_alloc(v36, 1);
                    if !v37 {
                        alloc::raw_vec::RawVec<T,A>::allocate_in::{{closure}}(); /* do not return */
                    }
                }
                v2 = struct24 {
                    field_0: v37
                    field_8: v38
                    field_16: 0
                };
                alloc::raw_vec::RawVec<T,A>::reserve(&v2, 0, v36);
                v39 = v3;
                core::slice::<impl [T]>::copy_from_slice(v2 + v39, v36, v35, v36);
                v3 = v39 + v36;
                v40 = a0;
                v41 = *((v40 + 16) as &i64);
                if v41 == *((v40 + 8) as &i64) {
                    alloc::raw_vec::RawVec<T,A>::reserve(v40, v41, 1);
                    v41 = *((v40 + 16) as &i64);
                }
                v42 = *(v40 as &i64);
                v43 = v41 * 32;
                *((v42 + v43) as &i64) = 1;
                *((v42 + v43 + 8) as &i128) = *(&v2.field_0 as &i128);
                *((v42 + v43 + 24) as &unsigned long) = v3;
                *((v40 + 16) as &i64) = *((v40 + 16) as &i64) + 1;
                v0 = std::path::Path::to_string_lossy(v5, v7);
                v45 = *((&v0 as &char + 8) as &i64);
                v46 = *((&v0 as &char + 16) as &i64);
                if v0 == 1 {
                    v46 = *((&v0 as &char + 24) as &i64);
                }
                if v46 {
                    v47 = __rust_alloc(v46, 1);
                    if !v47 {
                        alloc::raw_vec::RawVec<T,A>::allocate_in::{{closure}}(); /* do not return */
                    }
                }
                v2 = struct24 {
                    field_0: v47
                    field_8: v48
                    field_16: 0
                };
                alloc::raw_vec::RawVec<T,A>::reserve(&v2, 0, v46);
                v49 = v3;
                core::slice::<impl [T]>::copy_from_slice(v2 + v49, v46, v45, v46);
                v3 = v49 + v46;
                v50 = a0;
                v51 = *((v50 + 16) as &i64);
                if v51 == *((v50 + 8) as &i64) {
                    alloc::raw_vec::RawVec<T,A>::reserve(v50, v51, 1);
                    v51 = *((v50 + 16) as &i64);
                }
                v52 = *(v50 as &i64);
                v53 = v51 * 32;
                *((v52 + v53) as &i64) = 1;
                *((v52 + v53 + 8) as &i128) = *(&v2.field_0 as &i128);
                *((v52 + v53 + 24) as &unsigned long) = v3;
                *((v50 + 16) as &i64) = *((v50 + 16) as &i64) + 1;
                return 0;
            } else if v0.field_8 as i8 >= 2 {
                *(*((*((&v0.field_8 as &char + 8) as &i64) + 8) as &i64) as &i64)();
            }
        }
        return 1;
    }
}
