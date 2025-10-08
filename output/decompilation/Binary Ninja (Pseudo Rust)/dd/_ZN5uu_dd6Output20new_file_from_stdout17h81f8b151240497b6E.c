
  fn uu_dd::Output::new_file_from_stdout::h81f8b151240497b6(arg1: *mut i8, arg2: *mut c_void) -> *mut i8

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_28: i32;
    uucore::mods::io::OwnedFileDescriptorOrHandle::from::hf45d28f91650242c(&var_28);
    
    if var_28 != 1
    {
        let mut rax_1: i8;
        let mut rdx_1: i32;
        rax_1 = uu_dd::make_linux_oflags::h8059fc6e2ea11e72(arg2.byte_offset(0x96));
        let fd: i32;
        let mut rax_2: i8;
        let mut rdx_2: i32;
        
        if (rax_1 & 1) != 0
        {
            let var_24: i32 = rdx_1;
            var_28 = 5;
            rax_2 = nix::fcntl::fcntl::h43fde6b36e45e569(fd, &var_28);
        }
        
        if (rax_1 & 1) == 0 || (rax_2 & 1) == 0
        {
            uu_dd::Output::prepare_file::hcfa8f7430863883a(arg1, fd, arg2);
        }
        else
        {
            *arg1.byte_offset(8) = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$nix..errno..consts..Errno$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h33962f1716cd47ac(rdx_2);
            *arg1.byte_offset(0x10) = &data_53f218;
            *arg1 = 4;
            core::ptr::drop_in_place$LT$std..sys..fd..unix..FileDesc$GT$::he64f1a20ec47272a(fd);
        }
    }
    else
    {
        *arg1.byte_offset(8) = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        *arg1.byte_offset(0x10) = &data_53f218;
        *arg1 = 4;
    }
    
    arg1
}
