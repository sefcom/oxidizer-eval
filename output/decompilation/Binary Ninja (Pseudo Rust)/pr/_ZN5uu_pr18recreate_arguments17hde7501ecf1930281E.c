
  fn uu_pr::recreate_arguments::hde7501ecf1930281(arg1: *mut i64, arg2: *mut c_void, arg3: i64) -> *mut i64

{
    let mut var_150: *mut c_void;
    regex::regex::string::Regex::new::h830f62d081924685(&var_150, 
        "^[-+]\d+.*src/uu/pr/src/pr.rs^[^…");
    let mut var_68: ();
    core::result::Result$LT$T$C$E$GT$::unwrap::he4d140c960df2cf7(&var_68, &var_150);
    regex::regex::string::Regex::new::h830f62d081924685(&var_150, 
        "^[^-]\d*$^-n\s*$\n argument -can…");
    let mut var_c0: *mut c_void;
    core::result::Result$LT$T$C$E$GT$::unwrap::he4d140c960df2cf7(&var_c0, &var_150);
    regex::regex::string::Regex::new::h830f62d081924685(&var_150, 
        "^-n\s*$\n argument -cannot speci…");
    let mut var_a0: ();
    core::result::Result$LT$T$C$E$GT$::unwrap::he4d140c960df2cf7(&var_a0, &var_150);
    let mut var_120: ();
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7380502240c976a2(&var_120, arg2, arg3);
    var_150 = arg2;
    let var_148: *mut c_void = arg2.byte_offset(arg3 * 0x18);
    let mut rax_3: *mut c_void;
    let mut rdx_4: i64;
    rax_3 = itertools::Itertools::find_position::h04a53920b67462d7(&var_150, &var_a0);
    
    if rdx_4 != 0 && rax_3.byte_offset(1) < arg3
    {
        let rax_5: *mut c_void = rax_3.byte_offset(1) * 3;
        let rsi_5: i64 = *arg2.byte_offset(rax_5 << 3).byte_offset(0x10);
        var_150 = 0;
        let var_148_1: i64 = *arg2.byte_offset(rax_5 << 3).byte_offset(8);
        let var_138_1: i64 = 0;
        let var_128_1: i8 = 1;
        regex_automata::util::search::Input::set_span::hcd8fa69f9dbde1ae(&var_150);
        let zmm0_1: i128 = var_150;
        let var_d8_1: i128 = rsi_5;
        let mut var_e8: i128 = rsi_5;
        let mut var_f8: i128 = zmm0_1;
        let var_b8: *mut c_void;
        regex_automata::meta::regex::Regex::search_half::h3686cea544a747ff(&var_150, var_c0, 
            var_b8, &var_f8);
        
        if (var_150 & 1) == 0
        {
            let mut var_80: ();
            alloc::vec::Vec$LT$T$C$A$GT$::remove::h2e81c17629bf526a(&var_80, &var_120, 
                rax_3.byte_offset(1));
            _$LT$uu_pr..NumberingMode$u20$as$u20$core..default..Default$GT$::default::hd7c807d30f792e21(&var_f8);
            let mut var_108: *mut c_void = &*var_e8[8];
            let var_100_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
            var_150 = &data_451320;
            let var_148_2: i64 = 1;
            let var_130_2: i64 = 0;
            let var_140_2: *mut *mut c_void = &var_108;
            let var_138_2: i64 = 1;
            let mut var_48: ();
            core::option::Option$LT$T$GT$::map_or_else::ha768742fd52e18ba(&var_48, &var_150);
            core::ptr::drop_in_place$LT$uu_pr..NumberingMode$GT$::h50ed004e0d36ef9c(&var_f8);
            alloc::vec::Vec$LT$T$C$A$GT$::insert::hb6c6ac49912c548c(&var_120, rax_3.byte_offset(1), 
                &var_48);
            alloc::vec::Vec$LT$T$C$A$GT$::insert::hb6c6ac49912c548c(&var_120, rax_3.byte_offset(2), 
                &var_80);
        }
    }
    
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0b8c6871f9c67703(&var_150, &var_120);
    let var_130_3: *mut c_void = &var_68;
    core::iter::traits::iterator::Iterator::collect::h9a67a3d05b8d56fb(arg1, &var_150);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::ha9f17d283cda3393(&var_a0);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::ha9f17d283cda3393(&var_c0);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::ha9f17d283cda3393(&var_68);
    arg1
}
