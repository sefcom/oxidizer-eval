_QWORD *__fastcall uu_rmdir::remove(_QWORD *a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int128 v13; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+10h] [rbp-38h]

  uu_rmdir::remove_single(&v13);
  if ( !(_QWORD)v13 )
  {
    if ( (a4 & 0x100) == 0 || (v7 = std::path::Path::parent(a2, a3)) == 0 || (v9 = v8) == 0 )
    {
LABEL_4:
      *a1 = 0LL;
      return a1;
    }
    v10 = v7;
    while ( 1 )
    {
      uu_rmdir::remove_single(&v13);
      if ( (_QWORD)v13 )
        break;
      v11 = std::path::Path::parent(v10, v9);
      if ( v11 )
      {
        v10 = v11;
        v9 = v12;
        if ( v12 )
          continue;
      }
      goto LABEL_4;
    }
  }
  a1[2] = v14;
  *(_OWORD *)a1 = v13;
  return a1;
}
