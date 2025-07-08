
  fn uu_split::platform::unix::instantiate_current_writer::h64f110ef12de1802(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: i64, arg5: i8) -> *mut i64

{
    let mut var_40: i64 = arg3;
    let var_38: i64 = arg4;
    let mut var_78: i128;
    let mut var_60: i32;
    let mut var_58: i64;
    
    if *arg2 != -0x8000000000000000
    {
        uu_split::platform::unix::FilterWriter::new::h45813eca9ccac0a5(&var_60, arg2[1], arg2[2], 
            arg3);
        
        if var_60 == 0
        {
            let var_50: i128;
            var_78 = var_50;
            let var_5c: i32;
            let mut var_2c: i32 = var_5c;
            let var_28_1: i64 = var_58;
            let var_20_1: i128 = var_50;
            std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h1c3d443048ae43d7(
                arg1, 0x2000, alloc::boxed::Box$LT$T$GT$::new::hf533c4985f354361(&var_2c), 
                &data_548dd0);
        }
        else
        {
            arg1[1] = var_58;
            *arg1 = -0x8000000000000000;
        }
    }
    else if arg5 == 0
    {
        var_60 = 0x1b600000000;
        var_58 = 0;
        *var_58[4] = 0;
        *var_58[2] = 1;
        std::fs::OpenOptions::open::h4e39116029faf268(&var_78, &var_60, arg3);
        
        if var_78 == 0
        {
            'label_4d6070:
            std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h1c3d443048ae43d7(
                arg1, 0x2000, alloc::boxed::Box$LT$T$GT$::new::h8fc4b41669740c9d(*var_78[4]), 
                &data_548d80);
        }
        else
        {
            arg1[1] = uu_split::platform::unix::instantiate_current_writer::_$u7b$$u7b$closure$u7d$$u7d$::hab48b66e59ddb53b(&var_40, *var_78[8]);
            *arg1 = -0x8000000000000000;
        }
    }
    else
    {
        var_60 = 0x1b600000000;
        var_58 = 0;
        *var_58[4] = 0;
        *var_58[1] = 1;
        *var_58[4] = 1;
        *var_58[3] = 1;
        std::fs::OpenOptions::open::h4e39116029faf268(&var_78, &var_60, arg3);
        
        if var_78 == 0
        {
            goto 'label_4d6070;
        }
        
        arg1[1] = uu_split::platform::unix::instantiate_current_writer::_$u7b$$u7b$closure$u7d$$u7d$::hbae22fb731dd8edd(&var_40, *var_78[8]);
        *arg1 = -0x8000000000000000;
    }
    arg1
}
