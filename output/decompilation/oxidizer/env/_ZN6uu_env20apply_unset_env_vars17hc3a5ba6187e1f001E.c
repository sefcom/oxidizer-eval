fn uu_env::apply_unset_env_vars(a0: &u64) -> u64 {
    let v0: i64;  // [sp-0xd8]
    let v1: i64;  // [sp-0xd0]
    let v2: i64;  // [sp-0xc8]
    let v3: i64;  // [sp-0xc0]
    let v4: i64;  // [sp-0xb8]
    let v5: i64;  // [sp-0xb0]
    let v6: iNone;  // [sp-0xa8]
    let v7: i64;  // [sp-0x68]
    let v8: i64;  // [sp-0x60]
    let v9: i64;  // [sp-0x58]
    let v10: i8;  // [sp-0x50]
    let v11: String;  // [sp-0x48]
    let v13: struct8;  // rax
    let v14: struct8;  // rbp
    let v15: i64;  // rax
    let v16: i64;  // rax
    let v17: i32;  // eax
    let v18: i64;  // rax

    v1 = *((a0 + 32) as &i64);
    v2 = *((a0 + 40) as &i64) * 16 + v1;
    v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v13 {
        return 0;
    }
    v14 = v13;
    v0 = "src/uu/env/src/env.rs";
    do {
        v3 = 0x8000000000000000;
        v4 = v8;
        v5 = v9;
        if !v5 {
            v7 = 1;
            v8 = v4;
            v9 = v5;
            v10 = 1;
            v11 = format!("cannot unset {}: Invalid argument", &v7);
            v6 = *(&v11 as &i224);
            v18 = alloc::boxed::Box<T>::new(&v6);
            return v18;
        }
        v15 = uu_env::native_int_str::NativeStr::contains(&v3, &g_417568);
        if v15 as u8 {
            v17 = v15 as u32;
            goto LABEL_4ced70;
        } else {
            v16 = uu_env::native_int_str::NativeStr::contains(&v3, &g_417620);
            if v16 as u8 {
                v17 = v16 as u32;
                v0 = "src/uu/env/src/env.rs";
LABEL_4ced70:
                if v17 != 2 {
                    vvar_235{stack -104} = 1;
                    vvar_236{stack -96} = v4;
                    vvar_237{stack -88} = v5;
                    vvar_238{stack -80} = 1;
                    vvar_239{stack -72} = format!("cannot unset {}: Invalid argument", &v7);
                    vvar_241{stack -168} = *(&v11 as &i224);
                    vvar_242{reg 16} = alloc::boxed::Box<T>::new(&v6);
                    return v18;
                }
                core::option::unwrap_failed(v0); /* do not return */
            }
        }
        std::env::remove_var(v14);
        v14 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    } while (v14);
}
