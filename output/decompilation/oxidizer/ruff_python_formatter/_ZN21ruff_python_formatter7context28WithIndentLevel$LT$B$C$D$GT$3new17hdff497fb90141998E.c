fn ruff_python_formatter::context::WithIndentLevel<B,D>::new(a0: i64, a1: i64, a2: i64) -> double {
    let v0: u64;  // [bp-0x28]
    let v2: u64;  // rax
    let v3: core::result::Result<usize, std::io::error::Error>;  // rax
    let v4: &mut [u8];  // cx

    v0 = v2;
    <ruff_python_formatter::context::WithNodeLevel<B> as core::ops::deref::DerefMut>::deref_mut(a2[8] as i64);
    v3 = <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::state_mut(a2[8] as i64) as u64;
    v4 = *((v3 + 40) as &i16);
    *((v3 + 40) as &u16) = a1;
    return struct24 {
        field_0: *(a2 as &i128)
        field_16: v4
    };
}
