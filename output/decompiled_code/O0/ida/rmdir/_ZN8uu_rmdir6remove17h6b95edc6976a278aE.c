__int64 __fastcall uu_rmdir::remove(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int128 v7; // xmm0
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // [rsp+8h] [rbp-60h] BYREF
  __int128 v12; // [rsp+10h] [rbp-58h]
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+28h] [rbp-40h]

  uu_rmdir::remove_single(&v11);
  if ( v11 )
  {
    *(_QWORD *)a1 = v11;
    v7 = v12;
LABEL_3:
    *(_OWORD *)(a1 + 8) = v7;
  }
  else
  {
    if ( (a4 & 0x100) != 0 )
    {
      while ( 1 )
      {
        v9 = std::path::Path::parent(a2, a3);
        if ( !v9 )
          break;
        a3 = v10;
        if ( !v10 )
          break;
        a2 = v9;
        uu_rmdir::remove_single(&v13);
        if ( v13 )
        {
          *(_QWORD *)a1 = v13;
          v7 = v14;
          goto LABEL_3;
        }
      }
    }
    *(_QWORD *)a1 = 0LL;
  }
  return a1;
}
