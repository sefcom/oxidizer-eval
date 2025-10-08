
  fn uu_env::apply_specified_env_vars::h6f7952585ac93a45(arg1: *mut c_void) -> *mut *mut [i8; 0xec]

{
    let mut result: *mut *mut [i8; 0xec] = *arg1.byte_offset(0x40);
    
    if result != 0
    {
        let mut rbx_2: *mut i64 = (*arg1.byte_offset(0x38)).byte_offset(0x18);
        let mut r15_1: i64 = result * 0x30;
        
        loop
        {
            if rbx_2[-1] == 0
            {
                let mut rax_1: i64;
                let mut rdx_1: i64;
                rax_1 = uucore::util_name::h074417a1e6395129();
                let mut var_50: i64 = rax_1;
                let var_48_1: i64 = rdx_1;
                let mut var_90: *mut i64 = &var_50;
                let var_88_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0c2ec06aa0838e92;
                let mut var_80: *mut c_void = &data_510ca8;
                let var_78_1: i64 = 2;
                let var_60_1: i64 = 0;
                let var_70_1: *mut *mut i64 = &var_90;
                let var_68_1: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_80);
                let rax_2: i64 = rbx_2[1];
                let rcx_1: i64 = rbx_2[2];
                var_50 = 1;
                let var_48_2: i64 = rax_2;
                let var_40_1: i64 = rcx_1;
                let var_38_1: i8 = 1;
                var_90 = &var_50;
                let var_88_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_80 = &data_510cc8;
                let var_78_2: i64 = 2;
                let var_60_2: i64 = 0;
                let var_70_2: *mut *mut i64 = &var_90;
                let var_68_2: i64 = 1;
                result = std::io::stdio::_eprint::h57899770eacec2ad(&var_80);
                rbx_2 = &rbx_2[6];
                let temp0_1: i64 = r15_1;
                r15_1 -= 0x30;
                
                if temp0_1 == 0x30
                {
                    break;
                }
            }
            else
            {
                result = std::env::set_var::ha04e04b7519b1e81(&rbx_2[-3], rbx_2);
                rbx_2 = &rbx_2[6];
                let temp1_1: i64 = r15_1;
                r15_1 -= 0x30;
                
                if temp1_1 == 0x30
                {
                    break;
                }
            }
        }
    }
    
    result
}
