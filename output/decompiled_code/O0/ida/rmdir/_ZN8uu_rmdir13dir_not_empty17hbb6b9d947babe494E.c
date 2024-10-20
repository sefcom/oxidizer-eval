__int64 __fastcall uu_rmdir::dir_not_empty(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v6; // rbx
  _DWORD *v7; // rax
  _DWORD *v9; // rax
  char v10; // di
  volatile signed __int64 *v11; // [rsp+0h] [rbp-88h] BYREF
  __int64 *v12; // [rsp+8h] [rbp-80h] BYREF
  volatile signed __int64 *v13; // [rsp+10h] [rbp-78h] BYREF
  char v14; // [rsp+18h] [rbp-70h]
  volatile signed __int64 *v15; // [rsp+20h] [rbp-68h] BYREF
  char v16; // [rsp+28h] [rbp-60h]
  __int64 v17; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v18[80]; // [rsp+38h] [rbp-50h] BYREF

  v3 = *a1;
  v4 = *a1 & 3;
  if ( v4 >= 2 )
  {
    if ( (_DWORD)v4 == 2 )
    {
      v6 = HIDWORD(v3);
      v11 = (volatile signed __int64 *)&unk_15200;
      v12 = &qword_15208;
      while ( 1 )
      {
        v7 = (_DWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v11);
        if ( !v7 )
          break;
        if ( *v7 == (_DWORD)v6 )
        {
          LOBYTE(v6) = 1;
          return (unsigned int)v6;
        }
      }
      v11 = (volatile signed __int64 *)"\r";
      v12 = (__int64 *)&xmmword_14E80;
      while ( 1 )
      {
        v9 = (_DWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v11);
        if ( !v9 )
          break;
        if ( *v9 == (_DWORD)v6 )
        {
          std::sys::pal::unix::fs::readdir(&v11, a2, a3);
          v10 = 2;
          if ( (_BYTE)v12 != 2 )
            v10 = (unsigned __int8)v12 & 1;
          v15 = v11;
          v16 = v10;
          if ( (_BYTE)v12 == 2 )
            goto LABEL_26;
          v13 = v11;
          v14 = (unsigned __int8)v12 & 1;
          <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v17, &v13);
          if ( v17 )
          {
            if ( v17 == 1 )
            {
              core::ptr::drop_in_place<core::result::Result<std::fs::DirEntry,std::io::error::Error>>(v18);
              if ( !_InterlockedDecrement64(v13) )
                alloc::sync::Arc<T,A>::drop_slow(&v13);
              LOBYTE(v6) = 1;
              if ( v16 == 2 )
                core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v15);
              return (unsigned int)v6;
            }
            core::ptr::drop_in_place<core::result::Result<std::fs::DirEntry,std::io::error::Error>>(v18);
          }
          if ( !_InterlockedDecrement64(v13) )
            alloc::sync::Arc<T,A>::drop_slow(&v13);
          if ( v16 == 2 )
          {
LABEL_26:
            std::io::error::repr_bitpacked::decode_repr(&v11);
            if ( (unsigned __int8)v11 >= 3u )
              core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(&v12);
          }
          break;
        }
      }
    }
    else if ( (unsigned __int8)std::io::error::repr_bitpacked::kind_from_prim(HIDWORD(v3)) == 41 )
    {
      core::hint::unreachable_unchecked::precondition_check();
    }
  }
  LODWORD(v6) = 0;
  return (unsigned int)v6;
}
