fn uu_split::filter_args(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> u64 {
    let v0: i64;  // [bp-0xe8]
    let v1: i8;  // [sp-0xd9]
    let v2: i64;  // [sp-0xd8]
    let v3: i64;  // [sp-0xd0]
    let v4: i64;  // [sp-0xc8]
    let v5: i64;  // [sp-0xb0]
    let v6: i64;  // [sp-0xa8]
    let v7: i64;  // [sp-0xa0]
    let v8: Enum;  // [sp-0x98], Other Possible Types: i64, struct24
    let v9: i64;  // [sp-0x90]
    let v10: i64;  // [sp-0x88]
    let v11: struct24;  // [sp-0x78], Other Possible Types: i192
    let v12: i8;  // [bp-0x60]
    let v13: i8;  // [bp-0x58]
    let v14: i8;  // [bp-0x50]
    let v15: struct24;  // [sp-0x48], Other Possible Types: i192
    let v17: i64;  // rbp
    let v18: i64;  // r12
    let v19: i8;  // cl
    let v20: i8;  // al
    let v21: i64;  // rax
    let v22: i64;  // rsi
    let v23: i64;  // rax
    let v24: i64;  // rax
    let v25: i8;  // al
    let v26: i64;  // rax
    let v27: i64;  // rax
    let v28: i8;  // r8b
    let v29: i64;  // rdi
    let v30: i64;  // rdx
    let v31: i64;  // rsi
    let v32: i64;  // r8
    let v33: i64;  // r8
    let v34: i64;  // rsi
    let v35: i64;  // r8
    let v36: i64;  // rax

    v8 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(*((a1 + 8) as &i64), *((a1 + 16) as &i64));
    if v8 {
        *((a0 + 16) as &i64) = *((a1 + 16) as &i64);
        *(a0 as &i128) = *(a1 as &i128);
        return a0;
    }
    v17 = v9;
    v18 = v10;
    if v18 && *(v17 as &i8) == 45 {
        v19 = *(a3 as &i8);
        v20 = *(a4 as &i8);
        if v18 != 1 {
            if !(*(v17 as &i16) != 11565) || !(!v19) || !(!v20) {
                goto LABEL_4943dd;
            }
            switch (Load(addr=vvar_224{reg 56}, size=2, endness=Iend_LE)): 7 cases
LABEL_494296:
            v5 = 0;
            v6 = 4;
            v7 = 0;
            v1 = 0;
            v8 = Enum {
                field_0: v17
                field_8: v18 + v17
                field_16: &v1
                field_24: &v5
            };
            <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v12, &v8);
            v21 = v7;
            if !v21 {
                v11 = std::sys::os_str::bytes::Slice::to_owned(v17, v18);
                goto LABEL_494476;
            } else {
                v15 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v6, v6 + v21 * 4);
                v2 = 0x8000000000000000;
                *((a2 + 16) as &i64) = *((&v15 as &char + 16) as &i64);
                *(a2 as &i192) = v15;
                v24 = v14;
                if v24 >= 2 {
                    v11 = <alloc::string::String as core::iter::traits::collect::FromIterator<&char>>::from_iter(v13, v13 + v24 * 4);
LABEL_494476:
                    v2 = v11;
                    a2 = *((&v11 as &char + 8) as &i64);
                    v22 = *((&v11 as &char + 16) as &i64);
                }
            }
            if v18 == 1 {
                v25 = 0;
                goto LABEL_494671;
            }
LABEL_4944e6:
            v26 = *(v17 as &i16);
            if v26 != 11565 {
                if !(v18 == 2) {
                    goto LABEL_49466f;
                }
                goto LABEL_4944ff;
            } else {
                if v18 < 3 {
LABEL_494632:
                    v28 = 0;
                    goto LABEL_49465d;
                }
                if *((v17 + 2) as &i8) <= 191 {
                    core::str::slice_error_fail(); /* do not return */
                }
                v28 = 0;
                switch (v18) {
                case 7:
                    v4 = v29;
                    v3 = v30;
                    v28 = v32 | -0x100 | 1;
                    if !bcmp(v29, &anon.80a68c298b3244c7b6f64951acf55080.10.llvm.4507047988568940441, v30) as i64 {
                        break;
                    }
                    v34 = &anon.80a68c298b3244c7b6f64951acf55080.12.llvm.4507047988568940441;
                    goto LABEL_494617;
                case 8:
                    v4 = v29;
                    v3 = v30;
                    v28 = v32 | -0x100 | 1;
                    if !bcmp(v29, &g_41cef1, v30) as i64 {
                        break;
                    }
                    v34 = &anon.80a68c298b3244c7b6f64951acf55080.15.llvm.4507047988568940441;
                    goto LABEL_494617;
                case 11:
                    v28 = v33 | -0x100 | !bcmp(v29, &g_41cf21, v30);
                    v22 = v0;
                    goto LABEL_49465d;
                case 12:
                    v31 = &anon.80a68c298b3244c7b6f64951acf55080.11.llvm.4507047988568940441;
                    goto LABEL_494647;
                case 15:
                    v31 = &anon.80a68c298b3244c7b6f64951acf55080.20.llvm.4507047988568940441;
LABEL_494647:
                    v28 = (!bcmp(v29, v31, v30) as i64 ? 0 : v35 | -0x100 | 1);
                    break;
                    v22 = v0;
                    goto LABEL_49465d;
                case 19:
                    v31 = &anon.80a68c298b3244c7b6f64951acf55080.13.llvm.4507047988568940441;
                    goto LABEL_494647;
                default:
LABEL_49465d:
                    *(a3 as &i8) = v28;
                    if v18 != 2 {
LABEL_49466f:
                        v25 = 0;
                        goto LABEL_494671;
                    }
LABEL_4944ff:
                    v25 = v27 | -0x100 | 1;
                    switch (*(v17 as &i16)) {
                    case 17197: case 24877: case 25133: case 27693: case 28205:
                        break;
                    default:
                        v36 = *(v17 as &i16);
                        v25 = v36 | -0x100 | v36 == 29741;
                        break;
                    }
LABEL_494671:
                    v23 = a4;
                    *(v23 as &i8) = v25;
                    if *(v17 as &i8) == 45 {
                        *(a0 as &i64) = v2;
                        *((a0 + 8) as &i64) = a2;
                        *((a0 + 16) as &i64) = v22;
                        return a0;
                    }
LABEL_49441f:
                    *(v23 as &i8) = 0;
                    *(a3 as &i8) = 0;
                    *(a0 as &i64) = v2;
                    *((a0 + 8) as &i64) = a2;
                    *((a0 + 16) as &i64) = v22;
                    return a0;
                }
LABEL_494617:
                v28 = v32 | -0x100 | 1;
                v22 = v0;
                if !(!bcmp(v4, v34, v3) as i64) {
                    goto LABEL_494632;
                }
                goto LABEL_49465d;
            }
        } else if !v19 && !v20 {
            goto LABEL_494296;
        }
    }
LABEL_4943dd:
    v8 = std::sys::os_str::bytes::Slice::to_owned(v17, v18);
    v2 = v8;
    a2 = v9;
    v22 = v10;
    if !(v18 < 2) {
        goto LABEL_4944e6;
    }
    v23 = a4;
    *(v23 as &i8) = 0;
    if v18 && *(v17 as &i8) == 45 {
        *(a0 as &i64) = v2;
        *((a0 + 8) as &i64) = a2;
        *((a0 + 16) as &i64) = v22;
        return a0;
    }
    goto LABEL_49441f;
}
