
  uint64_t fd::walk::BatchSender::send::hbbf819bd5a39c97a(int64_t* arg1, int64_t arg2)

{
    int32_t* rax;
    char rdx;
    rax = fd::walk::Batch::lock::hcf458de9d7428fab(arg1[2]);
    int32_t* r14 = rax;
    char rbp = rdx & 1;
    
    if (0 + -(*(r14 + 8)) || *(r14 + 0x18) >= arg1[3])
    {
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$crossbeam_channel..flavors..zero..Inner$GT$$GT$::h6207fb4f25d3957f(r14, rbp);
        uint64_t rax_2 = fd::walk::Batch::new::h2184bf53e9fc4816();
        core::ptr::drop_in_place$LT$fd..walk..Batch$GT$::h38c0242ec0537192(&arg1[2]);
        arg1[2] = rax_2;
        int32_t* rax_3;
        char rdx_1;
        rax_3 = fd::walk::Batch::lock::hcf458de9d7428fab(rax_2);
        r14 = rax_3;
        rbp = rdx_1 & 1;
        
        if (*(r14 + 8) == -0x8000000000000000)
        {
            int32_t var_174_3 = 1;
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
    }
    
    int64_t var_168;
    memcpy(&var_168, arg2, 0x138);
    int32_t var_174 = 0;
    alloc::vec::Vec$LT$T$C$A$GT$::push::hac74964b7913d07e(&r14[2], &var_168);
    int32_t rbx;
    
    if (*(r14 + 0x18) != 1)
        rbx = 0;
    else
    {
        int64_t* rdx_2 = arg1[2];
        int64_t temp1_1 = *rdx_2;
        *rdx_2 += 1;
        
        if (temp1_1 <= -1)
            trap(6);
        
        int32_t var_174_1 = 0;
        int64_t rax_4 = crossbeam_channel::channel::Sender$LT$T$GT$::send::h9c29f4d5d8b49aa6(*arg1, 
            arg1[1], rdx_2);
        
        if (!rax_4)
            rbx = 0;
        else
        {
            var_168 = rax_4;
            int32_t var_174_2 = 0;
            core::ptr::drop_in_place$LT$crossbeam_channel..err..SendError$LT$fd..walk..Batch$GT$$GT$::h888a4e57f7452dac(&var_168);
            rbx = 1;
        }
    }
    
    core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$crossbeam_channel..flavors..zero..Inner$GT$$GT$::h6207fb4f25d3957f(r14, rbp);
    return rbx;
}
