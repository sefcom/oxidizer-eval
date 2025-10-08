
  fn uu_tr::operation::Sequence::parse_char_repeat::he7915599905bcefa(arg1: *mut i64) -> i64

{
    let mut var_60: *const i8 = "[*]*][:alnumalphablankcntrldigit…";
    let var_58: i64 = 1;
    let var_50: *const i8 = "*][:alnumalphablankcntrldigitgra…";
    let var_48: i64 = 1;
    let var_40: *const i8 = "][:alnumalphablankcntrldigitgrap…";
    let var_38: i64 = 1;
    let mut var_30: i64;
    let rax: i64 = _$LT$nom..sequence..Preceded$LT$F$C$G$GT$$u20$as$u20$nom..internal..Parser$LT$I$GT$$GT$::process::hf8608d87b682e598(&var_30, &var_60);
    
    if var_30 != 0
    {
        let rax_1: i64 = uu_tr::operation::Sequence::parse_char_repeat::_$u7b$$u7b$closure$u7d$$u7d$::hb4288508c93bd3c1(&arg1[1], &var_30);
        *arg1 = 0;
        return rax_1;
    }
    
    let var_18: i128;
    *arg1.byte_offset(0x18) = var_18;
    let var_28: i128;
    *arg1.byte_offset(8) = var_28;
    *arg1 = 1;
    rax
}
