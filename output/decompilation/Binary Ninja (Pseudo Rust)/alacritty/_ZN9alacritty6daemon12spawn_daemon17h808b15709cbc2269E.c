
  fn alacritty::daemon::spawn_daemon::h808b15709cbc2269(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: i32, arg6: pid_t) -> i64

{
    let mut var_118: ();
    std::process::Command::new::h873610fb801d3889(&var_118, arg1);
    std::process::Command::args::h0cf9f05e3a8f850e(&var_118, arg3, arg4);
    std::process::Command::stdin::hd9c09d4a3eda940e(&var_118);
    std::process::Command::stdout::he96f17e76a801f2f(&var_118);
    std::process::Command::stderr::h4621e165c01a8e4b(&var_118);
    let mut var_160: i64;
    alacritty::daemon::foreground_process_path::h3482b68207808211(&var_160, arg5, arg6);
    let rbx_1: i64 = var_160;
    let var_158: i128;
    let mut var_128: i128;
    
    if -(rbx_1) != -0x8000000000000000
    {
        var_128 = var_158;
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$GT$$GT$$GT$::h9b69073469565d88(&var_160);
    }
    
    let mut var_140: i64 = rbx_1;
    let result_1: i64 = var_128;
    _$LT$std..process..Command$u20$as$u20$std..os..unix..process..CommandExt$GT$::pre_exec::h1e0f5a3fbd486634(&var_118, &var_140);
    std::process::Command::spawn::haea730ea7b05a977(&var_160, &var_118);
    let mut result: i64;
    
    if var_160 != 1
    {
        var_160 = *var_160[4];
        var_160 = var_158;
        std::process::Child::wait::h7e33de4911114104(&var_140, &var_160);
        
        if var_140 == 0
        {
            result = 0;
        }
        else
        {
            result = result_1;
        }
        
        core::ptr::drop_in_place$LT$std..process..Child$GT$::h4bac703b10ba1aef(&var_160);
    }
    else
    {
        result = var_158;
    }
    
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hdea515ac9bba3b5e(&var_118);
    result
}
