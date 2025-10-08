
  fn uu_tr::operation::Sequence::parse_char_star::h373fc009ee0379ef(arg1: *mut i64) -> i64

{
    let mut var_28: *const i8 = "[*]*][:alnumalphablankcntrldigit…";
    let var_20: i64 = 1;
    let var_18: *const i8 = "*]*][:alnumalphablankcntrldigitg…";
    let var_10: i64 = 2;
    let mut var_48: i32;
    let rax: i64 = _$LT$nom..sequence..Preceded$LT$F$C$G$GT$$u20$as$u20$nom..internal..Parser$LT$I$GT$$GT$::process::hc6dda4c82a13e3e7(&var_48, &var_28);
    let var_38: i128;
    
    if var_48 != 3
    {
        let zmm0: i128 = var_48;
        *arg1.byte_offset(0x18) = var_38;
        *arg1.byte_offset(8) = zmm0;
        *arg1 = 1;
        return rax;
    }
    
    let rax_1: i8 = *var_38[8];
    let var_40: i128;
    *arg1.byte_offset(8) = var_40;
    arg1[3] = 0xc;
    arg1[4] = 2;
    *arg1.byte_offset(0x21) = rax_1;
    *arg1 = 0;
    rax_1
}
