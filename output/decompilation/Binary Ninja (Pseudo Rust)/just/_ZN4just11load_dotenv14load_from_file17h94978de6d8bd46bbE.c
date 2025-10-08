
  fn just::load_dotenv::load_from_file::h94978de6d8bd46bb(arg1: *mut i8, arg2: i64, arg3: i64, arg4: i8) -> i64

{
    let mut var_a8: i64;
    dotenvy::from_path_iter::hb404f5f3f3c1c123(&var_a8, arg2);
    let rax: i64 = var_a8;
    let mut result: i64;
    let mut var_108: i128;
    let var_a0: i128;
    let var_90: i128;
    
    if rax == 0
    {
        *arg1 = 0x10;
        *arg1.byte_offset(1) = var_108;
        *arg1.byte_offset(0x11) = var_a0;
        result = *var_90[8];
        *arg1.byte_offset(0x20) = result;
    }
    else
    {
        let var_50: i64;
        let var_b0_1: i64 = var_50;
        let var_60: i128;
        let var_c0_1: i128 = var_60;
        let var_70: i128;
        let var_d0_1: i128 = var_70;
        let var_80: i128;
        let var_e0_1: i128 = var_80;
        let var_101: i128 = var_a0;
        let var_f1: i128 = var_90;
        let mut var_190: i64 = 0;
        let result_1: i64 = 0;
        var_108 = rax;
        
        loop
        {
            _$LT$dotenvy..iter..Iter$LT$R$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd5b1cc3ee223d309(&var_a8, &var_108);
            let rax_1: i64 = var_a8;
            let mut var_178: i128;
            
            if -(rax_1) == -0x8000000000000000
            {
                *arg1 = 0x10;
                *arg1.byte_offset(1) = var_178;
                *arg1.byte_offset(0x11) = var_a0;
                *arg1.byte_offset(0x20) = *var_90[8];
                core::ptr::drop_in_place$LT$dotenvy..iter..Iter$LT$std..fs..File$GT$$GT$::h7ebcd747ad9a99f6(&var_108);
                return core::ptr::drop_in_place$LT$alloc..collections..btree..map..BTreeMap$LT$alloc..string..String$C$alloc..string..String$GT$$GT$::ha376ddf44fdc42b7(&var_190);
            }
            
            if rax_1 == -0x7fffffffffffffff
            {
                break;
            }
            
            let mut var_148: i128 = var_90;
            let mut var_1a8: i64 = rax_1;
            let var_138_1: i64 = var_80;
            
            if (arg4 & 1) == 0
            {
                std::env::var_os::h6a2d090e3fc310b6(&var_178, &var_1a8);
                let r14_1: i64 = var_178;
                core::ptr::drop_in_place$LT$std..env..VarError$GT$::h3a6801680fc5590a(&var_178);
                
                if !(0 + -(r14_1))
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                        &var_148);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h367fa18a9dfefdab(
                        &var_1a8);
                    continue;
                }
            }
            
            let mut var_171: i128;
            *var_171[9] = *var_a0[8];
            var_178 = var_1a8;
            *var_171[1] = var_a0;
            let mut var_48: ();
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h31a4bd75c0e0caf1(
                &var_48, &var_190, &var_178, &var_148);
            core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&var_48);
        }
        
        core::ptr::drop_in_place$LT$dotenvy..iter..Iter$LT$std..fs..File$GT$$GT$::h7ebcd747ad9a99f6(
            &var_108);
        result = result_1;
        *arg1.byte_offset(0x18) = result;
        *arg1.byte_offset(8) = var_190;
        *arg1 = 0x38;
    }
    result
}
