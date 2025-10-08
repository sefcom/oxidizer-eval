fn uu_cat::write_fast() -> int {
    let v0: u64;  // [bp-0x10058]
    let v1: void*;  // [bp-0x10050]
    let v2: u64;  // [bp-0x10040]
    let v3: std::io::stdio::Stdout;  // [bp-0x10038]
    let v4: Result<struct4, struct1>;  // [bp-0x10030]
    let v5: u8;  // [bp-0x10028]
    let v6: u64;  // [bp-0x10027]
    let v9: u64;  // rsi
    let v10: u64;  // rdx
    let v12: core::result::Result<(), std::io::error::Error>;  // rax
    let v13: core::result::Result<(), std::io::error::Error>;  // rax
    let v14: i64;  // rdi
    let v15: i64;  // rdi
    let v16: u64;  // rdx
    let v18: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v3 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v3);
    v4 = uu_cat::splice::write_fast_using_splice(v9);
    if v4 as i64 != 9223372036854775814 {
        v16 = v6;
        *(&v1[16] as &u64) = v6;
        *(&v1[9] as &u64) = v16;
        *(v1 as &i64) = v4 as i64;
        *(&v1[8] as &u8) = v5;
    } else if (v5 & 1) {
        memset(&v4, 0, 0x10000);
        do {
            v18 = <std::fs::File as std::io::Read>::read(v9, &v4, 0x10000);
            v2 = *((&v18 as &char + 8) as &i64);
            if (v18 as i64 & 1) || !*((&v18 as &char + 8) as &i64) {
                v13 = <std::io::stdio::StdoutLock as std::io::Write>::flush(&v0);
                match v13 {
                    Ok(_) => {
                        *(v14 as &i64) = 9223372036854775814;
                        return;
                    },
                    Err(_) => {
                        *(v1 as &i64) = 0x8000000000000000;
                        *(&v1[8] as &core::result::Result<(), std::io::error::Error>) = v13;
                        return;
                    },
                }
            }
            v12 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, *((&v18 as &char + 8) as &i64), &v4, 0x10000, "src/uu/cat/src/cat.rs"), v10);
        } while (!v12);
        *(v1 as &i64) = 0x8000000000000000;
        *(&v1[8] as &core::result::Result<(), std::io::error::Error>) = v12;
    } else {
        *(v15 as &i64) = 9223372036854775814;
    }
    return;
}
