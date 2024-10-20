fn uu_uniq::Uniq::print_uniq(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i32;  // [sp-0x108]
    let v1: i8;  // [sp-0xf2]
    let v2: i8;  // [sp-0xf1]
    let v3: i8;  // [sp-0xe1]
    let v4: i64;  // [sp-0xd8]
    let v5: i64;  // [sp-0xd0]
    let v6: i64;  // [sp-0xc8]
    let v7: i192;  // [sp-0xb8], Other Possible Types: Enum
    let v8: i64;  // [sp-0xa8]
    let v9: i64;  // [sp-0xa0]
    let v10: i64;  // [sp-0x98]
    let v11: i64;  // [sp-0x90]
    let v12: i32;  // [sp-0x84]
    let v13: i8;  // [bp-0x80]
    let v14: i8;  // [sp-0x70]
    let v15: i128;  // [sp-0x68]
    let v16: i64;  // [sp-0x58]
    let v17: i64;  // [sp-0x50]
    let v18: i192;  // [sp-0x48], Other Possible Types: Enum
    let v21: i64;  // rax
    let v22: i64;  // r13
    let v24: i128;  // xmm0
    let v25: i256;  // ymm0
    let v26: i256;  // ymm0
    let v27: i64;  // rbp
    let v28: i64;  // rbx
    let v29: i64;  // rax
    let v31: i128;  // xmm0
    let v32: i128;  // xmm0
    let v33: i128;  // xmm0
    let v34: i128;  // xmm0
    let v35: i64;  // rax
    let v36: i64;  // rax
    let v37: i64;  // rax
    let v38: i32;  // eax
    let v39: i64;  // r14
    let v40: i64;  // r14
    let v42: i64;  // rax
    let v43: i64;  // rax

    v14 = (*((a0 + 53) as &i8) ? 0 : 10);
    v7 = <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v13);
    v21 = v7;
    if v21 == 9223372036854775809 {
        v22 = 0;
        goto LABEL_43def0;
    } else {
        v17 = 0x8000000000000000;
        if v21 != 0x8000000000000000 {
            v12 = v14;
            v4 = v21;
            v5 = *((&v7 as &char + 8) as &i64);
            v6 = v8;
            v16 = v14;
            v24 = v13;
            vvar_32{reg 224} = ((vvar_276{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_275{reg 224}))
            v15 = v24;
            v3 = *((a0 + 50) as &i8);
            v2 = *((a0 + 48) as &i8);
            v1 = *((a0 + 49) as &i8);
            v27 = 1;
            v28 = 0;
            loop {
                v18 = <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(&v15);
                v29 = v18;
                if v29 == 9223372036854775809 {
                    break;
                }
                if v29 == v17 {
                    v22 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v10);
                    goto LABEL_43e291;
                }
                v9 = v29;
                v10 = *((&v18 as &char + 8) as &i64);
                v11 = *((&v18 as &char + 16) as &i64);
                if uu_uniq::Uniq::cmp_keys(a0, v5, v6, v10, v11) as i8 {
                    if (!(!(!v2 & v27 == 1)) || !(!(!(v27 <= 1) & !v1))) && !((v0 = (v28 as i8 & 1) as u8 as u32, v22 = uu_uniq::Uniq::print_line(a0, a3, a4, v5, v6, v27), v28 = v28 | -0x100 | (v28 as i8 & 1) as u8 as u64 | -0x100 | 1, !v22)) {
                        goto LABEL_43e27a;
                    } else {
                        v8 = v11;
                        v32 = v9;
                        v7 = v32;
                        v6 = v8;
                        v34 = v7;
                        vvar_32{reg 224} = ((((vvar_32{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_391{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_413{reg 224}))
                        v4 = v34;
                        v27 = 1;
                        continue;
                    }
                }
                if !v3 {
                    v27 += 1;
                    continue;
                }
                v0 = v28 & 1;
                v22 = uu_uniq::Uniq::print_line(a0, a3, a4, v5, v6, v27);
                if !v22 {
                    v8 = v11;
                    v31 = v9;
                    v7 = v31;
                    v6 = v8;
                    v33 = v7;
                    vvar_32{reg 224} = ((((vvar_32{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_380{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_403{reg 224}))
                    v4 = v33;
                    v27 += 1;
                    v28 = v28 | -0x100 | v28 & 1 | -0x100 | 1;
                } else {
LABEL_43e27a:
LABEL_43e291:
                    if *(*((&v15 as &char + 8) as &i64) as &i64) {
                        v37();
                    }
                    goto LABEL_43e2c4;
                }
            }
            if *(*((&v15 as &char + 8) as &i64) as &i64) {
                v36();
            }
            if !(!v2 & v27 == 1) && !(!(v27 <= 1) & !v1) {
                v38 = *((a0 + 54) as &i8);
                v39 = a4;
                if !(!v38) && !(v38 == 3) || !((v28 & 1)) {
                    goto LABEL_43e31d;
                }
            } else {
                v0 = v28 & 1;
                v22 = uu_uniq::Uniq::print_line(a0, a3, a4, v5, v6, v27);
                if !(!v22) {
                    goto LABEL_43e25e;
                }
                v39 = a4;
                if *((a0 + 54) as &i8) && *((a0 + 54) as &i8) != 3 {
LABEL_43e31d:
                    if !*(v40 as &i64) {
                        return 0;
                    }
                    v43();
                }
            }
            v7 = v12;
            v22 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(*((v39 + 56) as &i64)());
            if !v22 {
                goto LABEL_43e31d;
            } else {
LABEL_43e25e:
LABEL_43e2c4:
            }
        } else {
            v22 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
LABEL_43def0:
            if *(a2 as &i64) {
                v35();
            }
        }
    }
    if *(a4 as &i64) {
        v42();
    }
    return v22;
}
