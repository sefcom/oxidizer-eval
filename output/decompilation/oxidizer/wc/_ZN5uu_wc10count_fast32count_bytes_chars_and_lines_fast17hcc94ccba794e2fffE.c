fn uu_wc::count_fast::count_bytes_chars_and_lines_fast(a1: &struct12) -> : struct48 {
    let a0: &u32;  // rsi
    let v0: struct44;  // [bp-0x4038], Other Possible Types: u64
    let v1: void*;  // [bp-0x4030]
    let v2: void*;  // [bp-0x3030]
    let v3: void*;  // [bp-0x2030]
    let v4: void*;  // [bp-0x1030]
    let v6: u64;  // rax
    let v7: void*;  // r13
    let v8: u64;  // rdx
    let v9: u64;  // rax
    let v10: i64;  // rdi
    let v11: i64;  // rdi
    let v12: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v4 = 0;
    v3 = 0;
    v2 = 0;
    v1 = 0;
    v0 = v6;
    v0 = 0;
    memset(&v1, 0, 0x4000);
    loop {
        v12 = <std::fs::File as std::io::Read>::read(a0);
        match v12 {
            Err(_) => {
                if std::io::error::Error::kind(*((&v12 as &char + 8) as &i64)) != 35 {
                    *(v10 as &i64) = 0;
                    *((v10 + 8) as &struct44) = v0;
                    *((v10 + 16) as &void*) = v7;
                    *((v10 + 24) as &i128) = 0;
                    *((v10 + 40) as &i64) = *((&v12 as &char + 8) as &i64);
                    return;
                }
            },
            Ok(_) => {
                if *((&v12 as &char + 8) as &i64) {
                    v9 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(*((&v12 as &char + 8) as &i64), &v1, "src/uu/wc/src/count_fast.rs");
                    v0 += <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v9, v8 + v9);
                    v7 += bytecount::count(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(*((&v12 as &char + 8) as &i64), &v1, "src/uu/wc/src/count_fast.rs"), v8, 10);
                } else {
                    *(v11 as &i64) = 0;
                    *((v11 + 8) as &struct44) = v0;
                    *((v11 + 16) as &void*) = v7;
                    *((v11 + 24) as &i128) = 0;
                    *((v11 + 40) as &i64) = 0;
                    return;
                }
            },
        }
    }
}
