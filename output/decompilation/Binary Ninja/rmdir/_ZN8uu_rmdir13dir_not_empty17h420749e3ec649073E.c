
  int64_t uu_rmdir::dir_not_empty::h420749e3ec649073(int64_t* arg1, int64_t arg2)

{
    char var_40;
    std::io::error::repr_bitpacked::decode_repr::hedd3daa8681b9515(&var_40, *arg1);
    
    switch (jump_table_41be04[var_40])
    {
        case 0x8e775:
        {
            int32_t var_3c;
            int32_t var_64 = var_3c;
            
            if (_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h957028a6968e8235(&var_64, &data_413270, 2))
                return 1;
            
            if (_$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::h957028a6968e8235(&var_64, "\r", 4))
            {
                int64_t var_60;
                std::fs::read_dir::h2b61e1d1df1a81fa(&var_60, arg2);
                char var_58;
                
                if (var_58 != 2)
                {
                    int64_t var_50 = var_60;
                    char var_48_1 = var_58;
                    _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h153c1e0177592fe2(&var_40, &var_50);
                    
                    if (var_40)
                    {
                        core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$std..fs..DirEntry$C$std..io..error..Error$GT$$GT$$GT$::he3807c451e86c257(&var_40);
                        core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::hfbd8c7f16526e0a8(
                            &var_50);
                        
                        if (var_58 != 2)
                            return 1;
                        
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h89062e87e16688ba(&var_60);
                        return 1;
                    }
                    
                    core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$std..fs..DirEntry$C$std..io..error..Error$GT$$GT$$GT$::he3807c451e86c257(&var_40);
                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::hfbd8c7f16526e0a8(&var_50);
                    
                    if (var_58 == 2)
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h89062e87e16688ba(&var_60);
                }
                else
                    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h89062e87e16688ba(&var_60);
            }
            break;
        }
    }
    
    return 0;
}
