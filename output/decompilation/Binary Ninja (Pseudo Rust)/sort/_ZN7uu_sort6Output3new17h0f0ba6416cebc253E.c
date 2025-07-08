
  fn uu_sort::Output::new::h0f0ba6416cebc253(arg1: *mut i64, arg2: i64, arg3: u64, arg4: u64 @ rbp) -> *mut i64

{
    let var_8: u64 = arg4;
    let mut r12: i64 = -0x8000000000000000;
    
    if arg2 == 0
    {
        goto 'label_51e4da;
    }
    
    let mut var_d8: i64 = 0x1b600000000;
    let mut var_d0_1: i32 = 0;
    let mut var_cc_1: i16 = 0;
    *var_d0_1[1] = 1;
    var_cc_1 = 1;
    let mut var_c8: i32;
    std::fs::OpenOptions::open::h2cdbe8cd70abf308(&var_c8, &var_d8, arg2);
    let mut var_b8: i64;
    
    if var_c8 == 0
    {
        let var_c4: i32;
        arg4 = var_c4;
        let var_dc_1: i32 = arg4;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1d4334c76f34ab0e(&var_b8, 
            arg2, arg3);
        r12 = var_b8;
        let var_b0: i128;
        let var_38: i128 = var_b0;
        'label_51e4da:
        *arg1 = r12;
        *arg1.byte_offset(8) = var_38;
        arg1[3] = arg4;
    }
    else
    {
        let var_c0: i64;
        let mut var_78: i8;
        uu_sort::Output::new::_$u7b$$u7b$closure$u7d$$u7d$::hb3d002288addb3b9(&var_78, arg2, arg3, 
            var_c0);
        let var_75: i8;
        *var_b8[3] = var_75;
        let var_77: i16;
        *var_b8[1] = var_77;
        let var_70: i128;
        let var_b0_1: i128 = var_70;
        let var_60: i128;
        let var_a0_1: i128 = var_60;
        let var_50: i128;
        let var_90_1: i128 = var_50;
        let var_40: i64;
        let var_80_1: i64 = var_40;
        var_b8 = var_78;
        let var_74: i32;
        *var_b8[4] = var_74;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hebf92c849c48588d(&var_b8);
        arg1[2] = &data_5ff678;
        *arg1 = -0x7fffffffffffffff;
    }
    arg1
}
