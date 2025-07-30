
  fn FakeCrypt::fileops::decrypt_directory::h7bfbee2fc08c838d(arg1: i64, arg2: i64, arg3: *mut i128, arg4: i64) -> i64

{
    let mut var_120: i64;
    std::fs::read_dir::ha0facb67eaa83156(&var_120, arg1);
    let var_118: i8;
    
    if var_118 != 2
    {
        let rcx: i64 = var_120;
        let mut var_a0: i64 = 0;
        let var_70_1: i64 = 0;
        let var_40_1: i64 = rcx;
        let var_38_1: i8 = var_118;
        
        loop
        {
            let mut var_c8: i64;
            _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h649188f1314bf01a(&var_c8, &var_a0);
            
            if var_c8 == 0
            {
                break;
            }
            
            let var_a8: i64;
            let var_d8_1: i64 = var_a8;
            let var_b8: i128;
            let var_e8_1: i128 = var_b8;
            let mut var_f8: i128 = var_c8;
            let mut var_110: ();
            std::fs::DirEntry::path::h0d0e35cdc38feba2(&var_110, &var_f8);
            let var_108: i64;
            let var_100: u64;
            
            if std::path::Path::is_dir::hf801d9cfeb23f5db(var_108, var_100) == 0
            {
                FakeCrypt::fileops::decrypt_file::h141057e80aed468c(var_108, var_100, arg3, arg4);
            }
            else
            {
                FakeCrypt::fileops::decrypt_directory::h7bfbee2fc08c838d(var_108, var_100, arg3, 
                    arg4);
            }
            
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hff597253ed3a0574(&var_110);
            core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h51ac40c013d79d1e(&var_f8);
        }
        
        let result: i64 = core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::h0f0420560c044b1b(&var_a0);
        
        if var_118 != 2
        {
            return result;
        }
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h798bf9b3fb5da4e8(&var_120)
}
