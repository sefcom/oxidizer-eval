fn ruff_python_formatter::statement::stmt_assign::OptionalParenthesesInlinedComments::mark_formatted(a0: u64, a1: u64) -> long long {
    let v1: struct16;  // rcx
    let v2: u64;  // rax

    if !a1 {
        return v2;
    }
    do {
        *((a0 + v1 + 8) as &i8) = 1;
        v1 += 12;
    } while (a1 * 12 != v1);
    return a1 * 12;
}
