__int64 __fastcall uu_shuf::split_seps(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v5; // [rsp+7h] [rbp-41h] BYREF
  __int128 v6; // [rsp+8h] [rbp-40h] BYREF
  __int64 v7; // [rsp+18h] [rbp-30h]
  _QWORD v8[3]; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  v5 = a4;
  v8[0] = a2;
  v8[1] = a3;
  v8[2] = &v5;
  v9 = 0;
  core::iter::traits::iterator::Iterator::collect(&v6, v8);
  if ( v7 && !*(_QWORD *)(*((_QWORD *)&v6 + 1) + 16 * (v7 - 1) + 8) )
    --v7;
  *(_QWORD *)(a1 + 16) = v7;
  *(_OWORD *)a1 = v6;
  return a1;
}