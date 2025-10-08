
  fn just::analyzer::Analyzer::resolve_recipe::he99a001ae8837bfe(arg1: i64, arg2: i64, arg3: *mut *mut c_void, arg4: *mut c_void) -> i64

{
    let mut r14: *mut c_void = arg4;
    let mut r15: *mut *mut c_void = arg3;
    let mut var_48: *mut c_void;
    just::namepath::Namepath::split_last::h366fd2e2956db644(&var_48, arg1, arg2);
    let rbx: *mut c_void = var_48;
    let var_38: i64;
    
    if var_38 != 0
    {
        let var_40: *mut c_void;
        let mut r12_1: *mut c_void = var_40;
        let mut i_1: i64 = var_38 * 0x48;
        let mut rax_3: *mut c_void;
        let mut i: i64;
        
        do
        {
            let mut rax_2: *mut c_void;
            let mut rdx_1: u64;
            rax_2 = just::token::Token::lexeme::h66587cdf67f63270(r12_1);
            rax_3 =
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::he9fea18cadddca02(
                *r15, r15[1], rax_2, rdx_1);
            
            if rax_3 == 0
            {
                return 0;
            }
            
            r12_1 += 0x48;
            r15 = rax_3.byte_offset(0x2a0);
            i = i_1;
            i_1 -= 0x48;
        } while i != 0x48;
        r14 = rax_3.byte_offset(0x2b8);
    }
    
    let mut rax_5: *mut c_void;
    let mut rdx_3: u64;
    rax_5 = just::token::Token::lexeme::h66587cdf67f63270(rbx);
    let rax_6: *mut i64 =
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h3ce94925646e0fd0(*r14, 
        *r14.byte_offset(8), rax_5, rdx_3);
    
    if rax_6 == 0
    {
        return 0;
    }
    
    let rcx_2: *mut i64 = *rax_6;
    let temp0_1: i64 = *rcx_2;
    *rcx_2 += 1;
    
    if temp0_1 <= -1
    {
        trap(6);
    }
    
    *rax_6
}
