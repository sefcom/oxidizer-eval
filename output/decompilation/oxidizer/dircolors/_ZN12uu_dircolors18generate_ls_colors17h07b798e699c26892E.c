fn uu_dircolors::generate_ls_colors(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: struct16;  // [bp-0x278], Other Possible Types: struct24, void*, u64
    let v1: i64;  // [bp-0x270], Other Possible Types: u64
    let v2: void*;  // [bp-0x268], Other Possible Types: u64
    let v3: u24;  // [bp-0x25f]
    let v4: u32;  // [bp-0x25c]
    let v5: u64;  // [bp-0x258]
    let v6: u128;  // [bp-0x258]
    let v7: u64;  // [bp-0x250]
    let v8: i64;  // [bp-0x248]
    let v9: void*;  // [bp-0x240], Other Possible Types: struct16, u128
    let v10: u64;  // [bp-0x238]
    let v11: void*;  // [bp-0x230]
    let v12: i64;  // [bp-0x228], Other Possible Types: u64
    let v13: u64;  // [bp-0x220]
    let v14: i64;  // [bp-0x218]
    let v15: u64;  // [bp-0x210]
    let v16: i64;  // [bp-0x208], Other Possible Types: void*
    let v17: u64;  // [bp-0x200]
    let v18: u64;  // [bp-0x1f8]
    let v19: u64;  // [bp-0x1f8]
    let v20: u64;  // [bp-0x1f0]
    let v21: u64;  // [bp-0x1e8]
    let v22: u64;  // [bp-0x1d8]
    let v23: i64;  // [bp-0x1d0]
    let v24: i64;  // [bp-0x1c8]
    let v25: i64;  // [bp-0x1c0]
    let v26: u64;  // [bp-0x1b8]
    let v27: u64;  // [bp-0x1b8]
    let v28: u64;  // [bp-0x1b0]
    let v29: i64;  // [sp-0x1a8], Other Possible Types: u64
    let v30: u64;  // [bp-0x1a0]
    let v31: i64;  // [bp-0x198]
    let v32: u64;  // [bp-0x190]
    let v33: u64;  // [bp-0x178]
    let v34: u32;  // [bp-0x170], Other Possible Types: alloc::vec::Vec<u8, alloc::alloc::Global>, struct_0 *
    let v35: u64;  // [bp-0x170]
    let v36: u64;  // [bp-0x168]
    let v37: i64;  // [bp-0x160], Other Possible Types: u64
    let v38: u64;  // [bp-0x158]
    let v39: void*;  // [bp-0x150], Other Possible Types: struct_0 *
    let v40: u64;  // [bp-0x148]
    let v41: i64;  // [bp-0x140], Other Possible Types: u8
    let v42: u32;  // [bp-0x13f]
    let v43: u32;  // [bp-0x13c]
    let v44: u64;  // [bp-0x138]
    let v45: u64;  // [bp-0x128]
    let v46: u64;  // [bp-0x118]
    let v47: u64;  // [bp-0x110]
    let v48: u8;  // [bp-0x108]
    let v49: u64;  // [bp-0x100]
    let v50: u64;  // [bp-0xf0]
    let v51: u64;  // [bp-0xe0]
    let v52: u64;  // [bp-0xd8]
    let v53: u8;  // [bp-0xd0]
    let v54: u64;  // [bp-0xc8]
    let v55: u64;  // [bp-0xb8]
    let v56: void*;  // [bp-0xa8]
    let v57: u64;  // [bp-0xa0]
    let v58: u8;  // [bp-0x98]
    let v59: u32;  // [bp-0x97]
    let v60: u32;  // [bp-0x94]
    let v61: u64;  // [bp-0x80]
    let v62: u8;  // [bp-0x78]
    let v63: struct24;  // [bp-0x48]
    let v65: i64;  // rax
    let v66: i64;  // rax
    let v67: i64;  // rbx
    let v68: i64;  // r15
    let v69: u64;  // rdx
    let v73: u64;  // rdx
    let v77: alloc::vec::Vec<u8, alloc::alloc::Global>;  // r15
    let v80: &mut [u8];  // rax:rdx
    let v81: &mut [u8];  // rax:rdx
    let v82: u64;  // [bp-0x1d8]
    let v83: struct24;  // [bp-0x90]
    let v84: struct24;  // [bp-0x60]

    if *(a1 as &i8) == 2 {
        v0 = 0;
        v1 = 8;
        v2 = 0;
        uu_dircolors::generate_type_output(a1, a2);
        v0 = alloc::vec::Vec<T,A>::push(&v62);
        v9 = struct16 {
            field_0: ".tar"
            field_8: "normal"
        };
        v66 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v9);
        if v66 {
            do {
                v5 = *(v66 as &i64);
                v7 = *((v66 + 8) as &i64);
                *(&v19 as &i128) = *((v66 + 16) as &i128);
                v34 = 0;
                v34 = v35 & -0x100000000;
                v80 = core::char::methods::encode_utf8_raw(42, &v34, v73);
                v22 = (core::slice::<impl [T]>::starts_with(v5, v7, v80.data_ptr, v80.length) ? 1 : &g_42333e);
                v23 = core::slice::<impl [T]>::starts_with(v5, v7, v80.data_ptr, v80.length) ^ 1;
                v12 = &v18;
                v13 = <&T as core::fmt::Display>::fmt;
                v14 = &v22;
                v15 = <&T as core::fmt::Display>::fmt;
                v16 = &v5;
                v17 = <&T as core::fmt::Display>::fmt;
                v34 = 2;
                v37 = 2;
                v39 = 0;
                v40 = 32;
                v41 = 3;
                v43 = v4;
                v42 = *(&v3 as &i32);
                v44 = 2;
                v45 = 2;
                v46 = 1;
                v47 = 32;
                v48 = 3;
                v49 = 2;
                v50 = 2;
                v51 = 2;
                v52 = 32;
                v53 = 3;
                v54 = 2;
                v55 = 2;
                v56 = 0;
                v57 = 32;
                v58 = 3;
                v60 = v4;
                v59 = *(&v3 as &i32);
                v26 = "\x1b[";
                v28 = 5;
                v31 = &v34;
                v32 = 4;
                v29 = &v12;
                v30 = 3;
                v84 = core::option::Option<T>::map_or_else(&v26);
                v0 = alloc::vec::Vec<T,A>::push(&v84);
                v66 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v9);
            } while (v66);
        }
        v34 = alloc::str::join_generic_copy(0x8, None, "\n");
        v77 = a0;
        *((v25 + 16) as &u64) = v37;
        *(v25 as &i128) = *(&v34.buf.cap as &i128);
    } else {
        v9 = 0;
        v10 = 8;
        v11 = 0;
        v6 = struct16 {
            field_0: ".tar"
            field_8: "normal"
        };
        v65 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
        if v65 {
            do {
                v19 = *(v65 as &i64);
                v20 = *((v65 + 8) as &i64);
                *(&v22 as &i128) = *((v65 + 16) as &i128);
                v34 = 0;
                v34 = v35 & -0x100000000;
                v81 = core::char::methods::encode_utf8_raw(42, &v34, v69);
                v0 = (core::slice::<impl [T]>::starts_with(v19, v20, v81.data_ptr, v81.length) ? 1 : &g_42333e);
                v1 = core::slice::<impl [T]>::starts_with(v19, v20, v81.data_ptr, v81.length) ^ 1;
                v12 = &v0;
                v13 = <&T as core::fmt::Display>::fmt;
                v14 = &v19;
                v15 = <&T as core::fmt::Display>::fmt;
                v34 = &g_41bbd8;
                v36 = 2;
                v39 = 0;
                v37 = v67;
                v38 = 2;
                v83 = core::option::Option<T>::map_or_else(&v34);
                v26 = v83.field_0;
                v29 = v61;
                v12 = v68;
                v13 = <alloc::string::String as core::fmt::Display>::fmt;
                v14 = &v82;
                v15 = <&T as core::fmt::Display>::fmt;
                v34 = &g_5270f8;
                v36 = 2;
                v39 = 0;
                v37 = v67;
                v38 = 2;
                v63 = core::option::Option<T>::map_or_else(&v34);
                v9 = alloc::vec::Vec<T,A>::push(&v63);
                v65 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
            } while (v65);
        }
        uu_dircolors::get_colors_format_strings(&v34, v33);
        v77 = a0;
        v8 = v37;
        v5 = *(&v34 as &i128);
        v21 = v40;
        *(&v18 as &i128) = *(&v38 as &i128);
        v34 = alloc::str::join_generic_copy(0x8, None, a2, a3);
        v24 = v37;
        *(&v22 as &i128) = *(&v34.buf.cap as &i128);
        uu_dircolors::generate_type_output(v33, a2);
        v34 = &v6;
        v36 = <alloc::string::String as core::fmt::Display>::fmt;
        v37 = &v27;
        v38 = <alloc::string::String as core::fmt::Display>::fmt;
        v39 = &v82;
        v40 = <alloc::string::String as core::fmt::Display>::fmt;
        *(&v41 as &&u64) = &v19;
        v44 = <alloc::string::String as core::fmt::Display>::fmt;
        v12 = &g_527118;
        v13 = 4;
        v16 = 0;
        v14 = &v34;
        v15 = 4;
        v0 = core::option::Option<T>::map_or_else(&v12);
        *((v25 + 16) as &u64) = v2;
        *(v25 as &u128) = v0.field_0;
    }
    return v77;
}
