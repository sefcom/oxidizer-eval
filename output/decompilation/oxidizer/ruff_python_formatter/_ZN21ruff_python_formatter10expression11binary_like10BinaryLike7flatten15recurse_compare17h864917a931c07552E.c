fn ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_compare(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i64, a7: i64, a8: i64) -> u64 {
    let v0: struct16;  // [bp-0xb8], Other Possible Types: struct26, struct40
    let v1: struct16;  // [bp-0xb8], Other Possible Types: struct56
    let v2: struct21;  // [bp-0xa8], Other Possible Types: u64
    let v3: u64;  // [bp-0xa0]
    let v4: u64;  // [bp-0x80]
    let v5: u64;  // [bp-0x78]
    let v6: u64;  // [bp-0x60]
    let v7: struct21;  // [bp-0x58]
    let v8: struct16;  // [bp-0x50], Other Possible Types: struct26
    let v10: u64;  // rdx
    let v11: u64;  // rax
    let v12: u64;  // rsi
    let v13: &mut [u8];  // rax
    let v15: u64;  // r15

    smallvec::infallible(smallvec::SmallVec<A>::try_reserve(a8, *((a0 + 32) as &i64) * 2 + 1), v10);
    v2 = a1;
    v3 = a2;
    v1 = struct16 {
        field_0: 0
        field_8: *(a0 as &i64)
    };
    ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(&v1, a5, a6, a7, a8);
    v11 = *((a0 + 32) as &i64);
    v6 = v11;
    v7 = *((a0 + 16) as &i64);
    if v11 != *((a0 + 16) as &i64) {
        v0 = struct40 {
            field_0: "Compare expression with an unbalanced number of comparators and operations."
            field_8: 1
            field_16: 8
            field_24: 0
        };
        core::panicking::assert_failed(0, &v6, &v7, &v0, "crates/ruff_python_formatter/src/expression/binary_like.rs"); /* do not return */
    } else if v11 {
        v12 = *((a0 + 8) as &i64);
        v5 = (v11 - 1) * 80 + *((a0 + 24) as &i64);
        v4 = v11 + v12 - 1;
        v1 = core::iter::traits::iterator::Iterator::zip(v12, v11 + v12 - 1, *((a0 + 24) as &i64), v11 - 1);
        v13 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v1);
        if v13 {
            do {
                v15 = v10;
                v8 = struct26 {
                    field_0: 3
                    field_8: ""
                    field_24: 1
                    field_25: *(v13 as &i8)
                };
                smallvec::SmallVec<A>::push(a8, &v8);
                v8 = struct16 {
                    field_0: 1
                    field_8: v15
                };
                ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(&v8, a5, a6, a7, a8);
                v13 = <core::iter::adapters::zip::Zip<A,B> as core::iter::adapters::zip::ZipImpl<A,B>>::next(&v1);
            } while (v13);
        }
        v0 = struct26 {
            field_0: 3
            field_8: ""
            field_24: 1
            field_25: *(v4 as &i8)
        };
        smallvec::SmallVec<A>::push(a8, &v0);
        v2 = a3;
        v3 = a4;
        v0 = struct16 {
            field_0: 2
            field_8: v5
        };
        return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(&v0, a5, a6, a7, a8);
    } else {
        return v11;
    }
}
