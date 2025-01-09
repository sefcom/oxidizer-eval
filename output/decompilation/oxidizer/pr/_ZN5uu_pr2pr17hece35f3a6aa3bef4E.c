fn uu_pr::pr(a0: &Result<struct32, struct4>, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i128;  // [sp-0xc8]
    let v1: i64;  // [sp-0xb8]
    let v2: Result<struct32, struct16>;  // [sp-0xa8], Other Possible Types: i256
    let v3: struct32;  // [sp-0x88], Other Possible Types: i256
    let v4: i448;  // [sp-0x68], Other Possible Types: struct56
    let v9: i64;  // rsi
    let v11: i256;  // ymm0
    let v13: i128;  // xmm0
    let v14: i64;  // rdx

    v2 = uu_pr::open(a1, a2);
    match v2 {
        Ok(_) => {
            v9 = *((&v2 as &char + 24) as &i64);
            return Ok(struct32 {
                field_0: v6
                field_8: v7
                field_16: v8
                field_24: v9
            });
        },
        Err(_) => {
            v4 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x10000, *((&v2 as &char + 8) as &i64), *((&v2 as &char + 16) as &i64));
            loop {
                v3 = <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::next(uu_pr::read_stream_and_create_pages(a3, &v4, 0));
                if *((&v3 as &char + 8) as &i64) == 0x8000000000000000 {
                    return Err(struct4 {
                        field_0: 0
                    });
                }
                v13 = *((&v3 as &char + 8) as &i128);
                v11 = v11 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v13 as u128 as u256;
                v0 = v13;
                v1 = *((&v3 as &char + 24) as &i64);
                if uu_pr::print_page(*((&v0 as &char + 8) as &i64), *((&v3 as &char + 24) as &i64), a3, v3 + 1) {
                    <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(&v2, v14);
                }
            }
        },
    }
}
