fn uu_dircolors::generate_ls_colors(a0: &struct24, a1: &u8, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x278], Other Possible Types: struct16, String
    let v1: i64;  // [sp-0x270]
    let v2: i64;  // [sp-0x268]
    let v3: i8;  // [bp-0x25f]
    let v4: i8;  // [bp-0x25c]
    let v5: i64;  // [sp-0x258], Other Possible Types: int
    let v6: i64;  // [sp-0x250]
    let v7: i64;  // [sp-0x248]
    let v8: i64;  // [sp-0x240], Other Possible Types: struct16
    let v9: i64;  // [sp-0x238]
    let v10: i64;  // [sp-0x230]
    let v11: i64;  // [bp-0x228]
    let v12: i64;  // [sp-0x220]
    let v13: i64;  // [sp-0x218]
    let v14: i64;  // [sp-0x210]
    let v15: i64;  // [sp-0x208]
    let v16: i64;  // [sp-0x200]
    let v17: iNone;  // [sp-0x1f8], Other Possible Types: unsigned long
    let v18: i64;  // [sp-0x1f0]
    let v19: i64;  // [sp-0x1e8]
    let v20: struct24;  // [sp-0x1d8], Other Possible Types: int, unsigned long
    let v21: i64;  // [sp-0x1d0]
    let v22: struct40;  // [bp-0x1b8], Other Possible Types: char, int
    let v23: i64;  // [sp-0x1a8]
    let v24: i64;  // [sp-0x190]
    let v25: i32;  // [bp-0x170], Other Possible Types: struct24, Arguments, unsigned long
    let v26: i64;  // [sp-0x160]
    let v27: i64;  // [sp-0x150]
    let v28: i64;  // [sp-0x148]
    let v29: i8;  // [sp-0x140]
    let v30: i32;  // [bp-0x13f]
    let v31: i32;  // [sp-0x13c]
    let v32: i64;  // [sp-0x138]
    let v33: i64;  // [sp-0x128]
    let v34: i64;  // [sp-0x118]
    let v35: i64;  // [sp-0x110]
    let v36: i8;  // [sp-0x108]
    let v37: i64;  // [sp-0x100]
    let v38: i64;  // [sp-0xf0]
    let v39: i64;  // [sp-0xe0]
    let v40: i64;  // [sp-0xd8]
    let v41: i8;  // [sp-0xd0]
    let v42: i64;  // [sp-0xc8]
    let v43: i64;  // [sp-0xb8]
    let v44: i64;  // [sp-0xa8]
    let v45: i64;  // [sp-0xa0]
    let v46: i8;  // [sp-0x98]
    let v47: i32;  // [bp-0x97]
    let v48: i32;  // [sp-0x94]
    let v49: struct24;  // [sp-0x90]
    let v50: i8;  // [bp-0x78]
    let v51: struct24;  // [sp-0x60]
    let v52: struct24;  // [sp-0x48]
    let v54: i64;  // 4140
    let v55: struct8;  // rax
    let v56: struct8;  // rax
    let v58: i64;  // r15
    let v59: iNone;  // ymm0
    let v60: iNone;  // xmm0
    let v61: i64;  // rdx
    let v62: i8;  // al
    let v64: iNone;  // xmm0
    let v65: iNone;  // ymm0
    let v66: iNone;  // xmm0
    let v67: i64;  // rdx
    let v68: i8;  // al

    v54 = *(a1 as &i8);
    if v54 as u8 == 2 {
        v0 = 0;
        v1 = 8;
        v2 = 0;
        uu_dircolors::generate_type_output(&v50, a1);
        v0 = alloc::vec::Vec<T,A>::push(&v50);
        v8 = ".tar";
        v9 = "normal";
        v56 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        if !v56 {
            v25 = alloc::str::join_generic_copy(v1, v2, "
");
            return v25;
        }
        do {
            v5 = *(v56 as &i64);
            v6 = *((v56 + 8) as &i64);
            v66 = *((v56 + 16) as &i128);
            v65 = v65 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v66 as u256;
            v17 = v66;
            *(&v25 as &i32) = 0;
            v68 = core::slice::<impl [T]>::starts_with(v5, v6, core::char::methods::encode_utf8_raw(42, &v25), v67) as i8;
            v20 = (v68 ? 1 : &g_42333e);
            v21 = v68 ^ 1;
            v11 = &v17;
            v12 = <&T as core::fmt::Display>::fmt;
            v13 = &v20;
            v14 = <&T as core::fmt::Display>::fmt;
            v15 = &v5;
            v16 = <&T as core::fmt::Display>::fmt;
            *(&v25 as &i64) = 2;
            v26 = 2;
            v27 = 0;
            v28 = 32;
            v29 = 3;
            v31 = *(&v4 as &i32);
            *(&v30 as &i32) = *(&v3 as &i32);
            v32 = 2;
            v33 = 2;
            v34 = 1;
            v35 = 32;
            v36 = 3;
            v37 = 2;
            v38 = 2;
            v39 = 2;
            v40 = 32;
            v41 = 3;
            v42 = 2;
            v43 = 2;
            v44 = 0;
            v45 = 32;
            v46 = 3;
            v48 = *(&v4 as &i32);
            *(&v47 as &i32) = *(&v3 as &i32);
            v22 = struct40 {
                field_0: "\x1b["
                field_8: 5
                field_16: &v11
                field_24: 3
                field_32: &v25
            };
            v24 = 4;
            v51 = core::option::Option<T>::map_or_else(&v22);
            v0 = alloc::vec::Vec<T,A>::push(&v51);
            v56 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        } while (v56);
    }
    v8 = 0;
    v9 = 8;
    v10 = 0;
    v5 = ".tar";
    v6 = "normal";
    v55 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if v55 {
        v58 = &v22;
        do {
            v17 = *(v55 as &i64);
            v18 = *((v55 + 8) as &i64);
            v60 = *((v55 + 16) as &i128);
            v20 = v60;
            *(&v25 as &i32) = 0;
            v62 = core::slice::<impl [T]>::starts_with(v17, v18, core::char::methods::encode_utf8_raw(42, &v25), v61) as i8;
            v0 = (v62 ? 1 : &g_42333e);
            v1 = v62 ^ 1;
            v11 = &v0;
            v12 = <&T as core::fmt::Display>::fmt;
            v13 = &v17;
            v14 = <&T as core::fmt::Display>::fmt;
            v25 = Arguments {
                pieces: ["", ""]
                args: &[Argument] {
                    ptr: v57
                    len: 2
                }
                fmt: 0
            };
            v49 = core::option::Option<T>::map_or_else(&v25);
            v64 = v49.field_0;
            v59 = (v59 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v64 as u256;
            v22 = v64;
            v23 = v49.field_16;
            v11 = v58;
            v12 = <alloc::string::String as core::fmt::Display>::fmt;
            v13 = &v20;
            v14 = <&T as core::fmt::Display>::fmt;
            v25 = Arguments {
                pieces: ["", "="]
                args: &[Argument] {
                    ptr: v57
                    len: 2
                }
                fmt: 0
            };
            v52 = core::option::Option<T>::map_or_else(&v25);
            v8 = alloc::vec::Vec<T,A>::push(&v52);
            v55 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        } while (v55);
    }
    uu_dircolors::get_colors_format_strings(&v25, a1);
    v7 = v26;
    *(&v5 as &i128) = *(&v25.pieces.ptr as &i128);
    v19 = v28;
    *(&v17 as &i128) = *(&v25.args.len as &i128);
    v25 = alloc::str::join_generic_copy(v9, v10, a2, a3);
    v20 = v25;
    uu_dircolors::generate_type_output(&v22, a1);
    v0 = format!("{}{}:{}:{}", &v5, &v22, &v20, &v17);
}
