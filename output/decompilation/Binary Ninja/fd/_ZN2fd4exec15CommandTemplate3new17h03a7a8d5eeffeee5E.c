
  int64_t fd::exec::CommandTemplate::new::h03a7a8d5eeffeee5(int128_t* arg1)

{
    int64_t var_a0 = 0;
    int64_t var_98 = 8;
    int64_t result = 0;
    void** const var_80;
    int128_t* rsi;
    _$LT$clap_builder..builder..value_parser..ValueParser$u20$as$u20$core..convert..From$LT$clap_builder..builder..value_parser.._AnonymousValueParser$GT$$GT$::from::hd3da1d54eddfcf38(&var_80, rsi);
    char rbp = 0;
    
    while (true)
    {
        void* rax_1 = _$LT$clap_builder..parser..matches..arg_matches..OccurrenceValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::haf632c7985fa82c6(&var_80);
        
        if (!rax_1)
            break;
        
        void* rax_2;
        void* rdx_1;
        rax_2 = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h01f6f045be682906(
            rax_1);
        int64_t var_50;
        fd::fmt::FormatTemplate::parse::hf8dc6f2b9acbeb6e(&var_50, rax_2, rdx_1);
        int64_t rbx_1 = var_50;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hec8f79eece6d4901(&var_a0, &var_50);
        rbp |= !rbx_1;
    }
    
    if (!result)
    {
        var_80 = &data_802248;
        int64_t var_78_2 = 1;
        int64_t var_70_2 = 8;
        int128_t var_68_1 = {0};
        *(arg1 + 8) = anyhow::__private::format_err::hb7ed131eb83ec9a9(&var_80);
        *arg1 = -0x8000000000000000;
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$fd..fmt..FormatTemplate$GT$$GT$::h1c695c5634c346d8(&var_a0);
    }
    
    if (!(rbp & 1))
    {
        uint64_t rax_4 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
        
        if (!rax_4)
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        *rax_4 = -0x8000000000000000;
        *(rax_4 + 8) = var_80;
        int64_t var_78_1 = 1;
        uint64_t var_70_1 = rax_4;
        int128_t var_68;
        var_68 = 1;
        var_80 = nullptr;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hec8f79eece6d4901(&var_a0, &var_80);
    }
    
    arg1[1] = result;
    *arg1 = var_a0;
    return result;
}
