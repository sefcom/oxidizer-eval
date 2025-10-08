fn ruff_python_formatter::string::docstring::is_rst_option(a0: i64, a1: i64) -> u64 {
    let v0: struct24;  // [bp-0x28], Other Possible Types: struct32
    let v2: u64;  // rbx
    let v3: u64;  // rdx
    let v5: &mut [u8];  // rax:rdx

    v2 = core::str::<impl str>::trim_start_matches(a0, a1);
    v0 = 0;
    v5 = core::char::methods::encode_utf8_raw(58, &v0 as u64, v3);
    if !core::slice::<impl [T]>::starts_with(v2, v3, v5.data_ptr, v5.length) {
        return 0;
    }
    v0 = struct24 {
        field_0: v2
        field_8: v3 + v2
        field_16: 0
    };
    return <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(<core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::try_fold(&v0) as i32, 0x1);
}
