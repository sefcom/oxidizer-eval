
  fn alacritty_terminal::term::search::LazyDfa::new::hf5ca27742a309cb7(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut i128, arg5: *mut i32, arg6: *mut i128, arg7: i8, arg8: i8) -> i64

{
    let var_b70: i64 = arg3;
    let rax: i32 = *arg6.byte_offset(0xf);
    let mut var_ae8: [i8; 0x10] = *arg6;
    *arg6 = var_ae8;
    *arg6.byte_offset(0xf) = rax;
    *arg6.byte_offset(0x13) = arg7 ^ 1;
    let var_a78: [i8; 0x10] = arg4[7];
    let var_a88: [i8; 0x10] = arg4[6];
    let var_a98: [i8; 0x10] = arg4[5];
    let var_aa8: [i8; 0x10] = arg4[4];
    let var_ab8: [i8; 0x10] = arg4[3];
    let var_ac8: [i8; 0x10] = arg4[2];
    let mut var_ad9: i32;
    *var_ad9[1] = arg4[1];
    var_ae8 = *arg4;
    let rdx_1: i64 = *arg4.byte_offset(0x88);
    let mut var_6b8: i64 = *arg4.byte_offset(0x81);
    arg4[7] = var_a78;
    arg4[6] = var_a88;
    arg4[5] = var_a98;
    arg4[4] = var_aa8;
    let zmm0: [i8; 0x10] = var_ae8;
    arg4[3] = var_ab8;
    arg4[2] = var_ac8;
    arg4[1] = *var_ad9[1];
    *arg4 = zmm0;
    arg4[8] = arg8 ^ 1;
    *arg4.byte_offset(0x81) = var_6b8;
    *arg4.byte_offset(0x88) = rdx_1;
    let mut var_3e8: ();
    regex_automata::hybrid::dfa::Builder::new::h1f6dce39aa80c2a3(&var_3e8);
    memcpy(&var_6b8, arg4, 0x90);
    let rax_5: *mut c_void = regex_automata::hybrid::dfa::Builder::syntax::h27bdc6c9eb3e9ff6(
        regex_automata::hybrid::dfa::Builder::configure::h0f0dde0c0024ff61(&var_3e8, &var_6b8), 
        arg5);
    let mut var_6a8: i64 = arg6[1];
    var_6b8 = *arg6;
    regex_automata::hybrid::dfa::Builder::build::heb7f8df02e219de7(&var_ae8, 
        regex_automata::hybrid::dfa::Builder::thompson::h53a4ef0c8d7720aa(rax_5, &var_6b8), arg2);
    let r14: i64 = var_ae8[0];
    let r15_1: i64 = var_ae8[8];
    let temp0_1: u32 = _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_ae8, data_4e8640));
    let mut var_b68: [i8; 0x10] = *var_ad9[1];
    
    if temp0_1 == 0xffff
    {
        arg1[2] = alloc::boxed::Box$LT$T$GT$::new::h870e45f67f132113(&var_b68);
        arg1[1] = 0;
        *arg1 = 2;
        return 
            core::ptr::drop_in_place$LT$regex_automata..hybrid..dfa..Builder$GT$::h91a92403cb6f6732(
            &var_3e8);
    }
    
    let mut var_a58: ();
    let mut var_628: ();
    memcpy(&var_628, &var_a58, 0x240);
    var_6a8 = var_b68;
    let var_698_1: [i8; 0x10] = var_ac8;
    let var_688_1: [i8; 0x10] = var_ab8;
    let var_678_1: [i8; 0x10] = var_aa8;
    let var_668_1: [i8; 0x10] = var_a98;
    let var_658_1: [i8; 0x10] = var_a88;
    let var_648_1: [i8; 0x10] = var_a78;
    let var_a68: [i8; 0x10];
    let var_638_1: [i8; 0x10] = var_a68;
    let var_6b1: i64 = r15_1;
    var_6b8 = r14;
    core::ptr::drop_in_place$LT$regex_automata..hybrid..dfa..Builder$GT$::h91a92403cb6f6732(
        &var_3e8);
    let mut var_190: ();
    regex_automata::hybrid::dfa::DFA::create_cache::h11d0cec166535f16(&var_190, &var_6b8);
    memcpy(&var_ae8, &var_6b8, 0x2d0);
    let mut var_818: ();
    memcpy(&var_818, &var_190, 0x160);
    memcpy(arg1, &var_ae8, 0x430);
    arg1[0x86] = arg7;
    *arg1.byte_offset(0x431) = arg8;
    arg8
}
