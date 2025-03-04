fn uu_split::number::FixedWidthNumber::new(a0: &struct25, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: struct24;  // [sp-0x38]
    let v2: i64;  // r14
    let v4: i64;  // rdi
    let v5: i64;  // r15
    let v6: i64;  // rax
    let v7: i64;  // rax
    let v8: i8;  // dl
    let v9: i32;  // eax

    v2 = a3;
    v0 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(a2);
    v4 = v0.field_16;
    v5 = a1 as u64 & 4294967295;
    loop {
        v2 = v2;
        if !v4 {
            break;
        }
        v4 = <usize as core::iter::range::Step>::backward_unchecked(v4);
        if !v2 >> 32 {
            v9 = v2 as u32;
            v7 = (((0 CONCAT v9) % (v5 & 4294967295)) as u32 CONCAT ((0 CONCAT v9) / (v5 & 4294967295)) as u32) & 4294967295;
            v8 = (((0 CONCAT v9) % (v5 & 4294967295)) as u32 CONCAT ((0 CONCAT v9) / (v5 & 4294967295)) as u32) >> 32 & 4294967295;
        } else {
            v6 = v2;
            v7 = (0 CONCAT v6) % v5 as u128 CONCAT (0 CONCAT v6) / v5 as u128;
            v8 = ((0 CONCAT v6) % v5 as u128 CONCAT (0 CONCAT v6) / v5 as u128) >> 64;
        }
        *((v0.field_8 + v4) as &char) = v8;
        v2 = v7;
    }
}
