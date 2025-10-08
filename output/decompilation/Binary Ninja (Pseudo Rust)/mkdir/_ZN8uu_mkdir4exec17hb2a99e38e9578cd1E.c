
  fn uu_mkdir::exec::hb2a99e38e9578cd1(arg1: *mut i128, arg2: *mut c_void) -> i64

{
    let var_48: i128 = arg1[3];
    let var_58: i128 = arg1[2];
    let var_68: i128 = arg1[1];
    let mut var_78: i128 = *arg1;
    
    for let mut i: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h703678aad0b6495e(&var_78); i != 0; i = _$LT$clap_builder..parser..matches..arg_matches..ValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h703678aad0b6495e(&var_78)
    {
        let mut var_d8: *mut c_void;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h09085b3eedcee021(&var_d8, *i.byte_offset(8), *i.byte_offset(0x10));
        let r13_1: *mut c_void = var_d8;
        let mut var_d0: i64;
        let r12_1: i64 = var_d0;
        let mut var_c8: *mut *mut i64;
        let mut rax: u64;
        let mut rdx_3: *mut i64;
        rax = uu_mkdir::mkdir::hb9a94a553ced0d34(r12_1, var_c8, arg2);
        
        if rax == 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h1159a829858b625c(0, rdx_3);
        }
        else
        {
            let mut var_e8: u64 = rax;
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(rdx_3[0xb](rax));
            let mut rax_2: i64;
            let mut rdx_4: i64;
            rax_2 = uucore::util_name::h074417a1e6395129();
            let mut var_a8: i64 = rax_2;
            let var_a0_1: i64 = rdx_4;
            let mut var_98: *mut i64 = &var_a8;
            let var_90_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f8342cc4ae57580;
            let var_88_1: *mut u64 = &var_e8;
            let var_80_1: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha6320bb394ca0d6b;
            var_d8 = &data_4ede10;
            var_d0 = 3;
            let var_b8_1: i64 = 0;
            var_c8 = &var_98;
            let var_c0_1: i64 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_d8);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::had00d84193dcc420(var_e8, rdx_3);
        }
        
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h186e614367733317(r13_1, r12_1);
    }
    
    0
}
