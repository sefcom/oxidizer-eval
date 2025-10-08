
  fn alacritty::config::debug::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..debug..RendererPreference$GT$::serialize::h79d196a2e5e95065(arg1: i8, arg2: *mut i64) -> i64

{
    if arg1 == 0
    {
        /* tailcall */
        return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h9902c65e3ba750b4(arg2, "Glsl3Gles2Gles2Pureglyph_offseti…", 5);
    }
    
    if arg1 != 1
    {
        /* tailcall */
        return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h9902c65e3ba750b4(arg2, "Gles2Pureglyph_offsetitalicbold_…", 9);
    }
    
    /* tailcall */
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h9902c65e3ba750b4(arg2, "Gles2Gles2Pureglyph_offsetitalic…", 5)
}
