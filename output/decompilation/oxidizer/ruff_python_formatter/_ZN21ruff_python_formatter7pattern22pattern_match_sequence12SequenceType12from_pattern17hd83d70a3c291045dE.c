fn ruff_python_formatter::pattern::pattern_match_sequence::SequenceType::from_pattern(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: u32;  // [bp-0xbc]
    let v1: u64;  // [bp-0xb8]
    let v2: u32;  // [bp-0xb0]
    let v3: core::option::Option<&str>;  // [bp-0xa0]
    let v4: struct21;  // [bp-0x98]
    let v5: u8;  // [bp-0x68]
    let v6: struct21;  // [bp-0x60]
    let v8: core::fmt::Arguments;  // ebp
    let v9: u64;  // r13
    let v12: u64;  // rdx
    let v15: core::option::Option<&str>;  // rax
    let v17: u64;  // rdx
    let v18: u64;  // rax
    let v19: i64;  // r14
    let v20: u64;  // rax
    let v21: u64;  // rax
    let v22: struct26;  // r12
    let v23: struct21;  // rax
    let v24: &mut [u8];  // rax:rdx
    let v25: &mut [u8];  // rax:rdx
    let v26: &mut [u8];  // rax:rdx

    v8 = *((a0 + 24) as &i32);
    v9 = a0 + 28;
    if v8 > *(v9 as &i32) {
        core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
    }
    v3 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(ruff_text_size::range::<impl core::convert::From<ruff_text_size::range::TextRange> for core::ops::range::Range<T>>::from(v8 as u64, *(v9 as &i32)), v12, a1, a2) as u64;
    if v8 > *(v9 as &i32) {
        core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
    }
    v15 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(ruff_text_size::range::<impl core::convert::From<ruff_text_size::range::TextRange> for core::ops::range::Range<T>>::from(v8 as u64, *(v9 as &i32)), v12, a1, a2) as u64;
    v0 = 0;
    v25 = core::char::methods::encode_utf8_raw(91, &v0, a2);
    if core::slice::<impl [T]>::starts_with(v3, v12, v25.data_ptr, v25.length) {
        v0 = 0;
        v26 = core::char::methods::encode_utf8_raw(44, &v0, a2);
        if !core::slice::<impl [T]>::ends_with(v15, v12, v26.data_ptr, v26.length) {
            return 0;
        }
    }
    v0 = 0;
    v24 = core::char::methods::encode_utf8_raw(40, &v0, v17);
    v18 = core::slice::<impl [T]>::starts_with(v3, v12, v24.data_ptr, v24.length);
    if !v18 {
        return v18 & -0x100 | 2;
    } else if *((a0 + 16) as &i64) {
        v19 = *((a0 + 8) as &i64);
        v20 = *(v19 as &i64) ^ 0x8000000000000000;
        if *((a0 + 24) as &i32) > *((v19 + (&g_48d5d0.field_0)[v20]) as &i32) {
            core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
        }
        v6 = ruff_python_trivia::tokenizer::SimpleTokenizer::new(v1, v2, *((a0 + 24) as &i32), *((v19 + (&g_48d5d0.field_0)[v20]) as &i32));
        v21 = core::iter::traits::iterator::Iterator::fold(&v6);
        v4 = ruff_python_trivia::tokenizer::SimpleTokenizer::new(v1, v2, *((v19 + (&g_48d590.field_0)[v22]) as &i32), *((v19 + (&g_48d590.field_0)[v22]) as &i32));
        v5 = 0;
        v23 = <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold(&v4);
        return v23 & -0x100 | 2 - (v23 < v21);
    } else {
        return (v18 & -0x100 | 2) & -0x100 | 1;
    }
}
