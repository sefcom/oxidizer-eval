
  fn uu_cp::disk_usage_directory::h440b87226599f819(arg1: i64) -> i64

{
    let mut var_e0: i64;
    std::fs::read_dir::h8e79f9b54e02cd93(&var_e0, arg1);
    let var_d8: i8;
    
    if var_d8 != 2
    {
        let mut var_148: i64 = var_e0;
        let var_140_1: i8 = var_d8;
        let mut rbx: i64 = 0;
        
        loop
        {
            let mut var_110: i64;
            _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h153c1e0177592fe2(&var_110, &var_148);
            
            if var_110 == 0
            {
                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h9fae80e55e0d42e2(&var_148);
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
            std::fs::DirEntry::file_type::hd81c8483f7ba6043(&var_e0, &var_138);
            
            if var_e0 == 0
            {
                let mut rbp_1: i64;
                
                if (*var_e0[4] & 0xf000) != 0x4000
                {
                    std::fs::DirEntry::metadata::h92d6a6465cae443d(&var_e0, &var_138);
                    
                    if var_e0 != 2
                    {
                        let var_90: i64;
                        rbp_1 = var_90;
                        'label_508b9e:
                        core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::hb26f2e4edf913520(
                            &var_138);
                        rbx += rbp_1;
                        continue;
                    }
                }
                else
                {
                    std::fs::DirEntry::path::h5b1bdb0f1090af27(&var_e0, &var_138);
                    let var_d0: i64;
                    let mut rax_4: i64;
                    let mut rdx_2: i64;
                    rax_4 = uu_cp::disk_usage_directory::h440b87226599f819(var_d8, var_d0);
                    rbp_1 = rdx_2;
                    
                    if rax_4 == 0
                    {
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(
                            &var_e0);
                        goto 'label_508b9e;
                    }
                    
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_e0);
                }
            }
            
            core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::hb26f2e4edf913520(&var_138);
            break;
        }
        
        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h9fae80e55e0d42e2(&var_148);
    }
    
    1
}
