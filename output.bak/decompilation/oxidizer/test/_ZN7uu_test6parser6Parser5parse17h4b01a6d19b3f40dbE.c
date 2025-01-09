fn uu_test::parser::Parser::parse(a0: &Option<struct32>, a1: &struct8) -> u64 {
    let v0: i8;  // [bp-0x88], Other Possible Types: struct25
    let v1: i8;  // [bp-0x78]
    let v2: i128;  // [sp-0x68]
    let v3: i64;  // [sp-0x58]
    let v4: i192;  // [sp-0x48], Other Possible Types: Option<struct24>
    let v5: i128;  // [sp-0x40]
    let v6: i192;  // [sp-0x30], Other Possible Types: struct24
    let v9: i64;  // rax
    let v10: i128;  // xmm0
    let v11: Option<struct32>;  // rax
    let v12: i64;  // rax

    if v0 != 7 {
        v10 = v0;
        *((a0 + 16) as &i8) = v1;
        *(a0 as &i128) = v10;
        v11 = uu_test::parser::Parser::expr(a1);
        return v11;
    }
    v9 = *((a1 + 24) as &i64);
    *((a1 + 24) as &i64) = 9223372036854775809;
    if v4 != 9223372036854775809 {
        v5 = *((a1 + 32) as &i128);
        v4 = v9;
    } else {
        v4 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(a1 + 48);
    }
    if v4 == 0x8000000000000000 {
        *(a0 as &i64) = 7;
        v11 = v4;
        return v11;
    }
    v3 = *((&v4 as &char + 16) as &i64);
    v2 = v4;
    v0 = struct25 {
        field_0: 1
        field_8: *((&v2 as &char + 8) as &i64)
        field_16: v3
        field_24: 1
    };
    v6 = <T as alloc::string::ToString>::to_string(&v0);
    *((a0 + 24) as &i64) = *((&v6 as &char + 16) as &i64);
    *((a0 + 8) as &i192) = v6;
    *(a0 as &i64) = 2;
    v11 = v12;
    return v11;
}
