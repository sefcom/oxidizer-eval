
  fn uu_expr::syntax_tree::Parser$LT$S$GT$::parse::hd9457b01c74b6ec9(arg1: *mut i64, arg2: *mut i64)

{
    if arg2[1] == 0
    {
        arg1[1] = 3;
        *arg1 = -0x7ffffffffffffffb;
        return;
    }
    
    let mut var_40: i64;
    uu_expr::syntax_tree::Parser$LT$S$GT$::parse_precedence::h425891ff58303efe(&var_40, arg2, 0);
    let mut rax: i64 = var_40;
    let var_38: i128;
    let var_28: i128;
    
    if rax == -0x7ffffffffffffffb
    {
        *arg1.byte_offset(0x18) = var_28;
        *arg1.byte_offset(8) = var_38;
        *arg1 = -0x7ffffffffffffffb;
        return;
    }
    
    let mut var_90: i64 = rax;
    let rax_1: i64 = arg2[2];
    
    if rax_1 >= arg2[1]
    {
        arg1[4] = *var_28[8];
        rax = var_90;
        *arg1.byte_offset(0x10) = var_38;
        *arg1 = rax;
        arg1[1] = var_38;
    }
    else
    {
        let rcx_1: i64 = *arg2;
        let rax_2: i64 = rax_1 * 3;
        *(rcx_1 + (rax_2 << 3) + 0x10);
        let mut rax_3: i64;
        let mut rdx_1: u64;
        rax_3 = _$LT$alloc..string..String$u20$as$u20$core..convert..AsRef$LT$str$GT$$GT$::as_ref::h0a9eb36fc0b98c5f(*(rcx_1 + (rax_2 << 3) + 8));
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha1ed10b7b3735d74(&var_40, rax_3, rdx_1);
        arg1[4] = *var_38[8];
        *arg1.byte_offset(0x10) = var_40;
        arg1[1] = 0;
        *arg1 = -0x7ffffffffffffffb;
        core::ptr::drop_in_place$LT$uu_expr..syntax_tree..AstNode$GT$::h702ff2a2ff59954a(&var_90);
    }
}
