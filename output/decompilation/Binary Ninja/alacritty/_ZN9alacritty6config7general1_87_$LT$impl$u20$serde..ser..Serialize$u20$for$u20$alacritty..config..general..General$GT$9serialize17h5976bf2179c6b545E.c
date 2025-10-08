
  int64_t* alacritty::config::general::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..general..General$GT$::serialize::h5976bf2179c6b545(void* arg1)

{
    int64_t* result_1;
    int64_t* rsi;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, rsi, 4);
    int64_t* result = result_1;
    char var_18;
    
    if (var_18 != 3)
    {
        result_1 = result;
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hcb2c7c9149519398(&result_1, "import~/Removing null key "" fro…", 6, *(arg1 + 8), *(arg1 + 0x10));
        
        if (!result)
        {
            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::ha1407653161aa2ff(&result_1, arg1 + 0x18);
            
            if (!result)
            {
                _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::he34323194a2c6e76(&result_1, "live_config_reloadworking_direct…", 0x12, *(arg1 + 0x30));
                _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::he34323194a2c6e76(&result_1, "ipc_socketshellSkipping migratio…", 0xa, *(arg1 + 0x31));
                _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_18);
                return 0;
            }
        }
    }
    
    return result;
}
