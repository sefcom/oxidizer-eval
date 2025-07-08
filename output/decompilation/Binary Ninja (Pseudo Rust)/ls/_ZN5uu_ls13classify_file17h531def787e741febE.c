
  fn uu_ls::classify_file::h531def787e741feb(arg1: *mut c_void) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    let rax_1: *mut c_void = uu_ls::PathData::file_type::h128ed7d98b354477(arg1);
    let mut result: i64 = 0x110000;
    
    if rax_1 != 0
    {
        let rax_4: u64 = ((0xf000 & *rax_1) - 0x1000) >> 0xc;
        
        if rax_4 > 0xb
        {
            return 0x110000;
        }
        
        match rax_4
        {
            0 =>
            {
                return 0x7c;
            }
            1 | 2 | 4 | 5 | 6 | 8 | 0xa =>
            {
                return 0x110000;
            }
            3 =>
            {
                return 0x2f;
            }
            7 =>
            {
                let rax_7: *mut i32 = uu_ls::PathData::get_metadata::hc7a96a0547653f90(arg1);
                
                if rax_7 == 0
                {
                    return 0x110000;
                }
                
                result = 0x2a;
                
                if core::ops::function::FnOnce::call_once::h37c933d7708fabb0(rax_7[0xe]) == 0
                {
                    return 0x110000;
                }
            }
            9 =>
            {
                return 0x40;
            }
            0xb =>
            {
                return 0x3d;
            }
        }
    }
    
    result
}
