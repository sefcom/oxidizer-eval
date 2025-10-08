
  int64_t rg::flags::hiargs::take_color_specs::h0b7bead426c7466d(int128_t* arg1, void* arg2)

{
    int64_t var_58;
    grep_printer::color::default_color_specs::hffbcc9f35fc6c155(&var_58);
    void* var_40;
    alloc::vec::Vec$LT$T$C$A$GT$::drain::he31301956beb7ba7(&var_40, arg2 + 0xe0);
    
    while (true)
    {
        int32_t* rax_1 = var_40;
        int64_t var_38;
        
        if (rax_1 == var_38)
            break;
        
        var_40 = rax_1 + 6;
        alloc::vec::Vec$LT$T$C$A$GT$::push::h2b40c0f3a56d230e(&var_58, rax_1[1] << 0x20 | *rax_1);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..drain..Drain$LT$grep_printer..color..UserColorSpec$GT$$GT$::h64412e075774613f(&var_40);
    char* var_50;
    int64_t var_48;
    grep_printer::color::ColorSpecs::new::h285108ed7667a029(arg1, var_50, var_48);
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$grep_printer..color..UserColorSpec$GT$$GT$::hfc23f7e53dc8fcc5(var_58, var_50);
}
