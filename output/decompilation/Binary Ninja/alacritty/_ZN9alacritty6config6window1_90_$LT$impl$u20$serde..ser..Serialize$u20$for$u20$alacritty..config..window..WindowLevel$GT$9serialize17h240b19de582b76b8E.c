
  int64_t alacritty::config::window::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..window..WindowLevel$GT$::serialize::h240b19de582b76b8(char arg1, int64_t* arg2)

{
    if (!(arg1 & 1))
        /* tailcall */
        return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h9902c65e3ba750b4(arg2, "NormalObliqueDescriptionslantwei…", 6);
    
    /* tailcall */
    return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h9902c65e3ba750b4(arg2, "AlwaysOnTopLayoutalignUtf8Errorv…", 0xb);
}
