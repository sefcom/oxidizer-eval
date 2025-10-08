
  int64_t alacritty::config::window::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..window..StartupMode$GT$::serialize::h33cb4afc423ae0ad(char arg1, int64_t* arg2)

{
    switch (arg1)
    {
        case 0:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h9902c65e3ba750b4(arg2, "WindowedWRITABLECommands, group=…", 8);
        }
        case 1:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h9902c65e3ba750b4(arg2, "MaximizedFullscreenone of `Full`…", 9);
        }
        case 2:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h9902c65e3ba750b4(arg2, "Fullscreenone of `Full`, `Transp…", 0xa);
        }
        case 3:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h9902c65e3ba750b4(arg2, "SimpleFullscreenactive seat lost", 0x10);
        }
    }
}
