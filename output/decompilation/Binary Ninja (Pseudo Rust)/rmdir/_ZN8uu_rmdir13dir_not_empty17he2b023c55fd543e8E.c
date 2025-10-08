
  fn uu_rmdir::dir_not_empty::he2b023c55fd543e8(arg1: *mut i64, arg2: i64) -> i64

{
    let mut var_40: i8;
    std::io::error::repr_bitpacked::decode_repr::h529219ef3c8924f7(&var_40, *arg1);
    
    match var_40
    {
        0 =>
        {
            let var_3c: i32;
            let mut var_64: i32 = var_3c;
            
            if _$LT$i32$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h6f017386ba1adf5e(&var_64) != 0
            {
                return 1;
            }
            
            if _$LT$i32$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h6f017386ba1adf5e(&var_64) != 0
            {
                let mut var_60: i64;
                std::fs::read_dir::h694648316eec7864(&var_60, arg2);
                let var_58: i8;
                
                if var_58 != 2
                {
                    let mut var_50: i64 = var_60;
                    let var_48_1: i8 = var_58;
                    _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1934f30e4eea5c14(&var_40, &var_50);
                    
                    if var_40 != 0
                    {
                        core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$std..fs..DirEntry$C$std..io..error..Error$GT$$GT$$GT$::h9957c4d1fd2b5776(&var_40);
                        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h08394fc1dd16da20(
                            &var_50);
                        
                        if var_58 == 2
                        {
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h23816e1eaac597c1(&var_60);
                        }
                        
                        return 1;
                    }
                    
                    core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$std..fs..DirEntry$C$std..io..error..Error$GT$$GT$$GT$::h9957c4d1fd2b5776(&var_40);
                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h08394fc1dd16da20(&var_50);
                    
                    if var_58 == 2
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h23816e1eaac597c1(&var_60);
                    }
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h23816e1eaac597c1(&var_60);
                }
            }
        }
    }
    
    0
}
