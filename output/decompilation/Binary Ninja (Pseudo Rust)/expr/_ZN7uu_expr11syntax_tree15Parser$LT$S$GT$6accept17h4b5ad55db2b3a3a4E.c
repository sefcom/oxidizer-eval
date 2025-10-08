
  fn uu_expr::syntax_tree::Parser$LT$S$GT$::accept::h4b5ad55db2b3a3a4(arg1: *mut i64, arg2: *mut i64) -> u64

{
    let rax: i64;
    let var_28: i64 = rax;
    let r12: i64 = arg1[2];
    let mut rbx: u64;
    rbx = 3;
    
    if r12 < arg1[1]
    {
        let rax_1: i64 = *arg1;
        let rcx_1: i64 = r12 * 3;
        *(rax_1 + (rcx_1 << 3) + 0x10);
        let mut rax_2: i64;
        let mut rdx_1: u64;
        rax_2 = _$LT$alloc..string..String$u20$as$u20$core..convert..AsRef$LT$str$GT$$GT$::as_ref::h0a9eb36fc0b98c5f(*(rax_1 + (rcx_1 << 3) + 8));
        let rax_3: i32 = uu_expr::syntax_tree::Parser$LT$S$GT$::parse_op::_$u7b$$u7b$closure$u7d$$u7d$::ha3cd1bd23513af25(arg2, rax_2, rdx_1);
        
        if rax_3 != 3
        {
            arg1[2] = r12 + 1;
            rbx = rax_3;
        }
    }
    
    rbx
}
