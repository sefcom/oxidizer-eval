fn uu_pr::pr(a0: &Result<struct32, struct4>, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0xd0]
    let v1: iNone;  // [sp-0xc8]
    let v2: i64;  // [sp-0xb8]
    let v3: Result<struct32, struct16>;  // [sp-0xa8]
    let v4: struct32;  // [sp-0x88]
    let v5: struct56;  // [sp-0x68]
    let v7: i64;  // rbx
    let v11: i64;  // rsi
    let v13: iNone;  // ymm0
    let v15: iNone;  // xmm0
    let v16: i64;  // rdx

    v7 = a0;
    v3 = uu_pr::open(a1, a2);
    match v3 {
        Ok(_) => {
            v11 = *((&v3 as &char + 24) as &i64);
            return Ok(struct32 {
                field_0: v8
                field_8: v9
                field_16: v10
                field_24: v11
            });
        },
        Err(_) => {
            v0 = a0;
            v5 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x10000, *((&v3 as &char + 8) as &i64), *((&v3 as &char + 16) as &i64));
            loop {
                v4 = <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::next(uu_pr::read_stream_and_create_pages(a3, &v5, 0));
                if *((&v4.field_0 as &char + 8) as &i64) == 0x8000000000000000 {
                    v7 = v0;
                    return Err(struct4 {
                        field_0: 0
                    });
                }
                v15 = *((&v4.field_0 as &char + 8) as &i128);
                v13 = v13 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v15 as u256;
                v1 = v15;
                v2 = *((&v4.field_16 as &char + 8) as &i64);
                if uu_pr::print_page((&v1)[8] as i64, *((&v4.field_16 as &char + 8) as &i64), a3, v4.field_0 as i64 + 1) {
                    <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(&v3, v16);
                    v7 = v0;
                }
            }
        },
    }
}
