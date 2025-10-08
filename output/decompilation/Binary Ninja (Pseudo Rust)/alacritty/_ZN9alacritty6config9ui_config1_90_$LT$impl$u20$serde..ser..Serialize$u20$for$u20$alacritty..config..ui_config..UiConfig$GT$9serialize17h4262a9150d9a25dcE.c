
  fn alacritty::config::ui_config::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..ui_config..UiConfig$GT$::serialize::h4262a9150d9a25dc(arg1: *mut i64) -> *mut i64

{
    let mut result_1: *mut i64;
    let rsi: *mut i64;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, rsi, 0x13);
    let mut result: *mut i64 = result_1;
    let var_18: i8;
    
    if var_18 != 3
    {
        result_1 = result;
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h062967556e5ce426(&result_1, &arg1[2]);
        
        if result == 0
        {
            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h5fbae868401ec28e(&result_1, &arg1[0x7c]);
            
            if result == 0
            {
                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h99b76a8adcd97f9a(&result_1, arg1[0x82], *arg1.byte_offset(0x414));
                
                if result == 0
                {
                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h1e28ebf3f5c35e40(&result_1, &arg1[0x79]);
                    
                    if result == 0
                    {
                        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h9467dc336d8481eb(&result_1, &arg1[9]);
                        
                        if result == 0
                        {
                            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h27716219fff5f55f(&result_1, &arg1[0xd]);
                            
                            if result == 0
                            {
                                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h58feef4e10a1623b(&result_1, &arg1[0x27]);
                                
                                if result == 0
                                {
                                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::he7e66e047626e9d7(&result_1, arg1[0x3a]);
                                    
                                    if result == 0
                                    {
                                        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h1f338a35fec3421b(&result_1, arg1);
                                        
                                        if result == 0
                                        {
                                            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::haacadc2ad2a20ab3(&result_1, &arg1[0x65]);
                                            
                                            if result == 0
                                            {
                                                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h8107b0eee8e41ea8(&result_1, &arg1[0x3b]);
                                                
                                                if result == 0
                                                {
                                                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h7c09f7898dc61263(&result_1, &arg1[0x56]);
                                                    
                                                    if result == 0
                                                    {
                                                        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h56ad96486cc1759d(&result_1, &arg1[0x6c]);
                                                        
                                                        if result == 0
                                                        {
                                                            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hfc67560a0a92d133(&result_1);
                                                            
                                                            if result == 0
                                                            {
                                                                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h5e14459ab1ed8fac(&result_1, 
                                                                    "shellSkipping migration for none…", 5, 
                                                                    &arg1[0x73]);
                                                                
                                                                if result == 0
                                                                {
                                                                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hdd00fe0f49cdcaca(&result_1, &arg1[0x5f]);
                                                                    
                                                                    if result == 0
                                                                    {
                                                                        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::ha1407653161aa2ff(&result_1, &arg1[0x62]);
                                                                        
                                                                        if result == 0
                                                                        {
                                                                            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h8c0c1502284b4320(&result_1, 
                                                                                "live_config_reloadworking_direct…", 
                                                                                0x12, arg1[0x83]);
                                                                            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h8c0c1502284b4320(&result_1, 
                                                                                "ipc_socketshellSkipping migratio…", 
                                                                                0xa, *arg1.byte_offset(0x419));
                                                                            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_18);
                                                                            return 0;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    result
}
