
  fn fd::filetypes::FileTypes::should_ignore::h9972755040be5d00(arg1: *mut i8, arg2: *mut i64) -> u64

{
    let rax: i64;
    let var_28: i64 = rax;
    let mut rax_1: i8;
    let mut rdx: i32;
    rax_1 = fd::dir_entry::DirEntry::file_type::ha8777f9a24494ad2(arg2);
    let mut rbx: u64;
    rbx = 1;
    
    if (rax_1 & 1) != 0
    {
        let rax_3: i32 = rdx & 0xf000;
        
        if (rax_3 != 0x8000 || *arg1 != 0) && (rax_3 != 0x4000 || arg1[1] != 0)
            && (rax_3 != 0xa000 || arg1[2] != 0) && (rax_3 != 0x6000 || arg1[3] != 0)
            && (rax_3 != 0x2000 || arg1[4] != 0) && (rax_3 != 0xc000 || arg1[5] != 0)
            && (rax_3 != 0x1000 || arg1[6] != 0)
        {
            let mut rax_5: i8;
            
            if arg1[7] != 0
            {
                let mut rax_4: *mut i8;
                let mut rdx_1: u64;
                rax_4 = fd::dir_entry::DirEntry::path::h16a39562ed47efc5(arg2);
                rax_5 = faccess::PathExt::executable::hc6a3f3fddf09c694(rax_4, rdx_1);
            }
            
            if arg1[7] == 0 || rax_5 != 0
            {
                let mut rax_6: i8;
                
                if arg1[8] != 0
                {
                    rax_6 = fd::filesystem::is_empty::hcba4d2bbc1884a13(arg2);
                }
                
                if arg1[8] == 0 || rax_6 != 0
                {
                    if (rdx & 0xd000) != 0x8000
                    {
                        rbx = 0xfa9e >> (rdx + 0x4000) >> 0xc;
                    }
                    else
                    {
                        rbx = 0;
                    }
                }
            }
        }
    }
    
    rbx &= 1;
    rbx
}
