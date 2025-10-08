fn uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0: u64, a1: u64) -> long long {
    let v0: struct56;  // [bp-0x4040]
    let v1: i64;  // [bp-0x4038]
    let v2: void*;  // [bp-0x4030]
    let v3: void*;  // [bp-0x3030]
    let v4: void*;  // [bp-0x2030]
    let v5: void*;  // [bp-0x1030]
    let v7: void*;  // rbx
    let v9: u64;  // rdx
    let v10: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v5 = 0;
    v4 = 0;
    v3 = 0;
    v2 = 0;
    v7 = 0;
    memset(&v2, 0, 0x4000);
    loop {
        v10 = <std::io::stdio::StdinLock as std::io::Read>::read(a1, &v2, 0x4000);
        if (v10 as i64 & 1) {
            if std::io::error::Error::kind(*((&v10 as &char + 8) as &i64)) as u8 != 35 {
                *(v1 as &i64) = 0;
                *((v1 + 8) as &void*) = v7;
                *((v1 + 16) as &struct56) = v0;
                *((v1 + 24) as &i128) = 0;
                *((v1 + 40) as &i64) = *((&v10 as &char + 8) as &i64);
                return a0;
            }
        } else {
            if *((&v10 as &char + 8) as &i64) {
                v7 += bytecount::num_chars(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, *((&v10 as &char + 8) as &i64), &v2, 0x4000, "src/uu/wc/src/count_fast.rs"), v9);
                v0 += bytecount::count(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, *((&v10 as &char + 8) as &i64), &v2, 0x4000, "src/uu/wc/src/count_fast.rs"), v9, 10);
            } else {
                *(v1 as &i64) = 0;
                *((v1 + 8) as &void*) = v7;
                *((v1 + 16) as &struct56) = v0;
                *((v1 + 24) as &i128) = 0;
                *((v1 + 40) as &i64) = 0;
                return a0;
            }
        }
    }
}
