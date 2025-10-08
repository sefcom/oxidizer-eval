__int64 __fastcall uu_mknod::get_mode(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ecx
  __int64 v4; // rsi
  __int128 v6; // [rsp+0h] [rbp-68h] BYREF
  __int64 v7; // [rsp+10h] [rbp-58h]
  __int64 v8; // [rsp+18h] [rbp-50h] BYREF
  int v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+24h] [rbp-44h]
  int v11; // [rsp+2Ch] [rbp-3Ch]
  __int64 v12; // [rsp+30h] [rbp-38h]
  int v13; // [rsp+38h] [rbp-30h]
  __int128 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  if ( !a2 )
  {
    *(_DWORD *)(a1 + 8) = 438;
LABEL_8:
    *(_QWORD *)a1 = 0x8000000000000000LL;
    return a1;
  }
  uucore::features::mode::parse_mode(&v6, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  if ( (_QWORD)v6 != 0x8000000000000000LL )
  {
    v15 = v7;
    v14 = v6;
    uu_mknod::get_mode::{{closure}}(&v8, &v14);
    v2 = v8;
    v3 = v9;
    v13 = v11;
    v4 = v10;
    v12 = v10;
    *(_DWORD *)(a1 + 20) = v11;
    *(_QWORD *)(a1 + 12) = v4;
    *(_QWORD *)a1 = v2;
    *(_DWORD *)(a1 + 8) = v3;
    return a1;
  }
  if ( DWORD2(v6) <= 0x1FF )
  {
    *(_DWORD *)(a1 + 8) = DWORD2(v6);
    goto LABEL_8;
  }
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, aModeMustSpecif, 43LL);
  return a1;
}