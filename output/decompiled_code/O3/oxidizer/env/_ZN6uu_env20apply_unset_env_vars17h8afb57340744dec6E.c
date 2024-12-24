fn uu_env::apply_unset_env_vars(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xd8]
    let v1: i64;  // [sp-0xd0]
    let v2: i64;  // [sp-0xc8]
    let v3: i64;  // [sp-0xc0]
    let v4: i64;  // [sp-0xb8]
    let v5: i64;  // [sp-0xb0]
    let v6: i224;  // [bp-0xa8]
    let v7: i64;  // [sp-0x68]
    let v8: i64;  // [sp-0x60]
    let v9: i64;  // [sp-0x58]
    let v10: i8;  // [sp-0x50]
    let v11: i192;  // [sp-0x48]
    let v13: struct8;  // rax
    let v14: i64;  // rdx
    let v15: i64;  // rax
    let v16: i64;  // rax
    let v17: i64;  // rsi
    let v18: i32;  // eax
    let v19: i64;  // rax

    v1 = *((a0 + 32) as &i64);
    v2 = *((a0 + 40) as &i64) * 16 + v1;
    v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v13 {
        return 0;
    }
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
            v11 = format!("cannot unset {:?}: Invalid argument", &v7);
            v6 = v11;
            v19 = alloc::boxed::Box<T>::new(&v6);
            return v19;
        }
        v15 = uu_env::native_int_str::NativeStr::contains(&v3, &g_41778c, v14);
        if v15 {
            v18 = v15;
            goto LABEL_4ceea0;
        } else {
            v16 = uu_env::native_int_str::NativeStr::contains(&v3, &g_417844, v14);
            if v16 {
                v18 = v16;
                v0 = "src/uu/env/src/env.rs";
LABEL_4ceea0:
                if v18 != 2 {
                    vvar_240{stack -104} = 1;
                    vvar_241{stack -96} = v4;
                    vvar_242{stack -88} = v5;
                    vvar_243{stack -80} = 1;
                    vvar_244{stack -72} = format!("cannot unset {:?}: Invalid argument", &v7);
                    v6 = v11;
                    vvar_246{reg 16} = alloc::boxed::Box<T>::new(&v6);
                    return v19;
                }
                core::option::unwrap_failed(); /* do not return */
            }
        }
        std::env::remove_var(v13, v17, v14);
        v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    } while (v13);
}
