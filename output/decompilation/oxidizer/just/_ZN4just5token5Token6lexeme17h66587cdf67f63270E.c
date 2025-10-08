fn just::token::Token::lexeme(a0: i64) -> u64 {
    let v0: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x28]
    let v2: i64;  // rax
    let v3: u64;  // r15
    let v4: u64;  // r12
    let v5: core::option::Option<&str>;  // rax

    v0 = v2;
    v3 = *((a0 + 56) as &i64);
    v4 = *((a0 + 40) as &i64) + v3;
    v5 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v3, v4, *((a0 + 16) as &i64), *((a0 + 24) as &i64)) as u64;
    return v5;
}
