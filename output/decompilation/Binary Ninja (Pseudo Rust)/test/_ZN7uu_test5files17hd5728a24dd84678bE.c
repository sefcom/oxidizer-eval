
  fn uu_test::files::hd5728a24dd84678b(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: *mut i8, arg7: i64) -> i64

{
    let mut var_190: ();
    std::fs::metadata::ha4b6f518b61475e4(&var_190, arg2);
    let mut var_e0: ();
    std::fs::metadata::ha4b6f518b61475e4(&var_e0, arg4);
    let mut var_450: i32;
    memcpy(&var_450, &var_190, 0xb0);
    let mut var_3a0: i64;
    memcpy(&var_3a0, &var_e0, 0xb0);
    let mut result: i64;
    
    if var_450 == 2 || var_3a0 == 2
    {
        result = core::ptr::drop_in_place$LT$$LP$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$C$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$RP$$GT$::h58d10488d8e43f37(&var_450);
        arg1[1] = 0;
        *arg1 = 7;
    }
    else
    {
        let mut var_2f0: ();
        memcpy(&var_2f0, &var_450, 0xb0);
        let mut var_240: ();
        memcpy(&var_240, &var_3a0, 0xb0);
        core::ptr::drop_in_place$LT$$LP$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$C$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$RP$$GT$::h58d10488d8e43f37(&var_450);
        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_450, arg6, arg7);
        let var_448: i64;
        let var_440: u64;
        
        if var_450 != 1
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_448, var_440, "-ef-nt-ot-n-z-b-c-d-e-f-g-G-h-k-…", 3) == 0
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_448, var_440, "-nt-ot-n-z-b-c-d-e-f-g-G-h-k-L-N…", 3) == 0
                {
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9763320142bec48(var_448, var_440, "-ot-n-z-b-c-d-e-f-g-G-h-k-L-N-O-…", 3) == 0
                    {
                        goto 'label_4595bd;
                    }
                    
                    std::fs::Metadata::modified::he3c19aa683c05d81(&var_450, &var_2f0);
                    let mut rax_6: i64;
                    let mut rdx_4: i32;
                    rax_6 = core::result::Result$LT$T$C$E$GT$::unwrap::h5c83cd2d2c8d394d(&var_450);
                    std::fs::Metadata::modified::he3c19aa683c05d81(&var_450, &var_240);
                    let mut rdx_5: i32;
                    result = core::result::Result$LT$T$C$E$GT$::unwrap::h5c83cd2d2c8d394d(&var_450);
                    
                    if rax_6 != result
                    {
                        result = rax_6 < result;
                    }
                    else
                    {
                        result = rdx_4 < rdx_5;
                    }
                    
                    arg1[1] = result;
                    *arg1 = 7;
                }
                else
                {
                    std::fs::Metadata::modified::he3c19aa683c05d81(&var_450, &var_2f0);
                    let mut rax_4: i64;
                    let mut rdx_2: i32;
                    rax_4 = core::result::Result$LT$T$C$E$GT$::unwrap::h5c83cd2d2c8d394d(&var_450);
                    std::fs::Metadata::modified::he3c19aa683c05d81(&var_450, &var_240);
                    let mut rdx_3: i32;
                    result = core::result::Result$LT$T$C$E$GT$::unwrap::h5c83cd2d2c8d394d(&var_450);
                    
                    if rax_4 != result
                    {
                        result = rax_4 > result;
                    }
                    else
                    {
                        result = rdx_2 > rdx_3;
                    }
                    
                    arg1[1] = result;
                    *arg1 = 7;
                }
            }
            else
            {
                let var_2c8: i64;
                let var_218: i64;
                let var_2d0: i64;
                let var_220: i64;
                
                if var_2c8 != var_218
                {
                    result = 0;
                }
                else
                {
                    result = var_2d0 == var_220;
                }
                arg1[1] = result;
                *arg1 = 7;
            }
        }
        else
        {
            'label_4595bd:
            var_450 = 1;
            let var_448_1: *mut i8 = arg6;
            let var_440_1: i64 = arg7;
            let var_438_1: i8 = 1;
            result = _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h47d193bf63b6bc9a(&arg1[1], &var_450);
            *arg1 = 4;
        }
    }
    
    result
}
