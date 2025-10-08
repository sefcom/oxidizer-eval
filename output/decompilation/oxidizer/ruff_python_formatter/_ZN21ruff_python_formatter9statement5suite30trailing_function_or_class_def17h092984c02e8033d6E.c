fn ruff_python_formatter::statement::suite::trailing_function_or_class_def(a0: i64, a1: i256, a2: i64) -> u64 {
    let v0: struct25;  // [bp-0x28]
    let v3: u64;  // rdx

    v0 = struct25 {
        field_0: (!a0 ? 94 : <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Stmt>>::from(a0) as u64)
        field_8: v3
        field_16: a1
        field_24: 0
    };
    return <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::try_fold(&v0);
}
