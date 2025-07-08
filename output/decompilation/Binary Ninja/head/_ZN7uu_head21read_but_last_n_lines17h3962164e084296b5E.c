
  void** uu_head::read_but_last_n_lines::h3962164e084296b5(int64_t arg1, int64_t arg2, char arg3)

{
    std::io::stdio::stdout::h077da66234850927();
    int64_t* var_e0 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    int64_t* var_e8 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_e0);
    int128_t var_68;
    uu_head::take::TakeAllBut$LT$I$GT$::new::h46af4e6ffbb3148a(&var_68, arg1, arg3, arg2);
    int64_t var_38;
    int64_t var_78 = var_38;
    int128_t var_48;
    int128_t var_88 = var_48;
    int128_t var_58;
    int128_t var_98 = var_58;
    int128_t var_a8 = var_68;
    void** result;
    
    while (true)
    {
        int64_t var_c0;
        _$LT$uu_head..take..TakeAllBut$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hae9569f8c1a1ccc7(&var_c0, &var_a8);
        int64_t rax_2 = var_c0;
        
        if (rax_2 == -0x7fffffffffffffff)
        {
            core::ptr::drop_in_place$LT$uu_head..take..TakeAllBut$LT$uucore..features..lines..Lines$LT$$RF$mut$u20$std..io..stdio..StdinLock$GT$$GT$$GT$::h8a4d0aaac5e7db1f(&var_a8);
            core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h2105b16ee338ea42(var_e8);
            return nullptr;
        }
        
        void** result_2;
        result = result_2;
        
        if (rax_2 == -0x8000000000000000)
            break;
        
        int64_t var_d8 = rax_2;
        void** result_1 = result;
        uint64_t var_b0;
        uint64_t var_c8_1 = var_b0;
        void** result_3 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_e8, result, var_b0);
        result = result_3;
        
        if (result_3)
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hb5d1cc1ebcc864d9(&var_d8);
            break;
        }
        
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hb5d1cc1ebcc864d9(&var_d8);
    }
    
    core::ptr::drop_in_place$LT$uu_head..take..TakeAllBut$LT$uucore..features..lines..Lines$LT$$RF$mut$u20$std..io..stdio..StdinLock$GT$$GT$$GT$::h8a4d0aaac5e7db1f(&var_a8);
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h2105b16ee338ea42(var_e8);
    return result;
}
