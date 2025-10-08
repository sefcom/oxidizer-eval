long long starship::configs::starship_root::_::<impl serde_core::ser::Serialize for starship::configs::starship_root::StarshipRootConfig>::serialize(void* a0, struct_0 *a1, unsigned long long a2)
{
    char v0;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x38]
    char v2;  // [bp-0x30]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rcx

    v0.serialize_struct(a2);
    if (v0 != 9223372036854775813)
    {
        v5 = *((long long *)&v2);
        *((unsigned long long *)a0) = v0;
        *((unsigned long long *)&a0[8]) = v1;
        *((unsigned long long *)&a0[16]) = v5;
        return v0;
    }
    v0.serialize_field(v1, "$schemacontinuation_promptscan_timeoutcommand_timeoutadd_newlinefollow_symlinkspalettestruct StarshipRootConfigStatusConfignot_executable_symbolsigint_symbolsignal_symbolsuccess_stylefailure_stylemap_symbolrecognize_signal_codepipestatus_separatorpipestatu", 7, a1);
    if (v0 == 9223372036854775813)
    {
        v0.serialize_field(v1, "formatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 6, &a1->padding_0[24]);
        if (v0 == 9223372036854775813)
        {
            v0.serialize_field(v1, "right_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 12, &a1->padding_0[48]);
            if (v0 == 9223372036854775813)
            {
                v0.serialize_field(v1, "continuation_promptscan_timeoutcommand_timeoutadd_newlinefollow_symlinkspalettestruct StarshipRootConfigStatusConfignot_executable_symbolsigint_symbolsignal_symbolsuccess_stylefailure_stylemap_symbolrecognize_signal_codepipestatus_separatorpipestatus_forma", 19, &a1->padding_0[72]);
                if (v0 == 9223372036854775813)
                {
                    v0.serialize_field(v1, "scan_timeoutcommand_timeoutadd_newlinefollow_symlinkspalettestruct StarshipRootConfigStatusConfignot_executable_symbolsigint_symbolsignal_symbolsuccess_stylefailure_stylemap_symbolrecognize_signal_codepipestatus_separatorpipestatus_formatpipestatus_segment", 12, &a1[1].padding_0[64]);
                    if (v0 == 9223372036854775813)
                    {
                        v0.serialize_field(v1, "command_timeoutadd_newlinefollow_symlinkspalettestruct StarshipRootConfigStatusConfignot_executable_symbolsigint_symbolsignal_symbolsuccess_stylefailure_stylemap_symbolrecognize_signal_codepipestatus_separatorpipestatus_formatpipestatus_segment_formatstruc", 15, &a1[1].padding_0[72]);
                        if (v0 == 9223372036854775813)
                        {
                            v0.serialize_field(v1, "add_newlinefollow_symlinkspalettestruct StarshipRootConfigStatusConfignot_executable_symbolsigint_symbolsignal_symbolsuccess_stylefailure_stylemap_symbolrecognize_signal_codepipestatus_separatorpipestatus_formatpipestatus_segment_formatstruct StatusConfigS", 11, &a1[1].padding_0[80]);
                            if (v0 == 9223372036854775813)
                            {
                                v0.serialize_field(v1, "follow_symlinkspalettestruct StarshipRootConfigStatusConfignot_executable_symbolsigint_symbolsignal_symbolsuccess_stylefailure_stylemap_symbolrecognize_signal_codepipestatus_separatorpipestatus_formatpipestatus_segment_formatstruct StatusConfigSudoConfigal", 15, &a1[1].padding_0[81]);
                                if (v0 == 9223372036854775813)
                                {
                                    if (a1->field_a8 == 0x8000000000000000)
                                        v0.end();
                                    else
                                        v0.serialize_field(v1, &a1->field_a8);
                                    if (v0 == 9223372036854775813)
                                    {
                                        v0.serialize_field(v1, &a1[1].padding_0[16]);
                                        if (v0 == 9223372036854775813)
                                        {
                                            v0.serialize_field(v1, &a1->padding_0[96]);
                                            if (v0 == 9223372036854775813)
                                                return a0.end();
                                        }
                                    }
                                }
                            }
                        }
                    }
                    *((int128_t *)&a0[8]) = *((int128_t *)&v1);
                    *((unsigned long long *)a0) = v0;
                    return v0;
                }
            }
        }
    }
    v4 = *((long long *)&v2);
    *((unsigned long long *)&a0[16]) = v4;
    *((int128_t *)a0) = *((int128_t *)&v0);
    return v4;
}
