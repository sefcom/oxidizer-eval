
  fn just::settings::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$just..settings..Settings$GT$::serialize::hfcc39981de25ac0f(arg1: *mut i64, arg2: u64) -> i64

{
    let mut result_1: i64;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_struct::hfdad5c5179e3ff91(&result_1, arg2, 0x13);
    let mut result: i64 = result_1;
    let var_10: i8;
    
    if var_10 != 3
    {
        result_1 = result;
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8fce071aeefde71f(&result_1, "allow_duplicate_recipesallow_dup…", 0x17, arg1[0x27]);
        
        if result == 0
        {
            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8fce071aeefde71f(&result_1, "allow_duplicate_variablesdotenv_…", 0x19, 
                *arg1.byte_offset(0x139));
            
            if result == 0
            {
                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h3677ce0dede2f030(&result_1, "dotenv_filenamedotenv_loaddotenv…", 0xf, arg1);
                
                if result == 0
                {
                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8fce071aeefde71f(&result_1, "dotenv_loaddotenv_overridedotenv…", 0xb, 
                        *arg1.byte_offset(0x13a));
                    
                    if result == 0
                    {
                        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8fce071aeefde71f(&result_1, "dotenv_overridedotenv_pathdotenv…", 0xf, 
                            *arg1.byte_offset(0x13b));
                        
                        if result == 0
                        {
                            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h998cd99b8bf45d08(&result_1, "dotenv_pathdotenv_requiredignore…", 0xb, &arg1[3]);
                            
                            if result == 0
                            {
                                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8fce071aeefde71f(&result_1, "dotenv_requiredignore_commentsno…", 0xf, 
                                    *arg1.byte_offset(0x13c));
                                
                                if result == 0
                                {
                                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8fce071aeefde71f(&result_1, "exportvalue", 6, *arg1.byte_offset(0x13d));
                                    
                                    if result == 0
                                    {
                                        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8fce071aeefde71f(&result_1, "fallback\r", 8, 
                                            *arg1.byte_offset(0x13e));
                                        
                                        if result == 0
                                        {
                                            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8fce071aeefde71f(&result_1, 
                                                "ignore_commentsno_exit_messagepo…", 0xf, 
                                                *arg1.byte_offset(0x13f));
                                            
                                            if result == 0
                                            {
                                                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8fce071aeefde71f(&result_1, 
                                                    "no_exit_messagepositional_argume…", 0xf, 
                                                    arg1[0x28]);
                                                
                                                if result == 0
                                                {
                                                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8fce071aeefde71f(&result_1, 
                                                        "positional_argumentswindows_powe…", 0x14, 
                                                        *arg1.byte_offset(0x141));
                                                    
                                                    if result == 0
                                                    {
                                                        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8fce071aeefde71f(&result_1, 
                                                            "quietJUST_QUIETSuppress all outp…", 5, 
                                                            *arg1.byte_offset(0x142));
                                                        
                                                        if result == 0
                                                        {
                                                            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h0156f87e08a37982(&result_1, 
                                                                "shellInvoke <SHELL> to run recip…", 5, 
                                                                &arg1[0xf]);
                                                            
                                                            if result == 0
                                                            {
                                                                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h3677ce0dede2f030(&result_1, 
                                                                    "tempdirSave temporary files to <…", 7, 
                                                                    &arg1[0x18]);
                                                                
                                                                if result == 0
                                                                {
                                                                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8fce071aeefde71f(&result_1, "unstabl", 8, 
                                                                        *arg1.byte_offset(0x143));
                                                                    
                                                                    if result == 0
                                                                    {
                                                                        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8fce071aeefde71f(&result_1, 
                                                                            "windows_powershellwindows_shellw…", 
                                                                            0x12, *arg1.byte_offset(0x144));
                                                                        
                                                                        if result == 0
                                                                        {
                                                                            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h0156f87e08a37982(&result_1, 
                                                                                "windows_shellworking_directoryAm…", 
                                                                                0xd, &arg1[0x1b]);
                                                                            
                                                                            if result == 0
                                                                            {
                                                                                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h998cd99b8bf45d08(&result_1, 
                                                                                    "working_directoryAmpersandAmpers…", 
                                                                                    0x11, &arg1[0x24]);
                                                                                
                                                                                if result == 0
                                                                                {
                                                                                    /* tailcall */
                                                                                    return _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::hdc3b867c22c4b60f(result_1, var_10);
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
        }
    }
    
    result
}
