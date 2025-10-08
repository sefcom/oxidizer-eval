
  fn uu_head::take::TakeAllLinesBuffer::fill_buffer::hfa940c1c6239deab(arg1: *mut i64, arg2: *mut i64, arg3: *mut i32, arg4: i8) -> i64

{
    let mut rax: i8;
    let mut rdx: i64;
    rax = uu_head::take::TakeAllBuffer::fill_buffer::hf61126089cbcf29e(arg2, arg3);
    let mut result: i64;
    
    if (rax & 1) == 0
    {
        let mut rax_1: i64;
        let mut rdx_1: i64;
        rax_1 = uu_head::take::TakeAllBuffer::remaining_buffer::he80dcc941e66ef3a(arg2);
        let rsi_1: i64 = rdx_1 + rax_1;
        let mut var_28: i8 = arg4;
        let var_40_1: i64 = rax_1;
        let var_38_1: i64 = rax_1;
        let var_30_1: i64 = rsi_1;
        arg2[4] =
            memchr::arch::generic::memchr::Iter::count::hdf305186817169f5(rax_1, rsi_1, &var_28);
        let mut rax_3: i64;
        let mut rdx_3: i64;
        rax_3 = uu_head::take::TakeAllBuffer::remaining_buffer::he80dcc941e66ef3a(arg2);
        
        if rdx_3 != 0 && *(rax_3 + rdx_3 - 1) != arg4
        {
            arg2[5] = 1;
        }
        
        let rax_4: i64 = arg2[4];
        arg1[1] = rdx;
        arg1[2] = rax_4;
        result = 0;
    }
    else
    {
        arg1[1] = rdx;
        result = 1;
    }
    
    *arg1 = result;
    result
}
