
  fn uu_wc::word_count_from_input::h4ad675f40b919e0e(arg1: *mut i64, arg2: *mut i64, arg3: *mut c_void) -> i64

{
    let mut var_68: i128;
    let mut var_78: i32;
    
    if *arg2 != -0x7fffffffffffffff
    {
        std::fs::File::open::h9157e31c826b10c5(&var_78, arg2);
        
        if var_78 == 1
        {
            let var_70: i64;
            arg1[1] = var_70;
            *arg1 = 2;
            return var_70;
        }
        
        let var_74: i32;
        uu_wc::word_count_from_reader::h8dd899ec4189add4(&var_68, var_74, arg3);
    }
    else
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        var_78 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
        let mut rax_1: *mut i32;
        let mut rdx: i8;
        rax_1 = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(&var_78);
        uu_wc::word_count_from_reader::h0362b4aa77d3dadd(&var_68, rax_1, rdx & 1, arg3);
    }
    let var_48: i64;
    let var_18: i64 = var_48;
    let zmm0: i128 = var_68;
    let var_58: i128;
    let var_28: i128 = var_58;
    let var_38: i128 = zmm0;
    arg1[5] = var_48;
    *arg1.byte_offset(0x18) = var_58;
    *arg1.byte_offset(8) = zmm0;
    let var_40: i64;
    let mut rax_4: i64;
    
    if var_40 == 0
    {
        rax_4 = 0;
    }
    else
    {
        arg1[6] = var_40;
        rax_4 = 1;
    }
    
    *arg1 = rax_4;
    rax_4
}
