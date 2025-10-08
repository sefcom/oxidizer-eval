
  fn just::evaluator::Evaluator::evaluate_assignments::h2cf48b4fb0207fb8(arg1: *mut i8, arg2: i64, arg3: i64, arg4: *mut c_void, arg5: *mut i64, arg6: i64) -> i64

{
    let mut var_d8: i64 = 0;
    let var_c8: i64 = 0;
    let r9: i64;
    let var_c0: i64 = r9;
    let mut var_1a8: i64 = 0;
    let var_1a0: i64 = 8;
    let var_198: i64 = 0;
    let rax: i64 = *arg5;
    let rdi: i64 = arg5[1];
    let mut rsi: i64 = rax;
    let mut rdx: i64;
    rdx = rax != 0;
    
    if rax != 0
    {
        rsi = arg5[2];
    }
    
    let mut var_190: i64 = rdx;
    let var_188: i64 = 0;
    let var_180: i64 = rax;
    let var_178: i64 = rdi;
    let var_170: i64 = rdx;
    let var_168: i64 = 0;
    let var_160: i64 = rax;
    let var_158: i64 = rdi;
    let var_150: i64 = rsi;
    let r13: *mut c_void = *arg4.byte_offset(0x280);
    let rbp: i64 = *arg4.byte_offset(0x288);
    let mut var_148: i64;
    let mut var_b8: i128;
    let mut var_b1: i128;
    let mut var_a0: i128;
    let mut var_90: i128;
    let mut var_80: i128;
    let mut var_70: i128;
    let mut var_60: i64;
    let mut rdx_1: *mut c_void;
    
    loop
    {
        let mut rax_2: *mut c_void;
        rax_2 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0825ba1c453e6840(&var_190);
        
        if rax_2 == 0
        {
            break;
        }
        
        let rax_3: *mut c_void =
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h62a22d89973a7e72(r13, 
            rbp, *rax_2.byte_offset(8), *rax_2.byte_offset(0x10));
        
        if rax_3 == 0
        {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_b8, rax_2);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h2be7ee32b7c9f397(&var_1a8, &var_b8);
        }
        else
        {
            let r12_1: i8 = *rax_3.byte_offset(0xcd);
            let mut var_110: i128;
            *var_110[8] = *rax_3.byte_offset(0xc0);
            let zmm3_1: i128 = *rax_3.byte_offset(0xb0);
            let mut var_128: i64;
            var_128 = *rax_3.byte_offset(0xa0);
            let mut var_138: i64;
            var_138 = *rax_3.byte_offset(0x90);
            var_148 = *rax_3.byte_offset(0x80);
            let r14_2: i8 = *rax_3.byte_offset(0xce);
            let mut var_48: i128;
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_48, rdx_1);
            let var_54_1: i8 = 0;
            let var_53_1: i8 = r12_1;
            let var_58_1: i32 = 0;
            var_60 = *var_110[8];
            var_70 = zmm3_1;
            var_80 = var_128;
            var_90 = var_138;
            var_a0 = var_148;
            let var_52_1: i8 = r14_2;
            var_b8 = var_48;
            let var_38: i64;
            *var_b1[9] = var_38;
            just::scope::Scope::bind::h2017080dbe33bcde(&var_d8, &var_b8);
        }
    }
    
    if var_198 != 0
    {
        let var_b1_1: i128 = var_1a8;
        *arg1 = 0x33;
        *arg1.byte_offset(1) = var_b8;
        *arg1.byte_offset(0x10) = *var_b1_1[8];
        *arg1.byte_offset(0x18) = var_198;
        return core::ptr::drop_in_place$LT$just..scope..Scope$GT$::h7ff7b84fe4911a9f(&var_d8);
    }
    
    let zmm0_1: i128 = var_d8;
    let var_128_1: *mut c_void = arg4.byte_offset(0x280);
    var_148 = arg2;
    let var_140_1: i64 = arg3;
    let var_138_1: *mut c_void = arg4;
    let var_130_1: i64 = arg6;
    let var_100_1: i8 = 0;
    let mut rcx_3: *mut c_void = r13;
    rdx_1 = r13 != 0;
    
    if r13 != 0
    {
        rcx_3 = *arg4.byte_offset(0x290);
    }
    
    let mut rax_13: i64;
    rax_13 = rdx_1;
    var_190 = rax_13;
    let var_188_1: i64 = 0;
    let var_180_1: *mut c_void = r13;
    let var_178_1: i64 = rbp;
    let var_170_1: i64 = rax_13;
    let var_168_1: i64 = 0;
    let var_160_1: *mut c_void = r13;
    let var_158_1: i64 = rbp;
    let var_150_1: *mut c_void = rcx_3;
    
    loop
    {
        let mut rax_14: i64;
        let mut rdx_5: *mut i64;
        rax_14 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h6442f8fd74f44bbc(&var_190);
        
        if rax_14 == 0
        {
            *arg1.byte_offset(0x18) = var_c8;
            *arg1.byte_offset(8) = zmm0_1;
            *arg1 = 0x38;
            break;
        }
        
        just::evaluator::Evaluator::evaluate_assignment::h6f66c21b7dd7e3b7(&var_b8, &var_148, 
            rdx_5);
        let rax_15: i8 = var_b8;
        
        if rax_15 != 0x38
        {
            let rcx_4: i32 = *var_b8[1];
            *arg1.byte_offset(4) = *var_b8[4];
            *arg1.byte_offset(1) = rcx_4;
            *arg1.byte_offset(0x18) = var_a0;
            *arg1.byte_offset(0x28) = var_90;
            *arg1.byte_offset(0x38) = var_80;
            *arg1.byte_offset(0x48) = var_70;
            *arg1.byte_offset(0x58) = var_60;
            *arg1 = rax_15;
            *arg1.byte_offset(8) = var_b1;
            core::ptr::drop_in_place$LT$just..evaluator..Evaluator$GT$::he8a263daf6e01e97(&var_148);
            break;
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(
        &var_1a8)
}
