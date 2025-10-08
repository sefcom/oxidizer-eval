
  fn uu_sort::numeric_str_cmp::human_numeric_str_cmp::h31e63d2dd2fe0266(arg1: *mut i64, arg2: *mut i64) -> u64

{
    let r15: *mut c_void = arg1[2];
    let rbx: u64 = arg2[2];
    let r14: u64 = *r15.byte_offset(8);
    let mut result: u64 = *(rbx + 8);
    
    if r14 != result
    {
        let rcx: bool = r14 < result;
        result = r14 > result;
        result -= rcx;
    }
    else
    {
        let rbp_1: i64 = *arg1;
        let rcx_1: i64 = arg1[1];
        let r12_1: i64 = *arg2;
        let rax: i64 = arg2[1];
        let mut var_70: i64 = rbp_1;
        let var_68_1: i64 = rbp_1 + rcx_1;
        let mut rax_2: i8;
        let mut rdx_1: i32;
        rax_2 = core::str::validations::next_code_point_reverse::hc36367225bc4deeb(&var_70, rbx);
        let mut r13_1: i8 = 0;
        
        if (rax_2 & 1) != 0
        {
            let rdx_2: u64 = rdx_1 - 0x45;
            
            if rdx_2 <= 0x26
            {
                match rdx_2
                {
                    0 =>
                    {
                        r13_1 = 6;
                    }
                    2 =>
                    {
                        r13_1 = 3;
                    }
                    6 =>
                    {
                        r13_1 = 1;
                    }
                    8 =>
                    {
                        r13_1 = 2;
                    }
                    0xb =>
                    {
                        r13_1 = 5;
                    }
                    0xc =>
                    {
                        r13_1 = 0xa;
                    }
                    0xd =>
                    {
                        r13_1 = 9;
                    }
                    0xf =>
                    {
                        r13_1 = 4;
                    }
                    0x14 =>
                    {
                        r13_1 = 8;
                    }
                    0x15 =>
                    {
                        r13_1 = 7;
                    }
                }
            }
        }
        
        var_70 = r12_1;
        let var_68_2: i64 = rax + r12_1;
        let mut rdx_3: i32;
        result = core::str::validations::next_code_point_reverse::hc36367225bc4deeb(&var_70, rbx);
        let mut rcx_4: i8 = 0;
        
        if (result & 1) == 0
        {
            goto 'label_4cf78b;
        }
        
        let rdx_4: u64 = rdx_3 - 0x45;
        
        if rdx_4 > 0x26
        {
            goto 'label_4cf78b;
        }
        
        let mut c_1: bool;
        let mut z_1: bool;
        
        match rdx_4
        {
            0 =>
            {
                rcx_4 = 6;
                c_1 = r13_1 < 6;
                z_1 = r13_1 == 6;
                
                if z_1
                {
                    goto 'label_4cf790;
                }
            }
            1 | 3 | 4 | 5 | 7 | 9 | 0xa | 0xe | 0x10 | 0x11 | 0x12 | 0x13 | 0x16 | 0x17 | 0x18 |
                0x19 | 0x1a | 0x1b | 0x1c | 0x1d | 0x1e | 0x1f | 0x20 | 0x21 | 0x22 | 0x23 | 0x24 |
                0x25 =>
            {
                goto 'label_4cf78b;
            }
            2 =>
            {
                rcx_4 = 3;
                c_1 = r13_1 < 3;
                z_1 = r13_1 == 3;
                
                if z_1
                {
                    goto 'label_4cf790;
                }
            }
            6 | 0x26 =>
            {
                rcx_4 = 1;
                c_1 = r13_1 < 1;
                z_1 = r13_1 == 1;
                
                if z_1
                {
                    goto 'label_4cf790;
                }
            }
            8 =>
            {
                rcx_4 = 2;
                c_1 = r13_1 < 2;
                z_1 = r13_1 == 2;
                
                if z_1
                {
                    goto 'label_4cf790;
                }
            }
            0xb =>
            {
                rcx_4 = 5;
                c_1 = r13_1 < 5;
                z_1 = r13_1 == 5;
                
                if z_1
                {
                    goto 'label_4cf790;
                }
            }
            0xc =>
            {
                rcx_4 = 0xa;
                c_1 = r13_1 < 0xa;
                z_1 = r13_1 == 0xa;
                
                if z_1
                {
                    goto 'label_4cf790;
                }
            }
            0xd =>
            {
                rcx_4 = 9;
                'label_4cf78b:
                c_1 = r13_1 < rcx_4;
                z_1 = r13_1 == rcx_4;
                
                if z_1
                {
                    'label_4cf790:
                    let mut var_48: i64 = rbp_1;
                    let var_40_1: i64 = rcx_1;
                    let var_38_1: *mut c_void = r15;
                    var_70 = r12_1;
                    let var_68_3: i64 = rax;
                    let var_60_1: u64 = rbx;
                    return uu_sort::numeric_str_cmp::numeric_str_cmp::h793f6b597e9f6768(&var_48, 
                        &var_70);
                }
            }
            0xf =>
            {
                rcx_4 = 4;
                c_1 = r13_1 < 4;
                z_1 = r13_1 == 4;
                
                if z_1
                {
                    goto 'label_4cf790;
                }
            }
            0x14 =>
            {
                rcx_4 = 8;
                c_1 = r13_1 < 8;
                z_1 = r13_1 == 8;
                
                if z_1
                {
                    goto 'label_4cf790;
                }
            }
            0x15 =>
            {
                rcx_4 = 7;
                c_1 = r13_1 < 7;
                z_1 = r13_1 == 7;
                
                if z_1
                {
                    goto 'label_4cf790;
                }
            }
        }
        
        result = !z_1 && !c_1;
        result = result - 0;
        
        if r14 == 0
        {
            result = 0 - 1;
            result |= 1;
        }
    }
    
    result
}
