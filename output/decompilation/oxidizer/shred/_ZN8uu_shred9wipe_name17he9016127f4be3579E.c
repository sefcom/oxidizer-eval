fn uu_shred::wipe_name(a0: i64, a1: void*, a2: u64, a3: u32, a4: u32) -> long long {
    let v0: u64;  // [bp-0x218]
    let v1: u128;  // [bp-0x210]
    let v2: u8;  // [bp-0x20f]
    let v3: u16;  // [bp-0x20c]
    let v4: u8;  // [bp-0x200]
    let v5: u128;  // [bp-0x1f8]
    let v7: u64;  // [bp-0x1f0]
    let v8: u64;  // [bp-0x1e8]
    let v9: struct24;  // [bp-0x1d8]
    let v10: u64;  // [bp-0x1d0]
    let v11: u64;  // [bp-0x1c8]
    let v12: u32;  // [bp-0x1c0]
    let v13: u32;  // [bp-0x1bc]
    let v14: struct640;  // [bp-0x1b8], Other Possible Types: u64
    let v15: struct24;  // [bp-0x1b8], Other Possible Types: struct640, u64
    let v16: u32;  // [bp-0x1b8]
    let v17: struct640;  // [bp-0x1b8]
    let v18: u64;  // [bp-0x1b0]
    let v19: u8;  // [bp-0x1a0]
    let v21: i64;  // [bp-0x180]
    let v22: u128;  // [bp-0x178]
    let v23: iNone;  // [bp-0x168]
    let v24: struct17;  // [bp-0x150]
    let v25: struct24;  // [bp-0x138], Other Possible Types: core::result::Result<std::fs::Metadata, std::io::error::Error>, u64
    let v26: u64;  // [bp-0x138]
    let v27: Result<struct4, struct8>;  // [bp-0x138]
    let v28: u128;  // [bp-0x138]
    let v29: u64;  // [bp-0x138]
    let v30: struct640;  // [bp-0x128], Other Possible Types: u64
    let v31: struct640;  // [bp-0x128]
    let v32: u128;  // [bp-0x88]
    let v33: iNone;  // [bp-0x80]
    let v34: u8;  // [bp-0x70]
    let v35: struct32;  // [bp-0x68]
    let v36: iNone;  // [bp-0x58]
    let v37: Option<struct24>;  // [bp-0x48]
    let v39: u64;  // rax
    let v40: u64;  // rdx
    let v42: u64;  // rdx
    let v44: u64;  // rdx
    let v46: u64;  // [bp-0x88]

    v12 = a4;
    v13 = a3;
    v39 = std::path::Path::file_name(a1, a2);
    core::option::unwrap(v39);
    v25 = core::str::converts::from_utf8(v39, a2);
    match v25 {
        Err(_) => {
            core::option::unwrap_failed(); /* do not return */
        },
        Ok(_) => {
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v25, a1, a2);
            v8 = v30;
            v5 = v25 as i128 as u128;
            v24 = struct17 {
                field_0: 1
                field_8: v30
                field_16: 0
            };
            if (<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next_back(&v24) as u8 & 1) {
                do {
                    vvar_546{stack -104} = struct32 OrderedDict([(0, 𝜙@128b [((4608485, None), vvar_307{stack -104}), ((4608354, None), None)]), (16, 𝜙@128b [((4608485, None), vvar_308{stack -88}), ((4608354, None), None)])])
                    uu_shred::FilenameIter::new(&v35, v40);
                    v23 = v36;
                    v22 = v35.field_0;
                    loop {
                        v37 = <uu_shred::FilenameIter as core::iter::traits::iterator::Iterator>::next(&v22 as u8);
                        if (((0 ^ v37 as i64) & (0 ^ -(v37 as i64))) >> 63) as char {
                            break;
                        }
                        v9 = std::path::Path::with_file_name(a1, a2, &v37);
                        v25 = std::fs::metadata(v10, v11);
                        if v25 as i64 as i32 == 2 {
                            if !std::fs::rename(&v5 as u8, &v9) {
                                v25 = v29;
                                if v13 as i8 {
                                    v15 = uucore::util_name();
                                    v18 = v42;
                                    eprint!("{}: ", &v15);
                                    v14 = 1;
                                    v18 = *(&v7 as &i128) as u128;
                                    v19 = 0;
                                    v32 = *(&v10 as &i128) as u128;
                                    eprintln!("{}: renamed to {}", &v14, &v46);
                                    v25 = v26;
                                    v30 = v31;
                                }
                                v29 = v25;
                                v15 = v14;
                                if v12 as i8 == 3 {
                                    v0 = 0x1b600000000;
                                    v3 = 0;
                                    v1 = 0 as u32;
                                    v2 = 1;
                                    v25 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v10, v11);
                                    v15 = v26;
                                    v27 = std::fs::OpenOptions::open(&v0, &v15);
                                    v16 = core::result::Result<T,E>::expect(&v27) as u32;
                                    core::result::Result<T,E>::expect(std::fs::File::sync_all(&v16 as u64));
                                    v15 = v17;
                                }
                                v14 = v15;
                                v30 = v11;
                                v28 = v9.field_0;
                                v8 = v30;
                                v5 = v28;
                                break;
                            } else {
                                v15 = uucore::util_name();
                                v18 = v44;
                                eprint!("{}: ", &v15);
                                v46 = 1;
                                v33 = *(&v7 as &i128);
                                v34 = 0;
                                v0 = 1;
                                v1 = *(&v10 as &i128) as u128;
                                v4 = 1;
                                eprintln!("{}: Couldn't rename to {}: {}", &v46, &v0, &v20);
                                std::process::exit(1); /* do not return */
                            }
                        }
                    }
                } while ((<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next_back(&v24) as u8 & 1));
            }
            *((v21 + 16) as &u64) = v8;
            *(v21 as &u128) = v5;
            return v8;
        },
    }
}
