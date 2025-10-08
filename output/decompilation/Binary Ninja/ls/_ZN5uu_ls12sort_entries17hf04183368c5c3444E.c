
  void* uu_ls::sort_entries::hf04183368c5c3444(void* arg1, int64_t arg2, void* arg3, int64_t arg4)

{
    int64_t rax;
    int64_t var_28 = rax;
    char rbp = *(arg3 + 0x101);
    void* result = jump_table_4d10c0[rbp] + &jump_table_4d10c0;
    
    switch (result)
    {
        case 0x59a86b:
        {
            result =
                alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by::h424643660aa79a74(arg1, arg2);
            
            if (*(arg3 + 0xef))
                result = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::reverse::h6c90dc87f6bbfabf(
                    arg1, arg2);
            break;
        }
        case 0x59a882:
        {
            result =
                alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by::h209a1ba417a9ceba(arg1, arg2);
            
            if (*(arg3 + 0xef))
                result = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::reverse::h6c90dc87f6bbfabf(
                    arg1, arg2);
            break;
        }
        case 0x59a899:
        {
            result = alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by_key::h9747c9f32a42c5c8(
                arg1, arg2, arg4);
            
            if (*(arg3 + 0xef))
                result = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::reverse::h6c90dc87f6bbfabf(
                    arg1, arg2);
            break;
        }
        case 0x59a8b3:
        {
            result = alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by_key::hd70bd53f24d480d9(
                arg1, arg2, arg4);
            
            if (*(arg3 + 0xef))
                result = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::reverse::h6c90dc87f6bbfabf(
                    arg1, arg2);
            break;
        }
        case 0x59a8d0:
        {
            result =
                alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by::hab7ebddd3d32bf56(arg1, arg2);
            label_59a8db:
            
            if (*(arg3 + 0xef))
                result = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::reverse::h6c90dc87f6bbfabf(
                    arg1, arg2);
            break;
        }
        case 0x59a8db:
        {
            goto label_59a8db;
        }
        case 0x59a91f:
        {
            result =
                alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by::h948b5b3a52935b5d(arg1, arg2);
            
            if (*(arg3 + 0xef))
                result = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::reverse::h6c90dc87f6bbfabf(
                    arg1, arg2);
            break;
        }
    }
    
    if (rbp && *(arg3 + 0xf5))
        /* tailcall */
        return alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by_key::hfc6dfacf67a71fc2(arg1, 
            arg2);
    
    return result;
}
