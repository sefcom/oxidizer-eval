fn uu_cp::platform::linux::sparse_copy_without_hole(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v0: i32;  // [bp-0x13c]
    let v1: i32;  // [sp-0x138]
    let v2: i32;  // [sp-0x134]
    let v3: i64;  // [sp-0x130]
    let v4: i64;  // [sp-0x128]
    let v5: struct24;  // [sp-0x120]
    let v7: i64;  // [sp-0xe8], Other Possible Types: Result<struct4, struct8>, struct16
    let v8: i8;  // [bp-0xe0]
    let v11: i8;  // [bp-0x98]
    let v13: i64;  // r13
    let v14: i64;  // r14
    let v15: i32;  // ebp
    let v16: i32;  // ebp

    v7 = std::fs::File::open(a0, a1);
    match v7 {
        Err(v13) => {
            return v13;
        },
        Ok(v0) => {
            v7 = std::fs::File::create(a2, a3);
            match v7 {
                Err(v13) => {
                    goto LABEL_51323e;
                },
                Ok(_) => {
                    v1 = *((&v7 as &char + 4) as &i32);
                    v7 = std::fs::File::metadata(&v0);
                },
            }
            if v7 == 2 {
                v13 = *((&v7 as &char + 8) as &i64);
                goto LABEL_513237;
            }
            v14 = v11;
            core::result::Result<T,E>::unwrap(v14 >> 63, "src/uu/cp/src/platform/linux.rs");
            if ftruncate(v1 as u32 as u64, v14) < 0 {
                v13 = std::sys::pal::unix::os::errno() as i32 as u32 as u64 * 0x100000000 | 2;
LABEL_513237:
LABEL_51323e:
                return v13;
            }
            v15 = v0;
            v4 = core::cmp::min_by(v14);
            v5 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v4);
            v3 = 0;
            v2 = v15;
            v16 = v15;
        },
    }
}
