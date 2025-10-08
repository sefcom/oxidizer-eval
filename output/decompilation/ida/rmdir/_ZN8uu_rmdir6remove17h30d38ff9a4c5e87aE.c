_QWORD *__fastcall uu_rmdir::remove(_QWORD *a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  __int128 v12; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+10h] [rbp-38h]

  uu_rmdir::remove_single(&v12);
  if ( !(_QWORD)v12 )
  {
    if ( (a4 & 0x100) == 0 || (v7 = std::path::Path::parent(a2, a3), v7 == 0 || v6 == 0) )
    {
LABEL_5:
      *a1 = 0LL;
      return a1;
    }
    v9 = v6;
    while ( 1 )
    {
      uu_rmdir::remove_single(&v12);
      if ( (_QWORD)v12 )
        break;
      v10 = std::path::Path::parent(v7, v9);
      if ( v10 )
      {
        v7 = v10;
        v9 = v11;
        if ( v11 )
          continue;
      }
      goto LABEL_5;
    }
  }
  a1[2] = v13;
  *(_OWORD *)a1 = v12;
  return a1;
}