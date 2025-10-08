__int64 __fastcall uu_wc::Input::try_as_files0(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD v10[3]; // [rsp+0h] [rbp-188h] BYREF
  __int64 v11; // [rsp+18h] [rbp-170h] BYREF
  __int64 v12; // [rsp+20h] [rbp-168h]
  __int64 v13; // [rsp+28h] [rbp-160h]
  __int128 v14; // [rsp+30h] [rbp-158h]
  __int128 v15; // [rsp+40h] [rbp-148h]
  __int128 v16; // [rsp+50h] [rbp-138h]
  __int64 v17; // [rsp+60h] [rbp-128h]
  _QWORD v18[3]; // [rsp+68h] [rbp-120h] BYREF
  __int128 v19; // [rsp+80h] [rbp-108h]
  __int128 v20; // [rsp+90h] [rbp-F8h]
  __int128 v21; // [rsp+A0h] [rbp-E8h]
  __int64 v22; // [rsp+B0h] [rbp-D8h]
  __int64 dest; // [rsp+B8h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+C0h] [rbp-C8h]
  int v25; // [rsp+F0h] [rbp-98h]
  unsigned __int64 v26; // [rsp+108h] [rbp-80h]

  if ( *a2 != 0x8000000000000001LL )
  {
    std::fs::metadata(&dest);
    v5 = dest;
    if ( dest == 2 || (v25 & 0xF000) != 0x8000 || v26 > 0xA00000 )
    {
      *a1 = 0x8000000000000000LL;
    }
    else
    {
      v7 = dest;
      uu_wc::files0_iter_file(&v11, a2[1], a2[2]);
      v8 = v12;
      v9 = v13;
      if ( v11 == 0x8000000000000001LL )
        goto LABEL_14;
      v22 = v17;
      v21 = v16;
      v20 = v15;
      v19 = v14;
      v18[0] = v11;
      v18[1] = v12;
      v18[2] = v13;
      core::iter::traits::iterator::Iterator::collect(v10, v18);
      v8 = v10[1];
      v9 = v10[2];
      if ( v10[0] == 0x8000000000000000LL )
      {
LABEL_14:
        a1[1] = v8;
        a1[2] = v9;
        *a1 = 0x8000000000000001LL;
        v6 = v24;
        v5 = v7;
        return core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v5, v6);
      }
      *a1 = v10[0];
      a1[1] = v8;
      a1[2] = v9;
      v5 = v7;
    }
    v6 = v24;
    return core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v5, v6);
  }
  result = uu_wc::is_stdin_small_file();
  if ( (_BYTE)result )
  {
    uu_wc::files0_iter_stdin(&dest);
    core::iter::traits::iterator::Iterator::collect(&v11, &dest);
    result = v12;
    v4 = v13;
    if ( v11 == 0x8000000000000000LL )
    {
      a1[1] = v12;
      a1[2] = v4;
      *a1 = 0x8000000000000001LL;
    }
    else
    {
      *a1 = v11;
      a1[1] = result;
      a1[2] = v4;
    }
  }
  else
  {
    *a1 = 0x8000000000000000LL;
  }
  return result;
}