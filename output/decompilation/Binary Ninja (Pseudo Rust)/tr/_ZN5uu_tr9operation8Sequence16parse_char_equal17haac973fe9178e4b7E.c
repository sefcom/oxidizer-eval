
  fn uu_tr::operation::Sequence::parse_char_equal::haac973fe9178e4b7(arg1: *mut i64) -> *mut c_void

{
    let var_48: *const i8 = "[==]";
    let var_40: i64 = 2;
    let mut var_80: *const i8 = "=]";
    let var_78: i64 = 2;
    let var_70: i8 = 1;
    let var_68: *const i8 = "=]";
    let var_60: i64 = 2;
    let var_58: *const i8 = "=]";
    let var_50: i64 = 2;
    let mut var_38: i32;
    let mut rax: i8;
    let mut rcx_1: i8;
    let mut rdx_2: i64;
    rax = _$LT$nom..sequence..Preceded$LT$F$C$G$GT$$u20$as$u20$nom..internal..Parser$LT$I$GT$$GT$::process::hcf9673a6bf1f796a(&var_38, &var_80);
    let mut var_30: i128;
    
    if var_38 != 1
    {
        let rax_1: *mut c_void = uu_tr::operation::Sequence::parse_char_equal::_$u7b$$u7b$closure$u7d$$u7d$::h14160559fe962602(&arg1[1], &var_30, rdx_2, rcx_1, rax);
        *arg1 = 0;
        return rax_1;
    }
    
    let zmm0: i128 = var_30;
    let var_20: i128;
    *arg1.byte_offset(0x18) = var_20;
    *arg1.byte_offset(8) = zmm0;
    *arg1 = 1;
    rax
}
