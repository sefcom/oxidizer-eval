
  fn uu_ptx::create_word_set::ha43c71debbb1b6c6(arg1: *mut i128, arg2: *mut c_void, arg3: *mut c_void, arg4: *mut i64) -> *mut i128

{
    let mut var_148: i128;
    regex::regex::string::Regex::new::h2b022f3b326b0361(&var_148, *arg3.byte_offset(8));
    let mut var_90: ();
    core::result::Result$LT$T$C$E$GT$::unwrap::hc501836100c48eb1(&var_90, &var_148);
    regex::regex::string::Regex::new::h2b022f3b326b0361(&var_148, *arg2.byte_offset(0x38));
    let mut var_b0: *mut c_void;
    core::result::Result$LT$T$C$E$GT$::unwrap::hc501836100c48eb1(&var_b0, &var_148);
    let mut var_1e0: i64 = 0;
    let var_1d0: i64 = 0;
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::h033c4715d4164856(&var_148, arg4);
    let mut var_128: i64;
    let var_38: i64 = var_128;
    let mut var_138: i128;
    let var_48: i128 = var_138;
    let mut var_58: i128 = var_148;
    let rax_1: i8 = *arg2.byte_offset(0x5a);
    let rax_2: i8 = *arg2.byte_offset(0x5c);
    let rax_3: i8 = *arg3.byte_offset(0x78);
    let rax_4: i8 = *arg3.byte_offset(0x79);
    
    loop
    {
        let mut rax_6: *mut c_void;
        let mut rdx_2: *mut c_void;
        rax_6 = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::haf25f5bee2ea9502(&var_58);
        
        if rax_6 == 0
        {
            break;
        }
        
        let rax_7: i64 = *rdx_2.byte_offset(0x30);
        let rax_8: i64 = *rdx_2.byte_offset(8);
        let rcx: i64 = *rdx_2.byte_offset(0x10);
        let mut var_1c8: i64 = rax_8;
        let var_1c0_1: i64 = rax_8 + rcx * 0x18;
        let mut rax_9: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2542eee79d3070c(&var_1c8);
        
        if rax_9 != 0
        {
            let mut var_220_1: i64 = 0;
            
            loop
            {
                let r14_1: *mut i8 = *rax_9.byte_offset(8);
                let r12_1: *mut c_void = *rax_9.byte_offset(0x10);
                let var_a8: *mut c_void;
                regex::regex::string::Regex::find_at::hf05a7654ffba1dbb(&var_148, var_b0, var_a8, 
                    r14_1, r12_1);
                let mut r15_1: i64 = var_148;
                let mut var_218_1: i64 = r15_1;
                
                if r15_1 != 0
                {
                    r15_1 = var_138;
                    var_218_1 = *var_138[8];
                }
                
                let mut var_1b8: i128;
                regex_automata::meta::regex::Regex::find_iter::h9e67946da93e5169(&var_1b8, &var_90, 
                    r14_1);
                let var_168: i128;
                let var_f8_1: i128 = var_168;
                let mut var_178: i128;
                let var_108_1: i128 = var_178;
                let mut var_188: i128;
                let var_118_1: i128 = var_188;
                let mut var_198: i128;
                var_128 = var_198;
                let mut var_1a8: i128;
                var_138 = var_1a8;
                var_148 = var_1b8;
                let var_e0_1: *mut i8 = r14_1;
                let var_d8_1: *mut c_void = r12_1;
                
                loop
                {
                    let var_158: *mut i64;
                    regex_automata::util::iter::Searcher::advance::hf2daab265d806bac(&var_1b8, 
                        &var_128, var_158, &var_148);
                    
                    if var_1b8 == 0
                    {
                        core::ptr::drop_in_place$LT$regex..regex..string..Matches$GT$::h0da4c5b7d9432e00(&var_148);
                        var_220_1 += 1;
                        rax_9 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he2542eee79d3070c(&var_1c8);
                        break;
                    }
                    
                    let rbp_2: *mut c_void = *var_1b8[8];
                    let rbx_1: *mut c_void = var_1a8;
                    
                    if rax_1 != 0 && rbp_2 == r15_1 && core::cmp::impls::_$LT$impl$u20$core..cmp..PartialEq$u20$for$u20$usize$GT$::eq::h37bad34467ea7e13(rbx_1, var_218_1) != 0
                    {
                        continue;
                    }
                    
                    let mut rax_15: *mut c_void;
                    let mut rdx_7: u64;
                    rax_15 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(rbp_2, rbx_1, r14_1, r12_1);
                    
                    if rax_15 == 0
                    {
                        core::str::slice_error_fail::h5dbb61534404fe7e(r14_1, r12_1, rbp_2, rbx_1);
                        /* no return */
                    }
                    
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h881c0d1e76b3a749(
                        &var_1b8, rax_15, rdx_7);
                    let mut var_228_1: size_t = var_1a8;
                    let mut var_238: i128 = var_1b8;
                    let mut rax_17: *mut c_void;
                    
                    if rax_3 != 0
                    {
                        rax_17 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h627002b9e4e69103(arg3.byte_offset(0x18), &var_238);
                    }
                    
                    if rax_3 != 0 && rax_17 == 0
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(
                            &var_238);
                        continue;
                    }
                    else if rax_4 != 0 &&
                        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h627002b9e4e69103(
                        arg3.byte_offset(0x48), &var_238) != 0
                    {
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(
                            &var_238);
                        continue;
                    }
                    
                    if rax_2 != 0
                    {
                        alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h8673807247540a26(
                            &var_1b8, *var_238[8], var_228_1);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(
                            &var_238);
                        var_228_1 = var_1a8;
                        var_238 = var_1b8;
                    }
                    
                    let zmm0_3: i128 = var_238;
                    let mut var_70: i128;
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h8f45b0d02f4dafda(&var_70, rax_6);
                    var_1a8 = var_228_1;
                    var_1b8 = zmm0_3;
                    var_188 = rax_7 + var_220_1;
                    *var_188[8] = var_220_1;
                    var_178 = rbp_2;
                    *var_178[8] = rbx_1;
                    let var_60: i64;
                    *var_198[8] = var_60;
                    var_1a8 = var_70;
                    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h814780906c3007c3(&var_1e0, &var_1b8);
                }
                
                if rax_9 == 0
                {
                    break;
                }
            }
        }
    }
    
    arg1[1] = var_1d0;
    *arg1 = var_1e0;
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::hf34b8b1af3b36f38(&var_b0);
    core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::hf34b8b1af3b36f38(&var_90);
    arg1
}
