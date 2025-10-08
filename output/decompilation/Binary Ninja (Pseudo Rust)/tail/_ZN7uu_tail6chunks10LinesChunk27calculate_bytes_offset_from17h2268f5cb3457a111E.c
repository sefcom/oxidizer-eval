
  fn uu_tail::chunks::LinesChunk::calculate_bytes_offset_from::h2268f5cb3457a111(arg1: *mut c_void, arg2: i64) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    let mut rbx: i64 = arg2;
    let mut rax_1: i64;
    let mut rdx: i64;
    rax_1 = uu_tail::chunks::LinesChunk::get_buffer::h12c5d003f1f481a3(arg1);
    
    if (rbx == 0 | rdx == 0) != 0
    {
        return 0;
    }
    
    let mut result: i64 = 0;
    let mut rdi: i64;
    let mut temp0_1: i64;
    
    do
    {
        let result_1: i64 = result;
        let r8_1: bool = *(rax_1 + result) == *arg1.byte_offset(0x2010);
        result += 1;
        
        if rdx - 1 == result_1
        {
            break;
        }
        
        rdi = r8_1;
        temp0_1 = rbx;
        rbx -= rdi;
    } while temp0_1 != rdi;
    result
}
