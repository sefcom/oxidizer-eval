
  fn alacritty_terminal::grid::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty_terminal..grid..Grid$LT$T$GT$$GT$::serialize::h6635bcffedf2638a(arg1: *mut c_void) -> *mut i64

{
    let mut result_1: *mut i64;
    let rsi: *mut i64;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, rsi, 5);
    let mut result: *mut i64 = result_1;
    let var_18: i8;
    
    if var_18 != 3
    {
        result_1 = result;
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h21a5eb9a24ba2cd1(&result_1, arg1);
        
        if result == 0
        {
            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hc7b2f370ad8f0396(&result_1, "columnslinesdisplay_offset/home/…", 7, *arg1.byte_offset(0x90));
            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hc7b2f370ad8f0396(&result_1, "linesdisplay_offset/home/34r7hm4…", 5, *arg1.byte_offset(0x98));
            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hc7b2f370ad8f0396(&result_1, "display_offset/home/34r7hm4n/dev…", 0xe, *arg1.byte_offset(0xa0));
            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hc7b2f370ad8f0396(&result_1, "max_scroll_limitALACRITTY_SOCKET…", 0x10, *arg1.byte_offset(0xa8));
            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_18);
            return 0;
        }
    }
    
    result
}
