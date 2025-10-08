fn uu_sort::ext_sort::write_lines(a0: i64, a1: i64, a2: i64, a3: i8) -> int {
    let v0: u64;  // [bp-0x38]
    let v1: u8;  // [bp-0x31]
    let v2: u64;  // [bp-0x30]
    let v3: u64;  // [bp-0x28]
    let v4: u64;  // [bp-0x20]
    let v5: u64;  // [bp-0x18]
    let v6: u64;  // [bp-0x10]
    let v8: u64;  // r15
    let v9: u64;  // r14
    let v10: u64;  // r13
    let v11: u64;  // r12
    let v12: u64;  // rbx
    let v13: u64;  // rax
    let v14: struct16;  // 4096
    let v15: i64;  // r15

    if !a1 {
        return;
    }
    v6 = v8;
    v5 = v9;
    v4 = v10;
    v3 = v11;
    v2 = v12;
    v0 = v13;
    do {
        v15 = v14;
        core::result::Result<T,E>::unwrap(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, *(v15 as &i64), *((v15 + 8) as &i64)), "src/uu/sort/src/ext_sort.rs");
        v1 = a3;
        core::result::Result<T,E>::unwrap(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a2, &v1, 1), "src/uu/sort/src/ext_sort.rs");
        v14 = v15 + 24;
    } while (a0 != a0 + a1 * 24);
    return;
}
