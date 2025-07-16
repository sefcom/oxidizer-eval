fn uu_env::EnvAppData::process_all_string_arguments(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u8;  // [bp-0xa0]
    let v1: u64;  // [bp-0x98], Other Possible Types: struct24
    let v2: u64;  // [bp-0x98]
    let v3: u64;  // [bp-0x90]
    let v4: u64;  // [bp-0x88]
    let v5: i64;  // [bp-0x80]
    let v6: void*;  // [bp-0x78]
    let v7: struct16;  // [bp-0x78]
    let v8: u64;  // [bp-0x70]
    let v9: void*;  // [bp-0x68]
    let v10: u64;  // [bp-0x58]
    let v11: u64;  // [bp-0x50]
    let v12: u8;  // [bp-0x48]
    let v13: u64;  // [bp-0x38]
    let v15: struct8;  // rax
    let v16: struct8;  // rbx

    v6 = 0;
    v8 = 8;
    v9 = 0;
    v10 = *((a2 + 8) as &i64);
    v11 = *((a2 + 8) as &i64) + *((a2 + 16) as &i64) * 24;
    v15 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if v15 {
        do {
            uu_env::check_and_handle_string_args(*((v16 + 8) as &i64), *((v16 + 16) as &i64), "--split-string", &v7, 0, *(&v0 as &i64));
            v1 = v2;
            if v1 {
                *((v5 + 8) as &u64) = v1;
                *((v5 + 16) as &u64) = v3;
                *(v5 as &i64) = 0x8000000000000000;
                return a0;
            }
            if !v3 as i8 {
                uu_env::check_and_handle_string_args(*((v16 + 8) as &i64), *((v16 + 16) as &i64), "-S", &v7, 0, *(&v0 as &i64));
                v1 = v2;
                if v2 {
                    *((v5 + 8) as &u64) = v1;
                    *((v5 + 16) as &u64) = v3;
                    *(v5 as &i64) = 0x8000000000000000;
                    return a0;
                }
                if !(!v3 as i8) {
                    goto LABEL_4cdd76;
                }
                uu_env::check_and_handle_string_args(*((v16 + 8) as &i64), *((v16 + 16) as &i64), "-vS", &v7, 0, *(&v0 as &i64));
                v1 = v2;
                if v2 {
                    *((v5 + 8) as &u64) = v1;
                    *((v5 + 16) as &u64) = v3;
                    *(v5 as &i64) = 0x8000000000000000;
                    return a0;
                } else if v3 as i8 {
                    *(a1 as &i16) = 257;
                } else {
                    uu_env::check_and_handle_string_args(*((v16 + 8) as &i64), *((v16 + 16) as &i64), "-vvS", &v7, a2, *(&v0 as &i64));
                    v1 = v2;
                    if v2 {
                        *((v5 + 8) as &u64) = v1;
                        *((v5 + 16) as &u64) = v3;
                        *(v5 as &i64) = 0x8000000000000000;
                        return a0;
                    } else if v3 as i8 {
                        *(a1 as &i16) = 257;
                        *((a1 + 2) as &i8) = 0;
                    } else {
                        v1 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v16);
                        v13 = v4;
                        memcpy(&v12, &v1, 16);
                        v7 = alloc::vec::Vec<T,A>::push(&v12);
                    }
                }
            } else {
LABEL_4cdd76:
                *((a1 + 1) as &i8) = 1;
            }
        } while ((<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v15));
    }
    *((v5 + 16) as &i64) = 0;
    *(v5 as &i128) = *(&v7.field_0 as &i128);
    return a0;
}
