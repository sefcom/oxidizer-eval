__int64 __fastcall sniffnet::report::types::search_parameters::SearchParameters::new_service_search(
        __int64 a1,
        _DWORD *a2)
{
  __int128 v3; // [rsp+0h] [rbp-E8h]
  _BYTE v4[24]; // [rsp+10h] [rbp-D8h]
  _BYTE v5[24]; // [rsp+28h] [rbp-C0h]
  _BYTE v6[24]; // [rsp+40h] [rbp-A8h]
  _BYTE v7[24]; // [rsp+58h] [rbp-90h]
  __int128 v8; // [rsp+70h] [rbp-78h] BYREF
  __int64 v9; // [rsp+80h] [rbp-68h]
  _BYTE v10[24]; // [rsp+88h] [rbp-60h]
  _BYTE v11[24]; // [rsp+A0h] [rbp-48h]
  _BYTE v12[24]; // [rsp+B8h] [rbp-30h]
  __int64 v13; // [rsp+D0h] [rbp-18h]
  char v14; // [rsp+D8h] [rbp-10h]

  sniffnet::networking::types::service::Service::to_string_with_equal_prefix(a1 + 120, a2);
  *(_QWORD *)&v3 = 0LL;
  *((_QWORD *)&v3 + 1) = 1LL;
  *(_OWORD *)v4 = 0LL;
  *(_QWORD *)&v4[16] = 1LL;
  *(_OWORD *)v5 = 0LL;
  *(_QWORD *)&v5[16] = 1LL;
  *(_OWORD *)v6 = 0LL;
  *(_QWORD *)&v6[16] = 1LL;
  *(_OWORD *)v7 = 0LL;
  *(_QWORD *)&v7[16] = 1LL;
  v8 = 0LL;
  v9 = 1LL;
  *(_OWORD *)v10 = 0LL;
  *(_QWORD *)&v10[16] = 1LL;
  *(_OWORD *)v11 = 0LL;
  *(_QWORD *)&v11[16] = 1LL;
  *(_OWORD *)v12 = 0LL;
  *(_QWORD *)&v12[16] = 1LL;
  v13 = 0LL;
  v14 = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)a1 = v3;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)&v4[8];
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v5[8];
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v6[8];
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_OWORD *)(a1 + 96) = *(_OWORD *)&v7[8];
  *(_QWORD *)(a1 + 112) = v8;
  *(_OWORD *)(a1 + 144) = *(_OWORD *)&v10[8];
  *(_QWORD *)(a1 + 160) = *(_QWORD *)v11;
  *(_OWORD *)(a1 + 168) = *(_OWORD *)&v11[8];
  *(_QWORD *)(a1 + 184) = *(_QWORD *)v12;
  *(_QWORD *)(a1 + 208) = v13;
  *(_OWORD *)(a1 + 192) = *(_OWORD *)&v12[8];
  *(_BYTE *)(a1 + 216) = 0;
  return core::ptr::drop_in_place<alloc::string::String>((char *)&v8 + 8);
}