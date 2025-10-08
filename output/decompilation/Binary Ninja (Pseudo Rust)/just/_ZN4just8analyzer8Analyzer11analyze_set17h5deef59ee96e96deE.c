
  fn just::analyzer::Analyzer::analyze_set::h5deef59ee96e96de(arg1: *mut u64, arg2: *mut c_void, arg3: i64, arg4: *mut c_void) -> *mut c_void

{
    let mut rax: *mut c_void;
    let mut rdx: u64;
    rax = just::token::Token::lexeme::h66587cdf67f63270(arg4.byte_offset(0x50));
    let result: *mut c_void =
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hcd3ea63b15358f58(arg2, 
        arg3, rax, rdx);
    
    if result == 0
    {
        arg1[9] = 0x25;
        return result;
    }
    
    let mut rax_1: *mut c_void;
    let mut rdx_2: i64;
    rax_1 = just::token::Token::lexeme::h66587cdf67f63270(result.byte_offset(0x50));
    let var_80_1: *mut c_void = rax_1;
    let var_78_1: i64 = rdx_2;
    let var_70_1: i64 = *result.byte_offset(0x80);
    let mut var_88: i64 = -0x7fffffffffffffe3;
    just::token::Token::error::h986494da066a4455(arg1, arg4.byte_offset(0x50), &var_88)
}
