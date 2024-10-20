__int64 __fastcall uu_dircolors::guess_syntax()
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v4; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v5[2]; // [rsp+10h] [rbp-38h] BYREF
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]

  std::env::_var(&v4, aShell, 5LL);
  if ( v4 )
  {
    LOBYTE(v0) = 3;
    goto LABEL_15;
  }
  if ( v6 )
  {
    if ( v6 < 0 || !v5[1] )
      core::panicking::panic_nounwind(aUnsafePrecondi_10, 162LL);
    v1 = std::path::Path::file_name();
    if ( !v1 )
      goto LABEL_10;
    if ( v2 == 4 )
    {
      if ( *(_DWORD *)v1 != 1752392564 )
      {
LABEL_10:
        v0 = 0;
        goto LABEL_14;
      }
    }
    else if ( v2 != 3 || *(_WORD *)v1 ^ 0x7363 | *(unsigned __int8 *)(v1 + 2) ^ 0x68 )
    {
      goto LABEL_10;
    }
    LOBYTE(v0) = 1;
  }
  else
  {
    LOBYTE(v0) = 3;
  }
LABEL_14:
  if ( v4 )
  {
LABEL_15:
    if ( v5[0] != 0x8000000000000000LL )
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v5);
    return v0;
  }
  alloc::raw_vec::RawVec<T,A>::current_memory(&v7, v5);
  if ( v8 )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v6, v7, v8, v9);
  return v0;
}
