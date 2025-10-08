
  void* uu_split::platform::unix::instantiate_current_writer::hfd480ac8732375ab(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, char arg6)

{
    int64_t var_68 = arg4;
    int64_t var_60 = arg5;
    void* result;
    char var_88;
    
    if (arg2)
    {
        uu_split::platform::unix::FilterWriter::new::h6a73b6eeafac1893(&var_88, arg2, arg3, arg4);
        int32_t var_80;
        
        if (!(var_88 & 1))
        {
            int128_t var_78;
            int128_t var_18_1 = var_78;
            int32_t var_84;
            int32_t var_34 = var_84;
            int64_t var_30_1 = var_80;
            int128_t var_28_1 = var_78;
            return 
                std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::ha515876637d6ec21(
                arg1, alloc::boxed::Box$LT$T$GT$::new::h455f44b746626628(&var_34), &data_50acf8);
        }
        
        result = var_80;
    }
    else
    {
        int32_t rdi_6;
        
        if (!arg6)
        {
            var_88 = 0x1b600000000;
            int32_t var_80_2 = 0;
            int16_t var_7c_2 = 0;
            *var_80_2[2] = 1;
            char var_48;
            std::fs::OpenOptions::open::h877762cc5a70e8f6(&var_48, &var_88, arg4);
            
            if (!(var_48 & 1))
            {
                int32_t var_44;
                rdi_6 = var_44;
                label_46c27f:
                return std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::ha515876637d6ec21(arg1, alloc::boxed::Box$LT$T$GT$::new::hd30cfe1806b276bf(rdi_6), 
                    &data_50aca8);
            }
            
            int64_t var_40;
            result = uu_split::platform::unix::instantiate_current_writer::_$u7b$$u7b$closure$u7d$$u7d$::he16f9ec94d6e13bf(&var_68, var_40);
        }
        else
        {
            var_88 = 0x1b600000000;
            int32_t var_80_1 = 0;
            int16_t var_7c_1 = 0;
            *var_80_1[1] = 1;
            var_7c_1 = 1;
            *var_80_1[3] = 1;
            char var_58;
            std::fs::OpenOptions::open::h877762cc5a70e8f6(&var_58, &var_88, arg4);
            
            if (!(var_58 & 1))
            {
                int32_t var_54;
                rdi_6 = var_54;
                goto label_46c27f;
            }
            
            int64_t var_50;
            result = uu_split::platform::unix::instantiate_current_writer::_$u7b$$u7b$closure$u7d$$u7d$::hd3990820a478799b(&var_68, var_50);
        }
    }
    arg1[1] = result;
    *arg1 = -0x8000000000000000;
    return result;
}
