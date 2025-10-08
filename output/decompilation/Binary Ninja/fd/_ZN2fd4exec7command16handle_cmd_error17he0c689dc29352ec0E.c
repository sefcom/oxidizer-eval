
  int64_t fd::exec::command::handle_cmd_error::he0c689dc29352ec0(void* arg1, int64_t** arg2)

{
    char rax_1;
    
    if (arg1)
        rax_1 = std::io::error::Error::kind::h135fe00c4e7365f3(arg2);
    
    int64_t* rdi_3;
    int64_t** var_a0;
    int64_t* var_88;
    void** const var_70;
    
    if (arg1 && !rax_1)
    {
        int64_t** var_90 = arg2;
        int64_t rax_2;
        int64_t rdx_1;
        rax_2 = std::process::Command::get_program::h41efdce1cd7a1359(arg1);
        uint64_t rdx_2 =
            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_88, rax_2, rdx_1);
        var_a0 = &var_88;
        int64_t (* var_98_1)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h339b4df17109b8de;
        var_70 = &data_802190;
        int64_t var_68_1 = 1;
        int64_t var_50_1 = 0;
        int64_t*** var_60_1 = &var_a0;
        int64_t var_58_1 = 1;
        void var_40;
        core::option::Option$LT$T$GT$::map_or_else::h1f7ab50fdd345844(&var_40, 0, rdx_2, &var_70);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h20faf5157999b1c6(&var_88);
        fd::error::print_error::h653511955bf98e50(&var_40);
        rdi_3 = &var_90;
    }
    else
    {
        var_a0 = arg2;
        var_88 = &var_a0;
        int64_t (* var_80_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
        var_70 = &data_8021a0;
        int64_t var_68 = 1;
        int64_t var_50 = 0;
        int64_t** var_60 = &var_88;
        int64_t var_58 = 1;
        void var_28;
        uint64_t rdx;
        core::option::Option$LT$T$GT$::map_or_else::h1f7ab50fdd345844(&var_28, 0, rdx, &var_70);
        fd::error::print_error::h653511955bf98e50(&var_28);
        rdi_3 = &var_a0;
    }
    return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h70c4621fa5d008f5(rdi_3);
}
