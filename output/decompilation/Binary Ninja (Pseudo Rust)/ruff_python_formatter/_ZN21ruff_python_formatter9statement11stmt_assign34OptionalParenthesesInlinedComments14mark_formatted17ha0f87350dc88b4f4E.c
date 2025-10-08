
  fn ruff_python_formatter::statement::stmt_assign::OptionalParenthesesInlinedComments::mark_formatted::ha0f87350dc88b4f4(arg1: i64, arg2: i64)

{
    if arg2 != 0
    {
        let mut i: i64 = 0;
        
        do
        {
            *(arg1 + i + 8) = 1;
            i += 0xc;
        } while arg2 * 0xc != i;
    }
}
