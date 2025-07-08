
  fn uu_expr::syntax_tree::Parser::next::he96b47f70d6fcb97(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let rax: i64 = arg2[1];
    let rdi: i64 = arg2[2];
    let mut result: i64;
    
    if rdi >= rax
    {
        if rdi - 1 >= rax
        {
            core::panicking::panic_bounds_check::h25a5330941572dd1(rdi - 1, rax);
            /* no return */
        }
        
        let rax_2: *mut i64 = *arg2;
        let rdi_3: i64 = (rdi - 1) << 4;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hd7cff6a23e23a786(&arg1[1], 
            *rax_2.byte_offset(rdi_3), *rax_2.byte_offset(rdi_3).byte_offset(8));
        result = 1;
    }
    else
    {
        let rax_1: *mut i128 = *arg2;
        arg2[2] = rdi + 1;
        *arg1.byte_offset(8) = rax_1[rdi];
        result = 7;
    }
    
    *arg1 = result;
    result
}
