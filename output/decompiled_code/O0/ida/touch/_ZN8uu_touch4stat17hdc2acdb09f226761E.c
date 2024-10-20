__int64 __fastcall uu_touch::stat(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // ebp
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rax
  int v13; // [rsp+0h] [rbp-F8h]
  __int64 v14; // [rsp+8h] [rbp-F0h]
  __int64 dest; // [rsp+18h] [rbp-E0h] BYREF
  _QWORD v16[12]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+80h] [rbp-78h]
  __int64 v18; // [rsp+88h] [rbp-70h]
  __int64 v19; // [rsp+90h] [rbp-68h]
  __int64 v20; // [rsp+98h] [rbp-60h]

  if ( a4 )
  {
    std::sys::pal::unix::fs::stat(&dest);
    if ( dest != 2 )
    {
      v9 = v17;
      v10 = v18;
      v5 = v19;
      v4 = v20;
LABEL_14:
      *(_QWORD *)(a1 + 8) = v9;
      *(_DWORD *)(a1 + 16) = v10;
      *(_QWORD *)(a1 + 24) = v5;
      *(_DWORD *)(a1 + 32) = v4;
      v11 = 0LL;
      goto LABEL_15;
    }
    v6 = v16[0];
    std::sys::pal::unix::fs::lstat(&dest);
    v7 = dest;
    if ( dest != 2 )
    {
      v14 = v17;
      v13 = v18;
      v5 = v19;
      v4 = v20;
    }
    v8 = v16[0];
    std::io::error::repr_bitpacked::decode_repr(&dest, v6);
    if ( (unsigned __int8)dest >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v16);
    v9 = v14;
    v10 = v13;
    if ( v7 != 2 )
      goto LABEL_14;
  }
  else
  {
    v9 = std::sys::pal::unix::fs::lstat(&dest);
    if ( dest != 2 )
    {
      v9 = v17;
      v10 = v18;
      v5 = v19;
      v4 = v20;
    }
    v8 = v16[0];
    if ( dest != 2 )
      goto LABEL_14;
  }
  *(_QWORD *)(a1 + 8) = v8;
  v11 = 1LL;
LABEL_15:
  *(_QWORD *)a1 = v11;
  return a1;
}
