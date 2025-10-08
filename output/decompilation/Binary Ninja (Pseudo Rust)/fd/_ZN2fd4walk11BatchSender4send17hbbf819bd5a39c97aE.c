
  fn fd::walk::BatchSender::send::hbbf819bd5a39c97a(arg1: *mut i64, arg2: i64) -> u64

{
    let mut rax: *mut i32;
    let mut rdx: i8;
    rax = fd::walk::Batch::lock::hcf458de9d7428fab(arg1[2]);
    let mut r14: *mut i32 = rax;
    let mut rbp: i8 = rdx & 1;
    
    if 0 + -(*r14.byte_offset(8)) || *r14.byte_offset(0x18) >= arg1[3]
    {
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$crossbeam_channel..flavors..zero..Inner$GT$$GT$::h6207fb4f25d3957f(r14, rbp);
        let rax_2: u64 = fd::walk::Batch::new::h2184bf53e9fc4816();
        core::ptr::drop_in_place$LT$fd..walk..Batch$GT$::h38c0242ec0537192(&arg1[2]);
        arg1[2] = rax_2;
        let mut rax_3: *mut i32;
        let mut rdx_1: i8;
        rax_3 = fd::walk::Batch::lock::hcf458de9d7428fab(rax_2);
        r14 = rax_3;
        rbp = rdx_1 & 1;
        
        if *r14.byte_offset(8) == -0x8000000000000000
        {
            let var_174_3: i32 = 1;
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
    }
    
    let mut var_168: i64;
    memcpy(&var_168, arg2, 0x138);
    let var_174: i32 = 0;
    alloc::vec::Vec$LT$T$C$A$GT$::push::hac74964b7913d07e(&r14[2], &var_168);
    let mut rbx: i32;
    
    if *r14.byte_offset(0x18) != 1
    {
        rbx = 0;
    }
    else
    {
        let rdx_2: *mut i64 = arg1[2];
        let temp1_1: i64 = *rdx_2;
        *rdx_2 += 1;
        
        if temp1_1 <= -1
        {
            trap(6);
        }
        
        let var_174_1: i32 = 0;
        let rax_4: i64 = crossbeam_channel::channel::Sender$LT$T$GT$::send::h9c29f4d5d8b49aa6(
            *arg1, arg1[1], rdx_2);
        
        if rax_4 == 0
        {
            rbx = 0;
        }
        else
        {
            var_168 = rax_4;
            let var_174_2: i32 = 0;
            core::ptr::drop_in_place$LT$crossbeam_channel..err..SendError$LT$fd..walk..Batch$GT$$GT$::h888a4e57f7452dac(&var_168);
            rbx = 1;
        }
    }
    
    core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$crossbeam_channel..flavors..zero..Inner$GT$$GT$::h6207fb4f25d3957f(r14, rbp);
    rbx
}
