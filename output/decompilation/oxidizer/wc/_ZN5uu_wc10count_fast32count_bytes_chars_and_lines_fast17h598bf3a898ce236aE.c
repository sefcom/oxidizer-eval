fn uu_wc::count_fast::count_bytes_chars_and_lines_fast(a0: &struct48, a1: u32) -> u64 {
    let v0: u64;  // [sp-0x4038]
    let v1: void*;  // [sp-0x4030]
    let v2: void*;  // [sp-0x3030]
    let v3: void*;  // [sp-0x2030]
    let v4: void*;  // [sp-0x1030]
    let v6: u64;  // rax
    let v7: void*;  // rbp
    let v8: u64;  // rdx

    v4 = 0;
    v3 = 0;
    v2 = 0;
    v1 = 0;
    v0 = v6;
    v7 = 0;
    memset(&v1, 0, 0x4000);
    for (; !<std::io::stdio::StdinLock as std::io::Read>::read(a1); v7 += bytecount::count(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v8, &v1, "src/uu/wc/src/count_fast.rs"), v8, 10)) {
LABEL_4bed90:
        if !v8 {
            return struct48 {
                field_0: 0
                field_16: v7
                field_24: 0
                field_40: 0
            };
        }
    }
    if std::io::error::Error::kind(v8) as i8 != 35 {
        return struct48 {
            field_0: 0
            field_16: v7
            field_24: 0
            field_40: v8
        };
    }
    goto LABEL_4bed90;
}
