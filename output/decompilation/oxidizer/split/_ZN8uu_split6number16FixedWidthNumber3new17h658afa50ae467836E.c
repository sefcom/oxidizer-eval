fn uu_split::number::FixedWidthNumber::new(a1: i32, a2: i8, a3: i64) -> Option<struct25> {
    let a0: i64;  // rdi
    let v0: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x38]
    let v1: i64;  // [bp-0x30]
    let v3: u64;  // rcx
    let v4: i64;  // rdi
    let v5: u64;  // r15
    let v7: u64;  // rax
    let v8: u8;  // dl

    v0 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(a2, "src/uu/split/src/number.rs");
    v3 = a1;
    v4 = v0.len - 1;
    loop {
        v5 = v7;
        if v4 == -1 {
            break;
        }
        *((v1 + v4) as &u8) = v8;
        v4 -= 1;
        if v5 < v3 {
            return Some(struct32 {
                field_0: *(&v0.buf.inner.cap as &i128)
                field_16: v0.len
                field_24: a1 as u8
            });
        }
    }
    if !v5 {
        return Some(struct32 {
            field_0: *(&v0.buf.inner.cap as &i128)
            field_16: v0.len
            field_24: a1 as u8
        });
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
