
  int64_t just::justfile::Justfile::public_groups::he2abda4ed6140bb7(int64_t* arg1, void* arg2, char arg3)

{
    int64_t var_150 = 0;
    void* var_148 = 8;
    int64_t var_140 = 0;
    int64_t rax = *(arg2 + 0x2b8);
    int64_t rcx = *(arg2 + 0x2c0);
    int64_t rdi = rax;
    int64_t rdx;
    rdx = rax;
    
    if (rax)
        rdi = *(arg2 + 0x2c8);
    
    int64_t var_138 = rdx;
    int64_t var_130 = 0;
    int64_t var_128 = rax;
    int64_t var_120 = rcx;
    int64_t var_118 = rdx;
    int64_t var_110 = 0;
    int64_t var_108 = rax;
    int64_t var_100 = rcx;
    int64_t var_f8 = rdi;
    int64_t var_d8;
    int64_t var_90;
    int128_t var_88;
    
    while (true)
    {
        int64_t rax_1;
        int64_t* rdx_1;
        rax_1 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha467772e76a717b5(&var_138);
        
        if (!rax_1)
            break;
        
        if (!rdx_1)
            break;
        
        void* rdi_4 = *rdx_1;
        
        if (!*(rdi_4 + 0x10c)
            && !just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(rdi_4 + 0xe8, 0xf))
        {
            void var_60;
            just::recipe::Recipe$LT$D$GT$::groups::hd8e05377223fb99f(&var_60, *rdx_1 + 0x10);
            _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h0436ce891d6bcb07(&var_d8, &var_60);
            
            while (true)
            {
                _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf7c3db92e6462bc5(&var_90, &var_d8);
                int64_t rax_3 = var_90;
                
                if (-(rax_3) == -0x8000000000000000)
                    break;
                
                int128_t zmm0_1 = var_88;
                int128_t var_48_1 = zmm0_1;
                void* rcx_3 = *rdx_1;
                var_90 = *(rcx_3 + 0x48);
                *var_88[8] = *(rcx_3 + 0xd8);
                int64_t var_78_1 = rax_3;
                int128_t var_70_1 = zmm0_1;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h062b618da8f3bdc6(&var_150, &var_90);
            }
            
            core::ptr::drop_in_place$LT$alloc..collections..btree..set..IntoIter$LT$alloc..string..String$GT$$GT$::hcfb473631b3f694e(&var_d8);
        }
    }
    
    int64_t rax_4 = *(arg2 + 0x2a0);
    int64_t rcx_5 = *(arg2 + 0x2a8);
    int64_t rsi_5 = rax_4;
    
    if (rax_4)
        rsi_5 = *(arg2 + 0x2b0);
    
    int64_t rdx_3;
    rdx_3 = rax_4;
    var_d8 = rdx_3;
    int64_t var_d0 = 0;
    int64_t var_c0 = rcx_5;
    int64_t var_b0 = 0;
    int64_t var_a8 = rax_4;
    int64_t var_a0 = rcx_5;
    int64_t var_98 = rsi_5;
    
    while (true)
    {
        int64_t rax_5;
        void* rdx_4;
        rax_5 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h78f4c4822acc3ece(&var_d8);
        
        if (!rax_5)
            break;
        
        if (!rdx_4)
            break;
        
        int64_t rax_6 = *(rdx_4 + 0x10);
        
        if (rax_6)
        {
            void* rbx_1 = *(rdx_4 + 8);
            int64_t i_1 = rax_6 * 0x18;
            int64_t i;
            
            do
            {
                if (*(rdx_4 + 0x230) == 0x25)
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                int64_t r12_2 = *(rdx_4 + 0x228);
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_90, rbx_1);
                var_138 = 8;
                int64_t var_130_1 = 0;
                var_128 = r12_2;
                int64_t var_110_1 = *var_88[8];
                var_120 = var_90;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h062b618da8f3bdc6(&var_150, &var_138);
                rbx_1 += 0x18;
                i = i_1;
                i_1 -= 0x18;
            } while (i != 0x18);
        }
    }
    
    if (!(arg3 & 1))
        alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by::h9fe3d33168c2c472(var_148, var_140);
    else
        alloc::slice::stable_sort::h023d403911cb0462(var_148, var_140);
    
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h7747b82267ce9a18(&var_d8);
    var_118 = rdx_3;
    var_128 = rax_4;
    var_138 = var_d8;
    alloc::vec::Vec$LT$T$C$A$GT$::retain::h18e40eb95ecb495c(&var_150, &var_138);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hed57f29e9fc405e6(&var_d8, &var_150);
    core::iter::traits::iterator::Iterator::collect::h5b2da362f16f9884(arg1, &var_d8);
    return core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$alloc..string..String$GT$$GT$::hfb902d89700f9edf(&var_138);
}
