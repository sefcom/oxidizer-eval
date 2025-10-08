
  int64_t uu_test::files::hd5728a24dd84678b(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, char* arg6, int64_t arg7)

{
    void var_190;
    std::fs::metadata::ha4b6f518b61475e4(&var_190, arg2);
    void var_e0;
    std::fs::metadata::ha4b6f518b61475e4(&var_e0, arg4);
    int32_t var_450;
    memcpy(&var_450, &var_190, 0xb0);
    int64_t var_3a0;
    memcpy(&var_3a0, &var_e0, 0xb0);
    int64_t result;
    
    if (var_450 == 2 || var_3a0 == 2)
    {
        result = core::ptr::drop_in_place$LT$$LP$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$C$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$RP$$GT$::h58d10488d8e43f37(&var_450);
        arg1[1] = 0;
        *arg1 = 7;
    }
    else
    {
        void var_2f0;
        memcpy(&var_2f0, &var_450, 0xb0);
        void var_240;
        memcpy(&var_240, &var_3a0, 0xb0);
        core::ptr::drop_in_place$LT$$LP$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$C$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$RP$$GT$::h58d10488d8e43f37(&var_450);
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_450, arg6, arg7);
        int64_t var_448;
        uint64_t var_440;
        
        if (var_450 != 1)
        {
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_448, var_440, "-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-…", 3))
            {
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_448, var_440, "-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N…", 3))
                {
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_448, var_440, "-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-…", 3))
                        goto label_4595bd;
                    
                    std::fs::Metadata::modified::he3c19aa683c05d81(&var_450, &var_2f0);
                    int64_t rax_6;
                    int32_t rdx_4;
                    rax_6 = core::result::Result$LT$T$C$E$GT$::unwrap::h5c83cd2d2c8d394d(&var_450);
                    std::fs::Metadata::modified::he3c19aa683c05d81(&var_450, &var_240);
                    int32_t rdx_5;
                    result = core::result::Result$LT$T$C$E$GT$::unwrap::h5c83cd2d2c8d394d(&var_450);
                    
                    if (rax_6 != result)
                        result = rax_6 < result;
                    else
                        result = rdx_4 < rdx_5;
                    
                    arg1[1] = result;
                    *arg1 = 7;
                }
                else
                {
                    std::fs::Metadata::modified::he3c19aa683c05d81(&var_450, &var_2f0);
                    int64_t rax_4;
                    int32_t rdx_2;
                    rax_4 = core::result::Result$LT$T$C$E$GT$::unwrap::h5c83cd2d2c8d394d(&var_450);
                    std::fs::Metadata::modified::he3c19aa683c05d81(&var_450, &var_240);
                    int32_t rdx_3;
                    result = core::result::Result$LT$T$C$E$GT$::unwrap::h5c83cd2d2c8d394d(&var_450);
                    
                    if (rax_4 != result)
                        result = rax_4 > result;
                    else
                        result = rdx_2 > rdx_3;
                    
                    arg1[1] = result;
                    *arg1 = 7;
                }
            }
            else
            {
                int64_t var_2c8;
                int64_t var_218;
                int64_t var_2d0;
                int64_t var_220;
                
                if (var_2c8 != var_218)
                    result = 0;
                else
                    result = var_2d0 == var_220;
                arg1[1] = result;
                *arg1 = 7;
            }
        }
        else
        {
            label_4595bd:
            var_450 = 1;
            char* var_448_1 = arg6;
            int64_t var_440_1 = arg7;
            char var_438_1 = 1;
            result = _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h47d193bf63b6bc9a(&arg1[1], &var_450);
            *arg1 = 4;
        }
    }
    
    return result;
}
