fn uu_cat::write_fast() -> u32 {
    let <0x4af750[is_3]|Stack bp-0x10030, 1 B>: i64;  // [bp-0x10030]
    let v0: &struct_0;  // [sp-0x10058], Other Possible Types: u64
    let v1: u64;  // [sp-0x10048]
    let v2: u64;  // [sp-0x10040]
    let v3: u64;  // [sp-0x10038]
    let v4: Result<struct4, struct1>;  // [sp-0x10030], Other Possible Types: u32
    let v5: u8;  // [bp-0x10028]
    let v6: i8;  // [bp-0x10027]
    let v7: u64;  // [bp-0x10020]
    let v8: void*;  // [sp-0x2030]
    let v10: u64;  // rsi
    let v11: u64;  // rdx
    let v12: u64;  // rcx
    let v13: u8;  // al
    let v14: u64;  // rdx
    let v15: &struct_0;  // rdi
    let v16: &struct_0;  // rdi
    let v17: &u64;  // rdi
    let v18: u64;  // rax
    let v19: &u64;  // rdi
    let v20: &u64;  // rcx
    let v21: u64;  // rax
    let v22: &u64;  // rdi
    let v23: &u64;  // rcx
    let v24: &u64;  // rdi

    do {
        v8 = 0;
    } while (&v8 != &<0x4af750[is_3]|Stack bp-0x10030, 1 B>);
    v3 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v3, v10, v11);
    v4 = uu_cat::splice::write_fast_using_splice(v10, &v0);
    v12 = *(&v4 as &i64);
    v13 = v5;
    if v12 != 9223372036854775814 {
        v14 = v6;
        v16 = v15;
        v16[1].padding_0 = v7;
        *((&v16->field_10 as &char + 1) as &u64) = v14;
        v16->padding_0 = v12;
        v16->field_10 = v13;
    } else if !v13 {
        *(v17) = 9223372036854775814;
    } else {
        memset(&v4, 0, 0x10000);
        loop {
            v1 = <std::os::unix::net::stream::UnixStream as std::io::Read>::read(v10, &v4, 0x10000);
            v2 = v11;
            if v1 || !v11 {
                v21 = <std::io::stdio::StdoutLock as std::io::Write>::flush(&v0);
                if v21 {
                    v23 = v22;
                    *(v23) = 0x8000000000000000;
                    v23[1] = v21;
                    break;
                } else {
                    *(v24) = 9223372036854775814;
                    break;
                }
            } else {
                v18 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v11, &v4, 0x10000, "src/uu/cat/src/cat.rs"), v11);
                if v18 {
                    v20 = v19;
                    *(v20) = 0x8000000000000000;
                    v20[1] = v18;
                    break;
                }
            }
        }
    }
    return;
}
