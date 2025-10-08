
  fn alacritty::config::ui_config::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..ui_config..HintAction$GT$::serialize::ha835bd41360b5d01(arg1: *mut i64, arg2: *mut i64) -> i64

{
    if *arg1 != -0x7fffffffffffffff
    {
        /* tailcall */
        return _$LT$serde..__private..ser..FlatMapSerializer$LT$M$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_newtype_variant::hdfb03de95f6a6dae(arg2, arg1);
    }
    
    let var_8: *mut i64 = arg1;
    _$LT$serde..__private..ser..FlatMapSerializer$LT$M$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_newtype_variant::h03a1d9d4aa2de6a3(arg2, arg1[1]);
    0
}
