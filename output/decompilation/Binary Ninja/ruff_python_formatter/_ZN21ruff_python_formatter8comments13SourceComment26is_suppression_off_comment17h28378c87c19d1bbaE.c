
  int64_t ruff_python_formatter::comments::SourceComment::is_suppression_off_comment::h28378c87c19d1bba(int32_t* arg1, char* arg2, int64_t arg3)

{
    void* rax;
    int64_t rdx;
    rax = ruff_python_formatter::comments::SourceComment::text::hf5d20ab6ab8c77b8(arg1, arg2, arg3);
    /* tailcall */
    return ruff_python_trivia::comments::SuppressionKind::is_suppression_off::h29d695883953291b(
        rax, rdx, *(arg1 + 9));
}
