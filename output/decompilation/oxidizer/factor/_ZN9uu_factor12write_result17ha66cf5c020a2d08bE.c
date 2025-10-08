fn uu_factor::write_result(a0: i64, a1: u64, a2: &u64, a3: u8) -> long long {
    let v0: u64;  // [bp-0x138]
    let v1: u64;  // [bp-0x130]
    let v2: u64;  // [bp-0x128]
    let v3: core::fmt::rt::Argument;  // [bp-0x120], Other Possible Types: core::fmt::Arguments, u64
    let v4: u128;  // [bp-0x120]
    let v5: u64;  // [bp-0x118]
    let v6: i64;  // [bp-0x110]
    let v7: u64;  // [bp-0x108]
    let v8: void*;  // [bp-0x100]
    let v9: u64;  // [bp-0xf0]
    let v10: struct24;  // [bp-0xe8], Other Possible Types: core::fmt::rt::Argument
    let v11: u128;  // [bp-0xe8]
    let v12: u64;  // [bp-0xe0]
    let v13: core::fmt::rt::Argument;  // [bp-0xd8], Other Possible Types: u64
    let v14: u128;  // [bp-0xd8]
    let v15: u128;  // [bp-0xc8]
    let v16: u64;  // [bp-0xb8]
    let v17: u64;  // [bp-0xa0]
    let v18: u64;  // [bp-0x98]
    let v19: u64;  // [bp-0x90]
    let v20: core::fmt::Arguments;  // [bp-0x88]
    let v21: i64;  // [bp-0x40]
    let v22: u64;  // [bp-0x38]
    let v24: i64;  // rbx
    let v25: u64;  // r13
    let v26: u64;  // rax
    let v28: i64;  // r13
    let v29: i64;  // rbx
    let v31: core::option::Option<(std::ffi::os_str::OsString, std::ffi::os_str::OsString)>;  // [bp-0xb0]

    v24 = a0;
    v19 = a1;
    v3 = core::fmt::rt::Argument {
        ty: &v19
    };
    v20 = core::fmt::Arguments {
        pieces: [&g_544140, ":"]
        args: [v4]
        fmt: 0
    };
    v25 = std::io::Write::write_fmt(a0, &v20);
    if v25 {
        return v25;
    }
    <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v20, a2);
    if a3 {
        loop {
            v31 = <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(&v20);
            if let None = v31 {
                break;
            }
            v16 = v17;
            v15 = v31 as i128;
            v9 = v18;
            if v18 > 1 {
                v10 = core::fmt::rt::Argument {
                    ty: &v15
                };
                v13 = core::fmt::rt::Argument {
                    ty: &v9
                };
                v3 = core::fmt::Arguments {
                    pieces: [" ", "^"]
                    args: [v11, v14]
                    fmt: 0
                };
                std::io::Write::write_fmt(a0, &v3);
            } else {
                v10 = core::fmt::rt::Argument {
                    ty: &v15
                };
                v3 = core::fmt::Arguments {
                    pieces: [" "]
                    args: [v11]
                    fmt: 0
                };
                std::io::Write::write_fmt(a0, &v3);
            }
            if v26 {
                return v26;
            }
        }
    } else {
        loop {
            v31 = <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(&v20);
            if let None = v31 {
                break;
            }
            v16 = v17;
            v15 = v31 as i128;
            v9 = v18;
            v21 = &v15;
            v22 = <num_bigint::biguint::BigUint as core::fmt::Display>::fmt;
            v3 = " ";
            v5 = 1;
            v8 = 0;
            v6 = &v21;
            v7 = 1;
            v10 = core::option::Option<T>::map_or_else(v28);
            v1 = v10.field_0;
            v2 = v12;
            alloc::slice::<impl [T]>::repeat(v28, v12, v13, v18);
            v0 = " ";
            v29 = *((v24 + 16) as &i64);
            if v6 < *(v24 as &i64) - v29 {
                memcpy(*((v24 + 8) as &i64) + v29, 1, v6);
                *((v24 + 16) as &struct_0 *) = v29 + v6;
            } else {
                std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v24, 1, v6);
                if v26 {
                    return v26;
                }
            }
        }
    }
    v20 = core::fmt::Arguments {
        pieces: ["\n"]
        args: []
        fmt: 0
    };
    return std::io::Write::write_fmt(v24, &v20);
}
