
  fn bat::config::get_pager_executable::h08ad46b3efb251cf(arg1: *mut i64, arg2: *mut i8, arg3: i64) -> *mut i64

{
    let mut var_80: i64;
    bat::pager::get_pager::hd377d976785f18ee(&var_80, arg2, arg3);
    let rax: i64 = var_80;
    
    if rax == -0x7fffffffffffffff
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$bat..pager..Pager$GT$$C$shell_words..ParseError$GT$$GT$::h953dfe83362f50b1(&var_80);
        *arg1 = -0x8000000000000000;
    }
    else if rax != -0x8000000000000000
    {
        let var_58: i128;
        let var_58_1: i128 = var_58;
        let mut var_68: i128 = var_68;
        var_80 = rax;
        let var_78: i128;
        arg1[2] = *var_78[8];
        *arg1 = var_80;
        arg1[1] = var_78;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h2f78fa9eb600a3a5(&var_68);
    }
    else
    {
        *arg1 = -0x8000000000000000;
    }
    
    arg1
}
