
  fn alacritty::config::ui_config::UiConfig::term_options::hd6aa2decf979f436(arg1: *mut i128, arg2: *mut c_void, arg3: u64 @ r15) -> i64

{
    let var_10: u64 = arg3;
    let mut var_40: i128;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_40, 
        arg2.byte_offset(0x48));
    let r12: u64 = *arg2.byte_offset(0x410);
    let rax: u16 = *arg2.byte_offset(0x3d4);
    let mut rbp: u64;
    
    if rax != 4
    {
        let mut rax_1: i32;
        let mut rdx_1: i32;
        rax_1 = alacritty::config::cursor::_$LT$impl$u20$core..convert..From$LT$alacritty..config..cursor..ConfigCursorStyle$GT$$u20$for$u20$vte..ansi..CursorStyle$GT$::from::hf8b7e6b388c32a93(rax | *arg2.byte_offset(0x3d5) << 8);
        arg3 = rdx_1;
        rbp = rax_1 & 1;
    }
    else
    {
        rbp = 2;
    }
    
    let mut rax_2: i8;
    let mut rdx_2: i8;
    rax_2 = alacritty::config::cursor::_$LT$impl$u20$core..convert..From$LT$alacritty..config..cursor..ConfigCursorStyle$GT$$u20$for$u20$vte..ansi..CursorStyle$GT$::from::hf8b7e6b388c32a93(*arg2.byte_offset(0x3d6));
    let rcx_3: i8 = *arg2.byte_offset(0x390);
    *arg1.byte_offset(0x18) = r12;
    arg1[2] = rax_2 & 1;
    *arg1.byte_offset(0x21) = rdx_2;
    *arg1.byte_offset(0x22) = rbp;
    *arg1.byte_offset(0x23) = arg3;
    let result: i64;
    arg1[1] = result;
    *arg1 = var_40;
    *arg1.byte_offset(0x24) = 1;
    *arg1.byte_offset(0x25) = rcx_3;
    result
}
