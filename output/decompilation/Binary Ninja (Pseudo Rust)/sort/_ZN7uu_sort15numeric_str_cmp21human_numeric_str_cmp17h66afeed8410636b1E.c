
  fn uu_sort::numeric_str_cmp::human_numeric_str_cmp::h66afeed8410636b1(arg1: *mut i64, arg2: *mut i64) -> i8

{
    let r14: *mut c_void = arg1[2];
    let rbx: u64 = arg2[2];
    let rbp: i8 = *r14.byte_offset(8);
    let rcx: i8 = *(rbx + 8);
    
    if rbp != rcx
    {
        return (0 - 0) | 1;
    }
    
    let r13_1: i64 = *arg1;
    let rcx_1: i64 = arg1[1];
    let r15_1: i64 = *arg2;
    let rax: i64 = arg2[1];
    let mut var_70: i64 = r13_1;
    let var_68_1: i64 = r13_1 + rcx_1;
    let mut rax_2: i32;
    let mut rdx_1: i32;
    rax_2 = core::str::validations::next_code_point_reverse::h1e42bd12980e3ea9(&var_70, rbx);
    let mut r12_1: i8 = 0;
    
    if rax_2 != 0
    {
        let rdx_2: u64 = rdx_1 - 0x45;
        
        if rdx_2 <= 0x26
        {
            match rdx_2
            {
                0 =>
                {
                    r12_1 = 6;
                }
                2 =>
                {
                    r12_1 = 3;
                }
                6 | 0x26 =>
                {
                    r12_1 = 1;
                }
                8 =>
                {
                    r12_1 = 2;
                }
                0xb =>
                {
                    r12_1 = 5;
                }
                0xf =>
                {
                    r12_1 = 4;
                }
                0x14 =>
                {
                    r12_1 = 8;
                }
                0x15 =>
                {
                    r12_1 = 7;
                }
            }
        }
    }
    
    var_70 = r15_1;
    let var_68_2: i64 = rax + r15_1;
    let mut rax_6: i32;
    let mut rdx_3: i32;
    rax_6 = core::str::validations::next_code_point_reverse::h1e42bd12980e3ea9(&var_70, rbx);
    let mut rax_7: i8;
    
    if rax_6 == 0
    {
        rax_7 = 0;
    }
    else
    {
        rax_7 = 0;
        let rdx_4: u64 = rdx_3 - 0x45;
        
        if rdx_4 <= 0x26
        {
            match rdx_4
            {
                0 =>
                {
                    rax_7 = 6;
                }
                2 =>
                {
                    rax_7 = 3;
                }
                6 | 0x26 =>
                {
                    rax_7 = 1;
                }
                8 =>
                {
                    rax_7 = 2;
                }
                0xb =>
                {
                    rax_7 = 5;
                }
                0xf =>
                {
                    rax_7 = 4;
                }
                0x14 =>
                {
                    rax_7 = 8;
                }
                0x15 =>
                {
                    rax_7 = 7;
                }
            }
        }
    }
    
    let mut result: bool = true;
    
    if r12_1 >= rax_7
    {
        result = r12_1 != rax_7;
    }
    
    if result != 0
    {
        if rbp != 0
        {
            return result;
        }
        
        return -(result);
    }
    
    let mut var_48: i64 = r13_1;
    let var_40_1: i64 = rcx_1;
    let var_38_1: *mut c_void = r14;
    var_70 = r15_1;
    let var_68_3: i64 = rax;
    let var_60_1: u64 = rbx;
    uu_sort::numeric_str_cmp::numeric_str_cmp::h462d5662bf6f9278(&var_48, &var_70)
}
