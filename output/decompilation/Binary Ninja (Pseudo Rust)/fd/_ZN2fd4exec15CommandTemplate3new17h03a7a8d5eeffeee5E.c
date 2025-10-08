
  fn fd::exec::CommandTemplate::new::h03a7a8d5eeffeee5(arg1: *mut i128) -> i64

{
    let mut var_a0: i64 = 0;
    let var_98: i64 = 8;
    let result: i64 = 0;
    let mut var_80: *mut *mut c_void;
    let rsi: *mut i128;
    _$LT$clap_builder..builder..value_parser..ValueParser$u20$as$u20$core..convert..From$LT$clap_builder..builder..value_parser.._AnonymousValueParser$GT$$GT$::from::hd3da1d54eddfcf38(&var_80, rsi);
    let mut rbp: i8 = 0;
    
    loop
    {
        let rax_1: *mut c_void = _$LT$clap_builder..parser..matches..arg_matches..OccurrenceValuesRef$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::haf632c7985fa82c6(&var_80);
        
        if rax_1 == 0
        {
            break;
        }
        
        let mut rax_2: *mut c_void;
        let mut rdx_1: *mut c_void;
        rax_2 = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h01f6f045be682906(
            rax_1);
        let mut var_50: i64;
        fd::fmt::FormatTemplate::parse::hf8dc6f2b9acbeb6e(&var_50, rax_2, rdx_1);
        let rbx_1: i64 = var_50;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hec8f79eece6d4901(&var_a0, &var_50);
        rbp |= rbx_1 == 0;
    }
    
    if result == 0
    {
        var_80 = &data_802248;
        let var_78_2: i64 = 1;
        let var_70_2: i64 = 8;
        let var_68_1: i128 = {0};
        *arg1.byte_offset(8) = anyhow::__private::format_err::hb7ed131eb83ec9a9(&var_80);
        *arg1 = -0x8000000000000000;
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$fd..fmt..FormatTemplate$GT$$GT$::h1c695c5634c346d8(&var_a0);
    }
    
    if (rbp & 1) == 0
    {
        let rax_4: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
        
        if rax_4 == 0
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        *rax_4 = -0x8000000000000000;
        *(rax_4 + 8) = var_80;
        let var_78_1: i64 = 1;
        let var_70_1: u64 = rax_4;
        let mut var_68: i128;
        var_68 = 1;
        var_80 = nullptr;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hec8f79eece6d4901(&var_a0, &var_80);
    }
    
    arg1[1] = result;
    *arg1 = var_a0;
    result
}
