fn uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0: &struct48, a1: u32) -> u64 {
    let v0: void*;  // [sp-0x4040]
    let v1: void*;  // [sp-0x4030]
    let v2: void*;  // [sp-0x3030]
    let v3: void*;  // [sp-0x2030]
    let v4: void*;  // [sp-0x1030]
    let v6: void*;  // rbx
    let v7: void*;  // r13
    let v8: u64;  // rdx
    let v9: u64;  // rax
    let v10: &struct_0;  // rax

    v4 = 0;
    v3 = 0;
    v2 = 0;
    v1 = 0;
    v0 = 0;
    memset(&v1, 0, 0x4000);
    v6 = 0;
    v7 = 0;
    loop {
        if <std::io::stdio::StdinLock as std::io::Read>::read(a1, &v1, 0x4000) {
            if std::io::error::Error::kind(v8) as i8 != 35 {
                v10 = a0;
                v10->field_0 = v0;
                v10->field_8 = v6;
                v10->field_10 = v7;
                *(&(&v10->field_10)[1] as &i128) = 0;
                *((&v10->field_18 as &char + 8) as &u64) = v8;
                return v10;
            }
        } else {
            if v8 {
                v0 += v8;
                v9 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v8, &v1);
                v6 += <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v9, v8 + v9);
                v7 += bytecount::count(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v8, &v1), v8, 10);
            } else {
                v10 = a0;
                v10->field_0 = v0;
                v10->field_8 = v6;
                v10->field_10 = v7;
                *(&(&v10->field_10)[1] as &i128) = 0;
                *((&v10->field_18 as &char + 8) as &i64) = 0;
                return v10;
            }
        }
    }
}
