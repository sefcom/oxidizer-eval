__int64 fd::cli::default_num_threads()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rdi
  _QWORD v4[2]; // [rsp+8h] [rbp-10h] BYREF

  v0 = std::thread::available_parallelism();
  v2 = v1;
  v4[0] = v0;
  v4[1] = v1;
  if ( (v0 & 1) != 0 )
  {
    core::ptr::drop_in_place<core::result::Result<core::num::nonzero::NonZero<usize>,std::io::error::Error>>(v4);
    v2 = 1LL;
  }
  return core::cmp::Ord::min(v2, 64LL);
}