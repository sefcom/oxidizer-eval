
  fn uu_shred::do_remove::he7f6ef1c114a8897(arg1: i64, arg2: u64, arg3: i64, arg4: i64, arg5: i32, arg6: i8) -> *mut *mut [i8; 0xc5]

{
    let rbp: i8 = arg5;
    let mut var_b0: *mut i64;
    let mut var_98: *mut c_void;
    let mut var_68: i64;
    
    if arg5 != 0
    {
        let mut rax_1: i64;
        let mut rdx: i64;
        rax_1 = uucore::util_name::h074417a1e6395129();
        var_68 = rax_1;
        let var_60_1: i64 = rdx;
        var_b0 = &var_68;
        let var_a8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3641e459b5f3d84f;
        var_98 = &data_4f9f98;
        let var_90_1: i64 = 2;
        let var_78_1: i64 = 0;
        let var_88_1: *mut *mut i64 = &var_b0;
        let var_80_1: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
        var_68 = 0;
        let var_60_2: i64 = arg3;
        let var_58_1: i64 = arg4;
        let var_50_1: i8 = 0;
        var_b0 = &var_68;
        let var_a8_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_98 = &data_4fa2f0;
        let var_90_2: i64 = 2;
        let var_78_2: i64 = 0;
        let var_88_2: *mut *mut i64 = &var_b0;
        let var_80_2: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
    }
    
    let mut var_48: i64;
    
    if arg6 != 1
    {
        uu_shred::wipe_name::he9016127f4be3579(&var_48, arg1, arg2, rbp, arg6);
        
        if !(0 + -(var_48))
        {
            'label_46577a:
            let result: *mut *mut [i8; 0xc5] = std::fs::remove_file::h74e1b329d739e10b(&var_48);
            
            if (result == 0 & rbp) == 0
            {
                return result;
            }
            
            goto 'label_4657b9;
        }
    }
    else
    {
        std::path::Path::with_file_name::h407d2447819234ad(&var_48, arg1, arg2, arg3);
        
        if !(0 + -(var_48))
        {
            goto 'label_46577a;
        }
    }
    
    if rbp != 0
    {
        'label_4657b9:
        let mut rax_3: i64;
        let mut rdx_3: i64;
        rax_3 = uucore::util_name::h074417a1e6395129();
        var_68 = rax_3;
        let var_60_3: i64 = rdx_3;
        var_b0 = &var_68;
        let var_a8_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3641e459b5f3d84f;
        var_98 = &data_4f9f98;
        let var_90_3: i64 = 2;
        let var_78_3: i64 = 0;
        let var_88_3: *mut *mut i64 = &var_b0;
        let var_80_3: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
        var_68 = 0;
        let var_60_4: i64 = arg3;
        let var_58_2: i64 = arg4;
        let var_50_2: i8 = 0;
        var_b0 = &var_68;
        let var_a8_4: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_98 = &data_4fa310;
        let var_90_4: i64 = 2;
        let var_78_4: i64 = 0;
        let var_88_4: *mut *mut i64 = &var_b0;
        let var_80_4: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
    }
    
    nullptr
}
