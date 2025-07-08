
  fn uu_wc::word_count_from_input::h9c6b7f02841e6225(arg1: *mut i64, arg2: *mut i64, arg3: *mut c_void) -> i64

{
    let mut result: i64;
    let mut var_50: i32;
    let mut var_40: i128;
    
    if *arg2 != -0x7fffffffffffffff
    {
        std::fs::File::open::h29294cdd33afafbd(&var_50, arg2);
        
        if var_50 == 0
        {
            let var_4c: i32;
            uu_wc::word_count_from_reader::hd0ebac2d03e30fcc(&var_40, var_4c, arg3);
            goto 'label_4bce23;
        }
        
        let result_1: i64;
        result = result_1;
        arg1[1] = result;
        *arg1 = 2;
    }
    else
    {
        std::io::stdio::stdin::h7215cc131abb55d8();
        var_50 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
        let mut rax_1: *mut i32;
        let mut rdx: i8;
        rax_1 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&var_50);
        uu_wc::word_count_from_reader::h5f3d93b09ec956fa(&var_40, rax_1, rdx & 1, arg3);
        'label_4bce23:
        let var_20: i64;
        arg1[5] = var_20;
        let zmm0_1: i128 = var_40;
        let var_30: i128;
        *arg1.byte_offset(0x18) = var_30;
        *arg1.byte_offset(8) = zmm0_1;
        let var_18: i64;
        
        if var_18 == 0
        {
            result = 0;
        }
        else
        {
            arg1[6] = var_18;
            result = 1;
        }
        
        *arg1 = result;
    }
    result
}
