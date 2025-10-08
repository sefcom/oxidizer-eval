
  fn zoxide::db::_$LT$impl$u20$zoxide..db..ouroboros_impl_database..Database$GT$::deserialize::he176e887fb59a3e7(arg1: *mut i64, arg2: i64, arg3: i64) -> u64

{
    let mut var_c0: i64 = 0x2000000;
    let mut rax: i8;
    let mut rdx: i64;
    rax = bincode::internal::serialized_size::hb22fc907dc4f82e9(&var_c0);
    let rax_1: i64 = core::result::Result$LT$T$C$E$GT$::unwrap::hafceaa8716aa428b(rax, rdx);
    let mut result: u64;
    let mut var_b0: *mut *mut c_void;
    
    if arg3 < rax_1
    {
        var_b0 = &data_534af0;
        let var_a8_1: i64 = 1;
        let var_a0_1: i64 = 8;
        let var_98_1: i128 = {0};
        result = anyhow::__private::format_err::h09b344f6a077676a(&var_b0);
        arg1[1] = result;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        let mut var_60: i64;
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::h7a84bcba58f46e1f(&var_60, 
            arg2, arg3, rax_1);
        let var_58: i64;
        let rdx_3: u64 =
            bincode::internal::deserialize_seed::haadefd01c21343c3(&var_b0, var_60, var_58);
        
        if var_b0 == 1
        {
            let var_a8: i64;
            result = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::hacc644a7f9a110d3(var_a8);
            arg1[1] = result;
            *arg1 = -0x8000000000000000;
        }
        else
        {
            let rax_2: i32 = *var_b0[4];
            let mut var_80: *mut i32;
            
            if rax_2 != 3
            {
                let mut var_b4: i32 = rax_2;
                var_80 = &var_b4;
                let var_78: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
                let var_70_1: *const i8 = &data_418e14;
                let var_68_1: fn(arg1: *mut i32, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
                var_b0 = &data_534b00;
                let var_a8_2: i64 = 3;
                let mut var_98: i128;
                *var_98[8] = 0;
                let var_a0_2: *mut *mut i32 = &var_80;
                var_98 = 2;
                let mut var_40: ();
                core::option::Option$LT$T$GT$::map_or_else::h14192bf0a0209b71(&var_40, 0, rdx_3, 
                    &var_b0);
                result =
                    anyhow::error::_$LT$impl$u20$anyhow..Error$GT$::msg::hc23a566b3b9e9070(&var_40);
                arg1[1] = result;
                *arg1 = -0x8000000000000000;
            }
            else
            {
                let var_50: i64;
                let var_48: i64;
                bincode::internal::deserialize_seed::h6b6492c86183f11f(&var_b0, var_50, var_48);
                anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::h239f06cbae04b87d(&var_80, &var_b0);
                let rcx_2: *mut i32 = var_80;
                let result_1: u64;
                result = result_1;
                
                if rcx_2 != -0x8000000000000000
                {
                    *arg1 = rcx_2;
                    arg1[1] = result;
                    let var_70: i64;
                    arg1[2] = var_70;
                }
                else
                {
                    arg1[1] = result;
                    *arg1 = -0x8000000000000000;
                }
            }
        }
    }
    result
}
