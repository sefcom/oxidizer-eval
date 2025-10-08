
  fn just::attribute::Attribute::new::h574660488f231a8b(arg1: *mut i8, arg2: *mut i128, arg3: *mut i64) -> i64

{
    let mut rax: *mut c_void;
    let mut rdx: u64;
    rax = just::token::Token::lexeme::h66587cdf67f63270(arg2);
    let rax_1: i8 = _$LT$just..attribute..AttributeDiscriminant$u20$as$u20$core..str..traits..FromStr$GT$::from_str::hb7ff9f0a02277291(rax, rdx);
    
    if rax_1 != 0x14
    {
        arg3[2];
        /* jump -> *(&jump_table_46a348).byte_offset(rax_1 << 2) + &jump_table_46a348 */
    }
    
    let mut rax_2: *mut c_void;
    let mut rdx_1: i64;
    rax_2 = just::token::Token::lexeme::h66587cdf67f63270(arg2);
    let var_f8: *mut c_void = rax_2;
    let var_f0: i64 = rdx_1;
    let mut var_100: i64 = -0x7fffffffffffffc0;
    let mut var_178: i8;
    let mut rsi_2: i64;
    let mut rdi_4: i64;
    let mut r8: i64;
    let mut r9: i64;
    rsi_2 = just::token::Token::error::h986494da066a4455(&var_178, arg2, &var_100);
    let rax_3: i8 = var_178;
    let var_138: i64;
    *arg1.byte_offset(0x40) = var_138;
    let var_147: i128;
    *arg1.byte_offset(0x31) = var_147;
    let var_157: i128;
    *arg1.byte_offset(0x21) = var_157;
    let var_167: i128;
    *arg1.byte_offset(0x11) = var_167;
    let var_177: i128;
    *arg1.byte_offset(1) = var_177;
    let var_130: i8;
    let rcx_1: u64 = var_130;
    let var_12c: i32;
    *arg1.byte_offset(0x4c) = var_12c;
    let var_12f: i32;
    let rdx_4: u64 = var_12f;
    *arg1.byte_offset(0x49) = rdx_4;
    *arg1 = rax_3;
    arg1[0x48] = rcx_1;
    /* tailcall */
    sub_657c29(arg3, rdi_4, rsi_2, rdx_4, rcx_1, r8, r9)
}
