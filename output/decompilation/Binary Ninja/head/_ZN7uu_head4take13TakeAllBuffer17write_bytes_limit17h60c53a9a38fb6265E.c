
  int64_t uu_head::take::TakeAllBuffer::write_bytes_limit::h60c53a9a38fb6265(void* arg1, int64_t* arg2, int64_t arg3)

{
    int64_t result;
    result = uu_head::take::TakeAllBuffer::write_bytes_exact::he1c2e4ce273b5219(arg1, arg2, 
        core::cmp::Ord::min::h08a96a0a44b5e327(
            uu_head::take::TakeAllBuffer::remaining_bytes::hb388a4c93e1b9bcb(arg1), arg3));
    return result;
}
