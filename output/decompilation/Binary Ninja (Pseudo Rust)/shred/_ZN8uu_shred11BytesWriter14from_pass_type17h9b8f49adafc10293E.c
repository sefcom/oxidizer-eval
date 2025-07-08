
  fn uu_shred::BytesWriter::from_pass_type::h9b8f49adafc10293(arg1: *mut i8, arg2: *mut i8) -> i64

{
    let mut rbp: i64;
    let var_8: i64 = rbp;
    let r15: i64;
    let var_10: i64 = r15;
    let r14: i64;
    let var_18: i64 = r14;
    let r12: i64;
    let var_20: i64 = r12;
    let rbx: i64;
    let mut var_28: i64 = rbx;
    let mut i: *mut i64 = &var_28;
    let mut var_20028: ();
    
    do
    {
        i -= 0x1000;
        *i = 0;
    } while i != &var_20028;
    
    let rax: u32 = *arg2;
    let mut result: i64;
    
    if rax == 0
    {
        memset(i.byte_offset(-4), arg2[1], 0x10002);
        'label_4bc1eb:
        *arg1.byte_offset(0x10008) = 0;
        result = memcpy(&arg1[1], i.byte_offset(-4), 0x10002);
        rbp = 1;
    }
    else
    {
        if rax != 2
        {
            memset(i.byte_offset(0xfffe), 0, 0x10002);
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::chunks_exact_mut::h9602805c4835881b(
                i.byte_offset(-0x30), i.byte_offset(0xfffe));
            let mut i_1: i64;
            let mut rdx_1: u64;
            i_1 = _$LT$core..slice..iter..ChunksExactMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha7dcdd33cfb13c3b(i.byte_offset(-0x30));
            
            while i_1 != 0
            {
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h592b16ec71136960(i_1, 
                    rdx_1, &arg2[1], 3);
                i_1 = _$LT$core..slice..iter..ChunksExactMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha7dcdd33cfb13c3b(i.byte_offset(-0x30));
            }
            
            memcpy(i.byte_offset(-4), i.byte_offset(0xfffe), 0x10002);
            goto 'label_4bc1eb;
        }
        
        rand_core::SeedableRng::from_entropy::hd7fe6f62e2325342(&arg1[0x10]);
        rbp = 0;
        result = memset(&arg1[0x150], 0, 0x10000);
    }
    
    *arg1 = rbp;
    i[0x4000];
    i[0x4001];
    i[0x4002];
    i[0x4003];
    i[0x4004];
    result
}
