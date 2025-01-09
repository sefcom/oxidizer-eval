fn uu_dircolors::generate_dircolors_config(a0: &struct24) -> int {
    let v0: struct16;  // [bp-0x108], Other Possible Types: u64
    let v1: u64;  // [sp-0x100]
    let v2: u64;  // [sp-0xf8]
    let v3: struct16;  // [sp-0xf0], Other Possible Types: u128, void*
    let v4: u64;  // [sp-0xe8]
    let v5: void*;  // [sp-0xe0]
    let v6: u64;  // [sp-0xd8]
    let v7: u64;  // [sp-0xd0]
    let v8: u64;  // [sp-0xc8], Other Possible Types: &&struct_0
    let v9: u64;  // [sp-0xc0]
    let v10: void*;  // [sp-0xb8]
    let v11: u64;  // [sp-0xa8], Other Possible Types: struct8
    let v12: &u8;  // [sp-0xa0]
    let v13: u64;  // [sp-0x98]
    let v14: &u8;  // [sp-0x90]
    let v15: u64;  // [sp-0x88]
    let v16: i8;  // [bp-0x78]
    let v17: i8;  // [bp-0x68]
    let v18: i8;  // [bp-0x60]
    let v19: i8;  // [bp-0x50]
    let v20: i8;  // [bp-0x48]
    let v21: i8;  // [bp-0x38]
    let v23: u64;  // rax
    let v24: u256;  // ymm0
    let v25: u128;  // xmm0
    let v26: u32;  // rdx
    let v27: u64;  // rax
    let v28: u128;  // xmm0
    let v29: struct8;  // rax
    let v30: u128;  // xmm0
    let v31: u128;  // xmm0

    v3 = 0;
    v4 = 1;
    v5 = 0;
    v3 = alloc::vec::Vec<T,A>::append_elements(&g_42352f, 484);
    v3 = alloc::vec::Vec<T,A>::append_elements(&g_423713, 13);
    v0 = struct16 {
        field_0: "Eterm"
        field_8: "RESET"
    };
    v23 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v23 {
        do {
            v2 = v23;
            v12 = &v2;
            v13 = <&T as core::fmt::Display>::fmt;
            v6 = "TERM ";
            v7 = 2;
            v10 = 0;
            v8 = &v12;
            v9 = 1;
            core::option::Option<T>::map_or_else();
            v25 = v16;
            v24 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25;
            v6 = v25;
            v8 = v17;
            v3 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v7, v8 + v7), v26);
            v23 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
        } while (v23);
    }
    v3 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(&g_423720, &g_42398e), v26);
    v0 = struct16 {
        field_0: "RESET"
        field_8: ".tar"
    };
    v27 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v27 {
        do {
            v11 = v27;
            v2 = v11 + 32;
            v12 = &v11;
            v13 = <&T as core::fmt::Display>::fmt;
            v14 = &v2;
            v15 = <&T as core::fmt::Display>::fmt;
            v6 = &g_527258;
            v7 = 3;
            v10 = 0;
            v8 = &v12;
            v9 = 2;
            core::option::Option<T>::map_or_else();
            v28 = v18;
            v24 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28;
            v6 = v28;
            v8 = v19;
            v3 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v7, v8 + v7), v26);
            v27 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
        } while (v27);
    }
    v3 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(&g_423993, &g_4239da), v26);
    v3 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(&g_4239db, &g_423a24), v26);
    v0 = ".tar";
    v1 = "normal";
    v29 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v29 {
        v3 = alloc::vec::Vec<T,A>::append_elements(&g_423a24, 70);
        v3 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(&g_423a6a, &g_423aa4), v26);
        v31 = v3;
        return struct24 {
            field_0: v31
            field_16: v5
        };
    }
    do {
        v11 = v29;
        v2 = v11 + 16;
        v12 = &v11;
        v13 = <&T as core::fmt::Display>::fmt;
        v14 = &v2;
        v15 = <&T as core::fmt::Display>::fmt;
        v6 = &g_527258;
        v7 = 3;
        v10 = 0;
        v8 = &v12;
        v9 = 2;
        core::option::Option<T>::map_or_else();
        v30 = v20;
        v24 = v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30;
        v6 = v30;
        v8 = v21;
        v3 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v7, v8 + v7), v26);
        v29 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    } while (v29);
}
