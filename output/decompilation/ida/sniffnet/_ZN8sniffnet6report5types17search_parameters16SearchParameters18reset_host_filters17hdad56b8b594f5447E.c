__int64 __fastcall sniffnet::report::types::search_parameters::SearchParameters::reset_host_filters(
        __int64 a1,
        __int64 a2)
{
  __int128 v3; // [rsp+8h] [rbp-130h]
  __int128 v4; // [rsp+20h] [rbp-118h]
  __int128 v5; // [rsp+38h] [rbp-100h]
  __int128 v6; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v7; // [rsp+60h] [rbp-D8h]
  __int128 v8; // [rsp+68h] [rbp-D0h]
  __int64 v9; // [rsp+78h] [rbp-C0h]
  __int128 v10; // [rsp+80h] [rbp-B8h]
  __int64 v11; // [rsp+90h] [rbp-A8h]
  __int128 v12; // [rsp+98h] [rbp-A0h]
  __int64 v13; // [rsp+A8h] [rbp-90h]
  __int128 v14; // [rsp+B0h] [rbp-88h]
  __int64 v15; // [rsp+C0h] [rbp-78h]
  __int128 v16; // [rsp+C8h] [rbp-70h]
  __int64 v17; // [rsp+D8h] [rbp-60h]
  _BYTE v18[24]; // [rsp+E0h] [rbp-58h] BYREF
  _BYTE v19[24]; // [rsp+F8h] [rbp-40h] BYREF
  _BYTE v20[40]; // [rsp+110h] [rbp-28h] BYREF

  *(_QWORD *)&v3 = 0LL;
  *((_QWORD *)&v3 + 1) = 1LL;
  *(_QWORD *)&v4 = 0LL;
  *((_QWORD *)&v4 + 1) = 1LL;
  *(_QWORD *)&v5 = 0LL;
  *((_QWORD *)&v5 + 1) = 1LL;
  <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(&v6, a2);
  *(_QWORD *)(a1 + 16) = v7;
  *(_OWORD *)a1 = v6;
  *(_QWORD *)(a1 + 40) = v9;
  *(_OWORD *)(a1 + 24) = v8;
  *(_QWORD *)(a1 + 64) = v11;
  *(_OWORD *)(a1 + 48) = v10;
  *(_QWORD *)(a1 + 88) = v13;
  *(_OWORD *)(a1 + 72) = v12;
  *(_QWORD *)(a1 + 112) = v15;
  *(_OWORD *)(a1 + 96) = v14;
  *(_OWORD *)(a1 + 120) = v16;
  *(_QWORD *)(a1 + 136) = v17;
  *(_OWORD *)(a1 + 144) = v3;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_OWORD *)(a1 + 168) = v4;
  *(_OWORD *)(a1 + 192) = v5;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_BYTE *)(a1 + 216) = 0;
  core::ptr::drop_in_place<alloc::string::String>(v18);
  core::ptr::drop_in_place<alloc::string::String>(v19);
  return core::ptr::drop_in_place<alloc::string::String>(v20);
}