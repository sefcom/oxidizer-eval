
  fn uu_cp::disk_usage_directory::h3351dc16d0087e4c(arg1: i64) -> i64

{
    let mut var_e0: i64;
    std::fs::read_dir::h838a5ba9b74fdd2d(&var_e0, arg1);
    let var_d8: i8;
    
    if var_d8 == 2
    {
        return 1;
    }
    
    let mut var_150: i64 = var_e0;
    let var_148_1: i8 = var_d8;
    let mut rbx: i64 = 0;
    
    loop
    {
        let mut var_110: i32;
        _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1934f30e4eea5c14(&var_110, &var_150);
        
        if var_110 != 1
        {
            core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h9522cfa7dfdafb0e(&var_150);
            return 0;
        }
        
        let var_108: i64;
        
        if var_108 == 0
        {
            break;
        }
        
        let var_e8: i64;
        let var_118_1: i64 = var_e8;
        let var_f8: i128;
        let var_128_1: i128 = var_f8;
        let mut var_138: i64 = var_108;
        let var_100: i64;
        let var_130_1: i64 = var_100;
        std::fs::DirEntry::file_type::h795bcf7de2117d2f(&var_e0, &var_138);
        
        if var_e0 != 1
        {
            let mut rbp_1: i64;
            
            if (*var_e0[4] & 0xf000) != 0x4000
            {
                std::fs::DirEntry::metadata::h185bce2ef1f407a2(&var_e0, &var_138);
                
                if var_e0 != 2
                {
                    let var_90: i64;
                    rbp_1 = var_90;
                    'label_4a5904:
                    core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h4404dc5c4a55a110(&var_138);
                    rbx += rbp_1;
                    continue;
                }
            }
            else
            {
                std::fs::DirEntry::path::hc95af67dccb42f03(&var_e0, &var_138);
                let var_d0: i64;
                let mut rax_5: i8;
                let mut rdx_1: i64;
                rax_5 = uu_cp::disk_usage_directory::h3351dc16d0087e4c(var_d8, var_d0);
                rbp_1 = rdx_1;
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h80f4faf291cc80af(&var_e0);
                
                if (rax_5 & 1) == 0
                {
                    goto 'label_4a5904;
                }
            }
        }
        
        core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h4404dc5c4a55a110(&var_138);
        break;
    }
    
    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h9522cfa7dfdafb0e(&var_150);
    1
}
