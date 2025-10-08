
  fn fd::walk::WorkerState::receive::hbc6764579389011b(arg1: *mut i64, arg2: *mut i64, arg3: i64) -> u64

{
    let mut var_e0: *mut i64 = arg2;
    let var_d8: i64 = arg3;
    let rax: *mut c_void = arg1[0x39];
    let mut rbx_1: i32;
    let mut var_d0: *mut i64;
    
    if rax == 0
    {
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        var_d0 = &std::io::stdio::STDOUT::h411b213c5c9add46;
        let mut var_48: ();
        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h8fc2537ae525bcbf(&var_48, 
            std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_d0));
        fd::walk::ReceiverBuffer$LT$W$GT$::new::h8e579d629470b6a2(&var_d0, arg1, arg2, arg3, 
            &var_48);
        rbx_1 = fd::walk::ReceiverBuffer$LT$W$GT$::process::ha5288a7139bbf5c7(&var_d0);
        core::ptr::drop_in_place$LT$fd..walk..ReceiverBuffer$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$$GT$::hb753d5bba31e973f(&var_d0);
    }
    else
    {
        if *rax.byte_offset(0x28) != 0
        {
            var_d0 = arg2;
            let var_c8_1: i64 = arg3;
            let var_c0_1: i64 = 0;
            let var_a0_1: i64 = 0;
            return fd::exec::job::batch::h4ebcd8d6a64e03b1(&var_d0, *rax.byte_offset(0x18), 
                *rax.byte_offset(0x20), arg1);
        }
        
        let mut var_e8: i32 = 0;
        let var_e4_1: i8 = 0;
        var_d0 = arg1;
        let var_c8_2: *mut i64 = &var_e0;
        let var_c0_2: *mut c_void = &arg1[0x39];
        let var_b8_1: *mut i32 = &var_e8;
        rbx_1 = std::thread::scoped::scope::ha311cbc73960afb7(&var_d0);
        core::ptr::drop_in_place$LT$crossbeam_channel..channel..Receiver$LT$fd..walk..Batch$GT$$GT$::had74352146281d5a(&var_e0);
    }
    rbx_1
}
