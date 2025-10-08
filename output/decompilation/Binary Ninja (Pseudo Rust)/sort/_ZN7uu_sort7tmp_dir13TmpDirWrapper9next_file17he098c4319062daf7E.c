
  fn uu_sort::tmp_dir::TmpDirWrapper::next_file::he098c4319062daf7(arg1: *mut i32, arg2: *mut c_void) -> u64

{
    if *arg2.byte_offset(0x28) == 2
    {
        let mut result: u64;
        let mut rdx_1: i64;
        result = uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir::h40a12cf471832966(arg2);
        
        if result != 0
        {
            *arg1.byte_offset(0x10) = result;
            *arg1.byte_offset(0x18) = rdx_1;
            *arg1.byte_offset(8) = -0x8000000000000000;
            return result;
        }
    }
    
    let mut var_78: i128;
    std::sync::poison::mutex::Mutex$LT$T$GT$::lock::h2a065fc042bff740(&var_78, 
        (*arg2.byte_offset(0x30)).byte_offset(0x10));
    let mut rax_1: *mut i32;
    let mut rdx_2: i8;
    rax_1 = core::result::Result$LT$T$C$E$GT$::unwrap::hd0a5bb82409ec627(&var_78);
    let mut var_94: i128;
    let mut rax_2: i64;
    let mut rdx_3: u64;
    rax_2 = core::fmt::num::imp::_$LT$impl$u20$u64$GT$::_fmt::h284f18664830c6dd(
        *arg2.byte_offset(0x38), &var_94, 0x14);
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1bb0423170e7fa7c(&var_78, rax_2, rdx_3);
    let var_68: i64;
    let var_28_1: i64 = var_68;
    *arg2.byte_offset(0x38) += 1;
    let mut var_38: i128 = var_78;
    
    if *arg2.byte_offset(0x28) == 2
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let mut var_b0: i128;
    std::path::Path::join::hc7234bb093be180a(&var_b0, *arg2.byte_offset(0x18), 
        *arg2.byte_offset(0x20), &var_38);
    std::fs::File::create::hcc6fca5dbadf2b47(&var_78, &var_b0);
    
    if var_78 != 1
    {
        let var_90_1: i128 = var_b0;
        *arg1 = *var_78[4];
        *arg1.byte_offset(4) = var_94;
        *arg1.byte_offset(0x10) = *var_90_1[8];
        let var_a0: i64;
        *arg1.byte_offset(0x18) = var_a0;
    }
    else
    {
        let rax_4: i64 = *var_78[8];
        var_78 = -0x7ffffffffffffffd;
        *var_78[8] = rax_4;
        *var_78[0xc] = rax_4 >> 0x20;
        *arg1.byte_offset(0x10) = alloc::boxed::Box$LT$T$GT$::new::h4da5af3d8a2f6642(&var_78);
        *arg1.byte_offset(0x18) = &data_58c448;
        *arg1.byte_offset(8) = -0x8000000000000000;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hb52824ed0e0c3e52(&var_b0);
    }
    
    core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$std..io..buffered..bufreader..BufReader$LT$std..io..stdio..StdinRaw$GT$$GT$$GT$::h1d94eac551d99a4d(rax_1, rdx_2 & 1)
}
