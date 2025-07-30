
  fn flealib::commandprocessor::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$flealib..commandprocessor..FleaConfig$GT$::serialize::hf9fca71c835d8707(arg1: *mut i128, arg2: i64, arg3: *mut i64) -> *mut i128

{
    let mut var_1f0: i64;
    _$LT$toml..ser..Serializer$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h81bae49f1a623278(&var_1f0, arg3, "FleaConfigftp_addressftp_folders…", 0xa, 9);
    let r12: i64 = var_1f0;
    let var_1e8: i128;
    let var_1d8: i64;
    
    if r12 != -0x7fffffffffffffff
    {
        let mut var_1d0: ();
        let mut var_e8: ();
        memcpy(&var_e8, &var_1d0, 0xc8);
        let var_100_1: i128 = var_1e8;
        let var_f0_1: i64 = var_1d8;
        let mut var_108: i64 = r12;
        _$LT$toml..ser..map..SerializeDocumentTable$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hd9d914e821d47e2a(&var_1f0);
        
        if var_1f0 != -0x7ffffffffffffffb
        {
            'label_770ad0:
            arg1[1] = *var_1e8[8];
            *arg1 = var_1f0;
            core::ptr::drop_in_place$LT$toml..ser..map..SerializeDocumentTable$GT$::h1f9c798374f8eaaa(&var_108);
        }
        else
        {
            _$LT$toml..ser..map..SerializeDocumentTable$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hd9d914e821d47e2a(&var_1f0);
            
            if var_1f0 != -0x7ffffffffffffffb
            {
                goto 'label_770ad0;
            }
            
            _$LT$toml..ser..map..SerializeDocumentTable$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hd9d914e821d47e2a(&var_1f0);
            
            if var_1f0 != -0x7ffffffffffffffb
            {
                goto 'label_770ad0;
            }
            
            _$LT$toml..ser..map..SerializeDocumentTable$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hd9d914e821d47e2a(&var_1f0);
            
            if var_1f0 != -0x7ffffffffffffffb
            {
                goto 'label_770ad0;
            }
            
            _$LT$toml..ser..map..SerializeDocumentTable$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hd9d914e821d47e2a(&var_1f0);
            
            if var_1f0 != -0x7ffffffffffffffb
            {
                goto 'label_770ad0;
            }
            
            _$LT$toml..ser..map..SerializeDocumentTable$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hd9d914e821d47e2a(&var_1f0);
            
            if var_1f0 != -0x7ffffffffffffffb
            {
                goto 'label_770ad0;
            }
            
            _$LT$toml..ser..map..SerializeDocumentTable$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hd9d914e821d47e2a(&var_1f0);
            
            if var_1f0 != -0x7ffffffffffffffb
            {
                goto 'label_770ad0;
            }
            
            _$LT$toml..ser..map..SerializeDocumentTable$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hd9d914e821d47e2a(&var_1f0);
            let mut rax_2: i64 = var_1f0;
            
            if rax_2 != -0x7ffffffffffffffb
            {
                'label_770b00:
                *arg1.byte_offset(8) = var_1e8;
                *arg1 = rax_2;
                core::ptr::drop_in_place$LT$toml..ser..map..SerializeDocumentTable$GT$::h1f9c798374f8eaaa(&var_108);
            }
            else
            {
                _$LT$toml..ser..map..SerializeDocumentTable$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hd9d914e821d47e2a(&var_1f0);
                rax_2 = var_1f0;
                
                if rax_2 != -0x7ffffffffffffffb
                {
                    goto 'label_770b00;
                }
                
                memcpy(&var_1f0, &var_108, 0xe8);
                _$LT$toml..ser..map..SerializeDocumentTable$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h72de680beeccb8ee(arg1, &var_1f0);
            }
        }
    }
    else
    {
        arg1[1] = var_1d8;
        *arg1 = var_1e8;
    }
    arg1
}
