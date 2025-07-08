
  int64_t* uu_split::platform::unix::instantiate_current_writer::h64f110ef12de1802(int64_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, char arg5)

{
    int64_t var_40 = arg3;
    int64_t var_38 = arg4;
    int128_t var_78;
    int32_t var_60;
    int64_t var_58;
    
    if (*arg2 != -0x8000000000000000)
    {
        uu_split::platform::unix::FilterWriter::new::h45813eca9ccac0a5(&var_60, arg2[1], arg2[2], 
            arg3);
        
        if (!var_60)
        {
            int128_t var_50;
            var_78 = var_50;
            int32_t var_5c;
            int32_t var_2c = var_5c;
            int64_t var_28_1 = var_58;
            int128_t var_20_1 = var_50;
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
    else if (!arg5)
    {
        var_60 = 0x1b600000000;
        var_58 = 0;
        *var_58[4] = 0;
        *var_58[2] = 1;
        std::fs::OpenOptions::open::h4e39116029faf268(&var_78, &var_60, arg3);
        
        if (!var_78)
        {
            label_4d6070:
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
        
        if (!var_78)
            goto label_4d6070;
        
        arg1[1] = uu_split::platform::unix::instantiate_current_writer::_$u7b$$u7b$closure$u7d$$u7d$::hbae22fb731dd8edd(&var_40, *var_78[8]);
        *arg1 = -0x8000000000000000;
    }
    return arg1;
}
