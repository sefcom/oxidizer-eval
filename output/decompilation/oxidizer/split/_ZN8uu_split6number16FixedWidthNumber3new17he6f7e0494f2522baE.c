fn uu_split::number::FixedWidthNumber::new(a1: i32, a2: i64, a3: i64) -> Option<struct25> {
    let a0: u32;  // esi
    let v0: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x38]
    let v1: i64;  // [bp-0x30]
    let v3: u64;  // r14
    let v4: u64;  // rbp
    let v5: i64;  // rdi
    let v7: u64;  // rsi
    let v9: u64;  // rax
    let v10: u8;  // dl
    let v12: i64;  // rdi
    let v13: i64;  // rdi

    v3 = a2;
    v4 = a0;
    v0 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(a1, a1);
    if v4 {
        loop {
            v3 = v9;
            if !v5 {
                break;
            }
            <usize as core::iter::range::Step>::backward_unchecked(v5, v7);
            *((v1 + v5) as &u8) = v10;
            if v3 < (v4 & 4294967295) {
                *((v13 + 16) as &u64) = v0.len;
                *(v13 as &i128) = *(&v0.buf.cap as &i128);
                *((v13 + 24) as &u8) = v4;
                return;
            }
        }
    }
    if !v3 {
        *((v13 + 16) as &u64) = v0.len;
        *(v13 as &i128) = *(&v0.buf.cap as &i128);
        *((v13 + 24) as &u8) = v4;
        return;
    }
    *(v12 as &i64) = 0x8000000000000000;
    return;
}
