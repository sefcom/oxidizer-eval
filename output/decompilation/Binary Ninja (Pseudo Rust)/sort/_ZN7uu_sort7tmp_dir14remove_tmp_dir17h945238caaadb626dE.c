
  fn uu_sort::tmp_dir::remove_tmp_dir::h945238caaadb626d(arg1: i64) -> i64

{
    let mut var_130: i64;
    std::fs::read_dir::h96270c70a9a8cf3d(&var_130, arg1);
    let var_128: i8;
    
    if var_128 == 2
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h5da5ad104d0feb63(&var_130);
    }
    else
    {
        let rsi: i64;
        let var_118_1: i64 = rsi;
        let rcx_1: i64 = var_130;
        let mut var_b8: i64 = 0;
        let var_88_1: i64 = 0;
        let var_58_1: i64 = rcx_1;
        let var_50_1: i8 = var_128;
        
        loop
        {
            let mut var_e0: i64;
            _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a1999b20f3a9de8(&var_e0, &var_b8);
            
            if var_e0 == 0
            {
                break;
            }
            
            let var_c0: i64;
            let var_e8_1: i64 = var_c0;
            let var_d0: i128;
            let var_f8_1: i128 = var_d0;
            let mut var_108: i128 = var_e0;
            let mut var_48: ();
            std::fs::DirEntry::path::hc95af67dccb42f03(&var_48, &var_108);
            let mut var_110: *mut *mut c_void = std::fs::remove_file::h97e67b8594bf1a0f(&var_48);
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hcd5997102e6004cd(&var_110);
            core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h77d9d366fd2b4630(&var_108);
        }
        
        core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::hc001eaa845d9470d(&var_b8);
        
        if var_128 == 2
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h5da5ad104d0feb63(&var_130);
        }
    }
    
    std::fs::remove_dir::hdd800b47d2b7ecf2(arg1)
}
