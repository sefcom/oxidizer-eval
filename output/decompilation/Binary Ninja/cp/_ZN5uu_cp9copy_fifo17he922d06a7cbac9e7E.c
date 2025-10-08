
  int64_t uu_cp::copy_fifo::he922d06a7cbac9e7(int64_t* arg1, char* arg2, int64_t arg3, char arg4, char arg5)

{
    int32_t var_e0;
    std::fs::metadata::h87a95e5fd9b91fc7(&var_e0, arg2);
    int32_t rbp = var_e0;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he37bb0d8b54bbf24(&var_e0);
    int64_t result;
    
    if (rbp != 2)
    {
        uu_cp::OverwriteMode::verify::hcf2d8eaa11706b21(&var_e0, arg4, arg2, arg3, arg5);
        
        if (var_e0 != -0x7ffffffffffffff4)
        {
            int64_t result_1;
            result = result_1;
            arg1[6] = result;
            int128_t zmm0_2 = var_e0;
            int128_t var_c0;
            *(arg1 + 0x20) = var_c0;
            int128_t var_d0;
            *(arg1 + 0x10) = var_d0;
            *arg1 = zmm0_2;
        }
        else
        {
            result = std::fs::remove_file::h19277b2d7a4f8643(arg2);
            
            if (!result)
                goto label_4a52b6;
            
            *arg1 = -0x7fffffffffffffff;
            arg1[1] = result;
        }
    }
    else
    {
        label_4a52b6:
        result = uucore::features::fs::make_fifo::hb14eabe17aca9891(arg2, arg3);
        
        if (result)
            /* tailcall */
            return uu_cp::copy_fifo::_$u7b$$u7b$closure$u7d$$u7d$::hda26bf9394832a9b(arg1, arg2, 
                arg3, result);
        
        *arg1 = -0x7ffffffffffffff4;
    }
    
    return result;
}
