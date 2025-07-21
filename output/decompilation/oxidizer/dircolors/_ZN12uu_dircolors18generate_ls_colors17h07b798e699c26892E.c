fn uu_dircolors::generate_ls_colors(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: void*;  // [bp-0x278], Other Possible Types: struct24, struct16, u64
    let v1: u64;  // [bp-0x270], Other Possible Types: unsigned long
    let v2: void*;  // [bp-0x268], Other Possible Types: u64
    let v3: u24;  // [bp-0x25f]
    let v4: u32;  // [bp-0x25c]
    let v5: struct48;  // [bp-0x258], Other Possible Types: u128
    let v6: struct16;  // [bp-0x258]
    let v7: u64;  // [bp-0x250]
    let v8: i64;  // [bp-0x248]
    let v9: struct16;  // [bp-0x240]
    let v10: i64;  // [bp-0x228], Other Possible Types: u64
    let v11: u64;  // [bp-0x220]
    let v12: i64;  // [bp-0x218]
    let v13: u64;  // [bp-0x210]
    let v14: void*;  // [bp-0x208], Other Possible Types: struct_0 *
    let v15: u64;  // [bp-0x200]
    let v16: u64;  // [bp-0x1f8]
    let v17: u64;  // [bp-0x1f8]
    let v18: u64;  // [bp-0x1f0]
    let v19: u64;  // [bp-0x1e8]
    let v20: u64;  // [bp-0x1d8]
    let v21: i64;  // [bp-0x1d0]
    let v22: i64;  // [bp-0x1c8]
    let v23: i64;  // [bp-0x1c0]
    let v24: u128;  // [bp-0x1b8]
    let v25: u64;  // [bp-0x1b8]
    let v26: u64;  // [bp-0x1b0]
    let v27: i64;  // [sp-0x1a8], Other Possible Types: u64
    let v28: u64;  // [bp-0x1a0]
    let v29: i64;  // [bp-0x198]
    let v30: u64;  // [bp-0x190]
    let v31: u64;  // [bp-0x178]
    let v32: i64;  // [bp-0x170], Other Possible Types: alloc::vec::Vec<u8, alloc::alloc::Global>, u64
    let v33: u64;  // [bp-0x170]
    let v34: u64;  // [bp-0x168]
    let v35: i64;  // [bp-0x160], Other Possible Types: u64
    let v36: u64;  // [bp-0x158]
    let v37: i64;  // [bp-0x150], Other Possible Types: void*
    let v38: u64;  // [bp-0x148]
    let v39: i64;  // [bp-0x140], Other Possible Types: u8
    let v40: u32;  // [bp-0x13f]
    let v41: u32;  // [bp-0x13c]
    let v42: u64;  // [bp-0x138]
    let v43: u64;  // [bp-0x128]
    let v44: u64;  // [bp-0x118]
    let v45: u64;  // [bp-0x110]
    let v46: u8;  // [bp-0x108]
    let v47: u64;  // [bp-0x100]
    let v48: u64;  // [bp-0xf0]
    let v49: u64;  // [bp-0xe0]
    let v50: u64;  // [bp-0xd8]
    let v51: u8;  // [bp-0xd0]
    let v52: u64;  // [bp-0xc8]
    let v53: u64;  // [bp-0xb8]
    let v54: void*;  // [bp-0xa8]
    let v55: u64;  // [bp-0xa0]
    let v56: u8;  // [bp-0x98]
    let v57: u32;  // [bp-0x97]
    let v58: u32;  // [bp-0x94]
    let v59: u64;  // [bp-0x80]
    let v60: u8;  // [bp-0x78]
    let v61: struct24;  // [bp-0x48]
    let v63: i64;  // rax
    let v64: i64;  // rax
    let v65: i64;  // rbx
    let v66: i64;  // r15
    let v67: u64;  // rdx
    let v71: u64;  // rdx
    let v75: alloc::vec::Vec<u8, alloc::alloc::Global>;  // r15
    let v78: &mut [u8];  // rax:rdx
    let v79: &mut [u8];  // rax:rdx
    let v80: u64;  // [bp-0x1d8]
    let v81: struct24;  // [bp-0x90]
    let v82: struct24;  // [bp-0x60]

    if *(a1 as &i8) == 2 {
        v0 = 0;
        v1 = 8;
        v2 = 0;
        uu_dircolors::generate_type_output(a1, a2);
        v0 = alloc::vec::Vec<T,A>::push(&v60);
        v9 = struct16 {
            field_0: ".tar"
            field_8: "normal"
        };
        v9 = struct16 {
            field_0: ".tar"
            field_8: "normal"
        };
        v64 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v9);
        if v64 {
            do {
                v5 = *(v64 as &i64);
                v7 = *((v64 + 8) as &i64);
                *(&v17 as &i128) = *((v64 + 16) as &i128);
                v32 = 0;
                v32 = v33 & -0x100000000;
                v78 = core::char::methods::encode_utf8_raw(42, &v32, v71);
                v20 = (core::slice::<impl [T]>::starts_with(v5, v7, v78.data_ptr, v78.length) ? 1 : &g_42333e);
                v21 = core::slice::<impl [T]>::starts_with(v5, v7, v78.data_ptr, v78.length) ^ 1;
                v10 = &v16;
                v11 = <&T as core::fmt::Display>::fmt;
                v12 = &v20;
                v13 = <&T as core::fmt::Display>::fmt;
                v14 = &v5;
                v15 = <&T as core::fmt::Display>::fmt;
                v32 = 2;
                v35 = 2;
                v37 = 0;
                v38 = 32;
                v39 = 3;
                v41 = v4;
                v40 = *(&v3 as &i32);
                v42 = 2;
                v43 = 2;
                v44 = 1;
                v45 = 32;
                v46 = 3;
                v47 = 2;
                v48 = 2;
                v49 = 2;
                v50 = 32;
                v51 = 3;
                v52 = 2;
                v53 = 2;
                v54 = 0;
                v55 = 32;
                v56 = 3;
                v58 = v4;
                v57 = *(&v3 as &i32);
                v24 = "\x1b[";
                v26 = 5;
                v29 = &v32;
                v30 = 4;
                v27 = &v10;
                v28 = 3;
                v82 = core::option::Option<T>::map_or_else(&v24);
                v0 = alloc::vec::Vec<T,A>::push(&v82);
                v64 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v9);
            } while (v64);
        }
        v32 = alloc::str::join_generic_copy(0x8, None, "\n");
        v75 = a0;
        *((v23 + 16) as &u64) = v35;
        *(v23 as &i128) = *(&v32.buf.cap as &i128);
    } else {
        v5 = struct48 {
            field_0: ".tar"
            field_8: "normal"
            padding_16: <UNKNOWN>
            field_24: 0
            field_32: 8
            field_40: 0
        };
        v6 = struct16 {
            field_0: ".tar"
            field_8: "normal"
        };
        v63 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
        if v63 {
            do {
                v17 = *(v63 as &i64);
                v18 = *((v63 + 8) as &i64);
                *(&v20 as &i128) = *((v63 + 16) as &i128);
                v32 = 0;
                v32 = v33 & -0x100000000;
                v79 = core::char::methods::encode_utf8_raw(42, &v32, v67);
                v0 = (core::slice::<impl [T]>::starts_with(v17, v18, v79.data_ptr, v79.length) ? 1 : &g_42333e);
                v1 = core::slice::<impl [T]>::starts_with(v17, v18, v79.data_ptr, v79.length) ^ 1;
                v10 = &v0;
                v11 = <&T as core::fmt::Display>::fmt;
                v12 = &v17;
                v13 = <&T as core::fmt::Display>::fmt;
                v32 = &g_41bbd8;
                v34 = 2;
                v37 = 0;
                v35 = v65;
                v36 = 2;
                v81 = core::option::Option<T>::map_or_else(&v32);
                v24 = v81.field_0;
                v27 = v59;
                v10 = v66;
                v11 = <alloc::string::String as core::fmt::Display>::fmt;
                v12 = &v80;
                v13 = <&T as core::fmt::Display>::fmt;
                v32 = &g_5270f8;
                v34 = 2;
                v37 = 0;
                v35 = v65;
                v36 = 2;
                v61 = core::option::Option<T>::map_or_else(&v32);
                v9 = alloc::vec::Vec<T,A>::push(&v61);
                v63 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v6);
            } while (v63);
        }
        uu_dircolors::get_colors_format_strings(&v32, v31);
        v75 = a0;
        v8 = v35;
        v5 = *(&v32 as &i128);
        v19 = v38;
        *(&v16 as &i128) = *(&v36 as &i128);
        v32 = alloc::str::join_generic_copy(0x8, None, a2, a3);
        v22 = v35;
        *(&v20 as &i128) = *(&v32.buf.cap as &i128);
        uu_dircolors::generate_type_output(v31, a2);
        v32 = &v6;
        v34 = <alloc::string::String as core::fmt::Display>::fmt;
        v35 = &v25;
        v36 = <alloc::string::String as core::fmt::Display>::fmt;
        v37 = &v80;
        v38 = <alloc::string::String as core::fmt::Display>::fmt;
        *(&v39 as &&u64) = &v17;
        v42 = <alloc::string::String as core::fmt::Display>::fmt;
        v10 = &g_527118;
        v11 = 4;
        v14 = 0;
        v12 = &v32;
        v13 = 4;
        v0 = core::option::Option<T>::map_or_else(&v10);
        *((v23 + 16) as &u64) = v2;
        *(v23 as &u128) = v0.field_0;
    }
    return v75;
}
