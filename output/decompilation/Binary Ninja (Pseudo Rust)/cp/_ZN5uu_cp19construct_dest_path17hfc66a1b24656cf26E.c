
  fn uu_cp::construct_dest_path::hfc66a1b24656cf26(arg1: *mut *mut *mut [i8; 0x93], arg2: *mut i8, arg3: i64, arg4: *mut i8, arg5: u64, arg6: i8, arg7: i8, arg8: i8) -> *mut *mut [i8; 0x93]

{
    let mut result: *mut *mut [i8; 0x93];
    let mut var_a8: i64;
    let mut var_88: *mut i64;
    let mut result_2: *mut *mut [i8; 0x93];
    
    if arg7 == 0
    {
        'label_503ed5:
        let mut result_1: *mut *mut [i8; 0x93];
        let mut rdx_1: i64;
        let mut rsi_4: *const i8;
        let mut r12_1: i64;
        
        if arg8 == 0
        {
            if arg6 == 0
            {
                r12_1 = arg3;
                let mut rax_4: *mut i8;
                rax_4 = std::path::Path::parent::h65c9a340a6266f2d(arg2, r12_1);
                rsi_4 = rax_4;
                
                if rax_4 == 0
                {
                    rsi_4 = arg2;
                }
                
                if rax_4 == 0
                {
                    rdx_1 = r12_1;
                }
                
                goto 'label_503faa;
            }
            
            'label_503f2d:
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_88, arg4, 
                arg5);
            'label_503fe2:
            result = result_1;
            arg1[3] = result;
            *arg1.byte_offset(8) = var_88;
            *arg1 = 0xd;
        }
        else
        {
            if std::path::Path::is_dir::h9ac0db933706da51(arg4, arg5) == 0
            {
                /* tailcall */
                return _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h3a818a2f4f98d944(arg1, "with --parents, the destination …", 0x33);
            }
            
            if arg6 != 0
            {
                goto 'label_503f2d;
            }
            
            r12_1 = arg3;
            std::path::Path::components::h4f3217acf0fc8653(&result_2, arg2, r12_1);
            let var_36: i8;
            
            if var_36 == 0
            {
                let var_60: i8;
                let c_1: bool = var_60 < 5;
                rdx_1 = c_1;
                rsi_4 = 1;
                
                if c_1
                {
                    rsi_4 = "/, overriding mode  ()?overwrite…";
                }
            }
            else
            {
                rdx_1 = 1;
                rsi_4 = "/, overriding mode  ()?overwrite…";
            }
            
            'label_503faa:
            uu_cp::localize_to_target::hdd63077be4e3b6f7(&result_2, rsi_4, rdx_1, arg2, r12_1, 
                arg4, arg5);
            result = result_2;
            let var_68: i64;
            var_a8 = var_68;
            let result_3: *mut *mut [i8; 0x93];
            
            if result == 0xd
            {
                var_88 = var_a8;
                result_1 = result_3;
                goto 'label_503fe2;
            }
            
            let var_40: i128;
            *arg1.byte_offset(0x30) = var_40;
            let var_50: i64;
            *arg1.byte_offset(0x20) = var_50;
            arg1[3] = result_3;
            *arg1.byte_offset(8) = var_a8;
            *arg1 = result;
        }
    }
    else
    {
        if std::path::Path::is_dir::h9ac0db933706da51(arg4, arg5) == 0
        {
            goto 'label_503ed5;
        }
        
        var_a8 = 1;
        let var_a0_1: *mut i8 = arg4;
        let var_98_1: u64 = arg5;
        let var_90_1: i8 = 1;
        var_88 = &var_a8;
        let var_80_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        result_2 = &data_5b5db8;
        let var_68_1: i64 = 2;
        let var_50_1: i64 = 0;
        let var_60_1: *mut *mut i64 = &var_88;
        let var_58: i64 = 1;
        result = core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&arg1[1], &result_2);
        *arg1 = 4;
    }
    result
}
