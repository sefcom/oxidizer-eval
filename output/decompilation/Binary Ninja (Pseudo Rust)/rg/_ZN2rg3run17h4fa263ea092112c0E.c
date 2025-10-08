
  fn rg::run::h4fa263ea092112c0(arg1: *mut i8, arg2: *mut i64) -> i64

{
    let rcx_1: i64 = *arg2 - 2;
    let mut rax: i64 = 1;
    
    if rcx_1 < 3
    {
        rax = rcx_1;
    }
    
    if rax == 0
    {
        /* tailcall */
        return rg::special::h2a430c08df28a109(arg1, arg2[1]);
    }
    
    if rax != 1
    {
        let result: i64 = arg2[1];
        *arg1.byte_offset(8) = result;
        *arg1 = 1;
        return result;
    }
    
    let mut var_3a8: ();
    memcpy(&var_3a8, arg2, 0x398);
    let mut var_3b8: i8;
    let var_388: i32;
    let var_380: i64;
    let var_228: i64;
    let var_98: i64;
    let var_86: i8;
    let var_85: i8;
    let var_30: i8;
    
    match var_86
    {
        0 =>
        {
            if (var_228 == 0 && var_30 != 1) || (var_388 == 1 && var_380 == 0)
            {
                'label_659bc9:
                arg1[1] = rg::messages::errored::h7b5d9a0782de0149() + 1;
                *arg1 = 0;
            }
            else
            {
                let var_3b0: i64;
                
                if var_98 != 1
                {
                    rg::search_parallel::h6d9f66b100faf9a3(&var_3b8, &var_3a8, var_85);
                    'label_659c55:
                    
                    if var_3b8 == 0
                    {
                        'label_659ba9:
                        let var_3b7: i8;
                        
                        if (var_3b7 & 1) == 0
                        {
                            goto 'label_659bc9;
                        }
                        
                        let var_1e: i8;
                        
                        if var_1e == 0 && rg::messages::errored::h7b5d9a0782de0149() != 0
                        {
                            goto 'label_659bc9;
                        }
                        
                        arg1[1] = false;
                        *arg1 = 0;
                    }
                    else
                    {
                        *arg1.byte_offset(8) = var_3b0;
                        *arg1 = 1;
                    }
                }
                else
                {
                    rg::search::hf17cebd8d01d16a8(&var_3b8, &var_3a8, var_85);
                    
                    if var_3b8 != 1
                    {
                        goto 'label_659ba9;
                    }
                    
                    *arg1.byte_offset(8) = var_3b0;
                    *arg1 = 1;
                }
            }
        }
        1 =>
        {
            if var_98 != 1
            {
                rg::files_parallel::h3684f7287384284e(&var_3b8, &var_3a8);
            }
            else
            {
                rg::files::head8fb4031fefc91(&var_3b8, &var_3a8);
            }
            
            goto 'label_659c55;
        }
        2 =>
        {
            rg::types::h81a2f3911460291d(arg1, arg2);
        }
        3 =>
        {
            rg::generate::ha8541e15fb044551(arg1, var_85);
        }
    }
    
    core::ptr::drop_in_place$LT$rg..flags..hiargs..HiArgs$GT$::h3a47b8c150ccf4f3(&var_3a8)
}
