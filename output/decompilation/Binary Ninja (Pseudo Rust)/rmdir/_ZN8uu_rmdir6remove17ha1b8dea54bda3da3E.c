
  fn uu_rmdir::remove::ha1b8dea54bda3da3(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i32) -> *mut i128

{
    let mut var_48: i64;
    uu_rmdir::remove_single::h7d254dd4570d65d7(&var_48, arg2, arg3, arg4);
    
    if var_48 == 0
    {
        if (arg4 & 0x100) != 0
        {
            let mut rax_3: *mut i8;
            let mut i_2: i64;
            rax_3 = std::path::Path::parent::h65c9a340a6266f2d(arg2, arg3);
            
            if rax_3 != 0
            {
                let mut i_1: i64 = i_2;
                
                if i_2 != 0
                {
                    let mut r14_1: *mut i8 = rax_3;
                    let mut i: i64;
                    
                    do
                    {
                        uu_rmdir::remove_single::h7d254dd4570d65d7(&var_48, r14_1, i_1, arg4);
                        
                        if var_48 != 0
                        {
                            goto 'label_4aa3bd;
                        }
                        
                        let mut rax_4: *mut i8;
                        rax_4 = std::path::Path::parent::h65c9a340a6266f2d(r14_1, i_1);
                        
                        if rax_4 == 0
                        {
                            break;
                        }
                        
                        r14_1 = rax_4;
                        i_1 = i;
                    } while i != 0;
                }
            }
        }
        
        *arg1 = 0;
    }
    else
    {
        'label_4aa3bd:
        let var_38: i64;
        arg1[1] = var_38;
        *arg1 = var_48;
    }
    
    arg1
}
