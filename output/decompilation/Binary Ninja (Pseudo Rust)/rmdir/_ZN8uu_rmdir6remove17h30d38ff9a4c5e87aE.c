
  fn uu_rmdir::remove::h30d38ff9a4c5e87a(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i32) -> *mut i128

{
    let mut var_48: i64;
    uu_rmdir::remove_single::h47fda4712a97f9b5(&var_48, arg2, arg3, arg4);
    
    if var_48 == 0
    {
        if (arg4 & 0x100) != 0
        {
            let mut rax_2: *mut i8;
            let mut i_2: i64;
            rax_2 = std::path::Path::parent::hef287f60afa56900(arg2, arg3);
            let mut r14_1: *mut i8 = rax_2;
            rax_2 = rax_2 == 0;
            
            if (i_2 == 0 | rax_2) == 0
            {
                let mut i_1: i64 = i_2;
                let mut i: i64;
                
                do
                {
                    uu_rmdir::remove_single::h47fda4712a97f9b5(&var_48, r14_1, i_1, arg4);
                    
                    if var_48 != 0
                    {
                        goto 'label_454e3d;
                    }
                    
                    let mut rax_4: *mut i8;
                    rax_4 = std::path::Path::parent::hef287f60afa56900(r14_1, i_1);
                    
                    if rax_4 == 0
                    {
                        break;
                    }
                    
                    r14_1 = rax_4;
                    i_1 = i;
                } while i != 0;
            }
        }
        
        *arg1 = 0;
    }
    else
    {
        'label_454e3d:
        let var_38: i64;
        arg1[1] = var_38;
        *arg1 = var_48;
    }
    
    arg1
}
