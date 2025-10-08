
  int64_t alacritty::config::cursor::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..cursor..CursorBlinking$GT$::serialize::ha7b94b6c76e016ca(char arg1, int64_t* arg2)

{
    switch (arg1)
    {
        case 0:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h9902c65e3ba750b4(arg2, "NeverModifiersStateinner_sizemin…", 5);
        }
        case 1:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h9902c65e3ba750b4(arg2, "OffOnone of `Block`, `Underline`…", 3);
        }
        case 2:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h9902c65e3ba750b4(arg2, "Onone of `Block`, `Underline`, `…", 2);
        }
        case 3:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h9902c65e3ba750b4(arg2, "AlwaysWhenFocusedNeverModifiersS…", 6);
        }
    }
}
