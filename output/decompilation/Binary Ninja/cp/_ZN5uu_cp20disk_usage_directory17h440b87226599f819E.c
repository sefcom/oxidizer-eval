
  int64_t uu_cp::disk_usage_directory::h440b87226599f819(int64_t arg1)

{
    int64_t var_e0;
    std::fs::read_dir::h8e79f9b54e02cd93(&var_e0, arg1);
    char var_d8;
    
    if (var_d8 != 2)
    {
        int64_t var_148 = var_e0;
        char var_140_1 = var_d8;
        int64_t rbx = 0;
        
        while (true)
        {
            int64_t var_110;
            _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h153c1e0177592fe2(&var_110, &var_148);
            
            if (!var_110)
            {
                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h9fae80e55e0d42e2(&var_148);
                return 0;
            }
            
            int64_t var_108;
            
            if (!var_108)
                break;
            
            int64_t var_e8;
            int64_t var_118_1 = var_e8;
            int128_t var_f8;
            int128_t var_128_1 = var_f8;
            int64_t var_138 = var_108;
            int64_t var_100;
            int64_t var_130_1 = var_100;
            std::fs::DirEntry::file_type::hd81c8483f7ba6043(&var_e0, &var_138);
            
            if (!var_e0)
            {
                int64_t rbp_1;
                
                if ((*var_e0[4] & 0xf000) != 0x4000)
                {
                    std::fs::DirEntry::metadata::h92d6a6465cae443d(&var_e0, &var_138);
                    
                    if (var_e0 != 2)
                    {
                        int64_t var_90;
                        rbp_1 = var_90;
                        label_508b9e:
                        core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::hb26f2e4edf913520(
                            &var_138);
                        rbx += rbp_1;
                        continue;
                    }
                }
                else
                {
                    std::fs::DirEntry::path::h5b1bdb0f1090af27(&var_e0, &var_138);
                    int64_t var_d0;
                    int64_t rax_4;
                    int64_t rdx_2;
                    rax_4 = uu_cp::disk_usage_directory::h440b87226599f819(var_d8, var_d0);
                    rbp_1 = rdx_2;
                    
                    if (!rax_4)
                    {
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(
                            &var_e0);
                        goto label_508b9e;
                    }
                    
                    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha8df8090ff0f5f1e(&var_e0);
                }
            }
            
            core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::hb26f2e4edf913520(&var_138);
            break;
        }
        
        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h9fae80e55e0d42e2(&var_148);
    }
    
    return 1;
}
