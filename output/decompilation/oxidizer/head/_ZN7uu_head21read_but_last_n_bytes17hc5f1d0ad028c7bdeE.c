fn uu_head::read_but_last_n_bytes() -> u32 {
    let v0: &struct_0;  // [sp-0x10070]
    let v1: struct16;  // [sp-0x10068], Other Possible Types: void*
    let v2: u64;  // [sp-0x10060]
    let v3: void*;  // [sp-0x10058]
    let v4: void*;  // [sp-0x10048]
    let v5: u64;  // [sp-0x10040]
    let v6: &struct_0;  // [sp-0x10038]
    let v7: u8;  // [bp-0x10030]
    let v8: void*;  // [sp-0x2030]
    let v10: u64;  // rsi
    let v11: u64;  // rdi
    let v12: u64;  // rdx
    let v13: u64;  // r12
    let v14: &u64;  // rdi
    let v15: void*;  // rbp
    let v16: u64;  // rcx
    let v17: u64;  // rax

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
        v13 = v12;
        if <std::io::stdio::StdinLock as std::io::Read>::read(v14) {
            v5 = v12;
            if std::io::error::Error::kind(v12) as i8 != 35 {
                break;
            } else {
                continue;
            }
        }
        if !v12 {
            break;
        }
        v4 += v12;
        if v4 <= v10 {
            v13 = v12 + v10 - v4;
            v15 = 0;
            v16 = "src/uu/head/src/head.rs";
            goto LABEL_4b968c;
        }
        if <std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, v2, v3) {
LABEL_4b9720:
            break;
        } else {
            v15 = v12 - v10;
            if !(!<std::io::stdio::StdoutLock as std::io::Write>::write_all(&v0, <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v3 + v15, &v7, "src/uu/head/src/head.rs"), v12)) {
                goto LABEL_4b9720;
            }
            v3 = 0;
            v16 = "src/uu/head/src/head.rs";
LABEL_4b968c:
            v17 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v15, v13, &v7, v16);
            v1 = alloc::vec::Vec<T,A>::append_elements(core::slice::iter::Iter<T>::make_slice(v17, v12 + v17), v12);
        }
    }
    return;
}
