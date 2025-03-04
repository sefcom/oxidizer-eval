fn uu_env::EnvAppData::process_all_string_arguments(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: struct24;  // [bp-0x98], Other Possible Types: char
    let v1: i8;  // [bp-0x90]
    let v2: i64;  // [sp-0x78], Other Possible Types: struct16
    let v3: i64;  // [sp-0x68]
    let v4: i64;  // [sp-0x58]
    let v5: i64;  // [sp-0x50]
    let v6: struct24;  // [bp-0x48]
    let v8: struct8;  // rax
    let v9: struct8;  // rbx
    let v10: iNone;  // ymm0

    v2 = 0;
    v2 = 8;
    v3 = 0;
    v4 = *((a2 + 8) as &i64);
    v5 = v4 + *((a2 + 16) as &i64) * 24;
    v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v8 {
        return struct24 {
            field_0: v2 as i128
            field_16: v3
        };
    }
    v9 = v8;
    do {
        uu_env::check_and_handle_string_args(&v0, *((v9 + 8) as &i64), *((v9 + 16) as &i64), "--split-string", &v2, 0);
        if v1 || (uu_env::check_and_handle_string_args(&v0, *((v9 + 8) as &i64), *((v9 + 16) as &i64), "-S", &v2, 0), v1) {
            *((a1 + 1) as &i8) = 1;
        } else {
            uu_env::check_and_handle_string_args(&v0, *((v9 + 8) as &i64), *((v9 + 16) as &i64), "-vS", &v2, 0);
            if v1 {
                *(a1 as &i16) = 257;
            } else {
                uu_env::check_and_handle_string_args(&v0, *((v9 + 8) as &i64), *((v9 + 16) as &i64), "-vvS", &v2, a2);
                if !v1 {
                    v0 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v9);
                    v10 = v10 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v0.field_0 as &i128);
                    *(&v6.field_0 as &struct24) = struct24 {
                        field_0: v11
                        field_16: v0.field_16
                    };
                    v2 = alloc::vec::Vec<T,A>::push(&v6);
                } else {
                    *(a1 as &i16) = 257;
                    *((a1 + 2) as &i8) = 0;
                }
            }
        }
        v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v4);
    } while (v9);
}
