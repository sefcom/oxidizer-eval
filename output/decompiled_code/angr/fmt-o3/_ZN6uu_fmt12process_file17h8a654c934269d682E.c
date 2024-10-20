fn uu_fmt::process_file(a0: &u8, a1: u64, a2: u64, a3: &struct_1, a4: i64, a5: i64) -> u64 {
    let v0: u64;  // [sp-0x1b8]
    let v1: u64;  // [sp-0x1b0]
    let v2: u64;  // [sp-0x1a0]
    let v3: u64;  // [sp-0x198]
    let v4: u128;  // [sp-0x190]
    let v5: void*;  // [sp-0x180]
    let v6: &u32;  // [sp-0x178]
    let v7: &&struct_0;  // [sp-0x170]
    let v8: u64;  // [sp-0x168], Other Possible Types: Enum
    let v9: u64;  // [sp-0x128]
    let v10: u64;  // [sp-0x120]
    let v11: u8;  // [sp-0x118]
    let v12: u64;  // [bp-0x110], Other Possible Types: struct8
    let v13: u32;  // [bp-0x108]
    let v14: u16;  // [sp-0x104]
    let v15: u64;  // [sp-0xf8]
    let v16: u128;  // [sp-0xf0]
    let v17: u128;  // [sp-0xe0]
    let v18: u128;  // [sp-0xd0]
    let v19: u128;  // [sp-0xc0]
    let v20: u128;  // [sp-0xb0]
    let v21: Enum;  // [sp-0xa0], Other Possible Types: u64
    let v22: u8;  // [bp-0x98]
    let v23: u8;  // [bp-0x90]
    let v24: u8;  // [bp-0x88]
    let v25: i8;  // [bp-0x80]
    let v26: i8;  // [bp-0x70]
    let v27: i8;  // [bp-0x60]
    let v28: i8;  // [bp-0x50]
    let v29: i8;  // [bp-0x40]
    let v31: &u32;  // rax
    let v32: void*;  // r12
    let v33: &&struct_0;  // r15
    let v35: u256;  // ymm0
    let v36: u256;  // ymm0
    let v37: u64;  // rdx
    let v38: u256;  // ymm1
    let v39: u256;  // ymm2
    let v40: u256;  // ymm3
    let v41: u64;  // rax
    let v42: u64;  // r14
    let v43: u64;  // r12
    let v44: &u8;  // r13
    let v45: u128;  // xmm0
    let v46: u128;  // xmm0
    let v47: u128;  // xmm0
    let v48: u128;  // xmm1
    let v49: u128;  // xmm2
    let v50: u128;  // xmm3
    let v51: u64;  // r8
    let v52: u64;  // r9
    let v53: void*;  // rax
    let v54: &u8;  // rax
    let v55: u64;  // rcx
    let v56: void*;  // rax
    let v57: u64;  // rsi
    let v58: u64;  // rsi
    let v59: u64;  // rsi
    let v60: u64;  // rdx
    let v61: u64;  // rax
    let v62: u64;  // rsi
    let v63: u64;  // rdx
    let v64: &&struct_0;  // rax
    let v65: &&struct_0;  // rax

    if a1 != 1 || *(a0) != 45 {
        v12 = struct8 {
            field_0: 0x1b600000000
        };
        v13 = 0;
        v14 = 0;
        v13 = 1;
        v21 = std::fs::OpenOptions::_open(&v12, a0, a1);
        v8 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v21, a0, a1);
        v32 = v8;
        if v32 {
            return v32;
        }
        v31 = __rust_alloc(4, 4);
        *(v31) = *((&v8 as &char + 8) as &i32);
        v33 = &g_4eb3e0;
    } else {
        v31 = __rust_alloc(8, 8);
        *(&v31 as &long long) = std::io::stdio::stdin();
        v33 = &g_4eb438;
    }
    v2 = __rust_alloc(0x2000, 1);
    v3 = 0x2000;
    v36 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    v4 = 0;
    v5 = 0;
    v6 = v31;
    v7 = v33;
    *(&v8 as &Enum) = Enum {
        field_0: 9223372036854775810
        field_16: <UNKNOWN>
        field_32: <UNKNOWN>
        field_48: <UNKNOWN>
    };
    v9 = &v2;
    v10 = a2;
    v11 = 1;
    v1 = &v8;
    loop {
        <uu_fmt::parasplit::ParagraphStream as core::iter::traits::iterator::Iterator>::next(&v21, &v8, v37);
        v41 = v21;
        if v41 != 0x8000000000000000 {
            if v41 == 9223372036854775809 {
                v57 = v8;
                if 9223372036854775807 + v57 >= 2 {
                    if v57 == 0x8000000000000000 {
                        v1 = &v8;
                        v57 = v8.field_16;
                    }
                }
                v61 = std::io::buffered::bufwriter::BufWriter<W>::flush_buf(a3, v59, v60, 9223372036854775809, v51, v52, v0, v1);
                if !v61 {
                    v61 = <std::io::stdio::Stdout as std::io::Write>::flush(&a3[1].field_8 as &struct_1, v62, v63);
                }
                v32 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v61);
                if v32 {
                    goto LABEL_483e6a;
                } else {
                    if !*(v7) {
                        return 0;
                    }
                    v64();
                }
            } else {
                v12 = v41;
                v15 = *(&v24 as &i64);
                v45 = *(&v22 as &i128);
                v13 = v45;
                v46 = v29;
                v20 = v46;
                v47 = v25;
                vvar_35{reg 224} = ((((((vvar_35{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_298{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_300{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_302{reg 224}))
                v48 = v26;
                vvar_37{reg 256} = ((vvar_37{reg 256} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_304{reg 256}))
                v49 = v27;
                vvar_38{reg 288} = ((vvar_38{reg 288} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_306{reg 288}))
                v50 = v28;
                vvar_39{reg 320} = ((vvar_39{reg 320} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_308{reg 320}))
                v19 = v50;
                v18 = v49;
                v17 = v48;
                v16 = v47;
                v32 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_fmt::linebreak::break_lines(&v12, a2, a3, 9223372036854775809, v51, v52));
                if !v32 {
                    continue;
                }
            }
        }
        v0 = *(&v22 as &i64);
        v42 = *(&v23 as &i64);
        v43 = *(&v24 as &i64);
        v44 = a3->field_10;
        if v43 < a3->field_0 - v44 {
            memcpy(&v44[a3->field_8], v42, v43);
            a3->field_10 = &v44[v43];
            v53 = 0;
        } else {
            v53 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, v42, v43, 0x8000000000000000, v51, v52);
        }
        v32 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v53);
        if v32 {
LABEL_483d64:
            v58 = v8;
LABEL_483e6a:
            if !*(v7) {
                return v32;
            }
            v65();
        } else {
            v54 = a3->field_10;
            v55 = a3->field_0 - v54;
            if a3->field_0 - v54 > 1 {
                v54[a3->field_8] = 10;
                a3->field_10 = &v54[1];
                v56 = 0;
            } else {
                v56 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a3, &g_419571, 1, v55, v51, v52);
            }
            v32 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v56);
            if !(!v32) {
                goto LABEL_483d64;
            }
        }
    }
}
