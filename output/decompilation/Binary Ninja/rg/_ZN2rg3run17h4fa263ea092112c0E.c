
  int64_t rg::run::h4fa263ea092112c0(char* arg1, int64_t* arg2)

{
    int64_t rcx_1 = *arg2 - 2;
    int64_t rax = 1;
    
    if (rcx_1 < 3)
        rax = rcx_1;
    
    if (!rax)
        /* tailcall */
        return rg::special::h2a430c08df28a109(arg1, arg2[1]);
    
    if (rax != 1)
    {
        int64_t result = arg2[1];
        *(arg1 + 8) = result;
        *arg1 = 1;
        return result;
    }
    
    void var_3a8;
    memcpy(&var_3a8, arg2, 0x398);
    char var_3b8;
    int32_t var_388;
    int64_t var_380;
    int64_t var_228;
    int64_t var_98;
    char var_86;
    char var_85;
    char var_30;
    
    switch (var_86)
    {
        case 0:
        {
            if ((!var_228 && var_30 != 1) || (var_388 == 1 && !var_380))
            {
                label_659bc9:
                arg1[1] = rg::messages::errored::h7b5d9a0782de0149() + 1;
                *arg1 = 0;
            }
            else
            {
                int64_t var_3b0;
                
                if (var_98 != 1)
                {
                    rg::search_parallel::h6d9f66b100faf9a3(&var_3b8, &var_3a8, var_85);
                    label_659c55:
                    
                    if (!var_3b8)
                    {
                        label_659ba9:
                        char var_3b7;
                        
                        if (!(var_3b7 & 1))
                            goto label_659bc9;
                        
                        char var_1e;
                        
                        if (!var_1e && rg::messages::errored::h7b5d9a0782de0149())
                            goto label_659bc9;
                        
                        arg1[1] = false;
                        *arg1 = 0;
                    }
                    else
                    {
                        *(arg1 + 8) = var_3b0;
                        *arg1 = 1;
                    }
                }
                else
                {
                    rg::search::hf17cebd8d01d16a8(&var_3b8, &var_3a8, var_85);
                    
                    if (var_3b8 != 1)
                        goto label_659ba9;
                    
                    *(arg1 + 8) = var_3b0;
                    *arg1 = 1;
                }
            }
            break;
        }
        case 1:
        {
            if (var_98 != 1)
                rg::files_parallel::h3684f7287384284e(&var_3b8, &var_3a8);
            else
                rg::files::head8fb4031fefc91(&var_3b8, &var_3a8);
            
            goto label_659c55;
        }
        case 2:
        {
            rg::types::h81a2f3911460291d(arg1, arg2);
            break;
        }
        case 3:
        {
            rg::generate::ha8541e15fb044551(arg1, var_85);
            break;
        }
    }
    
    return core::ptr::drop_in_place$LT$rg..flags..hiargs..HiArgs$GT$::h3a47b8c150ccf4f3(&var_3a8);
}
