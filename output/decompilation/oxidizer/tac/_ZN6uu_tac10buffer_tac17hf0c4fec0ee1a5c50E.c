fn uu_tac::buffer_tac(a0: u32, a1: i384, a2: u8, a3: u64, a4: u64) -> long long {
    let v0: struct33;  // [bp-0x108]
    let v1: u64;  // [bp-0x108]
    let v2: u64;  // [bp-0x100]
    let v3: u64;  // [bp-0xf8]
    let v4: std::io::stdio::Stdout;  // [bp-0xe0]
    let v5: struct96;  // [bp-0xd8]
    let v6: struct64;  // [bp-0x70]
    let v7: u128;  // [bp-0x60]
    let v8: u128;  // [bp-0x50]
    let v11: core::fmt::Arguments;  // 4096
    let v12: core::fmt::Arguments;  // r13
    let v14: u64;  // rax
    let v15: core::result::Result<(), std::io::error::Error>;  // rax
    let v16: core::fmt::Arguments;  // 4096
    let v18: core::fmt::Arguments;  // rdx, Other Possible Types: unsigned long
    let v19: core::fmt::Arguments;  // rbp
    let v20: u64;  // rax
    let v24: struct712;  // rax
    let v27: core::option::Option<usize>;  // rax:rdx
    let v28: core::option::Option<usize>;  // rax:rdx

    v4 = std::io::stdio::stdout();
    v0 = std::io::buffered::bufwriter::BufWriter<W>::with_capacity(std::io::stdio::Stderr::lock(&v4));
    v6 = memchr::memmem::FinderBuilder::build_reverse(a3, a4);
    v5 = struct96 {
        field_0: v6.field_0
        field_16: v7
        field_32: v8
        field_48: *((&v6.field_40 as &char + 8) as &i128)
        field_64: 1
        field_72: a1
        field_80: a0
        field_88: a1
    };
    if a2 {
        v11 = a1;
        loop {
            v27 = <memchr::memmem::FindRevIter as core::iter::traits::iterator::Iterator>::next(&v5);
            if let None = v27 {
                break;
            }
            v14 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(*((&v27 as &char + 8) as &i64), v12, a0, a1, "src/uu/tac/src/tac.rs");
            if v18 < v1 - v3 {
                memcpy(v2 + v3, v14, v18);
            } else {
                std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v1, v14, v18);
                v11 = *((&v27 as &char + 8) as &i64);
                if let Err(_) = v15 {
                    return v15;
                }
            }
        }
    } else {
        v16 = a1;
        loop {
            v28 = <memchr::memmem::FindRevIter as core::iter::traits::iterator::Iterator>::next(&v5);
            if let None = v28 {
                break;
            }
            v19 = *((&v28 as &char + 8) as &i64) + a4;
            v20 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v19, v12, a0, a1, "src/uu/tac/src/tac.rs");
            if v18 < v1 - v3 {
                memcpy(v2 + v3, v20, v18);
                v3 += v18;
                v16 = v19;
            } else {
                std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v1, v20, v18);
                v16 = v19;
                if let Err(_) = v15 {
                    return v15;
                }
            }
        }
    }
    v24 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0, v11, a0, a1, "src/uu/tac/src/tac.rs");
    if v18 < v1 - v3 {
        memcpy(v2 + v3, v24, v18);
    } else {
        std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(&v1, v24, v18);
        if let Err(_) = v15 {
            return v15;
        }
    }
    <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v1);
    return v15;
}
