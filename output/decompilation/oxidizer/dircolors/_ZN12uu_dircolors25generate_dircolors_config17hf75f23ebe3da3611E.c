fn uu_dircolors::generate_dircolors_config(a0: i64) -> long long {
    let v0: u128;  // [bp-0x108]
    let v1: u64;  // [bp-0xf8]
    let v2: u192;  // [bp-0xf0]
    let v3: u64;  // [bp-0xd8], Other Possible Types: struct24
    let v4: u128;  // [bp-0xd8]
    let v5: u64;  // [bp-0xd0]
    let v6: i64;  // [bp-0xc8], Other Possible Types: u64
    let v7: u64;  // [bp-0xc0]
    let v8: void*;  // [bp-0xb8], Other Possible Types: std::io::stdio::Stdin
    let v9: u64;  // [bp-0xa8]
    let v10: i64;  // [bp-0xa0]
    let v11: u64;  // [bp-0x98]
    let v12: i64;  // [bp-0x90]
    let v13: u64;  // [bp-0x88]
    let v14: i64;  // [bp-0x80]
    let v15: u128;  // [bp-0x78]
    let v16: u64;  // [bp-0x68]
    let v17: u128;  // [bp-0x60]
    let v18: u64;  // [bp-0x50]
    let v19: u128;  // [bp-0x48]
    let v20: i8;  // [bp-0x38]
    let v22: u64;  // rax
    let v23: u64;  // rdx
    let v25: u64;  // rax
    let v26: u64;  // rax
    let v27: &[u8];  // rax:rdx
    let v28: &[u8];  // rax:rdx
    let v29: &[u8];  // rax:rdx
    let v30: &[u8];  // rax:rdx
    let v31: &[u8];  // rax:rdx
    let v32: &[u8];  // rax:rdx
    let v33: &[u8];  // rax:rdx

    v2 = alloc::vec::Vec<u8, alloc::alloc::Global> {
        buf: alloc::raw_vec::RawVec<u8, alloc::alloc::Global> {
            cap: alloc::raw_vec::Cap {
                __0: 0
            }
            ptr: core::ptr::unique::Unique<u8> {
                pointer: core::ptr::non_null::NonNull<u8> {
                    pointer: 1
                }
                _marker: core::marker::PhantomData<u8> { }
            }
            alloc: alloc::alloc::Global { }
        }
        len: 0
    };
    alloc::vec::Vec<T,A>::append_elements(&v2, "# Configuration file for dircolors, a utility to help you set the\n# LS_COLORS environment variable used by GNU ls with the --color option.\n# The keywords COLOR, OPTIONS, and EIGHTBIT (honored by the\n# slackware version of dircolors) are recognized but ignored.\n# Global config options can be specified before TERM or COLORTERM entries\n# Below are TERM or COLORTERM entries, which can be glob patterns, which\n# restrict following config to systems with matching environment variables.\n");
    alloc::vec::Vec<T,A>::append_elements(&v2, "COLORTERM ?*\n");
    v0 = struct16 {
        field_0: "Eterm"
        field_8: "RESET"
    };
    v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v22 {
        do {
            v1 = v22;
            v10 = &v1;
            v11 = <&T as core::fmt::Display>::fmt;
            v3 = "TERM ";
            v5 = 2;
            v8 = 0;
            v6 = &v10;
            v7 = 1;
            v3 = core::option::Option<T>::map_or_else(v23);
            v4 = v15;
            v6 = v16;
            v33 = core::slice::iter::Iter<T>::make_slice(0x2);
            alloc::vec::Vec<T,A>::append_elements(&v2, v33.ptr, v23);
            v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
        } while (v22);
    }
    v31 = core::slice::iter::Iter<T>::make_slice(&g_423720);
    alloc::vec::Vec<T,A>::append_elements(&v2, v31.ptr, v23);
    v0 = struct16 {
        field_0: "RESET"
        field_8: ".tar"
    };
    v25 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v25 {
        do {
            v9 = v25;
            v1 = v25 + 32;
            v10 = &v9;
            v11 = <&T as core::fmt::Display>::fmt;
            v12 = &v1;
            v13 = <&T as core::fmt::Display>::fmt;
            v3 = &g_527258;
            v5 = 3;
            v8 = 0;
            v6 = &v10;
            v7 = 2;
            v3 = core::option::Option<T>::map_or_else(v23);
            v4 = v17;
            v6 = v18;
            v32 = core::slice::iter::Iter<T>::make_slice(0x3);
            alloc::vec::Vec<T,A>::append_elements(&v2, v32.ptr, v23);
            v25 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
        } while (v25);
    }
    v27 = core::slice::iter::Iter<T>::make_slice(&g_423993);
    alloc::vec::Vec<T,A>::append_elements(&v2, v27.ptr, v23);
    v28 = core::slice::iter::Iter<T>::make_slice(&g_4239db);
    alloc::vec::Vec<T,A>::append_elements(&v2, v28.ptr, v23);
    v0 = struct16 {
        field_0: ".tar"
        field_8: "normal"
    };
    v26 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
    if v26 {
        do {
            v9 = v26;
            v1 = v26 + 16;
            v10 = &v9;
            v11 = <&T as core::fmt::Display>::fmt;
            v12 = &v1;
            v13 = <&T as core::fmt::Display>::fmt;
            v3 = &g_527258;
            v5 = 3;
            v8 = 0;
            v6 = &v10;
            v7 = 2;
            v3 = core::option::Option<T>::map_or_else(v23);
            v4 = v19;
            v6 = *(&v20 as &i64);
            v29 = core::slice::iter::Iter<T>::make_slice(0x3);
            alloc::vec::Vec<T,A>::append_elements(&v2, v29.ptr, v23);
            v26 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v0);
        } while (v26);
    }
    alloc::vec::Vec<T,A>::append_elements(&v2, "# Subsequent TERM or COLORTERM entries, can be used to add / override\n");
    v30 = core::slice::iter::Iter<T>::make_slice(&g_423a6a);
    alloc::vec::Vec<T,A>::append_elements(&v2, v30.ptr, v23);
    *((v14 + 16) as &i64) = 0;
    *(v14 as &i128) = v2;
    return v14;
}
