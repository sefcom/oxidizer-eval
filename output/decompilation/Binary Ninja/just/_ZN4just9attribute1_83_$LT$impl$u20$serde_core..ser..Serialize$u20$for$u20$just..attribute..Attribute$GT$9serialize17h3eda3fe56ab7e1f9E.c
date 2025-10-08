
  int64_t just::attribute::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$just..attribute..Attribute$GT$::serialize::h3eda3fe56ab7e1f9(int64_t* arg1, uint64_t arg2)

{
    int64_t rcx = 0x7fffffffffffffff + *arg1;
    int64_t rdx = 0x10;
    
    if (rcx < 0x14)
        rdx = rcx;
    
    switch (rdx)
    {
        case 0:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_newtype_variant::h8c2c4b6a88e9dbf8(arg2, "confirmdefaultdocexit-messagegro…", 7, &arg1[1]);
        }
        case 1:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "defaultdocexit-messagegroupmacos…", 7);
        }
        case 2:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_newtype_variant::h8c2c4b6a88e9dbf8(arg2, "docexit-messagegroupmacosno-cdno…", 3, &arg1[1]);
        }
        case 3:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "exit-messagegroupmacosno-cdno-ex…", 0xc);
        }
        case 4:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_newtype_variant::hf30e281cfe3fb136(arg2, "extensionfile_namefile_stemhome_…", 9, arg1[2], arg1[3]);
        }
        case 5:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_newtype_variant::hf30e281cfe3fb136(arg2, "groupmacosno-cdno-exit-messageop…", 5, arg1[2], arg1[3]);
        }
        case 6:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "linuxCould not extract parent di…", 5);
        }
        case 7:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "macosno-cdno-exit-messageopenbsd…", 5);
        }
        case 8:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_newtype_variant::h3593fbb83f6a4fba(arg2, arg1[2], arg1[3]);
        }
        case 9:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "no-cdno-exit-messageopenbsdposit…", 5);
        }
        case 0xa:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "no-exit-messageopenbsdpositional…", 0xf);
        }
        case 0xb:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "no-quietsingulararmenianEthiopic…", 8);
        }
        case 0xc:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "openbsdpositional-argumentspriva…", 7);
        }
        case 0xd:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "parallelBacktickSlimAVX2end-half…", 8);
        }
        case 0xe:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "positional-argumentsprivatescrip…", 0x14);
        }
        case 0xf:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "privatescriptwindowsexportvalue", 7);
        }
        case 0x10:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_newtype_variant::h9660212f65512a21(arg2, arg1);
        }
        case 0x11:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "unixbodyHashj", 4);
        }
        case 0x12:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "windowsexportvalue", 7);
        }
        case 0x13:
        {
            /* tailcall */
            return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_newtype_variant::hf30e281cfe3fb136(arg2, "working-directoryJUST_WORKING_DI…", 0x11, arg1[2], arg1[3]);
        }
    }
}
