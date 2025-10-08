
  fn forc_crypto::keys::vanity::Arg::validate::h776811c8940670eb(arg1: *mut c_void) -> u64

{
    let mut rdi: *mut c_void = arg1.byte_offset(0x10);
    
    if 0 + -(*arg1.byte_offset(0x10))
    {
        rdi = nullptr;
    }
    
    let rax: i64 = core::option::Option$LT$T$GT$::map_or::h24957dd72484acae(rdi);
    let mut rdi_1: *mut c_void = arg1.byte_offset(0x28);
    
    if 0 + -(*arg1.byte_offset(0x28))
    {
        rdi_1 = nullptr;
    }
    
    if core::option::Option$LT$T$GT$::map_or::h24957dd72484acae(rdi_1) + rax < 0x41
    {
        return 0;
    }
    
    let mut var_48: *mut *mut c_void = &data_a2f028;
    let var_40_1: i64 = 1;
    let var_38_1: i64 = 8;
    let var_30_1: i128 = {0};
    anyhow::__private::format_err::h09b344f6a077676a(&var_48)
}
