fn ruff_python_formatter::context::WithInterpolatedStringState<B,D>::new(a0: i64, a1: u8, a2: u8, a3: u64) -> void {
    let v0: struct16;  // [bp-0x28]
    let v2: struct16;  // rax
    let v3: &mut [u8];  // rax
    let v4: struct16;  // cx

    v0 = v2;
    <ruff_python_formatter::context::WithNodeLevel<B> as core::ops::deref::DerefMut>::deref_mut(a3);
    v3 = <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::state_mut(a3) as u64;
    v4 = *((v3 + 42) as &i16);
    *((v3 + 42) as &u8) = a1;
    *((v3 + 43) as &u8) = a2;
    return struct16 {
        field_0: a3
        field_8: v4
    };
}
