
  fn uu_head::take::TakeAllBuffer::write_all::hd9faf813f411a40e(arg1: *mut c_void, arg2: *mut i64) -> i64

{
    let mut result: i64;
    result = uu_head::take::TakeAllBuffer::write_bytes_exact::he1c2e4ce273b5219(arg1, arg2, 
        uu_head::take::TakeAllBuffer::remaining_bytes::hb388a4c93e1b9bcb(arg1)) != 0;
    result
}
