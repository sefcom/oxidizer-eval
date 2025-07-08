
  fn uu_truncate::truncate_reference_and_size::h4e3270fcd25f5342(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: *mut *mut [i8; 0x11], arg6: i64, arg7: i8) -> *mut i128

{
    let mut var_158: i32;
    uu_truncate::parse_mode_and_size::hbf18cbb89603c372(&var_158, arg3, arg4);
    let var_148: i128;
    let mut var_e8: *mut *mut [i8; 0x11];
    
    if var_158 != 3
    {
        let var_118_1: i128 = var_148;
        let mut var_128: i128 = var_158;
        let mut var_138: *mut i128 = &var_128;
        let var_130_1: fn(arg1: i64, arg2: *mut c_void) -> i64 = _$LT$uucore..parser..parse_size..ParseSizeError$u20$as$u20$core..fmt..Display$GT$::fmt::h1bebe12c07ded6a0;
        var_e8 = &data_516668;
        let var_e0_1: i64 = 1;
        let var_c8_1: i64 = 0;
        let var_d8_1: *mut *mut i128 = &var_138;
        let mut var_d0_1: i64 = 1;
        let mut var_100: i128;
        core::option::Option$LT$T$GT$::map_or_else::ha526a84f6413e2dc(&var_100, &var_e8);
        var_d0_1 = 1;
        var_e8 = var_100;
        let var_f0: i64;
        let var_d8_2: i64 = var_f0;
        let rax_1: *mut i128 = alloc::boxed::Box$LT$T$GT$::new::h2e09ae21cbeee3ec(&var_e8);
        core::ptr::drop_in_place$LT$uucore..parser..parse_size..ParseSizeError$GT$::hd9babfdf21675581(&var_128);
        return rax_1;
    }
    
    let var_150: i64;
    let mut i: *mut i128;
    let mut rdx_4: u64;
    let mut rsi_4: *const i8;
    
    if var_150 == 0
    {
        rsi_4 = "you must specify a relative '--s…";
        rdx_4 = 0x37;
        'label_4adc2a:
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h40f585cb9c895814(&var_e8, 
            rsi_4, rdx_4);
        let mut var_d0: i64;
        var_d0 = 1;
        i = alloc::boxed::Box$LT$T$GT$::new::h2e09ae21cbeee3ec(&var_e8);
    }
    else
    {
        let rbp_1: i64 = var_148;
        
        if (var_150 == 5 || var_150 == 6) && rbp_1 == 0
        {
            rsi_4 = &data_413ba0[0x10];
            rdx_4 = 0x10;
            goto 'label_4adc2a;
        }
        
        std::fs::metadata::h6368ec5e748c38e4(&var_e8, arg1);
        let var_e0: i64;
        
        if var_e8 == 2
        {
            return uu_truncate::truncate_reference_and_size::_$u7b$$u7b$closure$u7d$$u7d$::h76112823d9285587(arg1, arg2, var_e0);
        }
        let var_98: i64;
        let rax_2: i64 =
            uu_truncate::TruncateMode::to_size::h56da67cab21ebb4e(var_150, rbp_1, var_98);
        var_e8 = arg5;
        let var_e0_2: *mut c_void = &arg5[arg6 * 3];
        
        do
        {
            let rax_5: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0f1a2111712b44af(&var_e8);
            
            if rax_5 == 0
            {
                return nullptr;
            }
            
            i = uu_truncate::file_truncate::h8689dfa8e5b80143(*rax_5.byte_offset(8), 
                *rax_5.byte_offset(0x10), arg7, rax_2);
        } while i == 0;
    }
    i
}
