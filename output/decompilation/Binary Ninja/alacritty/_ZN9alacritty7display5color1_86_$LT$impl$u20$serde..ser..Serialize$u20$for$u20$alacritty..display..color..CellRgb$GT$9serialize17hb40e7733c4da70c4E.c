
  int64_t alacritty::display::color::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..display..color..CellRgb$GT$::serialize::hb40e7733c4da70c4(char* arg1, int64_t* arg2)

{
    uint32_t rax_3 = *arg1;
    
    if (!rax_3)
        /* tailcall */
        return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h9902c65e3ba750b4(arg2, "CellForegroundCellBackgroundfail…", 0xe);
    
    if (rax_3 != 1)
        /* tailcall */
        return _$LT$alacritty..display..color..Rgb$u20$as$u20$serde..ser..Serialize$GT$::serialize::h2317636dce049321(&arg1[1], arg2);
    
    /* tailcall */
    return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h9902c65e3ba750b4(arg2, "CellBackgroundfailed to parse co…", 0xe);
}
