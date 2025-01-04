fn uu_test::parser::Parser::parse(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct25;  // [bp-0x88], Other Possible Types: i8
    let v2: i128;  // [sp-0x68]
    let v3: i64;  // [sp-0x58]
    let v4: i192;  // [sp-0x48], Other Possible Types: Option<struct24>
    let v5: i128;  // [sp-0x40]
    let v6: struct24;  // [sp-0x30], Other Possible Types: i192
    let v9: i64;  // rax
    let v10: i128;  // xmm0
    let v11: i64;  // rax
    let v12: i64;  // rax

    if v0 != 7 {
        v10 = v0;
        v11 = uu_test::parser::Parser::expr(a1, a2);
        return struct32 {
            field_0: v10
            field_16: v1
        };
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
        v11 = v4;
        return struct8 {
            field_0: 7
        };
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
