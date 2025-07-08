
  fn uu_cut::list_to_ranges::h582948f175afb12b(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i32) -> *mut i64

{
    if arg4 == 0
    {
        uucore::features::ranges::Range::from_list::hf67be8a5ce4e6c04(arg1, arg2, arg3);
    }
    else
    {
        let mut var_30: i64;
        uucore::features::ranges::Range::from_list::hf67be8a5ce4e6c04(&var_30, arg2, arg3);
        let mut rax_2: i64;
        let var_28: i128;
        let var_18: i64;
        
        if var_30 == 0
        {
            let var_38_1: i64 = var_18;
            let mut var_48: i128 = var_28;
            uu_cut::list_to_ranges::_$u7b$$u7b$closure$u7d$$u7d$::h500d2b69098a6b6e(&arg1[1], 
                &var_48);
            rax_2 = 0;
        }
        else
        {
            arg1[3] = var_18;
            *arg1.byte_offset(8) = var_28;
            rax_2 = 1;
        }
        *arg1 = rax_2;
    }
    
    arg1
}
