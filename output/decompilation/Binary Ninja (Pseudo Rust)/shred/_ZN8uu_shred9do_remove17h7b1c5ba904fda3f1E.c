
  fn uu_shred::do_remove::h7b1c5ba904fda3f1(arg1: i64, arg2: size_t, arg3: i64, arg4: i64, arg5: i32, arg6: i8) -> *mut *mut [i8; 0x95]

{
    let rbp: i8 = arg5;
    let mut var_c8: *mut i64;
    let mut var_b0: *mut c_void;
    let mut var_80: i64;
    
    if arg5 != 0
    {
        let mut rax_1: i64;
        let mut rdx_1: i64;
        rax_1 = uucore::util_name::h60d842bf27b05e82();
        var_80 = rax_1;
        let var_78_1: i64 = rdx_1;
        var_c8 = &var_80;
        let var_c0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h264c667d1212e3ad;
        var_b0 = &data_538698;
        let var_a8_1: i64 = 2;
        let var_90_1: i64 = 0;
        let var_a0_1: *mut *mut i64 = &var_c8;
        let var_98_1: i64 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
        var_80 = 0;
        let var_78_2: i64 = arg3;
        let var_70_1: i64 = arg4;
        let var_68_1: i8 = 0;
        var_c8 = &var_80;
        let var_c0_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_b0 = &data_538928;
        let var_a8_2: i64 = 2;
        let var_90_2: i64 = 0;
        let var_a0_2: *mut *mut i64 = &var_c8;
        let var_98_2: i64 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
    }
    
    if arg6 != 1
    {
        uu_shred::wipe_name::hcce9bfbf2150b71e(&var_c8, arg1, arg2, rbp, arg6);
    }
    else
    {
        std::path::Path::with_file_name::hc341ca2068d6c4b9(&var_c8, arg1, arg2, arg3);
    }
    
    let r12_1: *mut i64 = var_c8;
    
    if r12_1 != -0x8000000000000000
    {
        let var_b8: i64;
        let var_38_1: i64 = var_b8;
        let mut var_48: i128 = var_c8;
        let result: *mut *mut [i8; 0x95] = std::fs::remove_file::h876d9142090ac2ab(&var_48);
        
        if result != 0
        {
            return result;
        }
    }
    
    let mut rax_4: *mut i64 = r12_1;
    
    if rbp != 0
    {
        let mut rax_3: i64;
        let mut rdx_2: i64;
        rax_3 = uucore::util_name::h60d842bf27b05e82();
        var_80 = rax_3;
        let var_78_3: i64 = rdx_2;
        let mut var_60: *mut i64 = &var_80;
        let var_58_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h264c667d1212e3ad;
        var_b0 = &data_538698;
        let var_a8_3: i64 = 2;
        let var_90_3: i64 = 0;
        let var_a0_3: *mut *mut i64 = &var_60;
        let var_98_3: i64 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
        var_80 = 0;
        let var_78_4: i64 = arg3;
        let var_70_2: i64 = arg4;
        let var_68_2: i8 = 0;
        var_60 = &var_80;
        let var_58_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_b0 = &data_538948;
        let var_a8_4: i64 = 2;
        let var_90_4: i64 = 0;
        let var_a0_4: *mut *mut i64 = &var_60;
        let var_98_4: i64 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_b0);
        rax_4 = var_c8;
    }
    
    if r12_1 == -0x8000000000000000 && rax_4 != -0x8000000000000000
    {
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::ha6413bedadae7a14(&var_c8);
    }
    
    nullptr
}
