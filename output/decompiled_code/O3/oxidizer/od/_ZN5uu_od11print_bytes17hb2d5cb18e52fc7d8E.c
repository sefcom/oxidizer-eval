fn uu_od::print_bytes(a0: u32, a1: u32, a2: void*, a3: &u64) -> u64 {
    let v0: i32;  // [sp-0x164]
    let v1: i64;  // [sp-0x160]
    let v2: i64;  // [sp-0x158]
    let v3: i64;  // [sp-0x150]
    let v4: i64;  // [sp-0x148]
    let v5: i64;  // [sp-0x140]
    let v6: i64;  // [sp-0x138]
    let v7: i64;  // [sp-0x130]
    let v8: i64;  // [sp-0x128]
    let v9: i64;  // [sp-0x120]
    let v10: i64;  // [sp-0x118]
    let v11: i64;  // [sp-0x110]
    let v12: i64;  // [sp-0x108]
    let v13: i8;  // [sp-0x100]
    let v14: i64;  // [sp-0xf8]
    let v15: i64;  // [sp-0xe8]
    let v16: i64;  // [sp-0xd8]
    let v17: i64;  // [sp-0xd0]
    let v18: i8;  // [sp-0xc8]
    let v19: i64;  // [sp-0xc0]
    let v20: i64;  // [sp-0xb8]
    let v21: i64;  // [sp-0xb0]
    let v22: i64;  // [sp-0xa8]
    let v23: i64;  // [sp-0xa0]
    let v24: i64;  // [sp-0x98]
    let v25: i64;  // [sp-0x90]
    let v27: struct16;  // [sp-0x78], Other Possible Types: i64
    let v28: i64;  // [sp-0x68]
    let v29: i64;  // [sp-0x60]
    let v30: i64;  // [sp-0x58]
    let v31: i64;  // [sp-0x50]
    let v32: i192;  // [sp-0x48], Other Possible Types: struct24
    let v34: struct8;  // rax
    let v35: i64;  // rbx
    let v36: i64;  // rdx
    let v37: i64;  // r15
    let v38: i64;  // rdx
    let v39: i64;  // rax
    let v40: i64;  // r12
    let v41: i64;  // rdx
    let v42: i64;  // rax
    let v43: i64;  // r15
    let v44: i64;  // r15

    v30 = *((a3 + 8) as &i64);
    v31 = *((a3 + 16) as &i64) * 104 + v30;
    v34 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
    if !v34 {
        return v34;
    }
    v19 = *((a2 + 8) as &i64);
    v29 = *((a3 + 32) as &i64);
    v35 = *((a3 + 40) as &i64);
    v0 = v29 | -0x100 | 1;
    loop {
        v8 = v8;
        v27 = 0;
        v27.field_8 = 1;
        v28 = 0;
        if v19 {
            if !v35 {
                core::panicking::panic_const::panic_const_rem_by_zero(); /* do not return */
            }
            v37 = 0;
            do {
                if !(v37 | v35) >> 32 {
                    v38 = (0 CONCAT v37) /m v35 >> 32 & 4294967295;
                } else {
                    v38 = (0 CONCAT v37) /m v35 >> 64;
                }
                v20 = &g_417e40;
                v21 = <&T as core::fmt::Display>::fmt;
                v22 = *((v34 + v38 * 8 + 32) as &i64);
                v23 = 0;
                v7 = 2;
                v9 = 1;
                v10 = 1;
                v11 = 0;
                v12 = 32;
                v13 = 1;
                v1 = &g_417e40;
                v2 = 1;
                v5 = &v7;
                v6 = 1;
                v3 = &v20;
                v4 = 2;
                core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v27, &v1) as i32, "src/uu/od/src/od.rs");
                v39 = *(v34 as &i64);
                v40 = *((v34 + 8) as &i64);
                if v39 == 2 {
                    uu_od::inputdecoder::MemoryDecoder::get_full_buffer(a2, v37);
                    v40();
                    v27 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v8, v9 + v8), v41);
                } else if v39 == 1 {
                    uu_od::inputdecoder::MemoryDecoder::read_float(a2, v37, *((v34 + 16) as &i64));
                    v40();
                    v27 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v8, v9 + v8), v41);
                } else {
                    uu_od::inputdecoder::MemoryDecoder::read_uint(a2, v37, *((v34 + 16) as &i64));
                    v40();
                    v27 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v8, v9 + v8), v41);
                }
                v37 += *((v34 + 16) as &i64);
            } while (v37 < v19);
        }
        if *((v34 + 96) as &i8) {
            v42 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v27.field_8, v28 + v27.field_8, v36);
            v43 = v29;
            v44 = v43 - v42;
            if v43 < v42 {
                v44 = 0;
            }
            v32 = uu_od::prn_char::format_ascii_dump(uu_od::inputdecoder::MemoryDecoder::get_buffer(a2, 0), v41);
            v1 = &g_417e40;
            v2 = <&T as core::fmt::Display>::fmt;
            v3 = &v32;
            v4 = <alloc::string::String as core::fmt::Display>::fmt;
            v5 = v44;
            v6 = 0;
            v7 = 2;
            v9 = 1;
            v10 = 2;
            v11 = 0;
            v12 = 32;
            v13 = 1;
            v14 = 2;
            v15 = 2;
            v16 = 1;
            v17 = 32;
            v18 = 3;
            v20 = &g_541098;
            v21 = 2;
            v24 = &v7;
            v25 = 2;
            v22 = &v1;
            v23 = 3;
            core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v27, &v20) as i32, "src/uu/od/src/od.rs");
        }
        if !(v0 & 1) {
            v20 = &g_417e40;
            v21 = <&T as core::fmt::Display>::fmt;
            v22 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(a0, a1 + a0, v36);
            v23 = 0;
            v7 = 2;
            v9 = 1;
            v10 = 1;
            v11 = 0;
            v12 = 32;
            v13 = 1;
            v1 = &g_417e40;
            v2 = 1;
            v5 = &v7;
            v6 = 1;
            v3 = &v20;
            v4 = 2;
            std::io::stdio::_print(&v1);
        } else {
            print!("{:?}", &v26);
            v0 = 0;
        }
        println!("{:?}", &v27);
        v34 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next();
        v8 = v8;
        if !v34 {
            return v34;
        }
    }
}
