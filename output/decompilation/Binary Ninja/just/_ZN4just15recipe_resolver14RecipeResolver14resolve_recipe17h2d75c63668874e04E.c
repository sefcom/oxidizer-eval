
  int64_t just::recipe_resolver::RecipeResolver::resolve_recipe::h2d75c63668874e04(int64_t* arg1, void* arg2, int64_t* arg3, int64_t* arg4)

{
    void* rax;
    uint64_t rdx;
    rax = just::token::Token::lexeme::h66587cdf67f63270(&arg4[0x12]);
    int64_t* rax_1 =
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::h3ce94925646e0fd0(
        *(arg2 + 0x20), *(arg2 + 0x28), rax, rdx);
    
    if (!rax_1)
    {
        void* rax_3;
        int64_t rdx_2;
        rax_3 = just::token::Token::lexeme::h66587cdf67f63270(&arg4[0x12]);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h6fed9915a4cca328(arg3, rax_3, rdx_2);
        int64_t rax_4 = arg4[4];
        int64_t rcx_3 = arg4[5];
        int64_t var_2b8 = rax_4;
        int64_t var_2b0_1 = rcx_3 * 0x30 + rax_4;
        void* var_2a8_1 = arg2;
        int64_t* var_2a0_1 = arg4;
        int64_t* var_298_1 = arg3;
        int128_t var_238;
        core::iter::traits::iterator::Iterator::collect::h124cdc44d57f2113(&var_238, &var_2b8);
        int128_t var_228;
        int128_t var_218;
        int128_t var_208;
        char var_1f0;
        int128_t var_128;
        
        if (var_1f0 == 0x25)
        {
            int128_t var_258 = var_238;
            int64_t var_248_1 = var_228;
            int64_t rax_7 = arg3[2];
            
            if (rax_7)
                arg3[2] = rax_7 - 1;
            
            memcpy(&var_238, arg4, 0x100);
            just::unresolved_recipe::_$LT$impl$u20$just..recipe..Recipe$LT$just..unresolved_dependency..UnresolvedDependency$GT$$GT$::resolve::h282f902b1bf99931(&var_128, &var_238, *(arg2 + 8), *(arg2 + 0x10), &var_258);
            int64_t r15_1 = var_128;
            var_2b8 = var_128;
            int128_t var_118;
            var_2a8_1 = var_118;
            int128_t var_108;
            var_298_1 = var_108;
            int128_t var_f8;
            int128_t var_e0;
            
            if (-(r15_1) == -0x8000000000000000)
            {
                *(arg1 + 0x40) = var_e0;
                int128_t zmm0_2 = var_2b8;
                *(arg1 + 0x30) = var_f8;
                *(arg1 + 0x20) = var_298_1;
                *(arg1 + 0x10) = var_2a8_1;
                *arg1 = zmm0_2;
                return -(r15_1);
            }
            
            void var_1d0;
            void var_d0;
            memcpy(&var_1d0, &var_d0, 0xa8);
            var_228 = var_2b8;
            var_218 = var_2a8_1;
            var_208 = var_298_1;
            var_1f0 = var_f8;
            int128_t var_1e0_1 = var_e0;
            var_238 = 1;
            *var_238[8] = 1;
            var_228 = r15_1;
            int64_t* rax_11 = alloc::boxed::Box$LT$T$GT$::new::hd5615bb7f3f87468(&var_238);
            int64_t* var_260_1 = rax_11;
            int64_t temp2_1 = *rax_11;
            *rax_11 += 1;
            
            if (temp2_1 <= -1)
                trap(6);
            
            int64_t result =
                just::table::Table$LT$V$GT$::insert::h70ddfb0fda70ad86(arg2 + 0x20, rax_11);
            *arg1 = rax_11;
            arg1[9] = 0x25;
            return result;
        }
        
        var_128 = var_238;
        int32_t var_1ec;
        *(arg1 + 0x4c) = var_1ec;
        int32_t var_1ef;
        *(arg1 + 0x49) = var_1ef;
        int64_t var_1f8;
        arg1[8] = var_1f8;
        int128_t zmm0_1 = var_128;
        *(arg1 + 0x30) = var_208;
        *(arg1 + 0x20) = var_218;
        *(arg1 + 0x10) = var_228;
        *arg1 = zmm0_1;
        arg1[9] = var_1f0;
    }
    else
    {
        int64_t* rcx_1 = *rax_1;
        int64_t temp0_1 = *rcx_1;
        *rcx_1 += 1;
        
        if (temp0_1 <= -1)
            trap(6);
        
        *arg1 = *rax_1;
        arg1[9] = 0x25;
    }
    
    /* tailcall */
    return core::ptr::drop_in_place$LT$just..recipe..Recipe$LT$just..unresolved_dependency..UnresolvedDependency$GT$$GT$::ha19f91e5b971396e(arg4);
}
