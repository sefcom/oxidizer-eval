
  fn forc_crypto::keys::vanity::validate_hex_string::h622429bd06bdd4a3(arg1: *mut i64, arg2: i64, arg3: u64) -> i64

{
    let mut var_28: i64 = arg2;
    let var_20: i64 = arg2 + arg3;
    let mut result: i64;
    
    if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h12e0c1168ef1dc6a(core::iter::traits::iterator::Iterator::try_fold::heb0827174d4858c0(&var_28)) == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&arg1[1], "Pattern must contain only hex ch…", 0x33);
        result = 1;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&arg1[1], arg2, arg3);
        result = 0;
    }
    
    *arg1 = result;
    result
}
