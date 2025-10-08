fn uu_cut::cut_fields_newline_char_delim(a0: u32, a1: u32, a2: void*, a3: i64, a4: u64, a5: u8, a6: u64, a7: u64) -> long long {
    let v0: u64;  // [bp-0x90]
    let v1: u64;  // [bp-0x88]
    let v2: u8;  // [bp-0x80]
    let v3: u64;  // [bp-0x78]
    let v4: u64;  // [bp-0x70]
    let v5: core::ops::range::RangeInclusive<usize>;  // [bp-0x68], Other Possible Types: struct48
    let v6: u8;  // [bp-0x68]
    let v7: u8;  // [bp-0x38]
    let v8: u8;  // r13b
    let v11: u64;  // rbp
    let v12: struct28;  // rax
    let v13: u64;  // rbp
    let v14: void*;  // rax
    let v15: u64;  // rax
    let v16: core::option::Option<usize>;  // rax:rdx
    let v17: core::option::Option<usize>;  // rax:rdx

    v5 = std::io::buffered::bufreader::BufReader<R>::with_capacity(a0);
    v7 = a5;
    core::iter::traits::iterator::Iterator::collect(&v2, &v5);
    if a4 {
        v1 = a4 * 16 + a3;
        v0 = v3;
        do {
            v5 = core::ops::range::RangeInclusive<usize> {
                start: *(a3 as &i128)
                end: <UNKNOWN>
                exhausted: 0
            };
            v16 = <core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(&v5);
            if let None = v16 {
                continue;
            }
            v11 = *((&v16 as &char + 8) as &i64) - 1;
            if v11 < v4 {
                if (v8 & 1) {
                    v12 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a1, a2, a6, a7) as u64;
                    if v12 {
                        goto LABEL_469482;
                    }
                }
                for (v12 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a1, a2, *((v0 + v11 * 24 + 8) as &i64), *((v0 + v11 * 24 + 16) as &i64)) as u64; !v12; v12 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a1, a2, *((v0 + v13 * 24 + 8) as &i64), *((v0 + v13 * 24 + 16) as &i64)) as u64) {
                    v17 = <core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(&v5);
                    v8 = 1;
                    if !(v17 as i8 & 1) {
                        goto LABEL_469380;
                    }
                    v13 = *((&v17 as &char + 8) as &i64) - 1;
                    if v13 >= v4 {
                        goto LABEL_469380;
                    }
                    v12 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a1, a2, a6, a7) as u64;
                    if v12 {
                        break;
                    }
                }
LABEL_469482:
                v14 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v12);
            }
LABEL_469380:
            a3 += 16;
        } while (a3 != v1);
    }
    v6 = a5;
    v15 = std::io::impls::<impl std::io::Write for alloc::boxed::Box<W>>::write_all(a1, a2, &v6, 1) as u64;
    if v15 {
        v14 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
    }
    return v14;
}
