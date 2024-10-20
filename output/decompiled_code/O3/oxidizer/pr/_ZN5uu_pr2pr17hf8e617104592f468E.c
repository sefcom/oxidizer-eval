fn uu_pr::pr(a0: &u64, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: u64;  // [sp-0xd0]
    let v1: u128;  // [sp-0xc8]
    let v2: u64;  // [sp-0xb8]
    let v3: u256;  // [sp-0xa8], Other Possible Types: struct32, Enum
    let v4: u64;  // [sp-0x88]
    let v5: u64;  // [sp-0x80]
    let v6: u128;  // [sp-0x78]
    let v7: void*;  // [sp-0x68]
    let v8: u64;  // [sp-0x60]
    let v9: u64;  // [sp-0x58]
    let v10: struct8;  // [sp-0x50], Other Possible Types: u64
    let v11: i8;  // [bp-0x48]
    let v12: i8;  // [bp-0x38]
    let v14: u64;  // rax
    let v15: u64;  // r12
    let v16: u64;  // rbx
    let v17: u64;  // rcx
    let v18: u256;  // ymm0
    let v19: u256;  // ymm0
    let v21: u128;  // xmm0
    let v22: u64;  // r12
    let v23: u64;  // rbp
    let v24: u64;  // rdx
    let v25: u128;  // xmm0
    let v26: u64;  // r15
    let v27: u64;  // rbx

    v3 = uu_pr::open(a1, a2);
    v14 = v3;
    v15 = *((&v3 as &char + 8) as &i64);
    v16 = *((&v3 as &char + 16) as &i64);
    if v14 != 9223372036854775813 {
        v17 = *((&v3 as &char + 24) as &i64);
        *(a0) = v14;
        a0[1] = v15;
        a0[2] = v16;
        a0[3] = v17;
    } else {
        v4 = __rust_alloc(0x10000, 1);
        v5 = 0x10000;
        v19 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
        v6 = 0;
        v7 = 0;
        v8 = v15;
        v9 = v16;
        v0 = uu_pr::read_stream_and_create_pages(a3, &v4);
        v0 = v0;
        loop {
            v10 = <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::next(v0);
            if v11 == 0x8000000000000000 {
                break;
            }
            v21 = v11;
            vvar_33{reg 224} = ((vvar_33{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_159{reg 224}))
            v1 = v21;
            v2 = v12;
            v22 = *((&v1 as &char + 8) as &i64);
            if uu_pr::print_page(v22, v2, a3, v10 + 1) {
                v3 = <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(v24);
                v25 = v3;
                a0 = a0;
                *(&a0[2] as &i128) = *((&v3 as &char + 16) as &i128);
                *(a0) = v25;
                v26 = *((&v1 as &char + 8) as &i64);
                for (v27 = v2 + 1; v27 != 1; v27 -= 1) {
                    v26 += 64;
                }
                return a0;
            }
            for (v23 = v2 + 1; v23 != 1; v23 -= 1) {
                v22 += 64;
            }
            v0 = v0;
        }
        a0 = a0;
        *(&a0[1] as &i32) = 0;
        *(a0) = 9223372036854775813;
    }
    return a0;
}
