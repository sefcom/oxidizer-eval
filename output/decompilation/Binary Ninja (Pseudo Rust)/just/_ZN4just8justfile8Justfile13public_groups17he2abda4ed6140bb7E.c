
  fn just::justfile::Justfile::public_groups::he2abda4ed6140bb7(arg1: *mut i64, arg2: *mut c_void, arg3: i8) -> i64

{
    let mut var_150: i64 = 0;
    let var_148: *mut c_void = 8;
    let var_140: i64 = 0;
    let rax: i64 = *arg2.byte_offset(0x2b8);
    let rcx: i64 = *arg2.byte_offset(0x2c0);
    let mut rdi: i64 = rax;
    let mut rdx: i64;
    rdx = rax != 0;
    
    if rax != 0
    {
        rdi = *arg2.byte_offset(0x2c8);
    }
    
    let mut var_138: i64 = rdx;
    let var_130: i64 = 0;
    let mut var_128: i64 = rax;
    let mut var_120: i64 = rcx;
    let mut var_118: i64 = rdx;
    let var_110: i64 = 0;
    let var_108: i64 = rax;
    let var_100: i64 = rcx;
    let var_f8: i64 = rdi;
    let mut var_d8: i64;
    let mut var_90: i64;
    let mut var_88: i128;
    
    loop
    {
        let mut rax_1: i64;
        let mut rdx_1: *mut i64;
        rax_1 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha467772e76a717b5(&var_138);
        
        if rax_1 == 0
        {
            break;
        }
        
        if rdx_1 == 0
        {
            break;
        }
        
        let rdi_4: *mut c_void = *rdx_1;
        
        if *rdi_4.byte_offset(0x10c) == 0 &&
            just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(rdi_4.byte_offset(0xe8), 
            0xf) == 0
        {
            let mut var_60: ();
            just::recipe::Recipe$LT$D$GT$::groups::hd8e05377223fb99f(&var_60, 
                (*rdx_1).byte_offset(0x10));
            _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0436ce891d6bcb07(&var_d8, &var_60);
            
            loop
            {
                _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf7c3db92e6462bc5(&var_90, &var_d8);
                let rax_3: i64 = var_90;
                
                if -(rax_3) == -0x8000000000000000
                {
                    break;
                }
                
                let zmm0_1: i128 = var_88;
                let var_48_1: i128 = zmm0_1;
                let rcx_3: *mut c_void = *rdx_1;
                var_90 = *rcx_3.byte_offset(0x48);
                *var_88[8] = *rcx_3.byte_offset(0xd8);
                let var_78_1: i64 = rax_3;
                let var_70_1: i128 = zmm0_1;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h062b618da8f3bdc6(&var_150, &var_90);
            }
            
            core::ptr::drop_in_place$LT$alloc..collections..btree..set..IntoIter$LT$alloc..string..String$GT$$GT$::hcfb473631b3f694e(&var_d8);
        }
    }
    
    let rax_4: i64 = *arg2.byte_offset(0x2a0);
    let rcx_5: i64 = *arg2.byte_offset(0x2a8);
    let mut rsi_5: i64 = rax_4;
    
    if rax_4 != 0
    {
        rsi_5 = *arg2.byte_offset(0x2b0);
    }
    
    let mut rdx_3: i64;
    rdx_3 = rax_4 != 0;
    var_d8 = rdx_3;
    let var_d0: i64 = 0;
    let var_c0: i64 = rcx_5;
    let var_b0: i64 = 0;
    let var_a8: i64 = rax_4;
    let var_a0: i64 = rcx_5;
    let var_98: i64 = rsi_5;
    
    loop
    {
        let mut rax_5: i64;
        let mut rdx_4: *mut c_void;
        rax_5 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h78f4c4822acc3ece(&var_d8);
        
        if rax_5 == 0
        {
            break;
        }
        
        if rdx_4 == 0
        {
            break;
        }
        
        let rax_6: i64 = *rdx_4.byte_offset(0x10);
        
        if rax_6 != 0
        {
            let mut rbx_1: *mut c_void = *rdx_4.byte_offset(8);
            let mut i_1: i64 = rax_6 * 0x18;
            let mut i: i64;
            
            do
            {
                if *rdx_4.byte_offset(0x230) == 0x25
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                let r12_2: i64 = *rdx_4.byte_offset(0x228);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_90, rbx_1);
                var_138 = 8;
                let var_130_1: i64 = 0;
                var_128 = r12_2;
                let var_110_1: i64 = *var_88[8];
                var_120 = var_90;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h062b618da8f3bdc6(&var_150, &var_138);
                rbx_1 += 0x18;
                i = i_1;
                i_1 -= 0x18;
            } while i != 0x18;
        }
    }
    
    if (arg3 & 1) == 0
    {
        alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by::h9fe3d33168c2c472(var_148, var_140);
    }
    else
    {
        alloc::slice::stable_sort::h023d403911cb0462(var_148, var_140);
    }
    
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h7747b82267ce9a18(&var_d8);
    var_118 = rdx_3;
    var_128 = rax_4;
    var_138 = var_d8;
    alloc::vec::Vec$LT$T$C$A$GT$::retain::h18e40eb95ecb495c(&var_150, &var_138);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hed57f29e9fc405e6(&var_d8, &var_150);
    core::iter::traits::iterator::Iterator::collect::h5b2da362f16f9884(arg1, &var_d8);
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::hfb902d89700f9edf(&var_138)
}
