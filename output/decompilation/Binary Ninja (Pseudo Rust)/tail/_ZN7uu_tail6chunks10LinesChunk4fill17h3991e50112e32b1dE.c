
  fn uu_tail::chunks::LinesChunk::fill::h3991e50112e32b1d(arg1: *mut i64, arg2: *mut i8, arg3: *mut i64) -> *mut i64

{
    let mut var_30: i64;
    uu_tail::chunks::BytesChunk::fill::h462ffdeafb1fcc09(&var_30, arg2, arg3);
    let mut rax_1: i64;
    let var_28: i64;
    
    if var_30 == 0
    {
        if var_28 == 0
        {
            *arg2.byte_offset(0x2008) = 0;
            arg1[1] = 0;
        }
        else
        {
            *arg2.byte_offset(0x2008) =
                uu_tail::chunks::LinesChunk::count_lines::hff5a62bbb9e14842(arg2);
            arg1[1] = 1;
            let var_20: i64;
            arg1[2] = var_20;
        }
        
        rax_1 = 0;
    }
    else
    {
        *arg1.byte_offset(8) = var_28;
        rax_1 = 1;
    }
    *arg1 = rax_1;
    arg1
}
