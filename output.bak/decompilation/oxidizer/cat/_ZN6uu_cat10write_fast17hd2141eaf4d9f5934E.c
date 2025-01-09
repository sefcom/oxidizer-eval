fn uu_cat::write_fast(a0: &Option<Result<struct25, struct8>>, a1: u32) -> u64 {
    let <0x4af750[is_3]|Stack bp-0x10030, 1 B>: i64;  // [bp-0x10030]
    let v0: i64;  // [sp-0x10058]
    let v1: i64;  // [sp-0x10048]
    let v2: i64;  // [sp-0x10040]
    let v3: i64;  // [sp-0x10038]
    let v4: i40;  // [sp-0x10030], Other Possible Types: Result<struct4, struct1>
    let v8: i64;  // [sp-0x2030]
    let v14: i64;  // rdx
    let v15: i64;  // rax
    let v16: i64;  // rcx

    do {
        v8 = 0;
    } while (&v8 != &<0x4af750[is_3]|Stack bp-0x10030, 1 B>);
    v3 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v3);
    v4 = uu_cat::splice::write_fast_using_splice(a1, &v0);
    match v4 {
        Ok(_) => {
            return struct25 {
                field_0: v10
                field_8: v11
                field_9: v12
                field_16: <UNKNOWN>
            };
        },
        Err(_) => {
            return struct8 {
                field_0: 9223372036854775814
            };
            memset(&v4, 0, 0x10000);
            loop {
                v1 = <std::os::unix::net::stream::UnixStream as std::io::Read>::read(a1, &v4, 0x10000);
                v2 = v14;
                if !(!v1) || !(v14) {
                    break;
                }
                v15 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v14, &v4, 0x10000, "src/uu/cat/src/cat.rs"), v14);
                if v15 {
                    v16 = a0;
                    *(v16 as &i64) = 0x8000000000000000;
                    *((v16 + 8) as &i64) = v15;
                }
            }
            if <std::io::stdio::StdoutLock as std::io::Write>::flush(&v0) {
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: v17
                };
            }
            return struct8 {
                field_0: 9223372036854775814
            };
        },
    }
}
