
  fn ruff_python_formatter::comments::SourceComment::is_suppression_on_comment::h9e83a7639448440a(arg1: *mut i32, arg2: *mut i8, arg3: i64) -> i64

{
    let mut rax: *mut c_void;
    let mut rdx: i64;
    rax = ruff_python_formatter::comments::SourceComment::text::hf5d20ab6ab8c77b8(arg1, arg2, arg3);
    /* tailcall */
    ruff_python_trivia::comments::SuppressionKind::is_suppression_on::h87bf594f5a8fad55(rax, rdx, 
        *arg1.byte_offset(9))
}
