
  fn just::analyzer::Analyzer::define::ha4013cd8ffc5a32c(arg1: *mut u64, arg2: *mut i64, arg3: *mut i128, arg4: i64, arg5: u64, arg6: i8) -> *mut u64

{
    let mut r12: u64 = arg5;
    let mut rbp: i64 = arg4;
    let mut rax: *mut c_void;
    let mut rdx: i64;
    rax = just::token::Token::lexeme::h66587cdf67f63270(arg3);
    let rax_1: *mut c_void =
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h93f8c431b210ac17(arg2, rax, rdx);
    let mut var_140: i64;
    
    if rax_1 != 0
    {
        let rdi_2: i64 = *rax_1.byte_offset(0x10);
        let rsi_1: u64 = *rax_1.byte_offset(0x18);
        
        if arg6 == 0 || _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(rdi_2, rsi_1, rbp, r12) == 0
        {
            let mut rbx_1: i64 = arg3[3];
            let rax_5: i64 = *rax_1.byte_offset(0x50);
            let mut var_160_1: u64;
            let mut r13_1: i64;
            let mut r14_2: *mut c_void;
            
            if rbx_1 >= rax_5
            {
                r14_2 = arg3;
                rbx_1 = rax_5;
                var_160_1 = rsi_1;
                r13_1 = rdi_2;
            }
            else
            {
                r14_2 = rax_1.byte_offset(0x20);
                var_160_1 = r12;
                r13_1 = rbp;
                rbp = rdi_2;
                r12 = rsi_1;
            }
            
            let var_98_1: i64 = *r14_2.byte_offset(0x40);
            let var_a8_1: i128 = *r14_2.byte_offset(0x30);
            let var_b8_1: i128 = *r14_2.byte_offset(0x20);
            let var_c8_1: i128 = *r14_2.byte_offset(0x10);
            let mut var_d8: i128 = *r14_2;
            let mut rax_8: *mut c_void;
            let mut rdx_5: i64;
            rax_8 = just::token::Token::lexeme::h66587cdf67f63270(arg3);
            let mut var_110: i128;
            *var_110[8] = rbx_1;
            let var_138_1: i64 = r13_1;
            let mut var_130: i128;
            var_130 = var_160_1;
            *var_130[8] = rax_8;
            let mut var_120: i128;
            var_120 = rdx_5;
            *var_120[8] = rbp;
            var_110 = r12;
            var_140 = -0x7fffffffffffffd0;
            return just::token::Token::error::h986494da066a4455(arg1, &var_d8, &var_140);
        }
    }
    
    let mut rax_3: *mut c_void;
    let mut rdx_2: i64;
    rax_3 = just::token::Token::lexeme::h66587cdf67f63270(arg3);
    var_140 = rbp;
    let var_138: u64 = r12;
    let var_130_1: i128 = *arg3;
    let var_120_1: i128 = arg3[1];
    let var_110_1: i128 = arg3[2];
    let var_100_1: i128 = arg3[3];
    let var_f0_1: i64 = arg3[4];
    let mut var_88: ();
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h96cc7913af61e6ff(&var_88, arg2, rax_3, 
        rdx_2, &var_140);
    arg1[9] = 0x25;
    arg1
}
