
  fn ruff_python_formatter::statement::stmt_assign::OptionalParenthesesInlinedComments::mark_unformatted::h42a5b0a7ab83a00d(arg1: i64, arg2: i64)

{
    if arg2 != 0
    {
        let mut i: i64 = 0;
        
        do
        {
            *(arg1 + i + 8) = 0;
            i += 0xc;
        } while arg2 * 0xc != i;
    }
}
