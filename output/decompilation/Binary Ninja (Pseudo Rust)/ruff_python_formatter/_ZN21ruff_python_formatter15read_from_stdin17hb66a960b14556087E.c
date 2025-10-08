
  fn ruff_python_formatter::read_from_stdin::hb66a960b14556087(arg1: *mut i64) -> i64

{
    let mut var_28: i64 = 0;
    let var_20: i64 = 1;
    let result: i64 = 0;
    std::io::stdio::stdin::h9a05a2c3e7544b2a();
    let mut var_10: *mut c_void = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
    let mut rax: *mut i32;
    let mut rdx: i8;
    rax = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(&var_10);
    let mut var_38: *mut i32 = rax;
    rdx &= 1;
    let mut rax_1: i8;
    let mut rdx_1: i64;
    rax_1 = _$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..Read$GT$::read_to_string::h8b3f43a7be4ccdfd(&var_38, &var_28);
    
    if (rax_1 & 1) != 0
    {
        arg1[1] = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h253cebc4b374091a(rdx_1);
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h6a94b8e8703a3a2b(var_38, rdx);
        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4e6d45d9886d7667(var_28, 
            var_20);
    }
    
    core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::h6a94b8e8703a3a2b(var_38, rdx);
    arg1[2] = result;
    *arg1 = var_28;
    result
}
