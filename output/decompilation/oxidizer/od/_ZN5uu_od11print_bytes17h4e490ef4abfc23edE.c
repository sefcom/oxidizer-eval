fn uu_od::print_bytes(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: u32;  // [bp-0x164]
    let v1: u384;  // [bp-0x160]
    let v2: u64;  // [bp-0x158]
    let v3: i64;  // [bp-0x150]
    let v4: u64;  // [bp-0x148]
    let v5: struct40;  // [bp-0x140]
    let v6: void*;  // [bp-0x138]
    let v7: u64;  // [bp-0x130]
    let v8: u64;  // [bp-0x128]
    let v9: u64;  // [bp-0x120]
    let v10: u64;  // [bp-0x118]
    let v11: void*;  // [bp-0x110]
    let v12: u64;  // [bp-0x108]
    let v13: u8;  // [bp-0x100]
    let v14: u64;  // [bp-0xf8]
    let v15: u64;  // [bp-0xe8]
    let v16: u64;  // [bp-0xd8]
    let v17: u64;  // [bp-0xd0]
    let v18: u8;  // [bp-0xc8]
    let v19: u64;  // [bp-0xc0]
    let v20: u64;  // [bp-0xb8], Other Possible Types: int
    let v21: u128;  // [bp-0xb8]
    let v22: u64;  // [bp-0xb0]
    let v23: iNone;  // [bp-0xa8], Other Possible Types: u64
    let v24: u128;  // [bp-0xa8]
    let v25: void*;  // [bp-0xa0]
    let v26: u64;  // [bp-0x88]
    let v27: u64;  // [bp-0x80]
    let v28: void*;  // [bp-0x78]
    let v29: u64;  // [bp-0x70]
    let v30: void*;  // [bp-0x68]
    let v31: u64;  // [bp-0x60]
    let v32: u64;  // [bp-0x58]
    let v33: u64;  // [bp-0x50]
    let v34: struct24;  // [bp-0x48]
    let v36: i64;  // rax
    let v37: u64;  // rbx
    let v38: void*;  // r15
    let v39: u64;  // rdx
    let v41: i64;  // r12
    let v45: u64;  // rax
    let v46: struct40;  // r15
    let v49: &[u8];  // rax:rdx
    let v50: &[u8];  // rax:rdx
    let v51: &[u8];  // rax:rdx

    v26 = a0;
    v27 = a1;
    v32 = *((a3 + 8) as &i64);
    v33 = *((a3 + 16) as &i64) * 104 + *((a3 + 8) as &i64);
    v36 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v32);
    if !v36 {
        return v36;
    }
    v19 = *((a2 + 8) as &i64);
    v31 = *((a3 + 32) as &i64);
    v37 = *((a3 + 40) as &i64);
    v0 = *((a3 + 32) as &i64) & -0x100 | 1;
    do {
        v28 = 0;
        v29 = 1;
        v30 = 0;
        if v19 {
            do {
                v20 = &g_40dad0;
                v22 = <&T as core::fmt::Display>::fmt;
                v23 = *((v36 + v39 * 8 + 32) as &i64);
                v25 = 0;
                v7 = 2;
                v9 = 1;
                v10 = 1;
                v11 = 0;
                v12 = 32;
                v13 = 1;
                v1 = struct48 {
                    field_0: &g_40dad0
                    field_8: 1
                    field_16: &v20
                    field_24: 2
                    field_32: &v7
                    field_40: 1
                };
                core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v28, &v1) as i32, "src/uu/od/src/od.rs");
                v41 = *((v36 + 8) as &i64);
                if *(v36 as &i64) == 2 {
                    v41(&v7, uu_od::inputdecoder::MemoryDecoder::get_full_buffer(a2, v38));
                    v51 = core::slice::iter::Iter<T>::make_slice(v8);
                    alloc::vec::Vec<T,A>::append_elements(&v28, v51.ptr, a2);
                } else if *(v36 as &i64) == 1 {
                    uu_od::inputdecoder::MemoryDecoder::read_float(a2, v38, *((v36 + 16) as &i64));
                    v41(&v7);
                    v50 = core::slice::iter::Iter<T>::make_slice(v8);
                    alloc::vec::Vec<T,A>::append_elements(&v28, v50.ptr, a2);
                } else {
                    v41(&v7, uu_od::inputdecoder::MemoryDecoder::read_uint(a2, v38, *((v36 + 16) as &i64)));
                    v49 = core::slice::iter::Iter<T>::make_slice(v8);
                    alloc::vec::Vec<T,A>::append_elements(&v28, v49.ptr, a2);
                }
                v38 += *((v36 + 16) as &i64);
            } while (v38 < v19);
        }
        if *((v36 + 96) as &i8) {
            v45 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count();
            v34 = uu_od::prn_char::format_ascii_dump(uu_od::inputdecoder::MemoryDecoder::get_buffer(a2, 0), a2);
            v1 = &g_40dad0;
            v2 = <&T as core::fmt::Display>::fmt;
            v3 = &v34;
            v4 = <alloc::string::String as core::fmt::Display>::fmt;
            v5 = v46;
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
            v20 = struct48 {
                field_0: &g_5417b8
                field_8: 2
                field_16: &v1
                field_24: 3
                field_32: &v7
                field_40: 2
            };
            core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v28, &v20) as i32, "src/uu/od/src/od.rs");
        }
        if !(v0 as i8 & 1) {
            v20 = core::fmt::rt::Argument {
                ty: &g_40dad0
            };
            v23 = core::fmt::rt::Argument {
                ty: <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count()
            };
            v7 = 2;
            v9 = 1;
            v10 = 1;
            v11 = 0;
            v12 = 32;
            v13 = 1;
            v1 = core::fmt::Arguments {
                pieces: [&g_40dad0]
                args: [v21, v24]
                fmt: &v7
            };
            std::io::stdio::_print(&v1);
        } else {
            print!("{}", &v26);
        }
        println!("{}", &v28);
        v36 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v32);
    } while (v36);
    return v36;
}
