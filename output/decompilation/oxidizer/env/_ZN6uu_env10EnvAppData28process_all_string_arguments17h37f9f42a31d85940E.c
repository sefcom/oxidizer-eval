fn uu_env::EnvAppData::process_all_string_arguments(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: u8;  // [bp-0xa0]
    let v1: struct24;  // [bp-0x98], Other Possible Types: u64
    let v2: struct24;  // [bp-0x98]
    let v3: core::fmt::Arguments;  // [bp-0x98]
    let v4: core::fmt::rt::Argument;  // [bp-0x90]
    let v5: i64;  // [bp-0x80]
    let v6: void*;  // [bp-0x78]
    let v7: struct16;  // [bp-0x78]
    let v8: u64;  // [bp-0x70]
    let v9: void*;  // [bp-0x68]
    let v10: u64;  // [bp-0x58]
    let v11: u64;  // [bp-0x50]
    let v12: struct24;  // [bp-0x48]
    let v14: struct8;  // rax
    let v15: struct8;  // rbx

    v6 = 0;
    v8 = 8;
    v9 = 0;
    v10 = *((a2 + 8) as &i64);
    v11 = *((a2 + 8) as &i64) + *((a2 + 16) as &i64) * 24;
    v14 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if v14 {
        do {
            uu_env::check_and_handle_string_args(*((v15 + 8) as &i64), *((v15 + 16) as &i64), "--split-string", &v6 as u128, 0, *(&v0 as &i64));
            v1 = v3;
            if v1 {
                *((v5 + 8) as &u64) = v1;
                *((v5 + 16) as &core::fmt::rt::Argument) = v4;
                *(v5 as &i64) = 0x8000000000000000;
                return a0;
            }
            if !v4.ty as i8 {
                uu_env::check_and_handle_string_args(*((v15 + 8) as &i64), *((v15 + 16) as &i64), "-S", &v6 as u128, 0, *(&v0 as &i64));
                v1 = v3;
                if v3 {
                    *((v5 + 8) as &u64) = v1;
                    *((v5 + 16) as &core::fmt::rt::Argument) = v4;
                    *(v5 as &i64) = 0x8000000000000000;
                    return a0;
                }
                if !(!v4.ty as i8) {
                    goto LABEL_4cdd76;
                }
                uu_env::check_and_handle_string_args(*((v15 + 8) as &i64), *((v15 + 16) as &i64), "-vS", &v6 as u128, 0, *(&v0 as &i64));
                v1 = v3;
                if v3 {
                    *((v5 + 8) as &u64) = v1;
                    *((v5 + 16) as &core::fmt::rt::Argument) = v4;
                    *(v5 as &i64) = 0x8000000000000000;
                    return a0;
                } else if v4.ty as i8 {
                    *(a1 as &i16) = 257;
                } else {
                    uu_env::check_and_handle_string_args(*((v15 + 8) as &i64), *((v15 + 16) as &i64), "-vvS", &v6 as u128, a2, *(&v0 as &i64));
                    v1 = v3;
                    if v3 {
                        *((v5 + 8) as &u64) = v1;
                        *((v5 + 16) as &core::fmt::rt::Argument) = v4;
                        *(v5 as &i64) = 0x8000000000000000;
                        return a0;
                    } else if v4.ty as i8 {
                        *(a1 as &i16) = 257;
                        *((a1 + 2) as &i8) = 0;
                    } else {
                        v1 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v15);
                        v12 = v2;
                        v6 as u128 = alloc::vec::Vec<T,A>::push(&v12);
                    }
                }
            } else {
LABEL_4cdd76:
                *((a1 + 1) as &i8) = 1;
            }
        } while ((<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(), v14));
    }
    *((v5 + 16) as &i64) = 0;
    *(v5 as &i128) = *(&v7.field_0 as &i128);
    return a0;
}
