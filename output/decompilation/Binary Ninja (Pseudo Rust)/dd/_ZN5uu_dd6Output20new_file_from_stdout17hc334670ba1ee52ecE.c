
  fn uu_dd::Output::new_file_from_stdout::hc334670ba1ee52ec(arg1: *mut i8, arg2: *mut c_void) -> *mut i8

{
    std::io::stdio::stdout::h077da66234850927();
    let mut var_28: i32;
    uucore::mods::io::OwnedFileDescriptorOrHandle::from::h0d5d1d40c82f1b03(&var_28);
    
    if var_28 == 0
    {
        let mut rax_1: i32;
        let mut rdx_1: i32;
        rax_1 = uu_dd::make_linux_oflags::hc5c67f9cb15d8524(arg2.byte_offset(0x96));
        let fd: i32;
        let mut rax_2: i32;
        let mut rdx_2: i32;
        
        if rax_1 == 1
        {
            let var_24: i32 = rdx_1;
            var_28 = 5;
            rax_2 = nix::fcntl::fcntl::h80fd9880c7bb583b(fd, &var_28);
        }
        
        if rax_1 != 1 || rax_2 == 0
        {
            uu_dd::Output::prepare_file::h9725a129054f1a6a(arg1, fd, arg2);
        }
        else
        {
            *arg1.byte_offset(8) = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$nix..errno..consts..Errno$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7e1e2edf10393c3c(rdx_2);
            *arg1.byte_offset(0x10) = &data_562e90;
            *arg1 = 4;
            core::ptr::drop_in_place$LT$uucore..mods..io..OwnedFileDescriptorOrHandle$GT$::ha6ff79398227ae27(fd);
        }
    }
    else
    {
        *arg1.byte_offset(8) = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        *arg1.byte_offset(0x10) = &data_562e90;
        *arg1 = 4;
    }
    
    arg1
}
