
  fn alacritty::cli::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..cli..WindowOptions$GT$::serialize::he8b121b3a09ac35e(arg1: *mut c_void) -> *mut i64

{
    let mut result_1: *mut i64;
    let rsi: *mut i64;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, rsi, 4);
    let mut result: *mut i64 = result_1;
    let var_18: i8;
    
    if var_18 != 3
    {
        result_1 = result;
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hccb5da5b514e3e9a(&result_1, arg1);
        
        if result == 0
        {
            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h97c2df2456352321(&result_1, arg1.byte_offset(0x50));
            
            if result == 0
            {
                _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h5427b222cf220ecc(&result_1, &data_4e9dc0[0x50], 0x10, arg1.byte_offset(0x98));
                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hcb2c7c9149519398(&result_1, "optioncontrolUnable to read $HOM…", 6, 
                    *arg1.byte_offset(0x40), *arg1.byte_offset(0x48));
                
                if result == 0
                {
                    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_18);
                    return 0;
                }
            }
        }
    }
    
    result
}
