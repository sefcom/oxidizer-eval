fn uu_env::EnvAppData::process_all_string_arguments(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xa8]
    let v1: i136;  // [sp-0x98], Other Possible Types: Result<struct16, struct1>, struct24
    let v2: i64;  // [sp-0x78], Other Possible Types: struct16
    let v3: i64;  // [sp-0x70]
    let v4: i64;  // [sp-0x68]
    let v5: i64;  // [sp-0x58]
    let v6: i64;  // [sp-0x50]
    let v7: struct24;  // [bp-0x48]
    let v9: struct8;  // rax
    let v11: i256;  // ymm0

    v2 = 0;
    v3 = 8;
    v4 = 0;
    v5 = *((a2 + 8) as &i64);
    v6 = v5 + *((a2 + 16) as &i64) * 24;
    v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    return struct24 {
        field_0: v2
        field_16: v4
    };
    loop {
        v0 = 0;
        v1 = uu_env::check_and_handle_string_args(*((v9 + 8) as &i64), *((v9 + 16) as &i64), "--split-string", &v2);
        if v1 {
            break;
        }
        if *((&v1 as &char + 8) as &i8) {
LABEL_4cdd76:
            *((a1 + 1) as &i8) = 1;
            goto LABEL_4cdd7b;
        } else {
            v0 = 0;
            v1 = uu_env::check_and_handle_string_args(*((v9 + 8) as &i64), *((v9 + 16) as &i64), "-S", &v2);
            if v1 {
                break;
            }
            if !(!*((&v1 as &char + 8) as &i8)) {
                goto LABEL_4cdd76;
            }
            v0 = 0;
            v1 = uu_env::check_and_handle_string_args(*((v9 + 8) as &i64), *((v9 + 16) as &i64), "-vS", &v2);
            if v1 {
                break;
            }
            if *((&v1 as &char + 8) as &i8) {
                *(a1 as &i16) = 257;
            } else {
                v0 = a2;
                v1 = uu_env::check_and_handle_string_args(*((v9 + 8) as &i64), *((v9 + 16) as &i64), "-vvS", &v2);
                if v1 {
                    break;
                }
                if *((&v1 as &char + 8) as &i8) {
                    *(a1 as &i16) = 257;
                    *((a1 + 2) as &i8) = 0;
                } else {
                    v1 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v9);
                    v11 = v11 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v1;
                    *(&v7.field_0 as &struct24) = struct24 {
                        field_0: v10 as u128
                        field_16: *((&v1 as &char + 16) as &i64)
                    };
                    v2 = alloc::vec::Vec<T,A>::push(&v7);
                }
            }
LABEL_4cdd7b:
            v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
            return struct24 {
                field_0: v2
                field_16: v4
            };
        }
    }
    return struct24 {
        field_0: 0x8000000000000000
        field_8: v12
        field_16: v13
    };
}
