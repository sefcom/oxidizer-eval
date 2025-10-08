__int64 uu_nproc::available_parallelism()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rbx

  v0 = std::thread::available_parallelism();
  v2 = 1LL;
  if ( (v0 & 1) == 0 )
    v2 = v1;
  core::ptr::drop_in_place<core::result::Result<core::num::nonzero::NonZero<usize>,std::io::error::Error>>(v0, v1);
  return v2;
}