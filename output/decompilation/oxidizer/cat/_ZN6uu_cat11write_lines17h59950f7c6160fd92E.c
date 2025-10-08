fn uu_cat::write_lines(a0: i64, a1: i64, a2: i64, a3: i64) {
    let v0: u8;  // [bp-0x7ce1]
    let v1: void*;  // [bp-0x7ce0]
    let v2: u64;  // [bp-0x7cd8]
    let v3: u32;  // [bp-0x7cc8]
    let v4: u32;  // [bp-0x7cc4]
    let v5: u64;  // [bp-0x7cc0]
    let v6: u64;  // [bp-0x7cb0]
    let v7: struct33;  // [bp-0x7ca8], Other Possible Types: struct712
    let v8: struct712;  // [bp-0x7ca8]
    let v9: std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw>;  // [bp-0x7ca8]
    let v10: struct712;  // [bp-0x7ca8]
    let v11: struct712;  // [bp-0x7ca0]
    let v12: struct712;  // [bp-0x7ca0]
    let v13: struct640;  // [bp-0x7c98]
    let v14: i64;  // [bp-0x7c98]
    let v15: struct640;  // [bp-0x7c98]
    let v16: core::fmt::Arguments;  // [bp-0x7c80]
    let v17: u64;  // [bp-0x7c78]
    let v18: std::io::stdio::Stdout;  // [bp-0x7c68]
    let v19: void*;  // [bp-0x7c60], Other Possible Types: u64
    let v20: Option<struct8>;  // [bp-0x7c60]
    let v21: u128;  // [bp-0x7c58]
    let v22: u8;  // [bp-0x7c30]
    let v23: void*;  // [bp-0x7030]
    let v24: void*;  // [bp-0x6030]
    let v25: void*;  // [bp-0x5030]
    let v26: void*;  // [bp-0x4030]
    let v27: void*;  // [bp-0x3030]
    let v28: void*;  // [bp-0x2030]
    let v29: void*;  // [bp-0x1030]
    let v33: core::fmt::Arguments;  // rdx
    let v37: u64;  // rdx
    let v39: i64;  // r15
    let v40: void*;  // rbp
    let v41: u64;  // rax
    let v42: i64;  // rax
    let v44: core::result::Result<(), std::io::error::Error>;  // rax
    let v46: i64;  // rax
    let v47: u32;  // ecx
    let v49: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v29 = 0;
    v28 = 0;
    v27 = 0;
    v26 = 0;
    v25 = 0;
    v24 = 0;
    v23 = 0;
    memset(&v22, 0, 0x7c00);
    v18 = std::io::stdio::stdout();
    v7 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(std::io::stdio::Stderr::lock(&v18));
    v0 = *((a2 + 4) as &i8);
    v16 = v33;
    v17 = *((a2 + 2) as &i8) + 1;
    v5 = "src/uu/cat/src/cat.rs";
    v2 = 9223372036854775814;
    v4 = *((a2 + 1) as &i8);
    v3 = *((a2 + 3) as &i8);
    loop {
        v49 = <std::os::unix::net::stream::UnixStream as std::io::Read>::read(a1, &v22, 0x7c00);
        v6 = *((&v49 as &char + 8) as &i64);
        if (v49 as i64 & 1) || !*((&v49 as &char + 8) as &i64) {
            break;
        }
        v39 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, *((&v49 as &char + 8) as &i64), &v22, 0x7c00, "src/uu/cat/src/cat.rs");
        loop {
            if v39 + v40 == "\n" {
                uu_cat::write_new_line(&v19, &v8 as u8, a2, a3, *((a1 + 4) as &i8));
                v41 = v19;
                if v41 != v2 {
                    *(&v1[8] as &u128) = v21;
                    *(v1 as &u64) = v41;
                }
                *(&a3[56] as &i8) = 1;
                if v40 >= *((&v49 as &char + 8) as &i64) {
                    break;
                }
                continue;
            }
            if a3[57] as i8 {
                v42 = v13;
                if v8 - v42 > 1 {
                    *((v11 + v42) as &i8) = 13;
                    v14 = v42 + 1;
                } else {
                    std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v8 as u8, "\r");
                    if let Err(_) = v44 {
                        *(v1 as &i64) = 0x8000000000000000;
                        *(&v1[8] as &core::result::Result<(), std::io::error::Error>) = v44;
                    }
                }
                *(&a3[56] as &i16) = 0;
                *(&a3[58] as &i8) = 0;
            } else {
                *(&a3[58] as &i8) = 0;
                if (a3[56] as i8 & 1) && v0 {
                    uu_cat::LineNumber::write(a3, &v8 as u8);
                    match v44 {
                        Err(_) => {
                            *(v1 as &i64) = 0x8000000000000000;
                            *(&v1[8] as &core::result::Result<(), std::io::error::Error>) = v44;
                        },
                        Ok(_) => {
                            uu_cat::LineNumber::increment(a3);
                        },
                    }
                }
            }
            v46 = uu_cat::write_end(&v8 as u8, v39 + v40, v37 - v40, v4, v3) + v40;
            if v46 == v37 {
                *(&a3[56] as &i8) = 0;
                break;
            }
            match (v47) {
                13 => {
                    *(&a3[57] as &i8) = 1;
                    if v40 >= *((&v49 as &char + 8) as &i64) {
                        goto LABEL_45f1d5;
                    }
                    continue;
                }
                10 => {
                    v20 = uu_cat::write_end_of_line(&v8 as u8, v16, v17, *((a1 + 4) as &i8));
                    if v20 as i64 != v2 {
                        *(&v1[8] as &u128) = v21;
                        *(v1 as &u64) = v41;
                    }
                    *(&a3[56] as &i8) = 1;
                    if v40 >= *((&v49 as &char + 8) as &i64) {
                        goto LABEL_45f1d5;
                    }
                    continue;
                    break;
                }
                _ => {
                    v19 = 0;
                    core::panicking::assert_failed(0, v39 + v46, &g_41ad96, &v19, "src/uu/cat/src/cat.rs"); /* do not return */
                }
            }
        }
LABEL_45f1d5:
        vvar_529{stack -31912} = std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutRaw> OrderedDict([(0, alloc::vec::Vec<u8, alloc::alloc::Global> OrderedDict([(0, alloc::raw_vec::RawVec<u8, alloc::alloc::Global> OrderedDict([(0, alloc::raw_vec::RawVecInner<alloc::alloc::Global> OrderedDict([(0, core::num::niche_types::UsizeNoHighBit OrderedDict([(0, 𝜙@64b [((4583888, None), vvar_531{stack -31912}), ((4583566, None), vvar_471{stack -31912}), ((4583472, None), vvar_531{stack -31912}), ((4583820, None), vvar_531{stack -31912})])])), (8, core::ptr::unique::Unique<u8> OrderedDict([(0, core::ptr::non_null::NonNull<u8> OrderedDict([(0, 𝜙@64b [((4583888, None), vvar_469{stack -31904}), ((4583566, None), vvar_474{stack -31904}), ((4583472, None), vvar_469{stack -31904}), ((4583820, None), vvar_469{stack -31904})])])), (8, core::marker::PhantomData<u8> OrderedDict())])), (16, alloc::alloc::Global OrderedDict())])), (16, core::marker::PhantomData<u8> OrderedDict())])), (16, 𝜙@64b [((4583888, None), vvar_468{stack -31896}), ((4583566, None), vvar_473{stack -31896}), ((4583472, None), vvar_468{stack -31896}), ((4583820, None), vvar_468{stack -31896})])])), (24, std::io::stdio::StdoutRaw OrderedDict([(0, std::sys::stdio::unix::Stdout OrderedDict())]))])
        <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v9);
        match v44 {
            Err(_) => {
                *(v1 as &i64) = 0x8000000000000000;
                *(&v1[8] as &core::result::Result<(), std::io::error::Error>) = v44;
            },
            Ok(_) => {
                v7 = v10;
                v13 = v15;
                v11 = v12;
            },
        }
    }
    return v2;
}
