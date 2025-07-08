
  fn uu_expr::syntax_tree::Parser::accept::h2eb9f05d6b3bc24e(arg1: *mut i64, arg2: *mut i64) -> u64

{
    let r15: i64 = arg1[2];
    let mut rbx: u64;
    rbx = 3;
    
    if r15 < arg1[1]
    {
        let rcx_1: *mut i64 = *arg1;
        let rdx_2: i64 = r15 << 4;
        let rax_2: i32 =
            uu_expr::syntax_tree::Parser::parse_op::_$u7b$$u7b$closure$u7d$$u7d$::hae6674a434b8f783(
            arg2, *rcx_1.byte_offset(rdx_2), *rcx_1.byte_offset(rdx_2).byte_offset(8));
        
        if rax_2 != 3
        {
            arg1[2] = r15 + 1;
            rbx = rax_2;
        }
    }
    
    rbx
}
