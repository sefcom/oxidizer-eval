fn uu_tail::backwards_thru_file(a0: u64, a1: u64, a2: i64) -> int {
    let v0: u64;  // [bp-0xf0]
    let v1: u64;  // [bp-0xe8]
    let v2: void*;  // [bp-0xe0]
    let v3: struct8192;  // [bp-0xd8]
    let v4: u32;  // [bp-0xd7]
    let v5: core::result::Result<u64, core::num::error::ParseIntError>;  // [bp-0xd3]
    let v6: u8;  // [bp-0xd1]
    let v7: void*;  // [bp-0xd0], Other Possible Types: core::option::Option<&str>
    let v8: u64;  // [bp-0xc8]
    let v9: u64;  // [bp-0xc0]
    let v10: &mut [u8];  // [bp-0xb8]
    let v11: struct8192;  // [bp-0xb0]
    let v12: u32;  // [bp-0xaf]
    let v13: u16;  // [bp-0xab]
    let v14: u8;  // [bp-0xa9]
    let v15: u64;  // [bp-0xa0]
    let v16: Option<struct24>;  // [bp-0x98]
    let v17: u64;  // [bp-0x98]
    let v18: u64;  // [bp-0x90]
    let v19: u64;  // [bp-0x88]
    let v20: struct32;  // [bp-0x80]
    let v21: void*;  // [bp-0x60]
    let v22: u64;  // [bp-0x28]
    let v24: u64;  // r12
    let v25: struct24;  // rbp
    let v27: u8;  // al
    let v28: u64;  // r14
    let v29: u64;  // rax
    let v31: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    v22 = v24;
    v15 = a1;
    v7 = 0;
    v20 = uu_tail::chunks::ReverseChunks::new(a0);
    v16 = <uu_tail::chunks::ReverseChunks as core::iter::traits::iterator::Iterator>::next(&v20);
    if (((0 ^ v16 as i64) & (0 ^ -(v17))) >> 63) as char {
        return;
    }
    loop {
        v28 = v18;
        v0 = v28;
        v1 = v28;
        v2 = v28 + v19;
        v3 = a2;
        if !((!v19 | v27) & 1) && v2[1] as i8 == a2 {
            memchr::arch::generic::memchr::Iter::next_back(&v0, &v3);
        }
        v10 = v2;
        v11 = v3;
        v12 = v4;
        v13 = v5;
        v14 = v6;
        v8 = v0;
        v9 = v1;
        while ((memchr::arch::generic::memchr::Iter::next_back(&v8, &v11) & 1)) {
            v25 += 1;
            v7 = v25;
            if v7 >= a1 {
                if v7 == a1 {
                    v31 = <std::fs::File as std::io::Seek>::seek(a0, 2);
                    core::result::Result<T,E>::unwrap(v31 as i8, *((&v31 as &char + 8) as &i64), "src/uu/tail/src/tail.rs");
                    return;
                }
                v21 = 0;
                core::panicking::assert_failed(0, &v7, &v15, &v21, "src/uu/tail/src/tail.rs"); /* do not return */
            }
        }
        v27 = 1;
        v29 = <uu_tail::chunks::ReverseChunks as core::iter::traits::iterator::Iterator>::next(&v20) & -0x100 | 1;
        if let None = v16 {
            return;
        }
    }
}
