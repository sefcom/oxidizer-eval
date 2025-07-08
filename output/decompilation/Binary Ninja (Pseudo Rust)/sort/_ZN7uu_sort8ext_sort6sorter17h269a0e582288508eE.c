
  fn uu_sort::ext_sort::sorter::h269a0e582288508e(arg1: *mut i64, arg2: *mut i64, arg3: *mut c_void) -> i64

{
    let mut i: *mut c_void = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(arg1);
    let mut i_1: *mut c_void = i;
    
    while i != 0
    {
        let i_2: *mut c_void = i;
        uu_sort::sort_by::h972a39ae46813087(i.byte_offset(0x18), arg3);
        let rax_1: i64 = std::sync::mpmc::Sender$LT$T$GT$::send::h6e2915accf477763(arg2);
        let mut var_30: i64 = rax_1;
        let result: i64 = core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..mpsc..SendError$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::h7ecd2887621f7ca2(&var_30);
        
        if rax_1 != 0
        {
            return result;
        }
        
        i = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(arg1);
        i_1 = i;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::hbe180fe5a9f9be02(&i_1)
}
