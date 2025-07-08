
  void* uu_ls::sort_entries::h9b56d1e19b40eaef(void* arg1, int64_t arg2, void* arg3, int64_t arg4)

{
    int64_t rax;
    int64_t var_28 = rax;
    char rbp = *(arg3 + 0xf9);
    void* result = jump_table_4346d0[rbp] + &jump_table_4346d0;
    
    switch (result)
    {
        case 0x527beb:
        {
            alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by::h9b283d383497e41f(arg1, arg2);
            
            if (*(arg3 + 0xe7))
                result = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::reverse::h25fb624f2918bbe9(
                    arg1, arg2);
            break;
        }
        case 0x527c02:
        {
            alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by::hd78e9179159c8635(arg1, arg2);
            
            if (*(arg3 + 0xe7))
                result = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::reverse::h25fb624f2918bbe9(
                    arg1, arg2);
            break;
        }
        case 0x527c19:
        {
            result = alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by_key::ha3d56c7bb95dd40c(
                arg1, arg2, arg4);
            
            if (*(arg3 + 0xe7))
                result = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::reverse::h25fb624f2918bbe9(
                    arg1, arg2);
            break;
        }
        case 0x527c33:
        {
            result = alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by_key::h2aba9a33173c270f(
                arg1, arg2, arg4);
            
            if (*(arg3 + 0xe7))
                result = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::reverse::h25fb624f2918bbe9(
                    arg1, arg2);
            break;
        }
        case 0x527c50:
        {
            alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by::h89795e0c81db1ee8(arg1, arg2);
            label_527c5b:
            
            if (*(arg3 + 0xe7))
                result = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::reverse::h25fb624f2918bbe9(
                    arg1, arg2);
            break;
        }
        case 0x527c5b:
        {
            goto label_527c5b;
        }
        case 0x527c9f:
        {
            alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by::h6cb0775bdd976a15(arg1, arg2);
            
            if (*(arg3 + 0xe7))
                result = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::reverse::h25fb624f2918bbe9(
                    arg1, arg2);
            break;
        }
    }
    
    if (rbp && *(arg3 + 0xed))
        /* tailcall */
        return alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by_key::hf757b3fe9a47c1ad(arg1, 
            arg2);
    
    return result;
}
