
  fn uu_tr::operation::Sequence::parse_char_repeat::hd85995b5ba07b318(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let mut var_60: *const i8 = "[*]*]0[:alnumalphablankcntrldigi…";
    let var_58: i64 = 1;
    let var_50: *const i8 = "*]0[:alnumalphablankcntrldigitgr…";
    let var_48: i64 = 1;
    let var_40: *const i8 = "]0[:alnumalphablankcntrldigitgra…";
    let var_38: i64 = 1;
    let mut var_30: *mut i64;
    nom::sequence::delimited::_$u7b$$u7b$closure$u7d$$u7d$::hbda65ba818a3ebf0(&var_30, &var_60, 
        arg2, arg3);
    let mut result: i64;
    
    if var_30 == 0
    {
        let var_18: i128;
        *arg1.byte_offset(0x18) = var_18;
        let var_28: i128;
        *arg1.byte_offset(8) = var_28;
        result = 1;
    }
    else
    {
        uu_tr::operation::Sequence::parse_char_repeat::_$u7b$$u7b$closure$u7d$$u7d$::hb4b44df29a4e59ec(&arg1[1], &var_30);
        result = 0;
    }
    
    *arg1 = result;
    result
}
