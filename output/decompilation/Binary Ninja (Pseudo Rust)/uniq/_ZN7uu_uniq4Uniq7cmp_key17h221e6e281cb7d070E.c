
  fn uu_uniq::Uniq::cmp_key::h221e6e281cb7d070(arg1: *mut i64, arg2: *mut i8, arg3: u64, arg4: *mut i64) -> u64

{
    let mut var_28: ();
    uu_uniq::Uniq::skip_fields::hde61277d301acf25(&var_28, *arg1, arg1[1], arg2, arg3);
    let rdx_1: i64 = arg1[4];
    let var_18: i64;
    let mut rcx_1: i64;
    let mut rdx_2: i64;
    
    if arg1[2] != 0
    {
        rcx_1 = var_18;
        
        if rdx_1 != 0
        {
            rcx_1 = arg1[5];
        }
        
        if var_18 == 0
        {
            goto 'label_4bcfd0;
        }
        
        rdx_2 = arg1[3];
        
        if *arg1.byte_offset(0x34) != 0
        {
            goto 'label_4bcf51;
        }
        
        if rdx_2 != 0
        {
            goto 'label_4bd021;
        }
        
        goto 'label_4bcfed;
    }
    
    let mut rax_2: i32;
    let mut var_48: i64;
    let var_20: i64;
    
    if rdx_1 != 0
    {
        if var_18 == 0
        {
            goto 'label_4bcfd0;
        }
        
        rcx_1 = arg1[5];
        
        if *arg1.byte_offset(0x34) == 0
        {
            'label_4bcfed:
            
            if rcx_1 == var_18
            {
                goto 'label_4bcffa;
            }
            
            rdx_2 = 0;
            'label_4bd021:
            var_48 = var_20;
            let var_40_4: i64 = var_18 + var_20;
            let var_38_2: i64 = rdx_2;
            let var_30_2: i64 = rcx_1;
            rax_2 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h300cb8706f3cca4b(arg4, 
                &var_48, &data_530350);
        }
        else
        {
            rdx_2 = 0;
            'label_4bcf51:
            
            if rdx_2 != 0 || rcx_1 != var_18
            {
                'label_4bcfa1:
                var_48 = var_20;
                let var_40_1: i64 = var_18 + var_20;
                let var_38_1: i64 = rdx_2;
                let var_30_1: i64 = rcx_1;
                rax_2 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h300cb8706f3cca4b(
                    arg4, &var_48, &data_5303c0);
            }
            else
            {
                'label_4bcf63:
                var_48 = var_20;
                let var_40: i64 = var_18 + var_20;
                rax_2 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h300cb8706f3cca4b(
                    arg4, &var_48, &data_530388);
            }
        }
    }
    else if var_18 == 0
    {
        'label_4bcfd0:
        var_48 = var_20;
        let var_40_2: i64 = var_18 + var_20;
        rax_2 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h300cb8706f3cca4b(arg4, 
            &var_48, &data_530318);
    }
    else
    {
        if *arg1.byte_offset(0x34) != 0
        {
            rdx_2 = 0;
            rcx_1 = var_18;
            
            if rcx_1 != var_18
            {
                goto 'label_4bcfa1;
            }
            
            goto 'label_4bcf63;
        }
        
        'label_4bcffa:
        var_48 = var_20;
        let var_40_3: i64 = var_18 + var_20;
        rax_2 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::h300cb8706f3cca4b(arg4, 
            &var_48, &data_530318);
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(&var_28);
    rax_2
}
