
  fn uu_tail::chunks::LinesChunk::count_lines::h5dbe30604f66562b(arg1: *mut c_void) -> i64

{
    let rbx: i8 = *arg1.byte_offset(0x2010);
    let mut rax: i64;
    let mut rdx: i64;
    rax = uu_tail::chunks::LinesChunk::get_buffer::h12c5d003f1f481a3(arg1);
    let rsi: i64 = rdx + rax;
    let mut var_10: i8 = rbx;
    let var_28: i64 = rax;
    let var_20: i64 = rax;
    let var_18: i64 = rsi;
    memchr::arch::generic::memchr::Iter::count::h56a79f2a4b7982aa(rax, rsi, &var_10)
}
