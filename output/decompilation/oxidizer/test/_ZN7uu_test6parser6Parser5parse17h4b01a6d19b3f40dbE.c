fn uu_test::parser::Parser::parse(a1: i64) -> : struct32 {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x88], Other Possible Types: struct25
    let v1: i8;  // [bp-0x78]
    let v2: u128;  // [bp-0x68]
    let v3: u64;  // [bp-0x60]
    let v4: u64;  // [bp-0x58]
    let v5: Option<struct24>;  // [bp-0x48]
    let v6: u64;  // [bp-0x48]
    let v7: u128;  // [bp-0x40]
    let v8: u64;  // [bp-0x38]
    let v9: struct24;  // [bp-0x30]
    let v11: u64;  // rax
    let v12: u64;  // rax
    let v13: u128;  // xmm0

    v11 = uu_test::parser::Parser::expr(&v0, a1);
    if *(&v0 as &i32) != 7 {
        v13 = *(&v0 as &i128);
        return struct32 {
            field_0: v13
            field_16: *(&v1 as &i128)
        };
    }
    v12 = *((a1 + 24) as &i64);
    *((a1 + 24) as &i64) = 9223372036854775809;
    if v12 == 9223372036854775809 {
        v5 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(a1 + 48);
    } else {
        v7 = *((a1 + 32) as &i128);
        v6 = v12;
    }
    if v12 != 0x8000000000000000 {
        v4 = v8;
        v2 = v5 as i128;
        v0 = struct25 {
            field_0: 1
            field_8: v3
            field_16: v4
            field_24: 1
        };
        v9 = <T as alloc::string::ToString>::to_string(&v0);
        return struct40 {
            field_0: 2
            field_8: <UNKNOWN>
            field_24: <UNKNOWN>
        };
    }
    return struct8 {
        field_0: 7
    };
}
