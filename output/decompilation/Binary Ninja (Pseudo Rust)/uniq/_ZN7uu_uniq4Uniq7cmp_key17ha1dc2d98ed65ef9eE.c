
  fn uu_uniq::Uniq::cmp_key::ha1dc2d98ed65ef9e(arg1: *mut i64, arg2: *mut i8, arg3: u64, arg4: i64, arg5: *mut c_void) -> u64

{
    let mut var_30: ();
    uu_uniq::Uniq::skip_fields::hde61277d301acf25(&var_30, *arg1, arg1[1], arg2, arg3);
    let rdx_1: i64 = arg1[4];
    let var_20: i64;
    let mut rcx_1: i64;
    let mut rdx_2: i64;
    
    if arg1[2] != 0
    {
        rcx_1 = var_20;
        
        if rdx_1 != 0
        {
            rcx_1 = arg1[5];
        }
        
        if var_20 == 0
        {
            goto 'label_4bd194;
        }
        
        rdx_2 = arg1[3];
        
        if *arg1.byte_offset(0x34) != 0
        {
            goto 'label_4bd106;
        }
        
        if rdx_2 != 0
        {
            goto 'label_4bd1f1;
        }
        
        goto 'label_4bd1b7;
    }
    
    let mut rax_2: i32;
    let mut var_50: i64;
    let var_28: i64;
    
    if rdx_1 != 0
    {
        if var_20 == 0
        {
            goto 'label_4bd194;
        }
        
        rcx_1 = arg1[5];
        
        if *arg1.byte_offset(0x34) == 0
        {
            'label_4bd1b7:
            
            if rcx_1 == var_20
            {
                goto 'label_4bd1c4;
            }
            
            rdx_2 = 0;
            'label_4bd1f1:
            var_50 = var_28;
            let var_48_4: i64 = var_20 + var_28;
            let var_40_2: i64 = rdx_2;
            let var_38_2: i64 = rcx_1;
            rax_2 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3c5213e1c3586ea6(arg4, arg5, &var_50);
        }
        else
        {
            rdx_2 = 0;
            'label_4bd106:
            
            if rdx_2 != 0 || rcx_1 != var_20
            {
                'label_4bd15c:
                var_50 = var_28;
                let var_48_1: i64 = var_20 + var_28;
                let var_40_1: i64 = rdx_2;
                let var_38_1: i64 = rcx_1;
                rax_2 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3c5213e1c3586ea6(arg4, arg5, &var_50);
            }
            else
            {
                'label_4bd118:
                var_50 = var_28;
                let var_48: i64 = var_20 + var_28;
                rax_2 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3c5213e1c3586ea6(arg4, arg5, &var_50);
            }
        }
    }
    else if var_20 == 0
    {
        'label_4bd194:
        var_50 = var_28;
        let var_48_2: i64 = var_20 + var_28;
        rax_2 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3c5213e1c3586ea6(arg4, arg5, &var_50);
    }
    else
    {
        if *arg1.byte_offset(0x34) != 0
        {
            rdx_2 = 0;
            rcx_1 = var_20;
            
            if rcx_1 != var_20
            {
                goto 'label_4bd15c;
            }
            
            goto 'label_4bd118;
        }
        
        'label_4bd1c4:
        var_50 = var_28;
        let var_48_3: i64 = var_20 + var_28;
        rax_2 = uu_uniq::Uniq::cmp_keys::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h3c5213e1c3586ea6(arg4, arg5, &var_50);
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h0ecdab8b58963e2c(&var_30);
    rax_2
}
