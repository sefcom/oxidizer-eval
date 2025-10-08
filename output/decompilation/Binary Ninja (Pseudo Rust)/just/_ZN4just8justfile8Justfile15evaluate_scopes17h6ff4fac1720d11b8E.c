
  fn just::justfile::Justfile::evaluate_scopes::h6ff4fac1720d11b8(arg1: *mut i8, arg2: *mut c_void, arg3: *mut i64, arg4: i64, arg5: i64, arg6: *mut i64, arg7: i64, arg8: *mut i64, arg9: i64) -> u64

{
    let var_138: i64 = arg9;
    let mut result_1: i8;
    just::evaluator::Evaluator::evaluate_assignments::h2cf48b4fb0207fb8(&result_1, arg4, arg5, 
        arg2, arg6, arg7);
    let mut result: u64 = result_1;
    let mut var_11f: i128;
    let var_10f: i128;
    let var_100: i64;
    let var_f8: i128;
    let var_e8: i128;
    let var_d8: i128;
    let var_c8: i128;
    let mut var_b8: i128;
    
    if result != 0x38
    {
        var_b8 = var_11f;
        *arg1.byte_offset(0x58) = var_c8;
        *arg1.byte_offset(0x48) = var_d8;
        *arg1.byte_offset(0x38) = var_e8;
        *arg1.byte_offset(0x28) = var_f8;
        *arg1.byte_offset(0x20) = var_100;
        let zmm0: i128 = var_b8;
        *arg1.byte_offset(0x11) = var_10f;
        *arg1.byte_offset(1) = zmm0;
        *arg1 = result;
    }
    else
    {
        let mut var_58: i128 = var_11f;
        let var_48_1: i128 = var_10f;
        typed_arena::Arena$LT$T$GT$::alloc_fast_path::hd673e813275a11c7(&result_1, arg3, &var_58);
        let mut rbp_1: i64;
        
        if result_1 != 1
        {
            rbp_1 = *var_11f[7];
        }
        else
        {
            rbp_1 =
                typed_arena::Arena$LT$T$GT$::alloc_slow_path::hc006cc0a87cb3d76(arg3, &*var_11f[7]);
        }
        
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
            &result_1, arg2.byte_offset(0x30));
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h0aa37625c7037f01(arg8, 
            &result_1, arg2, rbp_1);
        let rax_2: i64 = *arg2.byte_offset(0x2a0);
        let rcx_4: i64 = *arg2.byte_offset(0x2a8);
        let mut rsi_5: i64 = rax_2;
        let mut rdx_3: i64;
        rdx_3 = rax_2 != 0;
        
        if rax_2 != 0
        {
            rsi_5 = *arg2.byte_offset(0x2b0);
        }
        
        var_b8 = rdx_3;
        *var_b8[8] = 0;
        let mut var_a8: i128;
        var_a8 = rax_2;
        *var_a8[8] = rcx_4;
        let var_99: i64 = rdx_3;
        let var_90_1: i64 = 0;
        let var_88_1: i64 = rax_2;
        let var_80_1: i64 = rcx_4;
        let var_78_1: i64 = rsi_5;
        let mut rax_3: i64;
        let mut rdx_4: *mut c_void;
        rax_3 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h78f4c4822acc3ece(&var_b8);
        
        if rax_3 != 0
        {
            let mut i: i64;
            
            do
            {
                let mut var_70: i64 = 0;
                let var_60_1: i64 = 0;
                just::justfile::Justfile::evaluate_scopes::h6ff4fac1720d11b8(&result_1, rdx_4, 
                    arg3, arg4, arg5, &var_70, rbp_1, arg8, arg9);
                
                if result_1 != 0x38
                {
                    *arg1.byte_offset(0x60) = *var_c8[8];
                    *arg1.byte_offset(0x50) = var_d8;
                    *arg1.byte_offset(0x40) = var_e8;
                    let zmm0_1: i128 = result_1;
                    let zmm1_1: i128 = var_11f;
                    *arg1.byte_offset(0x30) = var_f8;
                    *arg1.byte_offset(0x20) = var_100;
                    *arg1.byte_offset(0x10) = zmm1_1;
                    *arg1 = zmm0_1;
                    return core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$alloc..string..String$GT$$GT$::ha376ddf44fdc42b7(&var_70);
                }
                
                core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$alloc..string..String$GT$$GT$::ha376ddf44fdc42b7(&var_70);
                i = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h78f4c4822acc3ece(&var_b8);
            } while i != 0;
        }
        
        result = arg1;
        *result = 0x38;
    }
    result
}
