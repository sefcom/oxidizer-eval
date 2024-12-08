__int64 __fastcall uu_yes::splice::splice_data(__int64 a1, unsigned __int64 a2, unsigned int *a3)
{
  __int64 v4; // r15
  unsigned __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rbp
  unsigned int v11; // eax
  unsigned __int64 v12; // rbp
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v16; // [rsp+8h] [rbp-E0h]
  int v17; // [rsp+10h] [rbp-D8h] BYREF
  unsigned int v18; // [rsp+14h] [rbp-D4h]
  unsigned __int64 v19; // [rsp+18h] [rbp-D0h]
  __int64 v20; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-C0h]
  int v22; // [rsp+40h] [rbp-A8h]

  v4 = a1;
  nix::sys::stat::fstat(&v20, *a3);
  if ( (_DWORD)v20 )
  {
    v5 = (unsigned __int64)HIDWORD(v20) << 32;
    return v5 | 2;
  }
  if ( (v22 & 0x1000) != 0 )
  {
    if ( !a2 )
    {
      while ( 1 )
        ;
    }
    v16 = a1;
LABEL_17:
    v12 = a2;
    while ( 1 )
    {
      v20 = v4;
      v21 = v12;
      nix::fcntl::vmsplice(&v17, a3, &v20, 1LL, 0LL);
      if ( v17 )
        return core::ops::function::FnOnce::call_once(v18);
      if ( v12 < v19 )
        core::slice::index::slice_start_index_len_fail(v19, v12, &off_10A058);
      v4 += v19;
      v12 -= v19;
      if ( !v12 )
      {
        v4 = v16;
        goto LABEL_17;
      }
    }
  }
  else
  {
    v7 = uucore::features::pipes::pipe();
    if ( (_DWORD)v7 == -1 )
    {
      v5 = v7 & 0xFFFFFFFF00000000LL;
      return v5 | 2;
    }
    v15 = v7;
    if ( !a2 )
    {
      while ( 1 )
        ;
    }
    v16 = a1;
LABEL_8:
    v8 = v16;
    v9 = a2;
    while ( 1 )
    {
      v20 = v8;
      v21 = v9;
      nix::fcntl::vmsplice(&v17, (char *)&v15 + 4, &v20, 1LL, 0LL);
      if ( v17 )
      {
        v13 = v18;
        goto LABEL_27;
      }
      v10 = v19;
      v11 = uucore::features::pipes::splice_exact(&v15, a3, v19);
      if ( v11 != 134 )
        break;
      if ( v9 < v10 )
        core::slice::index::slice_start_index_len_fail(v10, v9, &off_10A040);
      v8 += v10;
      v9 -= v10;
      if ( !v9 )
        goto LABEL_8;
    }
    v13 = v11;
LABEL_27:
    v14 = core::ops::function::FnOnce::call_once(v13);
    core::ptr::drop_in_place<std::fs::File>(HIDWORD(v15));
    core::ptr::drop_in_place<std::fs::File>((unsigned int)v15);
    return v14;
  }
}
