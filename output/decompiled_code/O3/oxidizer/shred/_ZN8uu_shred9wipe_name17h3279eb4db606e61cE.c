fn uu_shred::wipe_name(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64) -> int {
    let v0: i64;  // [sp-0x228]
    let v1: i128;  // [bp-0x220]
    let v2: i8;  // [sp-0x21f]
    let v3: i16;  // [sp-0x21c]
    let v4: i8;  // [bp-0x210]
    let v5: i128;  // [sp-0x208]
    let v6: i64;  // [sp-0x1f8]
    let v7: i32;  // [sp-0x1f0]
    let v8: i32;  // [sp-0x1ec]
    let v9: i32;  // [bp-0x1e8]
    let v10: i64;  // [sp-0x1e0]
    let v11: i64;  // [sp-0x1d8]
    let v12: i8;  // [bp-0x1d0]
    let v13: struct24;  // [sp-0x1b0], Other Possible Types: i192
    let v14: i64;  // [sp-0x198]
    let v15: i192;  // [sp-0x188], Other Possible Types: Result<struct4, struct8>, struct24
    let v16: i64;  // [sp-0x178]
    let v17: i64;  // [sp-0xd8]
    let v18: i64;  // [sp-0xd0]
    let v19: i8;  // [sp-0xc8]
    let v20: i64;  // [bp-0xc0]
    let v21: i128;  // [sp-0xb8]
    let v22: i8;  // [sp-0xa8]
    let v23: i192;  // [sp-0xa0], Other Possible Types: Option<struct24>
    let v24: i128;  // [sp-0x88]
    let v25: i128;  // [sp-0x78]
    let v26: i128;  // [sp-0x68]
    let v27: i64;  // [sp-0x58]
    let v28: struct24;  // [sp-0x50], Other Possible Types: i192
    let v30: i64;  // rax
    let v31: i64;  // rdx
    let v32: i128;  // xmm0
    let v33: i256;  // ymm0
    let v34: i256;  // ymm0
    let v35: i64;  // rdx
    let v36: i256;  // ymm0
    let v37: i256;  // ymm1
    let v38: i128;  // xmm0
    let v39: i128;  // xmm1
    let v40: i128;  // xmm0
    let v41: i64;  // rax
    let v42: i128;  // xmm0
    let v43: i128;  // xmm0
    let v44: i256;  // ymm0
    let v45: i128;  // xmm0
    let v46: i128;  // xmm0
    let v47: i128;  // xmm0

    v7 = a4;
    v8 = a3;
    v30 = std::path::Path::file_name(a1, a2, a2, a3);
    if !v30 {
        core::option::unwrap_failed(); /* do not return */
    }
    v15 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v30, v31);
    if v15 {
        core::option::unwrap_failed(); /* do not return */
    }
    v15 = std::sys::os_str::bytes::Slice::to_owned(a1, a2);
    v6 = v15.field_16;
    v32 = v15;
    v34 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32;
    v5 = v32;
    v17 = 1;
    v18 = v15.field_16;
    v19 = 0;
    if !<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next_back() {
        return struct24 {
            field_0: v5
            field_16: v6
        };
    }
    do {
        v28 = uu_shred::FilenameIter::new(v35);
        v38 = v28;
        v34 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38;
        v39 = *((&v28 as &char + 16) as &i128);
        v37 = v37 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39;
        v25 = v39;
        v24 = v38;
        loop {
            v23 = <uu_shred::FilenameIter as core::iter::traits::iterator::Iterator>::next(&v24);
            if v23 == 0x8000000000000000 {
                break;
            }
            v27 = *((&v23 as &char + 16) as &i64);
            v40 = v23;
            v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40;
            v26 = v40;
            v13 = std::path::Path::with_file_name(a1, a2, &v26);
            v15 = std::fs::metadata(*((&v13 as &char + 8) as &i64), *((&v13 as &char + 16) as &i64));
            if v15 == 2 {
                v41 = std::fs::rename(&v5, &v13, v31);
                if v41 {
                    v14 = v41;
                    *(&v9 as &long long) = uucore::util_name();
                    v10 = v31;
                    eprint!("{:?}: ", &v9);
                    v20 = 1;
                    v21 = *((&v5 as &char + 8) as &i128);
                    v22 = 0;
                    v0 = 1;
                    v1 = *((&v13 as &char + 8) as &i128);
                    v4 = 1;
                    eprintln!("{:?}: Couldn't rename to {:?}: {:?}", &v20, &v0, &v14);
                    std::process::exit(1); /* do not return */
                }
                if v8 {
                    *(&v9 as &long long) = uucore::util_name();
                    v10 = v31;
                    eprint!("{:?}: ", &v9);
                    v42 = *((&v5 as &char + 8) as &i128);
                    v9 = 1;
                    v10 = v42;
                    v12 = 0;
                    v43 = *((&v13 as &char + 8) as &i128);
                    v44 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43;
                    v20 = v43;
                    eprintln!("{:?}: renamed to {:?}", &v9, &v20);
                }
                if v7 == 3 {
                    v0 = 0x1b600000000;
                    v3 = 0;
                    v1 = 0;
                    v2 = 1;
                    v15 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v13);
                    v11 = v15.field_16;
                    v45 = v15;
                    v44 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45;
                    v9 = v45;
                    v15 = std::fs::OpenOptions::open(&v0, &v9);
                    v9 = core::result::Result<T,E>::expect(&v15) as i32;
                    core::result::Result<T,E>::expect(std::fs::File::sync_all(&v9));
                }
                v16 = *((&v13 as &char + 16) as &i64);
                v46 = v13;
                v15 = v46;
                v6 = v16;
                v47 = v15;
                v34 = v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47;
                v5 = v47;
                break;
            }
        }
    } while (<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next_back());
}
