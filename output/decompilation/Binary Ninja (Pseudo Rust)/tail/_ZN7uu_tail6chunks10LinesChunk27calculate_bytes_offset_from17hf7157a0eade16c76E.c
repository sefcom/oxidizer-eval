
  fn uu_tail::chunks::LinesChunk::calculate_bytes_offset_from::hf7157a0eade16c76(arg1: *mut c_void, arg2: i64) -> i64

{
    let mut r13: i64;
    let var_20: i64 = r13;
    let mut rbx: i64 = arg2;
    let mut rax: i64;
    let mut rdx: i64;
    rax = uu_tail::chunks::LinesChunk::get_buffer::h4eee912e7ef2e0db(arg1);
    let mut var_40: i64 = rax;
    let var_38: i64 = rdx + rax;
    let mut rax_1: *mut i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfe7d83be48d23115(&var_40);
    let mut result: i64 = 0;
    
    if rbx != 0 && rax_1 != 0
    {
        let rbp_1: i8 = *arg1.byte_offset(0x2010);
        result = 0;
        let mut r12_1: i64;
        let mut temp0_1: i64;
        
        do
        {
            r13 = *rax_1 == rbp_1;
            result += 1;
            rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfe7d83be48d23115(&var_40);
            
            if rax_1 == 0
            {
                break;
            }
            
            r12_1 = r13;
            temp0_1 = rbx;
            rbx -= r12_1;
        } while temp0_1 != r12_1;
    }
    
    result
}
