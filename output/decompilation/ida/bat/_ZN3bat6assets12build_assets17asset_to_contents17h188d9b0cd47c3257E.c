__int64 __fastcall bat::assets::build_assets::asset_to_contents(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax
  __int128 v7; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+10h] [rbp-38h]
  _QWORD v9[2]; // [rsp+18h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  __int128 v11; // [rsp+30h] [rbp-18h]

  v9[0] = a3;
  v9[1] = a4;
  *(_QWORD *)&v7 = 0LL;
  *((_QWORD *)&v7 + 1) = 1LL;
  v8 = 0LL;
  v4 = bincode::internal::serialize_into(&v7);
  if ( v4 )
  {
    bat::assets::build_assets::asset_to_contents::{{closure}}(&v10, v9, v4);
    v5 = v10;
    *(_OWORD *)(a1 + 16) = v11;
    *(_BYTE *)a1 = 11;
    *(_QWORD *)(a1 + 8) = v5;
    return core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v7, *((_QWORD *)&v7 + 1));
  }
  else
  {
    result = v8;
    *(_QWORD *)(a1 + 24) = v8;
    *(_OWORD *)(a1 + 8) = v7;
    *(_BYTE *)a1 = 13;
  }
  return result;
}