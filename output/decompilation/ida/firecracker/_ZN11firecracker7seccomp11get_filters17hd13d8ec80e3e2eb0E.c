__int64 __fastcall firecracker::seccomp::get_filters(__int64 a1, int a2, unsigned int a3)
{
  if ( !a2 )
    return vmm::seccomp::get_empty_filters();
  if ( a2 == 1 )
    return firecracker::seccomp::get_default_filters();
  return firecracker::seccomp::get_custom_filters(a1, a3);
}