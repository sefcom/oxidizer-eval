
  fn alacritty::display::content::RenderableContent::new::hf4e6e038e845e91d(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void, arg4: *mut c_void, arg5: *mut i128) -> *mut c_void

{
    let mut r13: i64 = -0x7fffffffffffffff;
    let mut var_150: i64;
    let mut var_140: i64;
    
    if _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(*arg5, data_4e8640)) != 0xffff
    {
        let mut var_78: ();
        alacritty::display::hint::visible_regex_match_iter::h3b713c9c9910fb82(&var_78, arg4, arg5);
        let mut var_110: i64;
        core::iter::traits::iterator::Iterator::collect::h1825dbe1f36682d5(&var_110, &var_78);
        r13 = var_110;
        let var_108: i64;
        var_150 = var_108;
        let var_100: i64;
        var_140 = var_100;
    }
    
    let rax_3: i8 = arg5[0x116];
    let mut var_f8: i32;
    alacritty_terminal::term::RenderableContent::new::hc5b72ca633d74e55(&var_f8, arg4);
    let mut var_152: i8 = 4;
    let var_b0: i8;
    
    if var_b0 != 4 && *arg3.byte_offset(0x836) == 0
        && alacritty::event::SearchState::regex::h987f2ff06a62c5a5(arg5) == 0
        && *arg3.byte_offset(0x2d0) == 2
    {
        if *arg4.byte_offset(0x6e2) == 0
        {
            var_152 = 3;
        }
        
        if *arg4.byte_offset(0x6e2) != 0 || *arg2.byte_offset(0x3d9) == 0
        {
            var_152 = var_b0;
        }
    }
    
    let var_b8: i32;
    let r15_2: i32 = var_b8 + var_f8;
    
    if var_b8 + var_f8 < 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let mut var_138: *mut c_void;
    let mut var_130: i64;
    let mut var_128: i64;
    let mut r13_1: i64;
    
    if *arg3.byte_offset(0x478) == 0
    {
        r13_1 = -0x7fffffffffffffff;
    }
    else
    {
        alacritty::display::hint::HintState::update_matches::h4cd609f91e40cc38(
            arg3.byte_offset(0x418), arg4);
        var_130 = *arg3.byte_offset(0x438);
        var_128 = *arg3.byte_offset(0x440);
        var_138 = arg3.byte_offset(0x448);
        r13_1 = -0x8000000000000000;
    }
    
    let mut r15_3: *mut c_void = nullptr;
    
    if rax_3 != 2
    {
        r15_3 = &arg5[0x114];
    }
    
    alacritty::display::content::RenderableCursor::new_hidden::h277801ded5827119(&arg1[0x19]);
    let var_88: i128;
    *arg1.byte_offset(0xb8) = var_88;
    let var_98: i128;
    *arg1.byte_offset(0xa8) = var_98;
    let var_a8: i128;
    *arg1.byte_offset(0x98) = var_a8;
    *arg1.byte_offset(0x88) = var_b8;
    let zmm0_1: i128 = var_f8;
    let var_c8: i128;
    *arg1.byte_offset(0x78) = var_c8;
    let var_d8: i128;
    *arg1.byte_offset(0x68) = var_d8;
    let var_e8: i128;
    *arg1.byte_offset(0x58) = var_e8;
    *arg1.byte_offset(0x48) = zmm0_1;
    arg1[0x23] = var_152;
    arg1[0x20] = r15_2;
    let var_c0: i64;
    arg1[0x21] = var_c0;
    *arg1 = r13;
    arg1[1] = var_150;
    arg1[2] = var_140;
    arg1[3] = 0;
    arg1[4] = r13_1;
    arg1[5] = var_130;
    arg1[6] = var_128;
    arg1[7] = 0;
    arg1[8] = var_138;
    arg1[0x1d] = arg2;
    arg1[0x1e] = arg3.byte_offset(0x838);
    arg1[0x22] = r15_3;
    arg1[0x1f] = arg3.byte_offset(0x798);
    arg3.byte_offset(0x798)
}
