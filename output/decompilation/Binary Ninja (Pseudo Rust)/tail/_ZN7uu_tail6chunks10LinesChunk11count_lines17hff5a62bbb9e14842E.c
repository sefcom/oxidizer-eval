
  fn uu_tail::chunks::LinesChunk::count_lines::hff5a62bbb9e14842(arg1: *mut c_void) -> i64

{
    let rbx: i8 = *arg1.byte_offset(0x2010);
    let mut rax: i64;
    let mut rdx: i64;
    rax = uu_tail::chunks::LinesChunk::get_buffer::h4eee912e7ef2e0db(arg1);
    let rsi: i64 = rdx + rax;
    let mut var_10: i8 = rbx;
    let var_28: i64 = rax;
    let var_20: i64 = rax;
    let var_18: i64 = rsi;
    memchr::arch::generic::memchr::Iter::count::h043089570cb60419(rax, rsi, &var_10)
}
