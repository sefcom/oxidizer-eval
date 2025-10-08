
  fn rg::haystack::Haystack::is_dir::hd6f752fd2c8f0e5c(arg1: *mut i64) -> i64

{
    let rax: i64;
    let var_8: i64 = rax;
    
    if *arg1 != 0
    {
        let mut result: i32 = 0xf000 & arg1[6];
        
        if result == 0x4000
        {
            result = 1;
            return result;
        }
        
        if result == 0xa000 || *arg1.byte_offset(0x34) != 0
        {
            let mut rax_2: *mut i8;
            let mut rdx: u64;
            rax_2 = ignore::walk::DirEntry::path::he339916189ce99ea(arg1);
            /* tailcall */
            return std::path::Path::is_dir::h02edbc48c38d7d9e(rax_2, rdx);
        }
    }
    
    0
}
