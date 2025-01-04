fn uu_dircolors::generate_dircolors_config(a0: &struct24) -> int {
    let v0: struct16;  // [bp-0x108], Other Possible Types: u64
    let v1: u64;  // [sp-0x100]
    let v2: u64;  // [sp-0xf8]
    let v3: struct16;  // [sp-0xf0], Other Possible Types: u128, void*
    let v4: u64;  // [sp-0xe8]
    let v5: void*;  // [sp-0xe0]
    let v6: u128;  // [bp-0xd8]
    let v7: u64;  // [sp-0xd0]
    let v8: u64;  // [sp-0xc8]
    let v9: u64;  // [sp-0xa8], Other Possible Types: struct8
    let v10: i192;  // [sp-0x78]
    let v11: i192;  // [sp-0x60]
    let v12: i192;  // [sp-0x48]
    let v14: u64;  // rax
    let v15: u256;  // ymm0
    let v16: u128;  // xmm0
    let v17: u32;  // rdx
    let v18: u64;  // rax
    let v19: u128;  // xmm0
    let v20: struct8;  // rax
    let v21: u128;  // xmm0
    let v22: u128;  // xmm0

    v3 = 0;
    v4 = 1;
    v5 = 0;
    v3 = alloc::vec::Vec<T,A>::append_elements(&g_42352f, 484);
    v3 = alloc::vec::Vec<T,A>::append_elements(&g_423713, 13);
    v0 = struct16 {
        field_0: "Eterm"
        field_8: "RESET"
    };
    v14 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v14 {
        do {
            v2 = v14;
            v10 = format!("TERM {:?}\n", &v2);
            v16 = v10;
            v15 = v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v16;
            v6 = v16;
            v8 = *((&v10 as &char + 16) as &i64);
            v3 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v7, v8 + v7), v17);
            v14 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
        } while (v14);
    }
    v3 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(&g_423720, &g_42398e), v17);
    v0 = struct16 {
        field_0: "RESET"
        field_8: ".tar"
    };
    v18 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v18 {
        do {
            v9 = v18;
            v2 = v9 + 32;
            v11 = format!("{:?} {:?}\n", &v9, &v2);
            v19 = v11;
            v15 = v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v19;
            v6 = v19;
            v8 = *((&v11 as &char + 16) as &i64);
            v3 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v7, v8 + v7), v17);
            v18 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
        } while (v18);
    }
    v3 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(&g_423993, &g_4239da), v17);
    v3 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(&g_4239db, &g_423a24), v17);
    v0 = ".tar";
    v1 = "normal";
    v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v20 {
        v3 = alloc::vec::Vec<T,A>::append_elements(&g_423a24, 70);
        v3 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(&g_423a6a, &g_423aa4), v17);
        v22 = v3;
        return struct24 {
            field_0: v22
            field_16: v5
        };
    }
    do {
        v9 = v20;
        v2 = v9 + 16;
        v12 = format!("{:?} {:?}\n", &v9, &v2);
        v21 = v12;
        v15 = v15 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21;
        v6 = v21;
        v8 = *((&v12 as &char + 16) as &i64);
        v3 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v7, v8 + v7), v17);
        v20 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    } while (v20);
}
