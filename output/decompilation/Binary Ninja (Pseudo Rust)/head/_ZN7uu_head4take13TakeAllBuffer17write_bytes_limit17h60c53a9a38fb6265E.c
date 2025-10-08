
  fn uu_head::take::TakeAllBuffer::write_bytes_limit::h60c53a9a38fb6265(arg1: *mut c_void, arg2: *mut i64, arg3: i64) -> i64

{
    let mut result: i64;
    result = uu_head::take::TakeAllBuffer::write_bytes_exact::he1c2e4ce273b5219(arg1, arg2, 
        core::cmp::Ord::min::h08a96a0a44b5e327(
            uu_head::take::TakeAllBuffer::remaining_bytes::hb388a4c93e1b9bcb(arg1), arg3)) != 0;
    result
}
