fn uu_split::number::FixedWidthNumber::new(a0: i64, a1: i32, a2: i64, a3: i64) -> u64 {
    let v0: struct24;  // [sp-0x38], Other Possible Types: i192
    let v2: i64;  // rbp
    let v3: i64;  // rdi
    let v4: i64;  // r15
    let v5: i64;  // rax
    let v6: i64;  // rax
    let v7: i8;  // dl
    let v8: i32;  // eax

    v2 = a1;
    v0 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(a2);
    v3 = *((&v0 as &char + 16) as &i64);
    if !v2 && v3 {
        core::panicking::panic_const::panic_const_rem_by_zero(); /* do not return */
    }
    v4 = v2 & 4294967295;
    loop {
        a3 = a3;
        if !v3 {
            break;
        }
        v3 = <usize as core::iter::range::Step>::backward_unchecked(v3);
        if a3 >> 32 {
            v5 = a3;
            v6 = (0 CONCAT v5) /m v4;
            v7 = (0 CONCAT v5) /m v4 >> 64;
        } else {
            v8 = a3;
            v6 = (0 CONCAT v8) /m v4 & 4294967295;
            v7 = (0 CONCAT v8) /m v4 >> 32 & 4294967295;
        }
        *((*((&v0 as &char + 8) as &i64) + v3) as &i8) = v7;
    }
}
