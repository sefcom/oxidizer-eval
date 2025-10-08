
  fn uu_tail::chunks::LinesChunk::fill::h8372a98993d49080(arg1: *mut i64, arg2: *mut i8, arg3: *mut i64) -> i64

{
    let mut var_40: i32;
    uu_tail::chunks::BytesChunk::fill::h59bd7f494a242c6c(&var_40, arg2, arg3);
    let mut result: i64;
    let var_38: i32;
    
    if var_40 != 1
    {
        if var_38 != 1
        {
            *arg2.byte_offset(0x2008) = 0;
            arg1[1] = 0;
        }
        else
        {
            *arg2.byte_offset(0x2008) =
                uu_tail::chunks::LinesChunk::count_lines::h5dbe30604f66562b(arg2);
            *arg1.byte_offset(8) = var_38;
        }
        
        result = 0;
    }
    else
    {
        *arg1.byte_offset(8) = var_38;
        result = 1;
    }
    *arg1 = result;
    result
}
