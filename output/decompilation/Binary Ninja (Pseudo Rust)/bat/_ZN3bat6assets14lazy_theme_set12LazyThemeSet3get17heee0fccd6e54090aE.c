
  fn bat::assets::lazy_theme_set::LazyThemeSet::get::heee0fccd6e54090a(arg1: *mut i64, arg2: i64, arg3: u64) -> i64

{
    let rax_1: *mut c_void =
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h965df95f7bfff64f(*arg1, 
        arg1[1], arg2, arg3);
    
    if rax_1 == 0
    {
        return 0;
    }
    
    let mut var_58: i8;
    once_cell::unsync::OnceCell$LT$T$GT$::get_or_try_init::h9b9b77d18dc30d25(&var_58, 
        rax_1.byte_offset(0x18), rax_1);
    let mut result: i64 = 0;
    let temp0: i8 = var_58;
    
    if temp0 == 0xd
    {
        let result_1: i64;
        result = result_1;
        
        if temp0 != 0xd
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$RF$syntect..highlighting..theme..Theme$C$bat..error..Error$GT$$GT$::hed978b6c13649a06(&var_58);
        }
    }
    else if temp0 != 0xd
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$$RF$syntect..highlighting..theme..Theme$C$bat..error..Error$GT$$GT$::hed978b6c13649a06(&var_58);
    }
    
    result
}
