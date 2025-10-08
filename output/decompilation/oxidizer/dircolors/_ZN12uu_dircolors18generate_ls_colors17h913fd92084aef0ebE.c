fn uu_dircolors::generate_ls_colors(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: void*;  // [bp-0x1b8], Other Possible Types: struct24, struct16
    let v1: u64;  // [bp-0x1b8]
    let v2: u64;  // [bp-0x1b0]
    let v3: void*;  // [bp-0x1a8], Other Possible Types: unsigned long
    let v4: &str;  // [bp-0x1a0], Other Possible Types: struct24, u32
    let v5: core::fmt::rt::Argument;  // [bp-0x1a0], Other Possible Types: struct24
    let v6: u128;  // [bp-0x1a0]
    let v7: u64;  // [bp-0x198]
    let v8: core::fmt::rt::Argument;  // [bp-0x190], Other Possible Types: struct_7 *, struct_8 *
    let v9: u128;  // [bp-0x190]
    let v10: u64;  // [bp-0x188]
    let v11: core::fmt::rt::Argument;  // [bp-0x180], Other Possible Types: void*
    let v12: u128;  // [bp-0x180]
    let v13: u64;  // [bp-0x178]
    let v14: i64;  // [bp-0x160]
    let v15: core::fmt::Arguments;  // [bp-0x158], Other Possible Types: struct_2 *, struct_5 *
    let v16: u64;  // [bp-0x150]
    let v17: i64;  // [bp-0x148], Other Possible Types: struct_3 *
    let v18: u64;  // [bp-0x140]
    let v19: u128;  // [bp-0x128]
    let v20: u128;  // [bp-0x128]
    let v21: u64;  // [bp-0x120]
    let v22: u64;  // [bp-0x118]
    let v23: u128;  // [bp-0x108]
    let v24: i64;  // [bp-0x100]
    let v25: i64;  // [bp-0xf8]
    let v26: u64;  // [bp-0xe8], Other Possible Types: unsigned long
    let v27: u128;  // [bp-0xe8]
    let v28: i64;  // [bp-0xe0]
    let v29: i64;  // [bp-0xd8]
    let v30: i64;  // [bp-0xd0]
    let v31: u64;  // [bp-0xc8]
    let v32: u128;  // [bp-0xc8]
    let v33: u64;  // [bp-0xc0]
    let v34: i64;  // [bp-0xb8]
    let v35: void*;  // [bp-0xb0], Other Possible Types: struct16
    let v36: u64;  // [bp-0xa8]
    let v37: void*;  // [bp-0xa0]
    let v38: void*;  // [bp-0x88]
    let v39: u64;  // [bp-0x80]
    let v40: struct24;  // [bp-0x78]
    let v41: u192;  // [bp-0x60]
    let v42: u8;  // [bp-0x48]
    let v44: u64;  // r13
    let v45: u64;  // rdx
    let v48: u64;  // rbx
    let v49: u64;  // r13
    let v50: i64;  // rbx
    let v51: u64;  // 4096
    let v52: u64;  // rax
    let v56: &mut [u8];  // rax:rdx
    let v57: &mut [u8];  // rax:rdx
    let v58: u64;  // [bp-0x128]
    let v59: u128;  // [bp-0x108]

    if *(a1 as &i8) == 2 {
        v0 = 0;
        v2 = 8;
        v3 = 0;
        v40 = uu_dircolors::generate_type_output(a1);
        v0 = alloc::vec::Vec<T,A>::push(&v40, "src/uu/dircolors/src/dircolors.rs");
        do {
            v58 = *((_ZN6uucore8features6colors11FILE_COLORS17hdd97ea8c4a21de4aE.field_0 + v44 - 24) as &i64);
            v21 = *((_ZN6uucore8features6colors11FILE_COLORS17hdd97ea8c4a21de4aE.field_0 + v44 - 16) as &i64);
            v23 = *((_ZN6uucore8features6colors11FILE_COLORS17hdd97ea8c4a21de4aE.field_0 + v44 - 8) as &i128);
            v4 = 0;
            v57 = core::char::methods::encode_utf8_raw(42, &v4, v45);
            v26 = (core::slice::<impl [T]>::starts_with(v58, v21, v57.data_ptr, a3) ? 1 : &g_41c320);
            v28 = core::slice::<impl [T]>::starts_with(v58, v21, v57.data_ptr, a3) ^ 1;
            v5 = core::fmt::rt::Argument {
                ty: &v59
            };
            v8 = core::fmt::rt::Argument {
                ty: &v26
            };
            v11 = core::fmt::rt::Argument {
                ty: &v58
            };
            v15 = core::fmt::Arguments {
                pieces: ["\x1b[", "m", &g_4f5d78, "\t", "\x1b[0m"]
                args: [v6, v9, v12]
                fmt: &g_41c328
            };
            core::option::Option<T>::map_or_else(&v41, &v15);
            v0 = alloc::vec::Vec<T,A>::push(&v41, "src/uu/dircolors/src/dircolors.rs");
            v44 += 32;
        } while (v44 != 4184);
        v5 = alloc::str::join_generic_copy(0x8, 0, "\n");
        v48 = a0;
        *((v30 + 16) as &u64) = v5.field_16;
        *(v30 as &u128) = v5.field_0;
    } else {
        v35 = 0;
        v36 = 8;
        v37 = 0;
        v39 = _ZN6uucore8features6colors11FILE_COLORS17hdd97ea8c4a21de4aE.field_0;
        v49 = 24;
        v50 = &v5 as u8;
        v14 = &v35;
        v51 = a2;
        do {
            v52 = v39;
            v31 = *((v52 + v49 - 24) as &i64);
            v33 = *((v52 + v49 - 16) as &i64);
            v19 = *((v52 + v49 - 8) as &i128);
            v4 = 0;
            v56 = core::char::methods::encode_utf8_raw(42, v50, v51);
            v23 = (core::slice::<impl [T]>::starts_with(v31, v33, v56.data_ptr, a3) ? 1 : &g_41c320);
            v24 = core::slice::<impl [T]>::starts_with(v31, v33, v56.data_ptr, a3) ^ 1;
            v15 = &v23;
            v16 = <&T as core::fmt::Display>::fmt;
            v17 = &v31;
            v18 = <&T as core::fmt::Display>::fmt;
            v4 = "\x01\x00";
            v11 = 0;
            v8 = &v15;
            v10 = 2;
            core::option::Option<T>::map_or_else(&v1, v50);
            v27 = *(&v1 as &i128);
            v29 = v3;
            v15 = &v26;
            v16 = <alloc::string::String as core::fmt::Display>::fmt;
            v17 = &v58;
            v18 = <&T as core::fmt::Display>::fmt;
            v4 = &g_4f5ce0;
            v7 = 2;
            v11 = 0;
            v8 = &v15;
            v10 = 2;
            core::option::Option<T>::map_or_else(&v42, v50);
            v35 = alloc::vec::Vec<T,A>::push(&v42, "src/uu/dircolors/src/dircolors.rs");
            v49 += 32;
        } while (v49 != 4184);
        uu_dircolors::get_colors_format_strings(&v4, v38);
        v34 = v8;
        v32 = *(&v4 as &i128);
        v22 = v13;
        v20 = *(&v10 as &i128);
        v4 = alloc::str::join_generic_copy(0x8, 0, a2, a3);
        v25 = v8;
        v59 = v4.field_0;
        v0 = uu_dircolors::generate_type_output(v38);
        format!("{}{}:{}:{}", &v31, &v0, &v23, &v58);
        v48 = a0;
        *((v30 + 16) as &unsigned long) = v29;
        *(v30 as &i128) = *(&v26 as &i128);
    }
    return v48;
}
