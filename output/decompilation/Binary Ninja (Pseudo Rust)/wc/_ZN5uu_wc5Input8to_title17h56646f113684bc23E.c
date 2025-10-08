
  fn uu_wc::Input::to_title::h56646f113684bc23(arg1: *mut i64, arg2: *mut i64)

{
    if *arg2 != -0x7fffffffffffffff
    {
        let r15_1: *mut i8 = arg2[1];
        let r14_1: u64 = arg2[2];
        let mut var_40: ();
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_40, r15_1, r14_1);
        let var_38: *mut i8;
        let var_30: *mut c_void;
        let rax_1: i8 = _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(var_38, var_30);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h14345ba51c0be1b8(&var_40);
        
        if rax_1 != 0
        {
            /* tailcall */
            return uucore::features::quoting_style::escape_name::h942044e1943bd5af(arg1, r15_1, 
                r14_1, &data_41a13f);
        }
        
        *arg1 = -0x8000000000000000;
        arg1[1] = r15_1;
        arg1[2] = r14_1;
    }
    else if arg2[1] == 0
    {
        *arg1 = -0x8000000000000000;
        arg1[1] = &data_41a0ed[0x51];
        arg1[2] = 1;
    }
    else
    {
        *arg1 = -0x7fffffffffffffff;
    }
}
