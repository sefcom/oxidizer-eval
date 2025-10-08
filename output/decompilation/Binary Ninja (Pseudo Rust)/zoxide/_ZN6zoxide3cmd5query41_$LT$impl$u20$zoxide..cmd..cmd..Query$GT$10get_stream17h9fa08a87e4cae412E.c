
  fn zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..cmd..Query$GT$::get_stream::h9fa08a87e4cae412(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void, arg4: i64) -> i64

{
    let mut var_1a8: u64;
    zoxide::db::stream::StreamOptions::new::ha9455680dd6cde2c(&var_1a8, arg4);
    let mut var_148: i128;
    zoxide::db::stream::StreamOptions::with_keywords::hecf6012564e7de77(&var_148, &var_1a8, 
        *arg2.byte_offset(8));
    zoxide::config::exclude_dirs::h9f1bdfa8604aa8e4(&var_1a8);
    let rcx_1: u64 = var_1a8;
    let var_1a0: i64;
    
    if -(rcx_1) == -0x8000000000000000
    {
        arg1[1] = var_1a0;
        *arg1 = -0x8000000000000000;
        return core::ptr::drop_in_place$LT$zoxide..db..stream..StreamOptions$GT$::h41c70b265abb4d32(
            &var_148);
    }
    
    let mut var_1c0: u64 = rcx_1;
    let var_1b8_1: i64 = var_1a0;
    let var_198: i64;
    let var_1b0_1: i64 = var_198;
    let mut var_88: ();
    zoxide::db::stream::StreamOptions::with_exclude::hd0b349c1432d2065(&var_88, &var_148, &var_1c0);
    
    if *arg2.byte_offset(0x30) != -0x8000000000000000
    {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &var_1a8, arg2.byte_offset(0x30));
        let var_138_1: i64 = var_198;
        var_148 = var_1a8;
    }
    else
    {
        var_148 = -0x8000000000000000;
    }
    
    let mut var_e8: ();
    zoxide::db::stream::StreamOptions::with_base_dir::hdd0087d9881369a3(&var_e8, &var_88, &var_148);
    
    if *arg2.byte_offset(0x48) == 0
    {
        let var_90_1: i8 = 1;
        let var_8f_1: i8 = zoxide::config::resolve_symlinks::h2e8c21983af893b2();
    }
    
    zoxide::db::stream::Stream::new::hb44baf2d44c3710b(arg1, arg3, &var_e8)
}
