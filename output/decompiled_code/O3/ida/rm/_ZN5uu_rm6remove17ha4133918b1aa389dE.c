__int64 __fastcall uu_rm::remove(__int64 a1, __int64 a2, _BYTE *a3)
{
  _QWORD *v4; // rax
  unsigned __int8 v5; // dl
  unsigned __int8 v6; // cl
  unsigned int v7; // ebp
  unsigned int v8; // ebx
  char v9; // al
  __int64 v10; // r13
  __int64 v11; // r15
  char v13; // al
  __int64 v14; // r12
  __int64 v15; // rbx
  __int64 v16; // rdx
  unsigned int v17; // [rsp+Ch] [rbp-16Ch]
  unsigned int v18; // [rsp+Ch] [rbp-16Ch]
  __int64 v19; // [rsp+10h] [rbp-168h] BYREF
  unsigned int v20; // [rsp+1Ch] [rbp-15Ch]
  _BYTE *v21; // [rsp+20h] [rbp-158h]
  __int64 *v22; // [rsp+28h] [rbp-150h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+30h] [rbp-148h]
  _QWORD v24[2]; // [rsp+38h] [rbp-140h] BYREF
  __int64 v25; // [rsp+48h] [rbp-130h] BYREF
  __int64 v26; // [rsp+50h] [rbp-128h]
  __int64 v27; // [rsp+58h] [rbp-120h]
  char v28; // [rsp+60h] [rbp-118h]
  char **v29; // [rsp+68h] [rbp-110h] BYREF
  __int64 v30; // [rsp+70h] [rbp-108h]
  __int64 **v31; // [rsp+78h] [rbp-100h]
  __int64 v32; // [rsp+80h] [rbp-F8h]
  __int64 v33; // [rsp+88h] [rbp-F0h]
  int v34; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-D8h]
  int v36; // [rsp+D0h] [rbp-A8h]

  v24[0] = a1;
  v24[1] = a1 + 16 * a2;
  v4 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v24);
  if ( v4 )
  {
    v5 = a3[5];
    v6 = a3[6];
    v21 = a3;
    if ( *a3 )
    {
      v7 = 0;
      v17 = v5;
      v8 = v6;
      do
      {
        v10 = *v4;
        v11 = v4[1];
        std::fs::symlink_metadata(&v34, *v4, v11);
        if ( v34 == 2 )
        {
          v19 = v35;
          core::ptr::drop_in_place<std::io::error::Error>(&v19);
          v9 = 0;
        }
        else if ( (v36 & 0xF000) == 0x4000 )
        {
          v9 = uu_rm::handle_dir(v10, v11, v21);
        }
        else
        {
          v9 = uu_rm::remove_file(v10, v11, v17, v8);
        }
        LOBYTE(v7) = v9 | v7;
        v4 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v24);
      }
      while ( v4 );
    }
    else
    {
      v7 = 0;
      v18 = v5;
      v20 = v6;
      do
      {
        v14 = *v4;
        v15 = v4[1];
        std::fs::symlink_metadata(&v34, *v4, v15);
        if ( v34 == 2 )
        {
          v19 = v35;
          v25 = uucore::util_name();
          v26 = v16;
          v22 = &v25;
          v23 = <&T as core::fmt::Display>::fmt;
          v29 = (char **)&unk_127970;
          v30 = 2LL;
          v33 = 0LL;
          v31 = &v22;
          v32 = 1LL;
          std::io::stdio::_eprint(&v29);
          v25 = 1LL;
          v26 = v14;
          v27 = v15;
          v28 = 1;
          v22 = &v25;
          v23 = <os_display::Quoted as core::fmt::Display>::fmt;
          v29 = &off_127990;
          v30 = 2LL;
          v33 = 0LL;
          v31 = &v22;
          v32 = 1LL;
          std::io::stdio::_eprint(&v29);
          core::ptr::drop_in_place<std::io::error::Error>(&v19);
          v13 = 1;
        }
        else if ( (v36 & 0xF000) == 0x4000 )
        {
          v13 = uu_rm::handle_dir(v14, v15, v21);
        }
        else
        {
          v13 = uu_rm::remove_file(v14, v15, v18, v20);
        }
        LOBYTE(v7) = v13 | v7;
        v4 = (_QWORD *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v24);
      }
      while ( v4 );
    }
  }
  else
  {
    v7 = 0;
  }
  LOBYTE(v7) = v7 & 1;
  return v7;
}
