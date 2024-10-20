fn uu_env::native_int_str::NativeStr::split_once(a0: &u64, a1: void*, a2: &u32) -> u64 {
    let v0: i192;  // [sp-0x80], Other Possible Types: struct24
    let v1: i128;  // [bp-0x68]
    let v2: i64;  // [sp-0x58]
    let v3: i192;  // [bp-0x50]
    let v4: i64;  // [sp-0x40]
    let v5: i192;  // [sp-0x38], Other Possible Types: struct24
    let v7: i64;  // rax
    let v8: i64;  // rbx
    let v10: i64;  // r14

    v7 = *(a2 as &i32);
    if v7 < 128 {
        v8 = *((a1 + 16) as &i64);
        if v8 {
            v10 = 0;
            do {
                if *((*((a1 + 8) as &i64) + v10) as &i8) == v7 {
                    v0 = uu_env::native_int_str::NativeStr::slice(a1, None, v10);
                    v5 = uu_env::native_int_str::NativeStr::slice(a1, v10 + 1, v8);
                    v1 = v0;
                    v3 = v5;
                    *(a0 as &i128) = v1;
                    *((a0 + 32) as &i64) = *((&v3 as &char + 8) as &i64);
                    *((a0 + 40) as &i64) = v4;
                    *((a0 + 16) as &i64) = v2;
                    *((a0 + 24) as &i192) = v3;
                    return a0;
                }
            } while ((v10 += 1, v8 != v10));
        }
    }
    *(a0 as &i64) = 9223372036854775809;
    return a0;
}
