fn uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0: i64, a1: &struct12) -> long long {
    let v0: struct24;  // [bp-0x4040]
    let v1: i64;  // [bp-0x4038]
    let v2: void*;  // [bp-0x4030]
    let v3: void*;  // [bp-0x3030]
    let v4: struct24;  // [bp-0x2030]
    let v5: struct24;  // [bp-0x1030]
    let v7: struct24;  // rbx
    let v8: void*;  // r13
    let v10: u64;  // rdx
    let v11: u64;  // rax
    let v12: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v5 = 0;
    v4 = 0;
    v3 = 0;
    v2 = 0;
    v0 = 0;
    memset(&v2, 0, 0x4000);
    loop {
        v12 = <std::fs::File as std::io::Read>::read(a1);
        match v12 {
            Err(_) => {
                if std::io::error::Error::kind(*((&v12 as &char + 8) as &i64)) != 35 {
                    *(v1 as &struct24) = v0;
                    *((v1 + 8) as &struct24) = v7;
                    *((v1 + 16) as &void*) = v8;
                    *((v1 + 24) as &i128) = 0;
                    *((v1 + 40) as &i64) = *((&v12 as &char + 8) as &i64);
                    return a0;
                }
            },
            Ok(_) => {
                if *((&v12 as &char + 8) as &i64) {
                    v0 += *((&v12 as &char + 8) as &i64);
                    v11 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(*((&v12 as &char + 8) as &i64), &v2, "src/uu/wc/src/count_fast.rs");
                    v7 += <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v11, v10 + v11);
                    v8 += bytecount::count(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(*((&v12 as &char + 8) as &i64), &v2, "src/uu/wc/src/count_fast.rs"), v10, 10);
                } else {
                    *(v1 as &struct24) = v0;
                    *((v1 + 8) as &struct24) = v7;
                    *((v1 + 16) as &void*) = v8;
                    *((v1 + 24) as &i128) = 0;
                    *((v1 + 40) as &i64) = 0;
                    return a0;
                }
            },
        }
    }
}
