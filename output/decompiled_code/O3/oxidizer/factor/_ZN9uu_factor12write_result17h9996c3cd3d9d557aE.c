fn uu_factor::write_result(a0: i64, a1: i64, a2: i64, a3: i8) -> u64 {
    let v0: Arguments;  // [bp-0x158], Other Possible Types: Argument
    let v1: Argument;  // [bp-0x128], Other Possible Types: i128
    let v2: i64;  // [sp-0x120]
    let v3: i64;  // [bp-0x118], Other Possible Types: Argument
    let v4: i64;  // [sp-0x100]
    let v5: i128;  // [sp-0xf8]
    let v6: i64;  // [sp-0xe8]
    let v7: Option<struct32>;  // [sp-0xe0], Other Possible Types: i256
    let v8: i64;  // [sp-0xc0]
    let v9: Result<struct16, struct64>;  // [bp-0xb8], Other Possible Types: struct40, i512, Arguments
    let v10: struct24;  // [sp-0x70], Other Possible Types: i192
    let v11: i192;  // [sp-0x48]
    let v13: i64;  // rax
    let v14: i256;  // ymm0
    let v15: i128;  // xmm0
    let v16: i256;  // ymm0
    let v17: i128;  // xmm0
    let v18: i128;  // xmm0
    let v19: i64;  // rsi
    let v20: i64;  // r13
    let v21: i64;  // rbp

    v8 = a1;
    v0 = Argument {
        value: &v8
        formatter: <&T as core::fmt::Display>::fmt
    };
    v9 = Arguments {
        pieces: ["", ":"]
        args: [&v0]
        fmt: 0
    };
    v13 = std::io::Write::write_fmt(a0, &v9);
    if v13 {
        return v13;
    }
    v9 = <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
    if a3 {
        loop {
            v7 = <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(&v9);
            if v7 == 0x8000000000000000 {
                break;
            }
            v6 = *((&v7 as &char + 16) as &i64);
            v15 = v7;
            v14 = v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v15;
            v5 = v15;
            v4 = *((&v7 as &char + 24) as &i64);
            if v4 <= 1 {
                v1 = Argument {
                    value: &v5
                    formatter: <num_bigint::biguint::BigUint as core::fmt::Display>::fmt
                };
                v0 = Arguments {
                    pieces: [" "]
                    args: [&v1]
                    fmt: 0
                };
                v13 = std::io::Write::write_fmt(a0, &v0);
            } else {
                v1 = Argument {
                    value: &v5
                    formatter: <num_bigint::biguint::BigUint as core::fmt::Display>::fmt
                };
                v3 = Argument {
                    value: &v4
                    formatter: core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt
                };
                v0 = Arguments {
                    pieces: [" ", "^"]
                    args: [&v1, &v3]
                    fmt: 0
                };
                v13 = std::io::Write::write_fmt(a0, &v0);
            }
            if v13 {
                return v13;
            }
        }
    } else {
        loop {
            v7 = <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(&v9);
            if v7 == 0x8000000000000000 {
                break;
            }
            v6 = *((&v7 as &char + 16) as &i64);
            v17 = v7;
            v5 = v17;
            v4 = *((&v7 as &char + 24) as &i64);
            v11 = format!(" {:?}", &v5);
            v18 = v11;
            v16 = v16 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18;
            v1 = v18;
            v3 = *((&v11 as &char + 16) as &i64);
            v10 = alloc::str::<impl str>::repeat(v2, *((&v11 as &char + 16) as &i64), v4);
            v19 = *((&v10 as &char + 8) as &i64);
            v20 = *((&v10 as &char + 16) as &i64);
            v21 = *((a0 + 16) as &i64);
            if v20 < *(a0 as &i64) - v21 {
                memcpy(*((a0 + 8) as &i64) + v21, v19, v20);
                *((a0 + 16) as &i64) = v21 + v20;
            } else {
                v13 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a0, v19, v20);
                if v13 {
                    return v13;
                }
            }
        }
    }
    v9 = struct40 {
        field_0: "\n"
        field_8: 1
        field_16: 8
        field_24: 0
    };
    v13 = std::io::Write::write_fmt(a0, &v9);
    if !v13 {
        v13 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a0);
        return v13;
    }
    return v13;
}
