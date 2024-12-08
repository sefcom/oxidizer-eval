fn uu_env::EnvAppData::process_all_string_arguments(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i192;  // [bp-0x98], Other Possible Types: struct24
    let v1: i8;  // [bp-0x90]
    let v2: i64;  // [sp-0x78], Other Possible Types: struct16
    let v3: i64;  // [sp-0x70]
    let v4: i64;  // [sp-0x68]
    let v5: i64;  // [sp-0x58]
    let v6: i64;  // [sp-0x50]
    let v7: i128;  // [sp-0x48]
    let v8: i64;  // [sp-0x38]
    let v10: struct8;  // rax
    let v11: i256;  // ymm0
    let v12: i64;  // rax
    let v13: i128;  // xmm0
    let v14: i64;  // rcx
    let v15: i64;  // rbx

    v2 = 0;
    v3 = 8;
    v4 = 0;
    v5 = *((a2 + 8) as &i64);
    v6 = v5 + *((a2 + 16) as &i64) * 24;
    v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if v10 {
        do {
            uu_env::check_and_handle_string_args(&v0, *((v10 + 8) as &i64), *((v10 + 16) as &i64), "--split-string", &v2, 0);
            v12 = v0;
            if v12 {
                v14 = *((&v0 as &char + 8) as &i64);
                v15 = a0;
                *((v15 + 8) as &i64) = v12;
                *((v15 + 16) as &i64) = v14;
                *(v15 as &i64) = 0x8000000000000000;
                return v15;
            }
            if v1 {
LABEL_4cdea6:
                *((a1 + 1) as &i8) = 1;
            } else {
                uu_env::check_and_handle_string_args(&v0, *((v10 + 8) as &i64), *((v10 + 16) as &i64), "-S", &v2, 0);
                v12 = v0;
                if v12 {
                    vvar_279{reg 24} = *((&v0 as &char + 8) as &i64);
                    vvar_280{reg 40} = a0;
                    *((v15 + 8) as &i64) = v12;
                    *((v15 + 16) as &i64) = v14;
                    *(v15 as &i64) = 0x8000000000000000;
                    return v15;
                }
                if (v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v10) {
                    goto LABEL_4cdea6;
                }
                uu_env::check_and_handle_string_args(&v0, *((v10 + 8) as &i64), *((v10 + 16) as &i64), "-vS", &v2, 0);
                v12 = v0;
                if v12 {
                    vvar_285{reg 24} = *((&v0 as &char + 8) as &i64);
                    vvar_286{reg 40} = a0;
                    *((v15 + 8) as &i64) = v12;
                    *((v15 + 16) as &i64) = v14;
                    *(v15 as &i64) = 0x8000000000000000;
                    return v15;
                }
                if v1 {
                    *(a1 as &i16) = 257;
                } else {
                    uu_env::check_and_handle_string_args(&v0, *((v10 + 8) as &i64), *((v10 + 16) as &i64), "-vvS", &v2, a2);
                    v12 = v0;
                    if v12 {
                        vvar_291{reg 24} = *((&v0 as &char + 8) as &i64);
                        vvar_292{reg 40} = a0;
                        *((v15 + 8) as &i64) = v12;
                        *((v15 + 16) as &i64) = v14;
                        *(v15 as &i64) = 0x8000000000000000;
                        return v15;
                    }
                    if v1 {
                        *(a1 as &i16) = 257;
                        *((a1 + 2) as &i8) = 0;
                    } else {
                        v0 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v10);
                        v8 = *((&v0 as &char + 16) as &i64);
                        v13 = v0;
                        v11 = v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v13;
                        v7 = v13;
                        v2 = alloc::vec::Vec<T,A>::push(&v7);
                    }
                }
            }
        } while ((v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v10));
    }
    v15 = a0;
    *((v15 + 16) as &i64) = v4;
    *(v15 as &i128) = v2;
    return v15;
}
