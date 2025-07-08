
  fn uu_mkdir::exec::h97ad3c032066465d(arg1: *mut i128, arg2: i8, arg3: i32, arg4: i8) -> i64

{
    let var_48: i128 = arg1[3];
    let var_58: i128 = arg1[2];
    let var_68: i128 = arg1[1];
    let mut var_78: i128 = *arg1;
    
    for let mut i: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3cb259793dced06b(&var_78); i != 0; i = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3cb259793dced06b(&var_78)
    {
        let mut var_c8: i128;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_c8, *i.byte_offset(8), 
            *i.byte_offset(0x10));
        let mut var_b8: *mut *mut i64;
        let rsi_1: size_t = var_b8;
        let var_e8_1: size_t = rsi_1;
        let mut var_f8: i128 = var_c8;
        let mut rax: *mut i128;
        let mut rdx_2: *mut i64;
        rax = uu_mkdir::mkdir::h25ca5a950d7e6473(*var_f8[8], rsi_1, arg2, arg3, arg4);
        
        if rax != 0
        {
            let mut var_108: *mut i128 = rax;
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(rdx_2[0xc](rax));
            let mut rax_2: i64;
            let mut rdx_3: i64;
            rax_2 = uucore::util_name::h60d842bf27b05e82();
            let mut var_d8: i64 = rax_2;
            let var_d0_1: i64 = rdx_3;
            let mut var_98: *mut i64 = &var_d8;
            let var_90_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfd6a55cddc5280de;
            let var_88_1: *mut *mut i128 = &var_108;
            let var_80_1: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hf47c6583a9945374;
            var_c8 = &data_520510;
            *var_c8[8] = 3;
            let var_a8_1: i64 = 0;
            var_b8 = &var_98;
            let var_b0_1: i64 = 2;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_c8);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h71810d9408842807(var_108, rdx_2);
        }
        
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb7551ff5f0211b82(&var_f8);
    }
    
    0
}
