fn uu_shred::wipe_name(a0: &struct24, a1: u64, a2: u64, a3: u64, a4: u64) -> int {
    let v0: i64;  // [sp-0x228]
    let v1: i32;  // [bp-0x220]
    let v2: i8;  // [sp-0x21f]
    let v3: i16;  // [sp-0x21c]
    let v4: i8;  // [bp-0x210]
    let v5: i128;  // [sp-0x208]
    let v6: i64;  // [sp-0x1f8]
    let v7: i32;  // [sp-0x1f0]
    let v8: i32;  // [sp-0x1ec]
    let v9: i32;  // [bp-0x1e8], Other Possible Types: struct24
    let v10: i64;  // [sp-0x1e0]
    let v11: i8;  // [bp-0x1d0]
    let v12: i192;  // [sp-0x1b0], Other Possible Types: struct24
    let v13: i64;  // [sp-0x198]
    let v14: i64;  // [sp-0x188], Other Possible Types: struct24, Result<struct16, struct10>, struct16
    let v15: i64;  // [sp-0x178]
    let v16: i64;  // [sp-0xd8]
    let v17: i64;  // [sp-0xd0]
    let v18: i8;  // [sp-0xc8]
    let v19: i128;  // [bp-0xc0]
    let v20: i128;  // [sp-0xb8]
    let v21: i8;  // [sp-0xa8]
    let v22: i192;  // [sp-0xa0], Other Possible Types: Option<struct24>
    let v23: i128;  // [sp-0x88]
    let v24: i128;  // [sp-0x78]
    let v25: struct24;  // [bp-0x68]
    let v26: i192;  // [sp-0x50], Other Possible Types: struct24
    let v28: i64;  // rax
    let v29: i64;  // rdx
    let v30: i128;  // xmm0
    let v31: i256;  // ymm0
    let v32: i256;  // ymm0
    let v33: i64;  // rdx
    let v34: i256;  // ymm0
    let v35: i256;  // ymm1
    let v36: i128;  // xmm0
    let v37: i128;  // xmm1
    let v38: i64;  // rax
    let v39: i128;  // xmm0
    let v40: i128;  // xmm0
    let v41: i256;  // ymm0
    let v42: i128;  // xmm0
    let v43: i128;  // xmm0

    v7 = a4;
    v8 = a3;
    v28 = std::path::Path::file_name(a1, a2);
    if !v28 {
        core::option::unwrap_failed("src/uu/shred/src/shred.rs"); /* do not return */
    }
    v14 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v28, v29);
    if v14 {
        core::option::unwrap_failed("src/uu/shred/src/shred.rs"); /* do not return */
    }
    v14 = std::sys::os_str::bytes::Slice::to_owned(a1, a2);
    v6 = v15;
    v30 = v14;
    v32 = v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30;
    v5 = v30;
    v16 = 1;
    v17 = v15;
    v18 = 0;
    if !<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next_back() {
        return struct24 {
            field_0: v5
            field_16: v6
        };
    }
    do {
        v26 = uu_shred::FilenameIter::new(v33);
        v36 = v26;
        v32 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36;
        v37 = v26;
        v35 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37;
        v24 = v37;
        v23 = v36;
        loop {
            v22 = <uu_shred::FilenameIter as core::iter::traits::iterator::Iterator>::next(&v23);
            if v22 == 0x8000000000000000 {
                break;
            }
            v32 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22;
            *(&v25.field_0 as &struct24) = struct24 {
                field_0: v31 as u128
                field_16: *((&v22 as &char + 16) as &i64)
            };
            v12 = std::path::Path::with_file_name(a1, a2, &v25);
            v14 = std::fs::metadata(*((&v12 as &char + 8) as &i64), *((&v12 as &char + 16) as &i64));
            if v14 == 2 {
                v38 = std::fs::rename(&v5, &v12);
                if v38 {
                    v13 = v38;
                    *(&v9 as &long long) = uucore::util_name();
                    v10 = v29;
                    eprint!("{:?}: ", &v9);
                    v19 = 1;
                    v20 = *((&v5 as &char + 8) as &i128);
                    v21 = 0;
                    v0 = 1;
                    v1 = *((&v12 as &char + 8) as &i128);
                    v4 = 1;
                    eprintln!("{:?}: Couldn't rename to {:?}: {:?}", &v19, &v0, &v13);
                    std::process::exit(1); /* do not return */
                }
                if v8 {
                    *(&v9 as &long long) = uucore::util_name();
                    v10 = v29;
                    eprint!("{:?}: ", &v9);
                    v39 = *((&v5 as &char + 8) as &i128);
                    v9 = 1;
                    v10 = v39;
                    v11 = 0;
                    v40 = *((&v12 as &char + 8) as &i128);
                    v41 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40;
                    v19 = v40;
                    eprintln!("{:?}: renamed to {:?}", &v9, &v19);
                }
                if v7 == 3 {
                    v0 = 0x1b600000000;
                    v3 = 0;
                    v1 = 0;
                    v2 = 1;
                    v14 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v12);
                    v41 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v14;
                    *(&v9.field_0 as &struct24) = struct24 {
                        field_0: v31 as u128
                        field_16: v15
                    };
                    v14 = std::fs::OpenOptions::open(&v0, &v9) as u64;
                    v9 = core::result::Result<T,E>::expect(&v14);
                    core::result::Result<T,E>::expect(std::fs::File::sync_all(&v9));
                }
                v15 = *((&v12 as &char + 16) as &i64);
                v42 = v12;
                v14 = v42;
                v6 = v15;
                v43 = v14;
                v32 = v41 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43;
                v5 = v43;
                break;
            }
        }
    } while (<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next_back());
}
