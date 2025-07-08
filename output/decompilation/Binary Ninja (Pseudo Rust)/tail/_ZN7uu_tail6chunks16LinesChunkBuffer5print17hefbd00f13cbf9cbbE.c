
  fn uu_tail::chunks::LinesChunkBuffer::print::hefbd00f13cbf9cbb(arg1: *mut i64, arg2: *mut i64) -> *mut i128

{
    let mut var_38: i128;
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::iter::h4cb2a7b481604fe2(&var_38, arg1);
    let mut i: *mut i128;
    
    do
    {
        let mut rax_1: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4bc207bf22529cac(&var_38);
        
        if rax_1 == 0
        {
            let zmm0_1: i128 = var_38;
            let mut var_28: i128;
            var_38 = var_28;
            var_28 = zmm0_1;
            rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4bc207bf22529cac(&var_38);
            
            if rax_1 == 0
            {
                return nullptr;
            }
        }
        
        i = uu_tail::chunks::LinesChunk::print_bytes::heb78e59b7507785b(*rax_1, arg2);
    } while i == 0;
    
    i
}
