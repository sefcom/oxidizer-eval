fn uu_split::line_bytes(a0: i64, a1: u64, a2: i64) -> long long {
    let v0: u8;  // [bp-0x1b2]
    let v1: u8;  // [bp-0x1b1]
    let v2: struct640;  // [bp-0x1b0]
    let v3: struct24;  // [bp-0x1a8], Other Possible Types: u128
    let v4: void*;  // [bp-0x1a8]
    let v5: struct640;  // [bp-0x1a0]
    let v6: iNone;  // [bp-0x198], Other Possible Types: u128
    let v7: struct640;  // [bp-0x198]
    let v8: u8;  // [bp-0x190]
    let v9: Option<struct24>;  // [sp-0x180], Other Possible Types: struct24
    let v10: struct24;  // [bp-0x180]
    let v11: struct24;  // [bp-0x180]
    let v12: struct640;  // [sp-0x178]
    let v14: struct640;  // [bp-0x178]
    let v15: struct24;  // [bp-0x178]
    let v16: struct640;  // [bp-0x170]
    let v17: Result<struct65, struct24>;  // [bp-0x168], Other Possible Types: struct32, struct9, core::fmt::rt::Argument, u128
    let v18: core::fmt::rt::Argument;  // [bp-0x168]
    let v19: struct9;  // [bp-0x168], Other Possible Types: core::fmt::rt::Argument
    let v21: struct41;  // [bp-0x168]
    let v22: struct41;  // [bp-0x168]
    let v23: struct640;  // [bp-0x160], Other Possible Types: u64
    let v24: struct712;  // [bp-0x160], Other Possible Types: struct640
    let v25: struct640;  // [bp-0x160]
    let v26: struct640;  // [bp-0x158], Other Possible Types: core::ops::range::RangeInclusive<usize>
    let v27: core::ops::range::RangeInclusive<usize>;  // [bp-0x158]
    let v28: core::ops::range::RangeInclusive<usize>;  // [bp-0x158]
    let v29: u32;  // [bp-0x150]
    let v30: struct640;  // [bp-0x148]
    let v31: struct640;  // [bp-0x148]
    let v32: struct640;  // [bp-0x148]
    let v33: iNone;  // [bp-0x140]
    let v34: iNone;  // [bp-0x130]
    let v35: struct640;  // [bp-0x118]
    let v36: i64;  // [bp-0x110]
    let v37: u64;  // [bp-0x108]
    let v38: i32;  // [bp-0xfc]
    let v39: u8;  // [bp-0xf8]
    let v40: struct640;  // [bp-0xf8], Other Possible Types: u64
    let v41: struct640;  // [bp-0xf8], Other Possible Types: u64
    let v43: struct640;  // [bp-0xf8]
    let v44: struct48;  // [bp-0xf8]
    let v45: iNone;  // [bp-0xc8], Other Possible Types: u128
    let v46: iNone;  // [sp-0xb8]
    let v47: i64;  // [bp-0xa8]
    let v48: u64;  // [bp-0xa0]
    let v49: u64;  // [bp-0x90]
    let v50: u64;  // [bp-0x88]
    let v51: core::ops::range::RangeInclusive<usize>;  // [bp-0x80]
    let v52: iNone;  // [bp-0x78]
    let v53: iNone;  // [bp-0x68]
    let v54: iNone;  // [bp-0x58]
    let v55: u8;  // [bp-0x48]
    let v56: struct640;  // [bp-0x48]
    let v57: struct640;  // [bp-0x40]
    let v58: i8;  // [bp-0x38]
    let v60: Result<struct65, struct24>;  // r15, Other Possible Types: struct16
    let v62: Result<struct41, struct16>;  // r14, Other Possible Types: unsigned long
    let v63: i32;  // ebx
    let v64: i64;  // rdi
    let v65: u128;  // xmm0
    let v66: iNone;  // xmm1
    let v67: iNone;  // xmm0
    let v68: core::option::Option<usize>;  // xmm1
    let v69: alloc::string::String;  // r12, Other Possible Types: struct640
    let v75: core::fmt::Arguments;  // rbx, Other Possible Types: u64
    let v76: Result<struct4, struct8>;  // rbx
    let v77: i64;  // rax
    let v78: struct640;  // [bp-0x178]

    v60 = a2;
    v17 = uu_split::filenames::FilenameIterator::new(*((a0 + 48) as &i64), *((a0 + 56) as &i64), a0 + 64);
    v48 = 9223372036854775809;
    match v17 {
        Err(_) => {
            return v23;
        },
        Ok(_) => {
            v54 = v34;
            v53 = v33;
            v52 = *((&v17 as &char + 24) as &i128);
            v49 = v17 as i64;
            v50 = v23;
            v51 = v27;
            v17 = struct32 {
                field_0: 0
                field_8: 1
                field_16: 0
            };
            std::io::buffered::bufwriter::BufWriter<W>::with_capacity(&v39, alloc::boxed::Box<T>::new(&v17) as u64, &g_50b0c0);
            v0 = *((a0 + 160) as &i8);
            v37 = *((a0 + 136) as &i64);
            v47 = -(a2);
            v62 = 0;
            v1 = *((a0 + 162) as &i8);
            v63 = v1 as u32;
            v64 = &v55;
            v36 = a2;
            v38 = v63;
            loop {
                <uu_split::LinesWithSep<R> as core::iter::traits::iterator::Iterator>::next(v64, a1, v38 as u64);
                if v56 == 9223372036854775809 {
                    return 0;
                }
                v2 = v57;
                if v56 == 0x8000000000000000 {
                    v76 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v2);
                    break;
                }
                v35 = v56;
                v75 = *(&v58 as &i64);
                if v62 {
                    if !v60 <= v62 && !v75 != v62 {
                        v62 = v75;
                        if *((v2 + v75 - 1) as &i8) != v1 {
                            goto LABEL_471bc2;
                        }
                    }
                    v17 = v19;
                    v24 = v23;
                    v28 = v27;
                    v32 = v31;
                    v43 = v41;
                    if v75 <= v62 {
                        goto LABEL_47207c;
                    }
                    goto LABEL_471bb9;
                }
                v9 = <uu_split::filenames::FilenameIterator as core::iter::traits::iterator::Iterator>::next(&v49);
                if let None = v9 {
LABEL_4720df:
                    v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("output file suffixes exhausted");
                    v26 = v7;
                    v17 = *(&v3.field_0 as &i128) as u128;
                    v29 = 1;
                    v76 = alloc::boxed::Box<T>::new(&v17 as u64) as u64;
                    break;
                }
                v9 = v10;
                v12 = v78;
                if (v0 & 1) {
                    v4 = 0;
                    v5 = v78;
                    v7 = v16;
                    v8 = 1;
                    println!("creating file {}", &v4);
                    v9 = v11;
                    v12 = v14;
                }
                v15 = v12;
                v10 = v9;
                vvar_1260{stack -360} = struct41 OrderedDict([(0, 𝜙@64b [((4661067, None), vvar_1054{stack -360}), ((4661084, None), vvar_1156{stack -360})]), (8, 𝜙@64b [((4661067, None), vvar_1056{stack -352}), ((4661084, None), vvar_1157{stack -352})]), (16, 𝜙@64b [((4661067, None), vvar_1057{stack -344}), ((4661084, None), vvar_1159{stack -344})])])
                uu_split::Settings::instantiate_current_writer(&v21, a0, v78, v16, 1);
                if v21.field_0 != 0x8000000000000000 {
                    v65 = *(&v21.field_16 as &i128);
                    v66 = *(&v21.field_32 as &i128);
                    v3 = v65;
                    v6 = v66;
                    v46 = v66;
                    v45 = v65;
                    v44 = struct48 {
                        field_0: v21.field_0
                        field_8: v25
                        field_16: v3
                        field_32: v6 as i128
                    };
                    v60 = v36;
                    v62 = v60;
                    v17 = v18;
                    v24 = v25;
                    v28 = v26;
                    v32 = v30;
                    v43 = v40;
                    v78 = v15;
                    v19 = v18;
                    v23 = v25;
                    v27 = v26;
                    v31 = v30;
                    if v75 <= v62 {
LABEL_47207c:
                        v41 = v43;
                        v31 = v32;
                        v27 = v28;
                        v23 = v24;
                        v19 = v17;
                        v69 = v2;
                        goto LABEL_47208b;
                    }
LABEL_471bb9:
                    v17 = v19;
                    v24 = v23;
                    v28 = v27;
                    v32 = v31;
                    if v62 == v60 {
                        goto LABEL_471d1b;
                    }
LABEL_471bc2:
                    v9 = <uu_split::filenames::FilenameIterator as core::iter::traits::iterator::Iterator>::next(&v49);
                    if let None = v9 {
                        goto LABEL_4720df;
                    }
                    v9 = v10;
                    v12 = v78;
                    if (v0 & 1) {
                        v4 = 0;
                        v5 = v78;
                        v7 = v16;
                        v8 = 1;
                        println!("creating file {}", &v4);
                        v9 = v11;
                        v12 = v14;
                    }
                    v78 = v12;
                    v10 = v9;
                    vvar_1261{stack -360} = struct41 OrderedDict([(0, 𝜙@64b [((4660205, None), vvar_801{stack -360}), ((4660222, None), vvar_1178{stack -360})]), (8, 𝜙@64b [((4660205, None), vvar_803{stack -352}), ((4660222, None), vvar_1179{stack -352})]), (16, 𝜙@64b [((4660205, None), vvar_804{stack -344}), ((4660222, None), vvar_1181{stack -344})])])
                    uu_split::Settings::instantiate_current_writer(&v22, a0, v78, v16, 1);
                    if v22.field_0 == 0x8000000000000000 {
                        goto LABEL_472132;
                    }
                    v67 = *(&v22.field_16 as &i128);
                    v68 = *(&v22.field_32 as &i128);
                    *(&v3 as void*) = v67;
                    *(&v6 as &core::option::Option<usize>) = v68;
                    v46 = v68;
                    v45 = v67;
                    v60 = v36;
                    v17 = v18;
                    v24 = v25;
                    v28 = v26;
                    v32 = v30;
                    if v75 > v60 {
LABEL_471d1b:
                        v31 = v32;
                        v27 = v28;
                        v23 = v24;
                        v19 = uu_split::custom_write_all(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v60, v2, v75, "src/uu/split/src/split.rs"), a2, &v44, v37);
                        v24 = v23;
                        if !v19.field_0 {
                            v75 += v47;
                            v69 = v2 + v60;
                            v24 = v23;
                            continue;
                        }
                        v77 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24);
                        goto LABEL_472150;
                    } else {
                        v69 = v2;
                        v17 = v18;
                        v23 = v25;
                        v27 = v26;
                        v31 = v30;
                        v41 = v40;
                        v19 = v17;
                        v62 = v60;
LABEL_47208b:
                        v17 = uu_split::custom_write_all(v69, v75, &v41, v37);
                        if v17.field_0 != 1 {
                            v62 -= v75;
                            v64 = &v55;
                        } else {
                            v77 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v23);
LABEL_472150:
                            v76 = v77;
                            break;
                        }
                    }
                } else {
LABEL_472132:
                    v76 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v25);
                }
            }
            return v76;
        },
    }
}
