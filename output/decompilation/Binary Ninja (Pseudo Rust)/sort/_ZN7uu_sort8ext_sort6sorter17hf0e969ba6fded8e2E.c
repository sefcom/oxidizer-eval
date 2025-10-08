
  fn uu_sort::ext_sort::sorter::hf0e969ba6fded8e2(arg1: i64, arg2: i64, arg3: i64, arg4: *mut i64, arg5: *mut c_void) -> i64

{
    let i_4: *mut c_void = std::sync::mpmc::Receiver$LT$T$GT$::recv::h60814cb01a26dc76(arg1);
    let mut i_1: *mut c_void = i_4;
    
    if i_4 != 0
    {
        let mut i_2: *mut c_void = i_4;
        let mut i: *mut c_void;
        
        do
        {
            let i_3: *mut c_void = i_2;
            uu_sort::sort_by::h04d3448c2cd20374(*i_2.byte_offset(0x20), *i_2.byte_offset(0x28), 
                arg5);
            let rax: i64 =
                std::sync::mpmc::Sender$LT$T$GT$::send::h35b630fd0acd1b39(arg3, arg4, i_2);
            let mut var_38: i64 = rax;
            let result: i64 = core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..mpsc..SendError$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::hac0e8e318f5af5c2(&var_38);
            
            if rax != 0
            {
                return result;
            }
            
            i = std::sync::mpmc::Receiver$LT$T$GT$::recv::h60814cb01a26dc76(arg1);
            i_2 = i;
            i_1 = i;
        } while i != 0;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::h7ff86e8d0d3ee6b2(&i_1)
}
