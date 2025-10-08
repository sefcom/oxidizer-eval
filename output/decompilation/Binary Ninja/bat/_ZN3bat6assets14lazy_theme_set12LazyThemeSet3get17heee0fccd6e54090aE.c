
  int64_t bat::assets::lazy_theme_set::LazyThemeSet::get::heee0fccd6e54090a(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    void* rax_1 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h965df95f7bfff64f(
        *arg1, arg1[1], arg2, arg3);
    
    if (!rax_1)
        return 0;
    
    char var_58;
    once_cell::unsync::OnceCell$LT$T$GT$::get_or_try_init::h9b9b77d18dc30d25(&var_58, rax_1 + 0x18, 
        rax_1);
    int64_t result = 0;
    char temp0 = var_58;
    
    if (temp0 == 0xd)
    {
        int64_t result_1;
        result = result_1;
        
        if (temp0 != 0xd)
            core::ptr::drop_in_place$LT$core..result..Result$LT$$RF$syntect..highlighting..theme..Theme$C$bat..error..Error$GT$$GT$::hed978b6c13649a06(&var_58);
    }
    else if (temp0 != 0xd)
        core::ptr::drop_in_place$LT$core..result..Result$LT$$RF$syntect..highlighting..theme..Theme$C$bat..error..Error$GT$$GT$::hed978b6c13649a06(&var_58);
    
    return result;
}
