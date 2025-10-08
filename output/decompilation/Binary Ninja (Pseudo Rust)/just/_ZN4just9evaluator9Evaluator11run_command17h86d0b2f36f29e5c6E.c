
  fn just::evaluator::Evaluator::run_command::h86d0b2f36f29e5c6(arg1: *mut i128, arg2: *mut i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64) -> *mut i128

{
    let rdx: *mut c_void = *arg2;
    let r12: *mut c_void = arg2[2];
    let mut var_1f0: ();
    just::settings::Settings::shell_command::h194009976e056ef8(&var_1f0, r12.byte_offset(0xa8), 
        rdx);
    std::process::Command::arg::h20b967969329bd8e(&var_1f0, arg3);
    std::process::Command::args::hed6295a6549d7923(&var_1f0, arg5, arg6);
    let mut var_110: ();
    just::execution_context::ExecutionContext::working_directory::hcc9cc51d43cb6ad6(&var_110, r12, 
        arg2[3]);
    std::process::Command::current_dir::hb900367fa6eef4b5(&var_1f0, &var_110);
    let rdx_6: i32 = std::process::Command::stdin::hf565ff9df9f78a2a(&var_1f0, 0, 
        _$LT$std..process..Command$u20$as$u20$just..command_ext..CommandExt$GT$::export::hbded0bf5acb950b5(&var_1f0, r12.byte_offset(0xa8), arg2[1], &arg2[5], r12.byte_offset(0x238)));
    let mut rsi_6: i32;
    rsi_6 = *rdx.byte_offset(0x1a7) == 0;
    std::process::Command::stdout::h735b5e124ef77713(&var_1f0, 2, 
        std::process::Command::stderr::h9fed92c06b70fc7e(&var_1f0, rsi_6, rdx_6));
    memcpy(&var_110, &var_1f0, 0xe0);
    _$LT$std..process..Command$u20$as$u20$just..command_ext..CommandExt$GT$::output_guard_stdout::h162b0364341aa133(arg1)
}
