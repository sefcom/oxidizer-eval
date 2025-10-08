
  fn uu_split::platform::unix::instantiate_current_writer::hfd480ac8732375ab(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i8) -> *mut c_void

{
    let mut var_68: i64 = arg4;
    let var_60: i64 = arg5;
    let mut result: *mut c_void;
    let mut var_88: i8;
    
    if arg2 != 0
    {
        uu_split::platform::unix::FilterWriter::new::h6a73b6eeafac1893(&var_88, arg2, arg3, arg4);
        let var_80: i32;
        
        if (var_88 & 1) == 0
        {
            let var_78: i128;
            let var_18_1: i128 = var_78;
            let var_84: i32;
            let mut var_34: i32 = var_84;
            let var_30_1: i64 = var_80;
            let var_28_1: i128 = var_78;
            return 
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::ha515876637d6ec21(
                arg1, alloc::boxed::Box$LT$T$GT$::new::h455f44b746626628(&var_34), &data_50acf8);
        }
        
        result = var_80;
    }
    else
    {
        let mut rdi_6: i32;
        
        if arg6 == 0
        {
            var_88 = 0x1b600000000;
            let mut var_80_2: i32 = 0;
            let var_7c_2: i16 = 0;
            *var_80_2[2] = 1;
            let mut var_48: i8;
            std::fs::OpenOptions::open::h877762cc5a70e8f6(&var_48, &var_88, arg4);
            
            if (var_48 & 1) == 0
            {
                let var_44: i32;
                rdi_6 = var_44;
                'label_46c27f:
                return std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::ha515876637d6ec21(arg1, alloc::boxed::Box$LT$T$GT$::new::hd30cfe1806b276bf(rdi_6), 
                    &data_50aca8);
            }
            
            let var_40: i64;
            result = uu_split::platform::unix::instantiate_current_writer::_$u7b$$u7b$closure$u7d$$u7d$::he16f9ec94d6e13bf(&var_68, var_40);
        }
        else
        {
            var_88 = 0x1b600000000;
            let mut var_80_1: i32 = 0;
            let mut var_7c_1: i16 = 0;
            *var_80_1[1] = 1;
            var_7c_1 = 1;
            *var_80_1[3] = 1;
            let mut var_58: i8;
            std::fs::OpenOptions::open::h877762cc5a70e8f6(&var_58, &var_88, arg4);
            
            if (var_58 & 1) == 0
            {
                let var_54: i32;
                rdi_6 = var_54;
                goto 'label_46c27f;
            }
            
            let var_50: i64;
            result = uu_split::platform::unix::instantiate_current_writer::_$u7b$$u7b$closure$u7d$$u7d$::hd3990820a478799b(&var_68, var_50);
        }
    }
    arg1[1] = result;
    *arg1 = -0x8000000000000000;
    result
}
