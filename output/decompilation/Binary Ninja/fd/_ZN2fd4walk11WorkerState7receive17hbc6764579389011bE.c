
  uint64_t fd::walk::WorkerState::receive::hbc6764579389011b(int64_t* arg1, int64_t* arg2, int64_t arg3)

{
    int64_t* var_e0 = arg2;
    int64_t var_d8 = arg3;
    void* rax = arg1[0x39];
    int32_t rbx_1;
    int64_t* var_d0;
    
    if (!rax)
    {
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        var_d0 = &std::io::stdio::STDOUT::h411b213c5c9add46;
        void var_48;
        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h8fc2537ae525bcbf(&var_48, 
            std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_d0));
        fd::walk::ReceiverBuffer$LT$W$GT$::new::h8e579d629470b6a2(&var_d0, arg1, arg2, arg3, 
            &var_48);
        rbx_1 = fd::walk::ReceiverBuffer$LT$W$GT$::process::ha5288a7139bbf5c7(&var_d0);
        core::ptr::drop_in_place$LT$fd..walk..ReceiverBuffer$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$$GT$::hb753d5bba31e973f(&var_d0);
    }
    else
    {
        if (*(rax + 0x28))
        {
            var_d0 = arg2;
            int64_t var_c8_1 = arg3;
            int64_t var_c0_1 = 0;
            int64_t var_a0_1 = 0;
            return fd::exec::job::batch::h4ebcd8d6a64e03b1(&var_d0, *(rax + 0x18), *(rax + 0x20), 
                arg1);
        }
        
        int32_t var_e8 = 0;
        char var_e4_1 = 0;
        var_d0 = arg1;
        int64_t* var_c8_2 = &var_e0;
        void* var_c0_2 = &arg1[0x39];
        int32_t* var_b8_1 = &var_e8;
        rbx_1 = std::thread::scoped::scope::ha311cbc73960afb7(&var_d0);
        core::ptr::drop_in_place$LT$crossbeam_channel..channel..Receiver$LT$fd..walk..Batch$GT$$GT$::had74352146281d5a(&var_e0);
    }
    return rbx_1;
}
