
  int64_t uu_sort::tmp_dir::remove_tmp_dir::hb29bcebd506123fb(int64_t arg1)

{
    int64_t var_130;
    std::fs::read_dir::h88d360110f1c898c(&var_130, arg1);
    char var_128;
    
    if (var_128 == 2)
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h754fa70ba625a57e(&var_130);
    else
    {
        int64_t rsi;
        int64_t var_118_1 = rsi;
        int64_t rcx_1 = var_130;
        int64_t var_b8 = 0;
        int64_t var_88_1 = 0;
        int64_t var_58_1 = rcx_1;
        char var_50_1 = var_128;
        
        while (true)
        {
            int64_t var_e0;
            _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h30eeda6b5a39150f(&var_e0, &var_b8);
            
            if (!var_e0)
                break;
            
            int64_t var_c0;
            int64_t var_e8_1 = var_c0;
            int128_t var_d0;
            int128_t var_f8_1 = var_d0;
            int128_t var_108 = var_e0;
            void var_48;
            std::fs::DirEntry::path::h5b1bdb0f1090af27(&var_48, &var_108);
            char const (** var_110)[0x84] = std::fs::remove_file::he37f30a9858e45d8(&var_48);
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hf659f53abfc6eaaa(&var_110);
            core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h89d34a4c50312286(&var_108);
        }
        
        core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::hd0b6e5634b978dd8(&var_b8);
        
        if (var_128 == 2)
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h754fa70ba625a57e(&var_130);
    }
    
    return std::fs::remove_dir::h42b234ef27cdf199(arg1);
}
