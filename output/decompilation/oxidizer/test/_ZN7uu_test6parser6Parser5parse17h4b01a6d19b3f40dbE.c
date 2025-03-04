fn uu_test::parser::Parser::parse(a0: &Option<struct32>, a1: void*) -> u64 {
    let v0: i64;  // [bp-0x88], Other Possible Types: char
    let v1: i64;  // [sp-0x80]
    let v2: i8;  // [sp-0x78], Other Possible Types: unsigned long
    let v3: i8;  // [sp-0x70]
    let v4: iNone;  // [sp-0x68]
    let v5: i64;  // [sp-0x58]
    let v6: iNone;  // [sp-0x48], Other Possible Types: unsigned long, Option<struct24>
    let v7: i64;  // [sp-0x48]
    let v8: struct24;  // [sp-0x30]
    let v11: i64;  // rax
    let v12: iNone;  // xmm0
    let v13: Option<struct32>;  // rax
    let v14: i64;  // rax

    if *(&v0 as &i32) != 7 {
        v12 = *(&v0 as &i128);
        *((a0 + 16) as &i128) = *(&v2 as &i128);
        *(a0 as void*) = v12;
        v13 = uu_test::parser::Parser::expr(a1);
        return v13;
    }
    v11 = *((a1 + 24) as &i64);
    *((a1 + 24) as &i64) = 9223372036854775809;
    if v6 != 9223372036854775809 {
        v6 = *((a1 + 32) as &i128);
        v6 = v11;
    } else {
        v6 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(a1 + 48);
        v11 = v7;
    }
    if v11 != 0x8000000000000000 {
        v5 = (&v6)[16] as i64;
        v4 = v6 as i128;
        v0 = 1;
        v1 = (&v4)[8] as i64;
        v2 = v5;
        v3 = 1;
        v8 = <T as alloc::string::ToString>::to_string(&v0);
        v13 = v14;
        return v13;
    }
    *(a0 as &i64) = 7;
    v13 = v11;
    return v13;
}
