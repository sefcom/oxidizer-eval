
  fn zoxide::util::write::hfde126fc3b935f00(arg1: *mut c_void, arg2: *mut i64) -> u64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h08b3da5308d0badb(arg1);
    let mut var_40: i64 = rax;
    let var_38: i64 = rdx;
    let r14: i64 = arg2[1];
    arg2[2];
    let mut result_4: u64;
    let mut rdx_1: i64;
    result_4 = _$LT$std..ffi..os_str..OsString$u20$as$u20$core..ops..index..Index$LT$core..ops..range..RangeFull$GT$$GT$::index::h273e9513d8eb0763(r14);
    let rax_1: *mut i8 = std::path::Path::parent::hef287f60afa56900(rax, rdx);
    
    if rax_1 == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let mut result_1: u64;
    zoxide::util::tmpfile::h1fc190374b8e79de(&result_1, rax_1);
    let mut result: u64 = result_1;
    let var_68: i64;
    
    if -(var_68) != -0x8000000000000000
    {
        let mut var_60: *mut i64;
        let var_80_1: *mut i64 = var_60;
        let mut var_88: i64 = var_68;
        let var_50_1: i32 = result;
        result_1 = result_4;
        let var_68_1: i64 = rdx_1;
        var_60 = &var_88;
        var_60 = &var_40;
        let result_2: u64 =
            zoxide::util::write::_$u7b$$u7b$closure$u7d$$u7d$::hb8a2a97235f5d2d5(&result_1);
        result = result_2;
        let result_3: u64 = result_2;
        
        if result_2 != 0
        {
            result_1 = std::fs::remove_file::ha6d2497cc4d67d74(&var_88);
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h29a4fc21488b4033(&result_1);
        }
        
        core::mem::drop::h8efcdb4578edbe7f(var_88, var_80_1);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3a7e22f11fe542c0(*arg2, r14);
    result
}
