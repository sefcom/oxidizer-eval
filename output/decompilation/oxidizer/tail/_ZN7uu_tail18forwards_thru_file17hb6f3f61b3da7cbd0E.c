fn uu_tail::forwards_thru_file() -> int {
    let v0: struct28;  // [bp-0x8078]
    let v1: u64;  // [bp-0x8068]
    let v2: u64;  // [bp-0x8060]
    let v3: struct24;  // [bp-0x8050]
    let v4: core::fmt::Arguments;  // [bp-0x8030]
    let v7: i64;  // r14
    let v8: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // rbp
    let v9: u64;  // rdi
    let v10: u64;  // rdi
    let v11: i64;  // r13
    let v12: u64;  // rdx
    let v13: u64;  // rdx
    let v15: u64;  // rax
    let v16: u64;  // r14
    let v17: u64;  // rax
    let v18: u64;  // rsi
    let v19: core::result::Result<usize, std::io::error::Error>;  // rax:rdx
    let v20: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v7 = &v4;
    memset(&v4, 0, 0x8000);
    v8 = 0;
    v0 = 0;
    v10 = v9;
    loop {
        v11 = v7;
        v19 = <std::fs::File as std::io::Read>::read(v9, v7, 0x8000);
        loop {
            v16 = v13;
            v1 = v15;
            v2 = v13;
            if !(v15 & 1) {
                break;
            }
            if std::io::error::Error::kind(v16) as u8 != 35 {
                return;
            }
            v20 = <std::fs::File as std::io::Read>::read(v9, v11, 0x8000);
        }
        if !v16 {
            break;
        }
        v17 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v16, v11, 0x8000, "src/uu/tail/src/tail.rs");
        v3 = struct24 {
            field_0: v17
            field_8: v17
            field_16: v12 + v17
        };
        while ((memchr::arch::generic::memchr::Iter::next(&v3, &vvar_75{reg 32}) & 1)) {
            v8 += 1;
            if v18 == v8 {
                return;
            }
        }
        v0 += v16;
        v7 = v11;
    }
    return;
}
