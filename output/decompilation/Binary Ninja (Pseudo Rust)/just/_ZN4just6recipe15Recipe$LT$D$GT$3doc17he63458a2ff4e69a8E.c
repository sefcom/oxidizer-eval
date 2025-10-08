
  fn just::recipe::Recipe$LT$D$GT$::doc::he63458a2ff4e69a8(arg1: *mut c_void) -> i64

{
    let rax: i64 = *arg1.byte_offset(0xd8);
    let rcx: i64 = *arg1.byte_offset(0xe0);
    let mut rsi: i64 = rax;
    let mut rdx: i64;
    rdx = rax != 0;
    
    if rax != 0
    {
        rsi = *arg1.byte_offset(0xe8);
    }
    
    let mut var_60: i64 = rdx;
    let var_58: i64 = 0;
    let var_50: i64 = rax;
    let var_48: i64 = rcx;
    let var_40: i64 = rdx;
    let var_38: i64 = 0;
    let var_30: i64 = rax;
    let var_28: i64 = rcx;
    let var_20: i64 = rsi;
    let mut result: i64;
    
    loop
    {
        let rax_1: *mut i64 = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0a90991eb32c0f01(&var_60);
        
        if rax_1 == 0
        {
            if *arg1.byte_offset(0x60) == -0x8000000000000000
            {
                result = 0;
            }
            else
            {
                result = *arg1.byte_offset(0x68);
            }
            
            *arg1.byte_offset(0x70);
            break;
        }
        
        if *rax_1 == -0x7ffffffffffffffd
        {
            if rax_1[1] == -0x8000000000000000
            {
                return 0;
            }
            
            result = rax_1[2];
            rax_1[3];
            break;
        }
    }
    
    result
}
