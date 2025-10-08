fn just::lexer::Lexer::rest(a0: i64) -> long long {
    let v1: u64;  // rbx
    let v2: core::option::Option<&str>;  // rax

    v1 = *((a0 + 136) as &i64);
    v2 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(*((a0 + 160) as &i64), *((a0 + 128) as &i64), v1) as u64;
    return v2;
}
