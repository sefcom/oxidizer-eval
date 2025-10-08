fn ruff_python_formatter::string::docstring::CodeExampleMarkdown::is_end(a0: i64, a1: &str) -> u64 {
    let v0: struct16;  // [bp-0x38], Other Possible Types: struct25, struct32
    let v1: u64;  // [bp-0x28]
    let v3: u64;  // rsi
    let v4: u64;  // rdx
    let v5: core::fmt::Arguments;  // r14
    let v6: struct25;  // rbx
    let v7: struct16;  // rax
    let v8: core::option::Option<&str>;  // rax

    v0 = ruff_python_formatter::string::docstring::indent_with_suffix(v3, v4);
    v5 = v1;
    v6 = v0.field_24;
    if !core::slice::<impl [T]>::starts_with(v5, v6, "```") && !core::slice::<impl [T]>::starts_with(v5, v6, "~~~") {
        return 0;
    }
    v0 = struct25 {
        field_0: v5
        field_8: v5 + v6
        field_16: a0
        field_24: 0
    };
    v7 = <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold(&v0);
    if v7 >= *((a0 + 48) as &i64) {
        v8 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v7, v5, v6) as u64;
        v0 = struct16 {
            field_0: v8
            field_8: v4 + v8
        };
        return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0), None);
    }
    return 0;
}
