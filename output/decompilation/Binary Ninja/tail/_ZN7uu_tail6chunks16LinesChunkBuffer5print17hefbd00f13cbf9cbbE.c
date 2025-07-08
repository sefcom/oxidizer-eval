
  int128_t* uu_tail::chunks::LinesChunkBuffer::print::hefbd00f13cbf9cbb(int64_t* arg1, int64_t* arg2)

{
    int128_t var_38;
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::iter::h4cb2a7b481604fe2(&var_38, arg1);
    int128_t* i;
    
    do
    {
        int64_t* rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4bc207bf22529cac(&var_38);
        
        if (!rax_1)
        {
            int128_t zmm0_1 = var_38;
            int128_t var_28;
            var_38 = var_28;
            var_28 = zmm0_1;
            rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4bc207bf22529cac(&var_38);
            
            if (!rax_1)
                return nullptr;
        }
        
        i = uu_tail::chunks::LinesChunk::print_bytes::heb78e59b7507785b(*rax_1, arg2);
    } while (!i);
    
    return i;
}
