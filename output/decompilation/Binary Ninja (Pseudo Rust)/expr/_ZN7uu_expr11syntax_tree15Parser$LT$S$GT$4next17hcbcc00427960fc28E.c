
  fn uu_expr::syntax_tree::Parser$LT$S$GT$::next::hcbcc00427960fc28(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let rax: i64 = arg2[1];
    let rdi: i64 = arg2[2];
    
    if rdi < rax
    {
        let rax_1: i64 = *arg2;
        let rcx: i64 = rdi * 3;
        arg2[2] = rdi + 1;
        *(rax_1 + (rcx << 3) + 0x10);
        let mut rax_2: i64;
        let mut rdx: i64;
        rax_2 = _$LT$alloc..string..String$u20$as$u20$core..convert..AsRef$LT$str$GT$$GT$::as_ref::h0a9eb36fc0b98c5f(*(rax_1 + (rcx << 3) + 8));
        arg1[1] = rax_2;
        arg1[2] = rdx;
        *arg1 = 0xd;
        return rax_2;
    }
    
    if rdi - 1 >= rax
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(rdi - 1, rax);
        /* no return */
    }
    
    let rax_3: i64 = *arg2;
    let rcx_1: i64 = (rdi - 1) * 3;
    *(rax_3 + (rcx_1 << 3) + 0x10);
    let mut rax_4: i64;
    let mut rdx_1: u64;
    rax_4 = _$LT$alloc..string..String$u20$as$u20$core..convert..AsRef$LT$str$GT$$GT$::as_ref::h0a9eb36fc0b98c5f(*(rax_3 + (rcx_1 << 3) + 8));
    let mut var_20: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha1ed10b7b3735d74(&var_20, rax_4, rdx_1);
    *arg1 = 1;
    *arg1.byte_offset(8) = var_20;
    let var_10: i64;
    arg1[3] = var_10;
    var_10
}
