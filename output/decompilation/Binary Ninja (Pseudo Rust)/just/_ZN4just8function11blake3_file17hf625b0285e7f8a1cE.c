
  fn just::function::blake3_file::hf625b0285e7f8a1c(arg1: *mut i64, arg2: *mut i64, arg3: i64) -> *mut i64

{
    let rax: *mut c_void = *arg2;
    let mut var_7a8: ();
    just::execution_context::ExecutionContext::working_directory::hcc9cc51d43cb6ad6(&var_7a8, 
        *rax.byte_offset(0x10), *rax.byte_offset(0x18));
    let mut var_7f8: ();
    let var_7a0: i64;
    let var_798: u64;
    std::path::Path::join::h1eac0ae5e7efa361(&var_7f8, var_7a0, var_798, arg3);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_7a8);
    blake3::Hasher::new::hbcd0a691c6ef1979(&var_7a8);
    let mut rax_1: i8;
    let mut rdx_2: i64;
    rax_1 = blake3::Hasher::update_mmap_rayon::h78bb7ce06a0011c0(&var_7a8, &var_7f8);
    let mut var_7e0: i128;
    
    if (rax_1 & 1) == 0
    {
        blake3::Hasher::finalize::hacf7df9bac138be6(&var_7e0, &var_7a8);
        let mut var_7c0: i128;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h2ede3b6c558812d5(
            &var_7c0, &var_7e0);
        let var_7b0: i64;
        arg1[3] = var_7b0;
        *arg1.byte_offset(8) = var_7c0;
        *arg1 = 0;
    }
    else
    {
        let var_7f0: i64;
        let var_7e8: u64;
        just::function::blake3_file::_$u7b$$u7b$closure$u7d$$u7d$::h1ac425ac0e95b01a(&var_7e0, 
            var_7f0, var_7e8, rdx_2);
        *arg1.byte_offset(8) = var_7e0;
        let var_7d0: i64;
        arg1[3] = var_7d0;
        *arg1 = 1;
    }
    core::ptr::drop_in_place$LT$blake3..Hasher$GT$::hdd4ba21756554abf(&var_7a8);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_7f8);
    arg1
}
