fn starship::module::ansi_line(a0: &struct24, a1: i64, a2: i64, a3: i64) {
    let v0: Option<struct24>;  // [bp-0x300]
    let v1: struct16;  // [bp-0x300]
    let v2: u64;  // [bp-0x2f8]
    let v3: void*;  // [bp-0x2f0]
    let v4: i64;  // [bp-0x2e8]
    let v5: struct16;  // [bp-0x2e0]
    let v6: void*;  // [bp-0x2e0]
    let v7: u64;  // [bp-0x2d8]
    let v8: void*;  // [bp-0x2d0]
    let v9: u8;  // [bp-0x2c8]
    let v10: u8;  // [bp-0x2b8]
    let v11: core::result::Result<u8, core::num::error::ParseIntError>;  // [bp-0x2a0]
    let v14: iNone;  // [bp-0x258]
    let v15: u64;  // [bp-0x248]
    let v20: struct24;  // [bp-0x148], Other Possible Types: struct32
    let v21: struct24;  // [bp-0x148]
    let v23: struct24;  // rbp
    let v25: struct16;  // rax
    let v26: struct33;  // rdx
    let v29: core::option::Option<u8>;  // rax:rax
    let v30: struct49;  // [bp-0x288]

    v11 = a2;
    v0 = 0;
    v2 = 8;
    v3 = 0;
    v6 = 0;
    v7 = 8;
    v8 = 0;
    v9 = 2;
    v23 = 0;
    loop {
        v29 = <core::iter::adapters::peekable::Peekable<I> as core::iter::traits::iterator::Iterator>::next(a1) as u128;
        if let None = v29 {
            break;
        }
        if *(*(&v29 as &i64) as &i32) == 1 {
            v20 = struct32 {
                field_0: *(&v1.field_0 as &i128)
                field_16: 0
                field_24: *(&v29 as &i64) + 8
            };
            v5 = alloc::vec::Vec<T,A>::push(&v20);
            v0 = 0;
            v2 = 8;
            v3 = 0;
            v9 = 2;
            v20 = v21;
            if *(*(&v29 as &i64) as &i32) == 2 {
                break;
            }
        } else {
            v25 = starship::segment::Segment::width_graphemes(*(&v29 as &i64));
            v30 = starship::segment::Segment::ansi_string(*(&v29 as &i64), v26, a3);
            v10 = v15;
            v9 = v14;
            v1 = alloc::vec::Vec<T,A>::push(&v30);
            v23 += v25;
            if *(*(&v29 as &i64) as &i32) == 2 {
                break;
            }
        }
    }
    *((v4 + 16) as &i64) = 0;
    *(v4 as &i128) = *(&v1.field_0 as &i128);
    return;
}
