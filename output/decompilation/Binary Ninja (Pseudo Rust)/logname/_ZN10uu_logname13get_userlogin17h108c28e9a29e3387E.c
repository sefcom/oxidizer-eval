
  fn uu_logname::get_userlogin::h108c28e9a29e3387(arg1: *mut i128) -> *mut i128

{
    let rax: *mut i8 = getlogin();
    
    if rax == 0
    {
        *arg1 = -0x8000000000000000;
    }
    else
    {
        let mut var_40: i64;
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_40, rax, strlen(rax));
        let var_38: i64;
        let var_30: u64;
        let mut var_28: i128;
        _$LT$alloc..borrow..Cow$LT$str$GT$$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hf7c0e7c1e655e4a4(&var_28, var_38, var_30);
        let var_18: i64;
        arg1[1] = var_18;
        *arg1 = var_28;
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h67e132bcf0f8ee66(var_40, 
            var_38);
    }
    
    arg1
}
