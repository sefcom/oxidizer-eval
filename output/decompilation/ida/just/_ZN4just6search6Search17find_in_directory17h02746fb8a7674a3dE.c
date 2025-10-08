__int64 __fastcall just::search::Search::find_in_directory(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // [rsp+0h] [rbp-78h]
  __int128 v9; // [rsp+0h] [rbp-78h]
  _BYTE v10[24]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v11; // [rsp+38h] [rbp-40h]
  __int64 v12; // [rsp+48h] [rbp-30h]
  __int128 v13; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h]

  just::search::Search::justfile(v10, a2, a3, a4, a5);
  result = *(_QWORD *)v10;
  v8 = *(_OWORD *)&v10[8];
  if ( *(_QWORD *)v10 == 0x8000000000000006LL )
  {
    v14 = v11;
    v13 = *(_OWORD *)&v10[8];
    just::search::Search::working_directory_from_justfile(v10, *(_QWORD *)&v10[16]);
    v6 = *(_QWORD *)v10;
    v9 = *(_OWORD *)&v10[8];
    if ( *(_QWORD *)v10 == 0x8000000000000006LL )
    {
      v12 = v11;
      v11 = *(_OWORD *)&v10[8];
      *(_QWORD *)&v10[16] = v14;
      v7 = v13;
      *(_OWORD *)v10 = v13;
      *(_QWORD *)(a1 + 32) = *((_QWORD *)&v9 + 1);
      *(_QWORD *)(a1 + 40) = v12;
      *(_QWORD *)(a1 + 16) = *(_QWORD *)&v10[16];
      result = v11;
      *(_QWORD *)(a1 + 24) = v11;
      *(_OWORD *)a1 = v7;
    }
    else
    {
      *(_QWORD *)(a1 + 32) = v11;
      *(_OWORD *)(a1 + 16) = v9;
      *(_QWORD *)(a1 + 8) = v6;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      return core::ptr::drop_in_place<std::path::PathBuf>(&v13);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 32) = v11;
    *(_OWORD *)(a1 + 16) = v8;
    *(_QWORD *)(a1 + 8) = result;
    *(_QWORD *)a1 = 0x8000000000000000LL;
  }
  return result;
}