fn uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0: &struct48, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x4038], Other Possible Types: void*
    let v1: void*;  // [sp-0x4030]
    let v2: void*;  // [sp-0x3030]
    let v3: void*;  // [sp-0x2030]
    let v4: void*;  // [sp-0x1030]
    let v6: u64;  // rax
    let v7: void*;  // r12
    let v8: u32;  // rdx
    let v9: u64;  // rax

    v4 = 0;
    v3 = 0;
    v2 = 0;
    v1 = 0;
    v0 = v6;
    v0 = 0;
    memset(&v1, 0, 0x4000);
    v7 = 0;
    loop {
        if !<std::io::stdio::StdinLock as std::io::Read>::read(a1) {
            if v8 {
                v0 += v8;
                v9 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v8, &v1, "src/uu/wc/src/count_fast.rs");
                v7 += <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v9, v8 + v9);
            } else {
                return struct48 {
                    field_0: v0
                    field_8: v7
                    field_16: 0
                    field_32: 0
                };
            }
        } else {
            if std::io::error::Error::kind(v8) as i8 != 35 {
                return struct48 {
                    field_0: v0
                    field_8: v7
                    field_16: 0
                    field_32: 0
                    field_40: v8
                };
            }
        }
    }
}
