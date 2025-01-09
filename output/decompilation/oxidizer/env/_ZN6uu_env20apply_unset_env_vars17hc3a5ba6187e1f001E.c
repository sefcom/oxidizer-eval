fn uu_env::apply_unset_env_vars(a0: &u64) -> u64 {
    let v0: i64;  // [sp-0xd8]
    let v1: i64;  // [sp-0xd0]
    let v2: i64;  // [sp-0xc8]
    let v3: i64;  // [sp-0xc0]
    let v4: i64;  // [sp-0xb8]
    let v5: i64;  // [sp-0xb0]
    let v6: i224;  // [bp-0xa8], Other Possible Types: struct28
    let v7: i64;  // [bp-0x90]
    let v8: i64;  // [sp-0x88]
    let v9: i64;  // [sp-0x78]
    let v10: i64;  // [sp-0x70]
    let v11: i64;  // [sp-0x68]
    let v12: i64;  // [sp-0x60]
    let v13: i64;  // [sp-0x58]
    let v14: i8;  // [sp-0x50]
    let v15: i8;  // [bp-0x48]
    let v17: struct8;  // rax
    let v18: i64;  // rax
    let v19: i64;  // rax
    let v20: i32;  // eax
    let v21: i64;  // rax

    v1 = *((a0 + 32) as &i64);
    v2 = *((a0 + 40) as &i64) * 16 + v1;
    v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v17 {
        return 0;
    }
    v0 = "src/uu/env/src/env.rs";
    do {
        v3 = 0x8000000000000000;
        v4 = v12;
        v5 = v13;
        if !v5 {
            v11 = 1;
            v12 = v4;
            v13 = v5;
            v14 = 1;
            v9 = &v11;
            v10 = <os_display::Quoted as core::fmt::Display>::fmt;
            v6 = struct28 {
                field_0: "cannot unset "
                field_16: &v9
                field_24: <UNKNOWN>
            };
            v8 = 0;
            v7 = 1;
            core::option::Option<T>::map_or_else();
            v6 = v15;
            v21 = alloc::boxed::Box<T>::new(&v6);
            return v21;
        }
        v18 = uu_env::native_int_str::NativeStr::contains(&v3, &g_417568);
        if v18 {
            v20 = v18;
            goto LABEL_4ced70;
        } else {
            v19 = uu_env::native_int_str::NativeStr::contains(&v3, &g_417620);
            if v19 {
                v20 = v19;
                v0 = "src/uu/env/src/env.rs";
LABEL_4ced70:
                if v20 != 2 {
                    vvar_235{stack -104} = 1;
                    vvar_236{stack -96} = v4;
                    vvar_237{stack -88} = v5;
                    vvar_238{stack -80} = 1;
                    vvar_239{stack -120} = &v11;
                    vvar_240{stack -112} = <os_display::Quoted as core::fmt::Display>::fmt;
                    v6 = struct28 {
                        field_0: "cannot unset "
                        field_16: &v9
                        field_24: <UNKNOWN>
                    };
                    vvar_241{stack -136} = 0;
                    v7 = 1;
                    core::option::Option<T>::map_or_else();
                    vvar_243{stack -168} = v15;
                    vvar_244{reg 16} = alloc::boxed::Box<T>::new(&v6);
                    return v21;
                }
                core::option::unwrap_failed(v0); /* do not return */
            }
        }
        std::env::remove_var(v17);
        v17 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    } while (v17);
}
