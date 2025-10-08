
  int64_t uu_install::perform_backup::h71eccbd452695050(int64_t* arg1, int64_t arg2, uint64_t arg3, void* arg4)

{
    int32_t var_e0;
    std::fs::metadata::hd1e2f191d36a0fa4(&var_e0, arg2);
    int32_t rbp = var_e0;
    int64_t result = core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h8e5ba91c564dca48(&var_e0);
    
    if (rbp != 2)
    {
        int64_t* var_150;
        int64_t var_138;
        int64_t var_130;
        char var_120;
        int64_t var_d8;
        int64_t var_c8;
        
        if (*(arg4 + 0x61))
        {
            var_138 = 1;
            var_130 = arg2;
            uint64_t var_128_1 = arg3;
            var_120 = 1;
            var_150 = &var_138;
            int64_t (* var_148_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_e0 = &data_502498;
            var_d8 = 2;
            int64_t var_c0_1 = 0;
            int64_t** var_d0_1 = &var_150;
            var_c8 = 1;
            std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
        }
        
        uucore::features::backup_control::get_backup_path::hd1136aea6807a071(&var_150, 
            *(arg4 + 0x67), arg2, arg3, *(arg4 + 8), *(arg4 + 0x10));
        
        if (var_150 != -0x8000000000000000)
        {
            int64_t rax = std::fs::rename::hd36dae249ba265a0(arg2, arg3, &var_150);
            int64_t var_f8 = arg2;
            uint64_t var_f0_1 = arg3;
            int64_t** var_e8_1 = &var_150;
            
            if (rax)
            {
                uu_install::perform_backup::_$u7b$$u7b$closure$u7d$$u7d$::h202386b539bdbc0f(
                    &var_138, &var_f8, rax);
                int64_t var_100;
                int64_t var_a8_1 = var_100;
                int128_t var_110;
                int128_t var_b8_1 = var_110;
                var_c8 = var_120;
                var_d8 = var_130;
                var_e0 = var_138;
                arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_e0);
                arg1[2] = &data_502208;
                *arg1 = -0x7fffffffffffffff;
                return core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h1b9f1de4ce9f7be6(&var_150);
            }
        }
        
        int64_t result_1;
        result = result_1;
        arg1[2] = result;
        *arg1 = var_150;
    }
    else
        *arg1 = -0x8000000000000000;
    
    return result;
}
