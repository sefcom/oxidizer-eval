
  int64_t ruff_python_formatter::comments::SourceComment::is_suppression_on_comment::h9e83a7639448440a(int32_t* arg1, char* arg2, int64_t arg3)

{
    void* rax;
    int64_t rdx;
    rax = ruff_python_formatter::comments::SourceComment::text::hf5d20ab6ab8c77b8(arg1, arg2, arg3);
    /* tailcall */
    return ruff_python_trivia::comments::SuppressionKind::is_suppression_on::h87bf594f5a8fad55(rax, 
        rdx, *(arg1 + 9));
}
