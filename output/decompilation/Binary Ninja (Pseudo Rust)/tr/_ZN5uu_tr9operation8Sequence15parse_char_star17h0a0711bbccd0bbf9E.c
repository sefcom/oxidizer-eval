
  fn uu_tr::operation::Sequence::parse_char_star::h0a0711bbccd0bbf9(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let mut var_28: *const i8 = "[*]*]0[:alnumalphablankcntrldigi…";
    let var_20: i64 = 1;
    let var_18: *const i8 = "*]*]0[:alnumalphablankcntrldigit…";
    let var_10: i64 = 2;
    let mut var_48: i32;
    nom::sequence::delimited::_$u7b$$u7b$closure$u7d$$u7d$::h05b95ced07dd6d44(&var_48, &var_28, 
        arg2, arg3);
    let mut result: i64;
    let var_38: i128;
    
    if var_48 != 3
    {
        let zmm0: i128 = var_48;
        *arg1.byte_offset(0x18) = var_38;
        *arg1.byte_offset(8) = zmm0;
        result = 1;
    }
    else
    {
        let var_40: i128;
        *arg1.byte_offset(8) = var_40;
        arg1[3] = -0x7ffffffffffffff5;
        arg1[4] = 2;
        *arg1.byte_offset(0x21) = *var_38[8];
        result = 0;
    }
    *arg1 = result;
    result
}
