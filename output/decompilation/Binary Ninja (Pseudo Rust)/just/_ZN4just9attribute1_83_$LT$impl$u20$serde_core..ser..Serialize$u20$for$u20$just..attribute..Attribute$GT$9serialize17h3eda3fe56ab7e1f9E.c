
  fn just::attribute::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$just..attribute..Attribute$GT$::serialize::h3eda3fe56ab7e1f9(arg1: *mut i64, arg2: u64) -> i64

{
    let rcx: i64 = 0x7fffffffffffffff + *arg1;
    let mut rdx: i64 = 0x10;
    
    if rcx < 0x14
    {
        rdx = rcx;
    }
    
    match rdx
    {
        0 =>
        {
            /* tailcall */
            _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_newtype_variant::h8c2c4b6a88e9dbf8(arg2, "confirmdefaultdocexit-messagegro…", 7, &arg1[1])
        }
        1 =>
        {
            /* tailcall */
            _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "defaultdocexit-messagegroupmacos…", 7)
        }
        2 =>
        {
            /* tailcall */
            _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_newtype_variant::h8c2c4b6a88e9dbf8(arg2, "docexit-messagegroupmacosno-cdno…", 3, &arg1[1])
        }
        3 =>
        {
            /* tailcall */
            _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "exit-messagegroupmacosno-cdno-ex…", 0xc)
        }
        4 =>
        {
            /* tailcall */
            _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_newtype_variant::hf30e281cfe3fb136(arg2, "extensionfile_namefile_stemhome_…", 9, arg1[2], arg1[3])
        }
        5 =>
        {
            /* tailcall */
            _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_newtype_variant::hf30e281cfe3fb136(arg2, "groupmacosno-cdno-exit-messageop…", 5, arg1[2], arg1[3])
        }
        6 =>
        {
            /* tailcall */
            _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "linuxCould not extract parent di…", 5)
        }
        7 =>
        {
            /* tailcall */
            _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "macosno-cdno-exit-messageopenbsd…", 5)
        }
        8 =>
        {
            /* tailcall */
            _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_newtype_variant::h3593fbb83f6a4fba(arg2, arg1[2], arg1[3])
        }
        9 =>
        {
            /* tailcall */
            _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "no-cdno-exit-messageopenbsdposit…", 5)
        }
        0xa =>
        {
            /* tailcall */
            _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "no-exit-messageopenbsdpositional…", 0xf)
        }
        0xb =>
        {
            /* tailcall */
            _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "no-quietsingulararmenianEthiopic…", 8)
        }
        0xc =>
        {
            /* tailcall */
            _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "openbsdpositional-argumentspriva…", 7)
        }
        0xd =>
        {
            /* tailcall */
            _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "parallelBacktickSlimAVX2end-half…", 8)
        }
        0xe =>
        {
            /* tailcall */
            _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "positional-argumentsprivatescrip…", 0x14)
        }
        0xf =>
        {
            /* tailcall */
            _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "privatescriptwindowsexportvalue", 7)
        }
        0x10 =>
        {
            /* tailcall */
            _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_newtype_variant::h9660212f65512a21(arg2, arg1)
        }
        0x11 =>
        {
            /* tailcall */
            _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "unixbodyHashj", 4)
        }
        0x12 =>
        {
            /* tailcall */
            _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "windowsexportvalue", 7)
        }
        0x13 =>
        {
            /* tailcall */
            _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_newtype_variant::hf30e281cfe3fb136(arg2, "working-directoryJUST_WORKING_DI…", 0x11, arg1[2], arg1[3])
        }
    }
}
