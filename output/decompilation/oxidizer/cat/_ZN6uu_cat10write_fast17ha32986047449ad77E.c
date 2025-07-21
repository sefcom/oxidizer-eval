fn uu_cat::write_fast() -> int {
    let v0: core::fmt::Arguments;  // [bp-0x10058]
    let v1: i64;  // [bp-0x10050]
    let v2: u64;  // [bp-0x10040]
    let v3: std::io::stdio::Stdout;  // [bp-0x10038]
    let v4: core::fmt::Arguments;  // [bp-0x10030]
    let v5: u8;  // [bp-0x10028]
    let v6: i8;  // [bp-0x10027]
    let v7: u64;  // [bp-0x10020]
    let v11: u64;  // rsi
    let v12: u64;  // rcx
    let v13: u64;  // rdx
    let v14: i64;  // rdi
    let v15: u64;  // rdx
    let v17: core::result::Result<(), std::io::error::Error>;  // rax
    let v18: core::result::Result<(), std::io::error::Error>;  // rax
    let v19: i64;  // rdi
    let v21: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v3 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v3);
    uu_cat::splice::write_fast_using_splice(v11, &v0, v12);
    if v4 != 9223372036854775814 {
        v13 = *(&v6 as &i64);
        *((v1 + 16) as &u64) = v7;
        *((v1 + 9) as &u64) = v13;
        *(v1 as &core::fmt::Arguments) = v4;
        *((v1 + 8) as &u8) = v5;
    } else if v5 {
        memset(&v4, 0, 0x10000);
        do {
            v21 = <std::io::stdio::Stdin as std::io::Read>::read(v11, &v4, 0x10000);
            v2 = *((&v21 as &char + 8) as &i64);
            if v21 as i64 || !*((&v21 as &char + 8) as &i64) {
                v18 = <std::io::stdio::StdoutLock as std::io::Write>::flush(&v0);
                match v18 {
                    Ok(_) => {
                        *(v19 as &i64) = 9223372036854775814;
                        return;
                    },
                    Err(_) => {
                        *(v1 as &i64) = 0x8000000000000000;
                        *((v1 + 8) as &core::result::Result<(), std::io::error::Error>) = v18;
                        return;
                    },
                }
            }
            v17 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(*((&v21 as &char + 8) as &i64), &v4, 0x10000, "src/uu/cat/src/cat.rs"), v15);
        } while (!v17);
        *(v1 as &i64) = 0x8000000000000000;
        *((v1 + 8) as &core::result::Result<(), std::io::error::Error>) = v17;
    } else {
        *(v14 as &i64) = 9223372036854775814;
    }
    return;
}
