__int64 __fastcall uu_rmdir::dir_not_empty(_QWORD *a1)
{
  unsigned __int64 v1; // rcx
  unsigned int v2; // ebx
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  char v5; // dl
  volatile signed __int64 *v6; // rdi
  __int64 v7; // rcx
  volatile signed __int64 *v9; // [rsp+0h] [rbp-58h] BYREF
  bool v10; // [rsp+8h] [rbp-50h]
  volatile signed __int64 *v11; // [rsp+10h] [rbp-48h]
  char v12; // [rsp+18h] [rbp-40h]
  volatile signed __int64 *v13; // [rsp+20h] [rbp-38h] BYREF
  char v14; // [rsp+28h] [rbp-30h]

  v1 = *a1 & 3LL;
  v2 = 0;
  if ( v1 >= 2 && (_DWORD)v1 == 2 )
  {
    v3 = HIDWORD(*a1);
    if ( (unsigned int)v3 > 0x27 )
      return 0;
    LOBYTE(v2) = 1;
    v4 = 1073815554LL;
    if ( !_bittest64(&v4, v3) )
    {
      v7 = 0x8000020000LL;
      if ( _bittest64(&v7, v3) )
        return v2;
      return 0;
    }
    std::sys::pal::unix::fs::readdir(&v13);
    v5 = 2;
    if ( v14 != 2 )
      v5 = v14 != 0;
    v6 = v13;
    v11 = v13;
    v12 = v5;
    if ( v14 == 2 )
    {
LABEL_8:
      core::ptr::drop_in_place<std::io::error::Error>(v6);
      return 0;
    }
    v9 = v13;
    v10 = v14 != 0;
    <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v13, &v9);
    if ( !v13 )
    {
      core::ptr::drop_in_place<core::option::Option<core::result::Result<std::fs::DirEntry,std::io::error::Error>>>(&v13);
      if ( !_InterlockedDecrement64(v9) )
        alloc::sync::Arc<T,A>::drop_slow(&v9);
      if ( v12 != 2 )
        return 0;
      v6 = v11;
      goto LABEL_8;
    }
    core::ptr::drop_in_place<core::option::Option<core::result::Result<std::fs::DirEntry,std::io::error::Error>>>(&v13);
    if ( !_InterlockedDecrement64(v9) )
      alloc::sync::Arc<T,A>::drop_slow(&v9);
    if ( v12 == 2 )
      core::ptr::drop_in_place<std::io::error::Error>(v11);
  }
  return v2;
}
