
  fn uu_pr::recreate_arguments::hbe43c308ac861d0c(arg1: *mut i64, arg2: *mut i128, arg3: i64) -> *mut i64

{
    let mut var_188: *mut i128;
    regex::regex::string::Regex::new::h2b022f3b326b0361(&var_188, 
        "^[-+]\d+.*src/uu/pr/src/pr.rs^[^…");
    let mut var_78: ();
    core::result::Result$LT$T$C$E$GT$::unwrap::h8fa19f49ce20910d(&var_78, &var_188);
    regex::regex::string::Regex::new::h2b022f3b326b0361(&var_188, 
        "^[^-]\d*$^-n\s*$\n argument -can…");
    let mut var_f8: *mut c_void;
    core::result::Result$LT$T$C$E$GT$::unwrap::h8fa19f49ce20910d(&var_f8, &var_188);
    regex::regex::string::Regex::new::h2b022f3b326b0361(&var_188, 
        "^-n\s*$\n argument -cannot speci…");
    let mut var_c0: ();
    core::result::Result$LT$T$C$E$GT$::unwrap::h8fa19f49ce20910d(&var_c0, &var_188);
    let mut var_150: ();
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1f2362dded9f9c75(&var_150, arg2, 
        arg3);
    var_188 = arg2;
    let var_180: *mut c_void = arg2.byte_offset(arg3 * 0x18);
    let mut rax_3: *mut c_void;
    let mut rdx_5: i64;
    rax_3 = itertools::Itertools::find_position::hd482090938159e21(&var_188, &var_c0);
    
    if rdx_5 != 0 && rax_3.byte_offset(1) < arg3
    {
        let rax_5: *mut c_void = rax_3.byte_offset(1) * 3;
        let var_f0: *mut c_void;
        
        if regex::regex::string::Regex::is_match_at::ha92ef8a3ebc0bbf1(var_f8, var_f0, 
            *arg2.byte_offset(rax_5 << 3).byte_offset(8), 
            *arg2.byte_offset(rax_5 << 3).byte_offset(0x10)) == 0
        {
            let mut var_128: i128;
            alloc::vec::Vec$LT$T$C$A$GT$::remove::hcb952d79c903d6d5(&var_128, &var_150, 
                rax_3.byte_offset(1));
            let mut var_a0: ();
            _$LT$uu_pr..NumberingMode$u20$as$u20$core..default..Default$GT$::default::h62d70fa0066756c7(&var_a0);
            let mut var_88: ();
            let mut var_138: *mut c_void = &var_88;
            let var_130_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            var_188 = &data_466c10;
            let var_180_1: i64 = 1;
            let var_168_1: i64 = 0;
            let var_178_1: *mut *mut c_void = &var_138;
            let var_170_1: i64 = 1;
            let mut var_110: i128;
            core::option::Option$LT$T$GT$::map_or_else::h4ea8d69383c77fdd(&var_110, &var_188);
            core::ptr::drop_in_place$LT$uu_pr..NumberingMode$GT$::h7b44dbe916af3d67(&var_a0);
            let mut var_d8: i128 = var_110;
            let var_100: i64;
            let var_c8_1: i64 = var_100;
            alloc::vec::Vec$LT$T$C$A$GT$::insert::h9498b545ee6f0c26(&var_150, rax_3.byte_offset(1), 
                &var_d8);
            let var_118: i64;
            let var_178_2: i64 = var_118;
            var_188 = var_128;
            alloc::vec::Vec$LT$T$C$A$GT$::insert::h9498b545ee6f0c26(&var_150, rax_3.byte_offset(2), 
                &var_188);
        }
    }
    
    let mut var_58: ();
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hc20ab2c0828df040(&var_58, &var_150);
    let var_38: *mut c_void = &var_78;
    alloc::vec::in_place_collect::_$LT$impl$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$u20$for$u20$alloc..vec..Vec$LT$T$GT$$GT$::from_iter::h5ab0a96f081d00df(arg1, &var_58);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::had11a4c52115c130(&var_c0);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::had11a4c52115c130(&var_f8);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::had11a4c52115c130(&var_78);
    arg1
}
