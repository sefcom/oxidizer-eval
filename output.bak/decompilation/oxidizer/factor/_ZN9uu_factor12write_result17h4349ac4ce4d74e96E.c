fn uu_factor::write_result(a0: &struct1, a1: u32, a2: u32, a3: u8) -> u64 {
    let v0: Arguments;  // [bp-0x158], Other Possible Types: Argument, i64
    let v1: i64;  // [sp-0x150]
    let v2: i64;  // [sp-0x148]
    let v3: i64;  // [sp-0x140]
    let v4: i64;  // [sp-0x138]
    let v5: Argument;  // [bp-0x128], Other Possible Types: i128
    let v6: i64;  // [sp-0x120]
    let v7: Argument;  // [bp-0x118], Other Possible Types: i64
    let v8: i64;  // [sp-0x100]
    let v9: i128;  // [sp-0xf8]
    let v10: i64;  // [sp-0xe8]
    let v11: i256;  // [sp-0xe0], Other Possible Types: Option<struct32>
    let v12: i64;  // [sp-0xc0]
    let v13: Result<struct16, struct64>;  // [bp-0xb8], Other Possible Types: struct40, Arguments, i520
    let v14: struct24;  // [sp-0x70], Other Possible Types: i192
    let v15: i64;  // [sp-0x58]
    let v16: i64;  // [sp-0x50]
    let v17: i8;  // [bp-0x48]
    let v18: i8;  // [bp-0x38]
    let v20: i64;  // rax
    let v21: i256;  // ymm0
    let v22: i128;  // xmm0
    let v23: i256;  // ymm0
    let v24: i128;  // xmm0
    let v25: i128;  // xmm0
    let v26: i64;  // rsi
    let v27: i64;  // r13
    let v28: i64;  // rbp

    v12 = a1;
    v0 = Argument {
        value: &v12
        formatter: <&T as core::fmt::Display>::fmt
    };
    v13 = Arguments {
        pieces: ["", ":"]
        args: [&v0]
        fmt: 0
    };
    v20 = std::io::Write::write_fmt(a0, &v13);
    if v20 {
        return v20;
    }
    v13 = <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    if a3 {
        loop {
            v11 = <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(&v13);
            if v11 == 0x8000000000000000 {
                break;
            }
            v10 = *((&v11 as &char + 16) as &i64);
            v22 = v11;
            v21 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v22;
            v9 = v22;
            v8 = *((&v11 as &char + 24) as &i64);
            if v8 > 1 {
                v5 = Argument {
                    value: &v9
                    formatter: <num_bigint::biguint::BigUint as core::fmt::Display>::fmt
                };
                v7 = Argument {
                    value: &v8
                    formatter: core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt
                };
                v0 = Arguments {
                    pieces: [" ", "^"]
                    args: [&v5, &v7]
                    fmt: 0
                };
                v20 = std::io::Write::write_fmt(a0, &v0);
            } else {
                v5 = Argument {
                    value: &v9
                    formatter: <num_bigint::biguint::BigUint as core::fmt::Display>::fmt
                };
                v0 = Arguments {
                    pieces: [" "]
                    args: [&v5]
                    fmt: 0
                };
                v20 = std::io::Write::write_fmt(a0, &v0);
            }
            if v20 {
                return v20;
            }
        }
    } else {
        loop {
            v11 = <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(&v13);
            if v11 == 0x8000000000000000 {
                break;
            }
            v10 = *((&v11 as &char + 16) as &i64);
            v24 = v11;
            v9 = v24;
            v8 = *((&v11 as &char + 24) as &i64);
            v15 = &v9;
            v16 = <num_bigint::biguint::BigUint as core::fmt::Display>::fmt;
            v0 = " ";
            v1 = 1;
            v4 = 0;
            v2 = &v15;
            v3 = 1;
            core::option::Option<T>::map_or_else();
            v25 = v17;
            v23 = v23 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v24 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v25;
            v5 = v25;
            v7 = v18;
            v14 = alloc::str::<impl str>::repeat(v6, v18, v8);
            v26 = *((&v14 as &char + 8) as &i64);
            v27 = *((&v14 as &char + 16) as &i64);
            v28 = *((a0 + 16) as &i64);
            if v27 < *(a0 as &i64) - v28 {
                memcpy(*((a0 + 8) as &i64) + v28, v26, v27);
                *((a0 + 16) as &i64) = v28 + v27;
            } else {
                v20 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, v26, v27);
                if v20 {
                    return v20;
                }
            }
        }
    }
    v13 = struct40 {
        field_0: "\n"
        field_8: 1
        field_16: 8
        field_24: 0
    };
    v20 = std::io::Write::write_fmt(a0, &v13);
    if !v20 {
        v20 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a0);
        return v20;
    }
    return v20;
}
