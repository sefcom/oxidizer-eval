__int64 __fastcall sniffnet::report::types::search_parameters::SearchParameters::new_host_search(
        __int64 a1,
        __int64 a2)
{
  __int128 v3; // [rsp+8h] [rbp-140h] BYREF
  __int64 v4; // [rsp+18h] [rbp-130h]
  __int128 v5; // [rsp+20h] [rbp-128h] BYREF
  __int64 v6; // [rsp+30h] [rbp-118h]
  __int128 v7; // [rsp+38h] [rbp-110h] BYREF
  __int64 v8; // [rsp+48h] [rbp-100h]
  __int128 v9; // [rsp+50h] [rbp-F8h]
  _BYTE v10[24]; // [rsp+60h] [rbp-E8h]
  _BYTE v11[24]; // [rsp+78h] [rbp-D0h]
  _BYTE v12[24]; // [rsp+90h] [rbp-B8h]
  _BYTE v13[24]; // [rsp+A8h] [rbp-A0h]
  _BYTE v14[24]; // [rsp+C0h] [rbp-88h]
  __int128 v15; // [rsp+D8h] [rbp-70h] BYREF
  __int64 v16; // [rsp+E8h] [rbp-60h]
  __int128 v17; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v18; // [rsp+100h] [rbp-48h]
  __int128 v19; // [rsp+108h] [rbp-40h] BYREF
  __int64 v20; // [rsp+118h] [rbp-30h]
  __int64 v21; // [rsp+120h] [rbp-28h]
  char v22; // [rsp+128h] [rbp-20h]

  <alloc::string::String as core::clone::Clone>::clone(&v5, a2);
  <alloc::string::String as core::clone::Clone>::clone(&v7, a2 + 48);
  if ( *(_BYTE *)(a2 + 72) == 0xF9 )
  {
    *(_QWORD *)&v3 = 0LL;
    *((_QWORD *)&v3 + 1) = 1LL;
    v4 = 0LL;
  }
  else
  {
    <T as alloc::string::SpecToString>::spec_to_string(&v3, a2 + 72);
  }
  *(_QWORD *)&v9 = 0LL;
  *((_QWORD *)&v9 + 1) = 1LL;
  *(_OWORD *)v10 = 0LL;
  *(_QWORD *)&v10[16] = 1LL;
  *(_OWORD *)v11 = 0LL;
  *(_QWORD *)&v11[16] = 1LL;
  *(_OWORD *)v12 = 0LL;
  *(_QWORD *)&v12[16] = 1LL;
  *(_OWORD *)v13 = 0LL;
  *(_QWORD *)&v13[16] = 1LL;
  *(_OWORD *)v14 = 0LL;
  *(_QWORD *)&v14[16] = 1LL;
  v15 = 0LL;
  v16 = 1LL;
  v17 = 0LL;
  v18 = 1LL;
  v19 = 0LL;
  v20 = 1LL;
  v21 = 0LL;
  v22 = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)a1 = v9;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)&v10[8];
  *(_QWORD *)(a1 + 40) = *(_QWORD *)v11;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v11[8];
  *(_QWORD *)(a1 + 64) = *(_QWORD *)v12;
  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v12[8];
  *(_QWORD *)(a1 + 88) = *(_QWORD *)v13;
  *(_OWORD *)(a1 + 96) = *(_OWORD *)&v13[8];
  *(_QWORD *)(a1 + 112) = *(_QWORD *)v14;
  *(_OWORD *)(a1 + 120) = *(_OWORD *)&v14[8];
  *(_QWORD *)(a1 + 136) = v15;
  *(_OWORD *)(a1 + 144) = v3;
  *(_QWORD *)(a1 + 160) = v4;
  *(_QWORD *)(a1 + 184) = v6;
  *(_OWORD *)(a1 + 168) = v5;
  *(_OWORD *)(a1 + 192) = v7;
  *(_QWORD *)(a1 + 208) = v8;
  *(_BYTE *)(a1 + 216) = 0;
  core::ptr::drop_in_place<alloc::string::String>((char *)&v15 + 8);
  core::ptr::drop_in_place<alloc::string::String>((char *)&v17 + 8);
  return core::ptr::drop_in_place<alloc::string::String>((char *)&v19 + 8);
}