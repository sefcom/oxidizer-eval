
  int64_t uu_dd::finalize::hab8d4b3fb7143922(int64_t* arg1, int128_t* arg2, int64_t* arg3, int64_t arg4, int32_t arg5, int64_t* arg6, int64_t* arg7, char arg8)

{
    int64_t var_128 = arg4;
    int32_t var_120 = arg5;
    int64_t var_f8;
    uu_dd::BlockWriter::flush::h48e8ffbb5b89f6d9(&var_f8, arg1);
    int64_t result;
    int64_t result_1;
    
    if (!var_f8)
    {
        int64_t result_2 = uu_dd::BlockWriter::sync::h52e1c4b01c44f80e(arg1);
        result = result_2;
        
        if (!result_2)
        {
            if (arg8)
                uu_dd::BlockWriter::truncate::haed78b6dd922a309(arg1);
            
            int32_t zmm0_2[0x4] = *(arg3 + 0x10);
            int64_t rbp = *arg3;
            int64_t r13_1 = arg3[1];
            int64_t rax_4;
            int32_t rdx;
            rax_4 = std::time::Instant::elapsed::hd84d976472e03263(&var_128);
            int32_t var_d8[0x4];
            int32_t zmm2_1[0x4] = __paddq_xmmdq_memdq(zmm0_2, var_d8);
            int128_t var_78_1 = arg2[1];
            int128_t var_88_1 = *arg2;
            int64_t var_e8;
            int64_t var_68_1 = rbp + var_e8;
            int64_t var_e0;
            int64_t var_60_1 = r13_1 + var_e0;
            int32_t var_58_1[0x4] = zmm2_1;
            int64_t var_98 = rax_4;
            int32_t var_90_1 = rdx;
            char var_48_1 = 2;
            std::sync::mpmc::Sender$LT$T$GT$::send::hf546e8e151154c35(&var_f8, arg6, &var_98);
            int64_t var_e8_1 = arg7[2];
            var_f8 = *arg7;
            int64_t rax_6;
            int64_t rdx_2;
            rax_6 = std::thread::JoinInner$LT$T$GT$::join::h1c3eb576eba2d71f(&var_f8);
            core::result::Result$LT$T$C$E$GT$::expect::h4f1d3531bd9b092b(rax_6);
            core::ptr::drop_in_place$LT$uu_dd..BlockWriter$GT$::h048e0304ba11ba1f(arg1);
            return 0;
        }
    }
    else
        result = result_1;
    core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$$RP$$GT$$GT$::h34f9f794f4847285(
        arg7);
    core::ptr::drop_in_place$LT$uu_dd..BlockWriter$GT$::h048e0304ba11ba1f(arg1);
    return result;
}
