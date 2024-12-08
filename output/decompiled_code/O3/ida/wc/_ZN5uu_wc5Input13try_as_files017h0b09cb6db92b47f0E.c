__int64 __fastcall uu_wc::Input::try_as_files0(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD v10[3]; // [rsp+8h] [rbp-1E0h] BYREF
  __int64 v11; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v12; // [rsp+28h] [rbp-1C0h]
  __int64 v13; // [rsp+30h] [rbp-1B8h]
  __int128 v14; // [rsp+38h] [rbp-1B0h]
  __int128 v15; // [rsp+48h] [rbp-1A0h]
  __int128 v16; // [rsp+58h] [rbp-190h]
  __int64 v17; // [rsp+68h] [rbp-180h]
  _QWORD v18[3]; // [rsp+70h] [rbp-178h] BYREF
  __int128 v19; // [rsp+88h] [rbp-160h]
  __int128 v20; // [rsp+98h] [rbp-150h]
  __int128 v21; // [rsp+A8h] [rbp-140h]
  __int64 v22; // [rsp+B8h] [rbp-130h]
  __int64 v23; // [rsp+C0h] [rbp-128h] BYREF
  __int64 v24; // [rsp+C8h] [rbp-120h]
  __int64 v25; // [rsp+D0h] [rbp-118h]
  int v26; // [rsp+F8h] [rbp-F0h]
  unsigned __int64 v27; // [rsp+110h] [rbp-D8h]
  _BYTE v28[120]; // [rsp+170h] [rbp-78h] BYREF

  if ( *a2 != 0x8000000000000001LL )
  {
    std::fs::metadata(&v23);
    v5 = v23;
    if ( v23 == 2 || (v26 & 0xF000) != 0x8000 || v27 >= 0xA00001 )
    {
      *a1 = 0x8000000000000000LL;
    }
    else
    {
      v7 = v23;
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
      core::iter::adapters::try_process(v10, v18);
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
    uu_wc::files0_iter_stdin(v28);
    core::iter::adapters::try_process(&v23, v28);
    result = v24;
    v4 = v25;
    if ( v23 == 0x8000000000000000LL )
    {
      a1[1] = v24;
      a1[2] = v4;
      *a1 = 0x8000000000000001LL;
    }
    else
    {
      *a1 = v23;
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
