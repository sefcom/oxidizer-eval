fn ruff_python_formatter::comments::SourceComment::is_suppression_off_comment(a0: i64, a1: u64, a2: u64) -> long long {
    let v1: u64;  // rax
    let v2: u64;  // rdx

    v1 = ruff_python_formatter::comments::SourceComment::text(a0, a1, a2);
    return ruff_python_trivia::comments::SuppressionKind::is_suppression_off(v1, v2, *((a0 + 9) as &i8));
}
