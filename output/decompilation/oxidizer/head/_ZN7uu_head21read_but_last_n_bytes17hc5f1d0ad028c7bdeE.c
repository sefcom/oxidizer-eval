fn uu_head::read_but_last_n_bytes() -> u32 {
    let v0: u64;  // [sp-0x10070], Other Possible Types: &struct_0
    let v1: void*;  // [sp-0x10068], Other Possible Types: struct16
    let v2: u64;  // [sp-0x10060]
    let v3: void*;  // [sp-0x10058]
    let v4: void*;  // [sp-0x10048]
    let v5: u64;  // [sp-0x10040]
    let v6: &struct_0;  // [sp-0x10038], Other Possible Types: u64
    let v7: u8;  // [bp-0x10030]
    let v8: void*;  // [sp-0x2030]
    let v10: u64;  // rsi
    let v11: u64;  // rdi
    let v12: &u64;  // rdi
    let v14: void*;  // rbp
    let v15: u64;  // rcx
    let v16: u64;  // r12
    let v17: u64;  // rax
    let v18: u64;  // rdx

    do {
        v8 = 0;
    } while (&v8 != &v7);
    if !v10 {
        uu_head::read_n_bytes(v11, -1);
        return;
    }
    v6 = std::io::stdio::stdout();
    v0 = std::io::stdio::Stderr::lock(&v6);
    v1 = 0;
    v2 = 1;
    v3 = 0;
    v4 = 0;
    memset(&v7, 0, 0x10000);
    loop {
        if <std::io::stdio::StdinLock as std::io::Read>::read(v12) {
            v5 = v18;
            if std::io::error::Error::kind(v18) as i8 != 35 {
                break;
            } else {
                continue;
            }
        }
        if !v18 {
            break;
        }
        v4 += v18;
        if v4 <= v10 {
            v14 = 0;
            v15 = "src/uu/head/src/head.rs";
            v16 = v18 + v10 - v4;
            goto LABEL_4b968c;
        }
        if <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, v2, v3) {
LABEL_4b9720:
            break;
        } else {
            v14 = v18 - v10;
            if !(!<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v3 + v14, &v7, "src/uu/head/src/head.rs"), v18)) {
                goto LABEL_4b9720;
            }
            v3 = 0;
            v15 = "src/uu/head/src/head.rs";
LABEL_4b968c:
            v17 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v14, v16, &v7, v15);
            v1 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v17, v18 + v17), v18);
        }
    }
    return;
}
