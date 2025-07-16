fn uu_head::read_but_last_n_bytes() -> int {
    let v0: std::io::stdio::StderrLock;  // [bp-0x10070]
    let v1: struct24;  // [bp-0x10068]
    let v2: u64;  // [bp-0x10060]
    let v3: void*;  // [bp-0x10058]
    let v4: u64;  // [bp-0x10050]
    let v5: void*;  // [bp-0x10048]
    let v6: std::io::stdio::Stdout;  // [bp-0x10038]
    let v7: u458752;  // [bp-0x10030]
    let v10: u64;  // rsi
    let v11: u64;  // rdi
    let v12: u64;  // rdi
    let v15: void*;  // rbp
    let v16: u64;  // rcx
    let v17: u64;  // r12
    let v18: u64;  // r12
    let v19: u64;  // rdx
    let v22: &[u8];  // rax:rdx
    let v23: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    if !v10 {
        uu_head::read_n_bytes(v11, -1);
        return;
    }
    v6 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v6);
    v1 = 0;
    v2 = 1;
    v3 = 0;
    v5 = 0;
    memset(&v7, 0, 0x10000);
    loop {
        v23 = <std::io::stdio::StdinLock as std::io::Read>::read(v12, &v7, 0x10000);
        if !v23 as i64 {
            if !*((&v23 as &char + 8) as &i64) {
                return;
            }
            v5 += *((&v23 as &char + 8) as &i64);
            if v5 > v4 {
                if <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, 1, 0) || !(!<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, 0 + *((&v23 as &char + 8) as &i64) - v10, &v7, "src/uu/head/src/head.rs"), v19)) {
                    break;
                }
            } else {
                v15 = 0;
                v16 = "src/uu/head/src/head.rs";
                v17 = *((&v23 as &char + 8) as &i64) + v4 - v5;
            }
            v18 = v17;
            v22 = core::slice::iter::Iter<T>::make_slice(<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v15, v18, &v7, v16));
            alloc::vec::Vec<T,A>::append_elements(&v1, v22.ptr, v19);
        } else if std::io::error::Error::kind(*((&v23 as &char + 8) as &i64)) != 35 {
            break;
        }
    }
    return;
}
