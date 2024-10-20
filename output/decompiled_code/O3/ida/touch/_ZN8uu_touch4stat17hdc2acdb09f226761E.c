__int64 __fastcall uu_touch::stat(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbp
  __int64 v5; // r12
  int v6; // r13d
  int v7; // r14d
  __int64 v8; // r15
  int v9; // eax
  __int64 result; // rax
  __int64 v11; // [rsp+8h] [rbp-F0h]
  int v12; // [rsp+10h] [rbp-E8h]
  __int64 dest; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+20h] [rbp-D8h]
  __int64 v15; // [rsp+80h] [rbp-78h]
  __int64 v16; // [rsp+88h] [rbp-70h]
  __int64 v17; // [rsp+90h] [rbp-68h]
  __int64 v18; // [rsp+98h] [rbp-60h]

  if ( a4 )
  {
    v5 = a2;
    std::sys::pal::unix::fs::stat(&dest);
    if ( (_DWORD)dest != 2 )
    {
      v4 = v15;
      v6 = v16;
      v5 = v17;
      v9 = v18;
LABEL_12:
      *(_QWORD *)(a1 + 8) = v4;
      *(_DWORD *)(a1 + 16) = v6;
      *(_QWORD *)(a1 + 24) = v5;
      *(_DWORD *)(a1 + 32) = v9;
      result = 0LL;
      goto LABEL_13;
    }
    v11 = v14;
    std::sys::pal::unix::fs::lstat(&dest);
    v7 = dest;
    if ( dest != 2 )
    {
      v4 = v15;
      v6 = v16;
      v5 = v17;
      v12 = v18;
    }
    v8 = v14;
    core::ptr::drop_in_place<std::io::error::Error>(v11);
    v9 = v12;
    if ( v7 != 2 )
      goto LABEL_12;
  }
  else
  {
    v9 = std::sys::pal::unix::fs::lstat(&dest);
    if ( dest != 2 )
    {
      v4 = v15;
      v6 = v16;
      v5 = v17;
      v9 = v18;
    }
    v8 = v14;
    if ( (_DWORD)dest != 2 )
      goto LABEL_12;
  }
  *(_QWORD *)(a1 + 8) = v8;
  result = 1LL;
LABEL_13:
  *(_QWORD *)a1 = result;
  return result;
}
