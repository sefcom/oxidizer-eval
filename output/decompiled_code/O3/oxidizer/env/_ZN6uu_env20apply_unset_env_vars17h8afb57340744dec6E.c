fn uu_env::apply_unset_env_vars(a0: &u64, a1: u32, a2: u32) -> u64 {
    let v0: u64;  // [sp-0xd8]
    let v1: u64;  // [sp-0xd0]
    let v2: u64;  // [sp-0xc8]
    let v3: u64;  // [sp-0xc0]
    let v4: u64;  // [sp-0xb8]
    let v5: u64;  // [sp-0xb0]
    let v6: struct40;  // [bp-0xa8]
    let v7: u64;  // [sp-0x98]
    let v8: u32;  // [bp-0x90]
    let v9: u64;  // [sp-0x68]
    let v10: u64;  // [sp-0x60]
    let v11: u64;  // [sp-0x58]
    let v12: u8;  // [sp-0x50]
    let v13: i192;  // [sp-0x48]
    let v15: struct8;  // rax
    let v16: u64;  // rdx
    let v17: u64;  // rax
    let v18: u64;  // rax
    let v19: u64;  // rsi
    let v20: u32;  // eax
    let v21: void*;  // rax

    v1 = a0[4];
    v2 = a0[5] * 16 + v1;
    v15 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v15 {
        return 0;
    }
    v0 = "src/uu/env/src/env.rs";
    do {
        v3 = 0x8000000000000000;
        v4 = v10;
        v5 = v11;
        if !v5 {
            v9 = 1;
            v10 = v4;
            v11 = v5;
            v12 = 1;
            v13 = format!("cannot unset {:?}: Invalid argument", &v9);
            v8 = 125;
            *(&v6 as &i192) = v13;
            v7 = *((&v13 as &char + 16) as &i64);
            v21 = alloc::boxed::Box<T>::new(&v6);
            return v21;
        }
        v17 = uu_env::native_int_str::NativeStr::contains(&v3, &g_41778c, v16);
        if v17 {
            v20 = v17;
            goto LABEL_4ceea0;
        } else {
            v18 = uu_env::native_int_str::NativeStr::contains(&v3, &g_417844, v16);
            if v18 {
                v20 = v18;
                v0 = "src/uu/env/src/env.rs";
LABEL_4ceea0:
                if v20 != 2 {
                    vvar_240{stack -104} = 1;
                    vvar_241{stack -96} = v4;
                    vvar_242{stack -88} = v5;
                    vvar_243{stack -80} = 1;
                    vvar_244{stack -72} = format!("cannot unset {:?}: Invalid argument", &v9);
                    v8 = 125;
                    *(&v6 as &i192) = v13;
                    vvar_246{stack -152} = *((&v13 as &char + 16) as &i64);
                    vvar_247{reg 16} = alloc::boxed::Box<T>::new(&v6);
                    return v21;
                }
                core::option::unwrap_failed(); /* do not return */
            }
        }
        std::env::remove_var(v15, v19, v16);
        v15 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    } while (v15);
}
