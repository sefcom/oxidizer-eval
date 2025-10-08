
  int64_t alacritty::config::cursor::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..cursor..CursorShape$GT$::serialize::h9b011caabb010f23(char arg1, int64_t* arg2)

{
    if (!arg1)
        /* tailcall */
        return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h9902c65e3ba750b4(arg2, "BlockHollowBlockCursorStyleshape…", 5);
    
    if (arg1 != 1)
        /* tailcall */
        return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h9902c65e3ba750b4(arg2, "BeamKeyZKey3Key0JustRepr:", 4);
    
    /* tailcall */
    return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h9902c65e3ba750b4(arg2, "UnderlineDoubleUnderlineUndercur…", 9);
}
