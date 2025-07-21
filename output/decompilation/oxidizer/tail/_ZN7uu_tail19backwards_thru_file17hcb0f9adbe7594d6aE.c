fn uu_tail::backwards_thru_file(a0: i64, a1: i64, a2: i8) -> int {
    let v0: &mut [u8];  // [bp-0xd0]
    let v1: u64;  // [bp-0xc8]
    let v2: void*;  // [bp-0xc0]
    let v3: u128;  // [bp-0xb8]
    let v4: u64;  // [bp-0xb0]
    let v5: alloc::string::String;  // [bp-0xa8]
    let v6: struct32;  // [bp-0x98]
    let v7: u64;  // [bp-0x98]
    let v8: i8;  // [bp-0x90]
    let v9: u128;  // [bp-0x90]
    let v10: alloc::string::String;  // [bp-0x80]
    let v11: struct24;  // [bp-0x78]
    let v12: struct32;  // [bp-0x58]
    let v13: void*;  // [bp-0x38]
    let v15: struct32;  // rax
    let v16: void*;  // r13
    let v17: i64;  // rdx
    let v19: core::result::Result<u64, std::io::error::Error>;  // rax:rdx

    v12 = uu_tail::chunks::ReverseChunks::new(a0);
    v13 = 0;
    v15 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v12);
    if *(&v8 as &i64) == 0x8000000000000000 {
        return;
    }
    loop {
        v3 = v9;
        v5 = v10;
        v0 = v4;
        v1 = v0 + v5;
        v2 = 0;
        if !v7 && v5 && *((v5 + v0 - 1) as &i8) == a2 {
            <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v0);
        }
        v11 = struct24 {
            field_0: v0
            field_8: v1
            field_16: 0
        };
        loop {
            <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v11);
            if !v17 {
                break;
            }
            if *(v17 as &i8) == a2 {
                v16 += 1;
                if v16 >= a1 {
                    v19 = <std::fs::File as std::io::Seek>::seek(a0);
                    core::result::Result<T,E>::unwrap(v19 as i64, *((&v19 as &char + 8) as &i64), "src/uu/tail/src/tail.rs");
                    return;
                }
            }
        }
        v6 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v12);
        if v6.field_8 == 0x8000000000000000 {
            return;
        }
    }
}
