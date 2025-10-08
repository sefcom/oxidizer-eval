__int64 __fastcall bat::assets::asset_from_cache(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // r14
  __int128 v6; // xmm0
  __int64 result; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  _QWORD v12[2]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v13; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v14; // [rsp+18h] [rbp-E0h]
  __int64 v15; // [rsp+20h] [rbp-D8h]
  _QWORD v16[3]; // [rsp+28h] [rbp-D0h] BYREF
  __int128 v17; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v18; // [rsp+50h] [rbp-A8h]
  __int128 v19; // [rsp+60h] [rbp-98h]
  __int128 v20; // [rsp+70h] [rbp-88h]
  __int128 v21; // [rsp+80h] [rbp-78h]
  _OWORD v22[6]; // [rsp+90h] [rbp-68h] BYREF

  v12[0] = aThemeSet;
  v12[1] = 9LL;
  std::fs::read(&v13);
  v16[0] = a2;
  v16[1] = a3;
  v16[2] = v12;
  v4 = v13;
  v5 = v14;
  if ( __OFSUB__(-v13, 1LL) )
  {
    bat::assets::asset_from_cache::{{closure}}(&v17, v16, v14);
    v6 = v17;
    result = v18;
    *(_BYTE *)a1 = 11;
    *(_OWORD *)(a1 + 8) = v6;
    *(_QWORD *)(a1 + 24) = result;
  }
  else
  {
    bat::assets::asset_from_contents(v22, v14, v15, aThemeSet, 9LL);
    if ( LOBYTE(v22[0]) == 13 )
    {
      *(_OWORD *)(a1 + 64) = v22[4];
      v8 = v22[0];
      v9 = v22[1];
      v10 = v22[2];
      v11 = v22[3];
    }
    else
    {
      bat::assets::asset_from_cache::{{closure}}(&v17, v12, v22);
      *(_OWORD *)(a1 + 64) = v21;
      v8 = v17;
      v9 = v18;
      v10 = v19;
      v11 = v20;
    }
    *(_OWORD *)(a1 + 48) = v11;
    *(_OWORD *)(a1 + 32) = v10;
    *(_OWORD *)(a1 + 16) = v9;
    *(_OWORD *)a1 = v8;
    return core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v4, v5);
  }
  return result;
}