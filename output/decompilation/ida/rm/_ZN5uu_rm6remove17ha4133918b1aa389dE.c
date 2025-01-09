__int64 __fastcall uu_rm::remove(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 (__fastcall **v4)(); // rax
  char v5; // dl
  unsigned __int8 v6; // cl
  unsigned int v7; // ebp
  char v8; // bl
  char v9; // al
  __int64 (__fastcall *v10)(); // r13
  __int64 *v11; // r15
  char v13; // al
  __int64 (__fastcall *v14)(); // r12
  __int64 *v15; // rbx
  __int64 (__fastcall *v16)(); // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(); // rdx
  char v20; // [rsp+Ch] [rbp-16Ch]
  char v21; // [rsp+Ch] [rbp-16Ch]
  __int64 v22; // [rsp+10h] [rbp-168h] BYREF
  int v23; // [rsp+1Ch] [rbp-15Ch]
  _BYTE *v24; // [rsp+20h] [rbp-158h]
  __int64 *v25; // [rsp+28h] [rbp-150h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+30h] [rbp-148h]
  _QWORD v27[2]; // [rsp+38h] [rbp-140h] BYREF
  __int64 v28; // [rsp+48h] [rbp-130h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+50h] [rbp-128h]
  __int64 *v30; // [rsp+58h] [rbp-120h]
  char v31; // [rsp+60h] [rbp-118h]
  char **v32; // [rsp+68h] [rbp-110h] BYREF
  __int64 v33; // [rsp+70h] [rbp-108h]
  __int64 **v34; // [rsp+78h] [rbp-100h]
  __int64 v35; // [rsp+80h] [rbp-F8h]
  __int64 v36; // [rsp+88h] [rbp-F0h]
  int v37; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-D8h]
  int v39; // [rsp+D0h] [rbp-A8h]

  v27[0] = a1;
  v27[1] = a1 + 16 * a2;
  v4 = (__int64 (__fastcall **)())<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v27);
  if ( v4 )
  {
    v5 = a3[5];
    v6 = a3[6];
    v24 = a3;
    if ( *a3 )
    {
      v7 = 0;
      v20 = v5;
      v8 = v6;
      do
      {
        v10 = *v4;
        v11 = (__int64 *)v4[1];
        std::fs::symlink_metadata(&v37, *v4, v11);
        if ( v37 == 2 )
        {
          v22 = v38;
          core::ptr::drop_in_place<std::io::error::Error>(&v22);
          v9 = 0;
        }
        else if ( (v39 & 0xF000) == 0x4000 )
        {
          v9 = uu_rm::handle_dir(v10, v11, v24);
        }
        else
        {
          v9 = uu_rm::remove_file(v10, v11, v20, v8);
        }
        LOBYTE(v7) = v9 | v7;
        v4 = (__int64 (__fastcall **)())<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v27);
      }
      while ( v4 );
    }
    else
    {
      v7 = 0;
      v21 = v5;
      v23 = v6;
      do
      {
        v14 = *v4;
        v15 = (__int64 *)v4[1];
        v16 = *v4;
        std::fs::symlink_metadata(&v37, *v4, v15);
        if ( v37 == 2 )
        {
          v22 = v38;
          v28 = uucore::util_name(&v37, v16, v17, v18);
          v29 = v19;
          v25 = &v28;
          v26 = <&T as core::fmt::Display>::fmt;
          v32 = (char **)&unk_127970;
          v33 = 2LL;
          v36 = 0LL;
          v34 = &v25;
          v35 = 1LL;
          std::io::stdio::_eprint(&v32);
          v28 = 1LL;
          v29 = v14;
          v30 = v15;
          v31 = 1;
          v25 = &v28;
          v26 = <os_display::Quoted as core::fmt::Display>::fmt;
          v32 = &off_127990;
          v33 = 2LL;
          v36 = 0LL;
          v34 = &v25;
          v35 = 1LL;
          std::io::stdio::_eprint(&v32);
          core::ptr::drop_in_place<std::io::error::Error>(&v22);
          v13 = 1;
        }
        else if ( (v39 & 0xF000) == 0x4000 )
        {
          v13 = uu_rm::handle_dir(v14, v15, v24);
        }
        else
        {
          v13 = uu_rm::remove_file(v14, v15, v21, v23);
        }
        LOBYTE(v7) = v13 | v7;
        v4 = (__int64 (__fastcall **)())<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v27);
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
