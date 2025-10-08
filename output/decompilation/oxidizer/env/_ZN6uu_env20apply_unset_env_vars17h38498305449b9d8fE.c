fn uu_env::apply_unset_env_vars(a0: i64) -> u64 {
    let v0: u128;  // [bp-0xc8]
    let v1: Option<struct17>;  // [bp-0xb8]
    let v2: u32;  // [bp-0xb0]
    let v3: struct24;  // [bp-0x80]
    let v4: u64;  // [bp-0x68]
    let v5: u64;  // [bp-0x60]
    let v6: u64;  // [bp-0x58]
    let v7: u8;  // [bp-0x50]
    let v8: alloc::string::String;  // [bp-0x48]
    let v10: i64;  // r12
    let v11: u64;  // rbp
    let v12: u64;  // rbp
    let v13: u8;  // al
    let v14: u8;  // al

    if !*((a0 + 40) as &i64) {
        return 0;
    }
    do {
        v12 = v11;
        v3 = struct24 {
            field_0: 0x8000000000000000
            field_8: *(v10 as &i64)
            field_16: *((v10 + 8) as &i64)
        };
        if !*((v10 + 8) as &i64) {
            v4 = 1;
            v5 = *(v10 as &i64);
            v6 = *((v10 + 8) as &i64);
            v7 = 1;
            v8 = format!("cannot unset {}: Invalid argument", &v4);
            v2 = 125;
            v0 = *(&v8.vec.buf.inner.cap as &i128);
            v1 = v8.vec.len;
            return alloc::boxed::Box<T>::new(&v0) as u64;
        }
        v13 = uu_env::native_int_str::NativeStr::contains(&v3, &g_41c740);
        if v13 == 2 {
            core::option::unwrap_failed(); /* do not return */
        }
        if (v13 & 1) {
            v4 = 1;
            v5 = *(v10 as &i64);
            v6 = *((v10 + 8) as &i64);
            v7 = 1;
            v8 = format!("cannot unset {}: Invalid argument", &v4);
            v2 = 125;
            v0 = *(&v8.vec.buf.inner.cap as &i128);
            v1 = v8.vec.len;
            return alloc::boxed::Box<T>::new(&v0) as u64;
        }
        v14 = uu_env::native_int_str::NativeStr::contains(&v3, &g_41c7fc);
        if v14 == 2 {
            core::option::unwrap_failed(); /* do not return */
        }
        if (v14 & 1) {
            v4 = 1;
            v5 = *(v10 as &i64);
            v6 = *((v10 + 8) as &i64);
            v7 = 1;
            v8 = format!("cannot unset {}: Invalid argument", &v4);
            v2 = 125;
            v0 = *(&v8.vec.buf.inner.cap as &i128);
            v1 = v8.vec.len;
            return alloc::boxed::Box<T>::new(&v0) as u64;
        }
        std::env::remove_var(v10);
        v11 = v12 - 16;
    } while (v12 != 16);
    return 0;
}
