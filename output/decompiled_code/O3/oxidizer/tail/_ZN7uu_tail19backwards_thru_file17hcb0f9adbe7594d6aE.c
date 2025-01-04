fn uu_tail::backwards_thru_file(a0: &u32, a1: u64, a2: u8) -> u64 {
    let v0: struct8;  // [sp-0xd0], Other Possible Types: u64
    let v1: u64;  // [sp-0xc8]
    let v2: void*;  // [sp-0xc0]
    let v3: u128;  // [sp-0xb8]
    let v4: u64;  // [sp-0xa8]
    let v5: u8;  // [bp-0x98], Other Possible Types: struct32
    let v6: u8;  // [bp-0x90]
    let v8: struct8;  // [sp-0x78]
    let v9: u64;  // [sp-0x70]
    let v10: u64;  // [sp-0x68]
    let v11: struct32;  // [sp-0x58], Other Possible Types: u256
    let v12: void*;  // [sp-0x38]
    let v15: u64;  // rax
    let v16: void*;  // r13
    let v17: u256;  // ymm0
    let v18: u128;  // xmm0
    let v19: &u8;  // rdx
    let v21: u64;  // rax

    v11 = uu_tail::chunks::ReverseChunks::new(a0);
    v12 = 0;
    v15 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v11);
    if *(&v6 as &i64) == 0x8000000000000000 {
        return v15;
    }
    v16 = 0;
    loop {
        v18 = *((&v5 as &char + 8) as &i128);
        v17 = v17 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18;
        v3 = v18;
        v4 = *((&v5 as &char + 24) as &i64);
        v0 = *((&v3 as &char + 8) as &i64);
        v1 = v0 + v4;
        v2 = 0;
        if !*(&v5 as &i64) && v4 && *((v4 + v0 - 1) as &i8) == a2 {
            v0 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back();
        }
        v10 = v2;
        v8 = v0;
        v9 = v1;
        loop {
            v8 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back();
            if !v19 {
                break;
            }
            if *(v19) == a2 {
                v16 += 1;
                if v16 >= a1 {
                    core::result::Result<T,E>::unwrap(<std::fs::File as std::io::Seek>::seek(a0, 2), v19, "src/uu/tail/src/tail.rs");
                    v15 = v21;
                    return v15;
                }
            }
        }
        v5 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v11);
        v15 = 0x8000000000000000;
        if *((&v5 as &char + 8) as &i64) == 0x8000000000000000 {
            return v15;
        }
    }
}
