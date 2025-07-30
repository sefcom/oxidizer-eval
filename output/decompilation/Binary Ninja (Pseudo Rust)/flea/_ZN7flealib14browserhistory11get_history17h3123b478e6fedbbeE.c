
  fn flealib::browserhistory::get_history::h3123b478e6fedbbe(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: u64) -> i64

{
    let mut var_190: i8;
    let result: i64 = rusqlite::Connection::open_with_flags::hb7f432c017781faa(&var_190, arg2);
    let mut var_188: i128;
    let var_178: i128;
    let var_168: i128;
    let var_158: i128;
    let mut var_e8: i128;
    
    if (var_190 & 1) != 0
    {
        let var_b8: i128 = var_158;
        let var_c8_1: i128 = var_168;
        let var_d8_1: i128 = var_178;
        var_e8 = var_188;
        *arg1.byte_offset(0x30) = var_158;
        *arg1.byte_offset(0x20) = var_168;
        *arg1.byte_offset(0x10) = var_178;
        *arg1 = var_188;
        return result;
    }
    
    let var_138: i128;
    let var_98_1: i128 = var_138;
    let var_148: i128;
    let var_a8_1: i128 = var_148;
    let mut var_b8_1: i128 = var_158;
    let mut var_88: i128 = var_188;
    let var_78_1: i128 = var_178;
    let var_68_1: i128 = var_168;
    let var_58_1: i128 = var_158;
    let var_48_1: i128 = var_148;
    let var_38_1: i128 = var_138;
    rusqlite::Connection::prepare_with_flags::h3f9d83aa8886ee5f(&var_190, &var_88, arg4, arg5);
    let rax: i64 = var_190;
    
    if rax == 0
    {
        *arg1.byte_offset(0x30) = var_158;
        *arg1.byte_offset(0x20) = var_168;
        *arg1.byte_offset(0x10) = var_178;
        *arg1 = var_188;
    }
    else
    {
        var_b8_1 = var_158;
        let var_c8: i128 = var_168;
        let var_d8: i128 = var_178;
        var_e8 = var_188;
        var_e8 = rax;
        rusqlite::statement::Statement::query_map::hc9c4ed965d83b976(&var_190, &var_e8);
        let rax_1: i64 = var_190;
        let rdi_3: i64 = var_188;
        let rsi_2: i64 = *var_188[8];
        
        if rax_1 != -0x7fffffffffffffee
        {
            arg1[7] = var_158;
            *arg1.byte_offset(0x28) = var_168;
            *arg1.byte_offset(0x18) = var_178;
            *arg1 = rax_1;
            arg1[1] = rdi_3;
            arg1[2] = rsi_2;
            core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::hb6df3ca1791e0b00(
                &var_e8);
        }
        else
        {
            var_190 = 0;
            var_188 = 8;
            *var_188[8] = 0;
            core::iter::traits::iterator::Iterator::fold::hcd588a60c15920c0(rdi_3, rsi_2, &var_190);
            arg1[3] = *var_188[8];
            *arg1.byte_offset(8) = var_190;
            *arg1 = -0x7fffffffffffffee;
            core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::hb6df3ca1791e0b00(
                &var_e8);
        }
    }
    
    core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h10f01d85e30e267c(&var_88)
}
