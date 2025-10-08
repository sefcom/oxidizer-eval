fn uu_od::print_bytes(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: u8;  // [bp-0x111]
    let v1: core::fmt::Arguments;  // [bp-0x110], Other Possible Types: u64
    let v2: u64;  // [bp-0x110]
    let v3: u64;  // [bp-0x108]
    let v4: u64;  // [bp-0x108]
    let v5: i64;  // [bp-0x100], Other Possible Types: u64
    let v6: u64;  // [bp-0x100]
    let v7: u64;  // [bp-0xf8]
    let v8: u64;  // [bp-0xf8]
    let v9: u64;  // [bp-0xf8]
    let v10: void*;  // [bp-0xf0]
    let v11: u16;  // [bp-0xe8]
    let v12: u32;  // [bp-0xdc]
    let v13: core::fmt::rt::Argument;  // [bp-0xd8], Other Possible Types: struct48
    let v14: u128;  // [bp-0xd8]
    let v15: core::fmt::rt::Argument;  // [bp-0xc8]
    let v16: u128;  // [bp-0xc8]
    let v17: u64;  // [bp-0xa0]
    let v18: u64;  // [bp-0x98]
    let v19: struct16;  // [bp-0x90]
    let v20: void*;  // [bp-0x80]
    let v21: u64;  // [bp-0x78]
    let v22: void*;  // [bp-0x70]
    let v23: struct24;  // [bp-0x68]
    let v24: u64;  // [bp-0x68]
    let v25: u64;  // [bp-0x60]
    let v26: void*;  // [bp-0x58]
    let v27: u16;  // [bp-0x50]
    let v28: u64;  // [bp-0x48]
    let v29: u64;  // [bp-0x40]
    let v30: i64;  // [bp-0x38]
    let v32: i64;  // rcx
    let v33: u64;  // rax
    let v34: i64;  // r12
    let v35: i64;  // rax
    let v36: core::fmt::Arguments;  // rbp
    let v37: i64;  // r12
    let v38: struct16;  // rbx
    let v39: u64;  // rdx
    let v41: i64;  // r15
    let v44: struct25;  // rax
    let v45: Result<struct4, struct8>;  // rbx
    let v49: i64;  // rcx

    v19 = struct16 {
        field_0: a0
        field_8: a1
    };
    v33 = *((v32 + 16) as &i64);
    if !v33 {
        return v33;
    }
    v34 = *((v32 + 8) as &i64);
    v29 = v33 * 104 + v34;
    v35 = v34 + 104;
    v17 = *(a2 as &i64);
    v18 = *((a2 + 8) as &i64);
    v28 = *((v32 + 32) as &i64);
    v36 = *((v32 + 40) as &i64);
    v0 = *((a2 + 24) as &i8);
    v12 = 1;
    loop {
        v37 = v34;
        v8 = v7;
        v30 = v35;
        v20 = 0;
        v21 = 1;
        v22 = 0;
        if v18 {
            while (*((v37 + v39 * 8 + 32) as &i64) <= 65535) {
                v24 = &g_41a940;
                v25 = <&T as core::fmt::Display>::fmt;
                v26 = 0;
                v27 = *((v37 + v39 * 8 + 32) as &i64);
                v13 = struct48 {
                    field_0: "\x01"
                    field_16: &v24
                    field_24: 2
                    field_32: "\x02"
                };
                core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v20, &v13), "src/uu/od/src/od.rs");
                v41 = *((v37 + 8) as &i64);
                if !*(v37 as &i64) {
                    v41(&v1, uu_od::inputdecoder::MemoryDecoder::read_uint(v17, v0, v38, *((v37 + 16) as &i64)));
                    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v20, v3, v5 + v3);
                } else if *(v37 as &i64) == 1 {
                    uu_od::inputdecoder::MemoryDecoder::read_float(v17, v0, v38 as u32, *((v37 + 16) as &i64));
                    v41(&v1);
                    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v20, v3, v5 + v3);
                } else {
                    v41(&v1, uu_od::inputdecoder::MemoryDecoder::get_full_buffer(a2, v38 as u32));
                    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v20, v3, v5 + v3);
                }
                v38 += *((v37 + 16) as &i64);
                if v38 >= v18 {
                    goto LABEL_46d970;
                }
            }
        }
LABEL_46d970:
        if *((v37 + 96) as &i8) {
            v44 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(1);
            v23 = uu_od::prn_char::format_ascii_dump(uu_od::inputdecoder::MemoryDecoder::get_buffer(a2, 0), a2);
            if v45 > 65535 {
                panic!("Formatting argument out of range");
            }
            v1 = &g_41a940;
            v3 = <&T as core::fmt::Display>::fmt;
            v5 = &v23;
            v8 = <alloc::string::String as core::fmt::Display>::fmt;
            v10 = 0;
            v11 = v45 as u16;
            v13 = struct48 {
                field_0: &g_503a20
                field_8: 2
                field_16: &v1
                field_24: 3
                field_32: "\x02\x00"
            };
            core::result::Result<T,E>::unwrap(<&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v20, &v13), "src/uu/od/src/od.rs");
        }
        if (v12 as i8 & 1) {
            print!("{}", &v19);
        } else {
            if <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(v19.field_0) > 65535 {
                break;
            }
            v13 = core::fmt::rt::Argument {
                ty: &g_41a940
            };
            v15 = core::fmt::rt::Argument {
                ty: 0
            };
            v1 = core::fmt::Arguments {
                pieces: [&g_41a940]
                args: [v14, v16]
                fmt: &g_41d2a8
            };
            std::io::stdio::_print(&v1);
        }
        println!("{}", &v20);
        v49 = v30;
        v12 = 0;
        if v49 != v29 {
            v1 = v2;
            v3 = v4;
            v5 = v6;
            v7 = v9;
            v34 = v49;
            v35 = v49 + 104;
            if v34 == v29 {
                return v49 + 104;
            }
        } else {
            v1 = v2;
            v3 = v4;
            v5 = v6;
            v7 = v9;
            v34 = v49;
            v35 = v49;
            if v34 == v29 {
                return v49;
            }
        }
    }
    panic!("Formatting argument out of range");
}
