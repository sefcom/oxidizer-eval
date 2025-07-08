
  fn uu_sort::tmp_dir::remove_tmp_dir::hb29bcebd506123fb(arg1: i64) -> i64

{
    let mut var_130: i64;
    std::fs::read_dir::h88d360110f1c898c(&var_130, arg1);
    let var_128: i8;
    
    if var_128 == 2
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h754fa70ba625a57e(&var_130);
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
            _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h30eeda6b5a39150f(&var_e0, &var_b8);
            
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
            std::fs::DirEntry::path::h5b1bdb0f1090af27(&var_48, &var_108);
            let mut var_110: *mut *mut [i8; 0x84] =
                std::fs::remove_file::he37f30a9858e45d8(&var_48);
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hf659f53abfc6eaaa(&var_110);
            core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h89d34a4c50312286(&var_108);
        }
        
        core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::hd0b6e5634b978dd8(&var_b8);
        
        if var_128 == 2
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::h754fa70ba625a57e(&var_130);
        }
    }
    
    std::fs::remove_dir::h42b234ef27cdf199(arg1)
}
