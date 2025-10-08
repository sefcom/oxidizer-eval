
  fn alacritty::cli::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..cli..SocketMessage$GT$::serialize::h0828b40020a1814c(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let rsi: i64 = *arg1;
    let mut rdx: i64 = 0;
    
    if rsi < -0x7ffffffffffffffe
    {
        rdx = rsi - 0x7fffffffffffffff;
    }
    
    if rdx == 0
    {
        /* tailcall */
        return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_newtype_variant::h7d8ab219591a2e3e(arg2, arg1);
    }
    
    if rdx != 1
    {
        /* tailcall */
        return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_newtype_variant::h580662eeeab5ff9b(arg2, arg1[2], arg1[3], arg1[4], arg1[5]);
    }
    
    /* tailcall */
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_newtype_variant::h758821e0e218fb3e(arg2, &arg1[2])
}
