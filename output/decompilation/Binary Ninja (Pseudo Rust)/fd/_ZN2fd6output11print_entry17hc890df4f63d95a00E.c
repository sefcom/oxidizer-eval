
  fn fd::output::print_entry::hc890df4f63d95a00(arg1: *mut i64, arg2: *mut i32, arg3: *mut c_void) -> i64

{
    let mut r12: u64;
    let var_20: u64 = r12;
    let mut var_98: *mut *mut c_void;
    let mut var_80: i64;
    let mut rbp: i64;
    
    if *arg3.byte_offset(0x1e8) != 0
    {
        r12 = arg2;
        let mut rax_1: *mut i8;
        let mut rdx: u64;
        rax_1 = fd::dir_entry::DirEntry::path::h16a39562ed47efc5(arg2);
        let mut var_40: i64;
        fd::hyperlink::PathUrl::new::hdbaee58768b6d289(&var_40, rax_1, rdx);
        let o_1: bool = 0 + -(var_40);
        rbp = !o_1;
        
        if !o_1
        {
            let var_30: i64;
            let var_58_1: i64 = var_30;
            let mut var_68: i128 = var_40;
            let mut var_50: *mut i128 = &var_68;
            let var_48_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 = _$LT$fd..hyperlink..PathUrl$u20$as$u20$core..fmt..Display$GT$::fmt::h26ba7c628c69def1;
            var_98 = &data_8024f0;
            let var_90_1: i64 = 2;
            let var_78_1: i64 = 0;
            let var_88_1: *mut *mut i128 = &var_50;
            var_80 = 1;
            let rax_3: i64 = std::io::Write::write_fmt::h323bfdffb85eb317(arg1, &var_98);
            core::ptr::drop_in_place$LT$fd..hyperlink..PathUrl$GT$::h2d976cf0ed371e6c(var_68, 
                *var_68[8]);
            
            if rax_3 != 0
            {
                return rax_3;
            }
        }
        
        arg2 = r12;
        
        if *arg3.byte_offset(0x30) == 2
        {
            goto 'label_5f698e;
        }
        
        goto 'label_5f69ba;
    }
    
    rbp = 0;
    let mut rax_4: i64;
    
    if *arg3.byte_offset(0x30) != 2
    {
        'label_5f69ba:
        rax_4 = fd::output::print_entry_format::h055b3d4dd7dc026a(arg1, arg2, arg3, 
            arg3.byte_offset(0x30));
        
        if rax_4 != 0
        {
            return rax_4;
        }
    }
    else
    {
        'label_5f698e:
        
        if !(0 + -(*arg3.byte_offset(0xc8)))
        {
            rax_4 = fd::output::print_entry_colorized::hba02dea0711b7802(arg1, arg2, arg3, 
                arg3.byte_offset(0xc8), r12);
            
            if rax_4 != 0
            {
                return rax_4;
            }
        }
        else
        {
            rax_4 = fd::output::print_entry_uncolorized::hcde30b4f1cf3740a(arg1, arg2, arg3);
            
            if rax_4 != 0
            {
                return rax_4;
            }
        }
    }
    
    if rbp != 0
    {
        var_98 = &data_802510;
        let var_90_2: i64 = 1;
        let var_88_2: i64 = 8;
        var_80 = {0};
        rax_4 = std::io::Write::write_fmt::h323bfdffb85eb317(arg1, &var_98);
        
        if rax_4 != 0
        {
            return rax_4;
        }
    }
    
    let mut rax_5: *mut *mut c_void;
    
    if *arg3.byte_offset(0x1e2) == 0
    {
        rax_5 = &data_802530;
    }
    else
    {
        rax_5 = &data_802520;
    }
    
    var_98 = rax_5;
    let var_90_3: i64 = 1;
    let var_88_3: i64 = 8;
    var_80 = {0};
    std::io::Write::write_fmt::h323bfdffb85eb317(arg1, &var_98)
}
