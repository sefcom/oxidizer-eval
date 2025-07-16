fn uu_env::apply_unset_env_vars(a0: i64) -> long long {
    let v1: u64;  // [bp-0xd0]
    let v2: u64;  // [bp-0xc8]
    let v3: u64;  // [bp-0xc0]
    let v4: alloc::string::String;  // [bp-0xb8]
    let v5: u64;  // [bp-0xb0]
    let v6: struct24;  // [bp-0xa8], Other Possible Types: u64
    let v7: u64;  // [bp-0xa0]
    let v8: i64;  // [bp-0x98], Other Possible Types: u64
    let v9: u64;  // [bp-0x90]
    let v10: void*;  // [bp-0x88]
    let v11: i64;  // [bp-0x78]
    let v12: u64;  // [bp-0x70]
    let v13: u64;  // [bp-0x68]
    let v14: alloc::string::String;  // [bp-0x60]
    let v15: u64;  // [bp-0x58]
    let v16: u8;  // [bp-0x50]
    let v17: u8;  // [bp-0x48]
    let v18: i8;  // [bp-0x38]
    let v20: alloc::raw_vec::Cap;  // rax
    let v21: u64;  // rax
    let v22: u64;  // rax
    let v23: u32;  // eax
    let v24: u64;  // rdx

    v1 = *((a0 + 32) as &i64);
    v2 = *((a0 + 40) as &i64) * 16 + *((a0 + 32) as &i64);
    v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v20 {
        return 0;
    }
    do {
        v3 = 0x8000000000000000;
        v4 = *(v20 as &i64);
        v5 = *((v20 + 8) as &i64);
        if !v5 {
LABEL_4ced79:
            v13 = 1;
            v14 = *(v20 as &i64);
            v15 = v5;
            v16 = 1;
            v11 = &v13;
            v12 = <os_display::Quoted as core::fmt::Display>::fmt;
            v6 = "cannot unset ";
            v7 = 2;
            v10 = 0;
            v8 = &v11;
            v9 = 1;
            v6 = core::option::Option<T>::map_or_else(v24);
            v9 = 125;
            memcpy(&v6, &v17, 16);
            v8 = *(&v18 as &i64);
            return alloc::boxed::Box<T>::new(&v6);
        }
        v21 = uu_env::native_int_str::NativeStr::contains(&v3, &g_417568);
        if v21 || (v22 = uu_env::native_int_str::NativeStr::contains(&v3, &g_417620) as i64, uu_env::native_int_str::NativeStr::contains(&v3, &g_417620) as i64 as i8) {
            if v23 == 2 {
                core::option::unwrap_failed(); /* do not return */
            }
            goto LABEL_4ced79;
        }
        std::env::remove_var(v20);
        v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    } while (v20);
    return 0;
}
