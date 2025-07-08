
  fn uu_ls::get_system_time::hcb9369b24593e222(arg1: *mut i64, arg2: *mut c_void) -> *mut *mut c_void

{
    let mut result_1: *mut *mut c_void;
    
    match *arg2.byte_offset(0xf3)
    {
        0 =>
        {
            std::fs::Metadata::modified::h6f16921acf618ae6(&result_1, arg1);
            'label_52bd26:
            let result: *mut *mut c_void = result_1;
            let var_18: i32;
            
            if var_18 == 0x3b9aca00
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..time..SystemTime$C$std..io..error..Error$GT$$GT$::hdc4a7fdaf1b94916(&result_1);
            }
            
            result
        }
        1 =>
        {
            std::fs::Metadata::accessed::h83f649a5a12d68e0(&result_1, arg1);
            goto 'label_52bd26;
        }
        2 =>
        {
            let mut rax_1: i64;
            let mut rdx: i32;
            rax_1 = core::time::Duration::new::hd664d911dc381e97(arg1[0x11], arg1[0x12]);
            _$LT$std..time..SystemTime$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::hf5ff61e43d92dd3e(0, 0, rax_1, rdx)
        }
        3 =>
        {
            std::fs::Metadata::created::h8ccef99991753c93(&result_1, arg1);
            goto 'label_52bd26;
        }
    }
}
