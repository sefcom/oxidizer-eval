__int64 __fastcall sniffnet::report::types::search_parameters::FilterInputType::clear_search(
        __int64 a1,
        char a2,
        __int64 a3)
{
  __int64 result; // rax
  __int128 v4; // [rsp+8h] [rbp-100h]
  __int128 v5; // [rsp+8h] [rbp-100h]
  __int128 v6; // [rsp+8h] [rbp-100h]
  __int128 v7; // [rsp+8h] [rbp-100h]
  __int128 v8; // [rsp+8h] [rbp-100h]
  __int128 v9; // [rsp+8h] [rbp-100h]
  __int128 v10; // [rsp+8h] [rbp-100h]
  __int128 v11; // [rsp+8h] [rbp-100h]
  __int128 v12; // [rsp+8h] [rbp-100h]
  __int128 v13; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v14; // [rsp+30h] [rbp-D8h]
  __int128 v15; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-C0h]
  __int128 v17; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h]
  __int128 v19; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+78h] [rbp-90h]
  __int128 v21; // [rsp+80h] [rbp-88h] BYREF
  __int64 v22; // [rsp+90h] [rbp-78h]
  __int128 v23; // [rsp+98h] [rbp-70h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-60h]
  __int128 v25; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v26; // [rsp+C0h] [rbp-48h]
  __int128 v27; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v28; // [rsp+D8h] [rbp-30h]
  __int128 v29; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-18h]
  char v31; // [rsp+F8h] [rbp-10h]

  switch ( a2 )
  {
    case 0:
      *(_QWORD *)&v4 = 0LL;
      *((_QWORD *)&v4 + 1) = 1LL;
      <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(&v13, a3);
      *(_QWORD *)(a1 + 16) = 0LL;
      *(_OWORD *)a1 = v4;
      *(_QWORD *)(a1 + 40) = v16;
      *(_OWORD *)(a1 + 24) = v15;
      *(_QWORD *)(a1 + 64) = v18;
      *(_OWORD *)(a1 + 48) = v17;
      *(_QWORD *)(a1 + 88) = v20;
      *(_OWORD *)(a1 + 72) = v19;
      *(_QWORD *)(a1 + 112) = v22;
      *(_OWORD *)(a1 + 96) = v21;
      *(_OWORD *)(a1 + 120) = v23;
      *(_QWORD *)(a1 + 136) = v24;
      *(_OWORD *)(a1 + 144) = v25;
      *(_QWORD *)(a1 + 160) = v26;
      *(_QWORD *)(a1 + 184) = v28;
      *(_OWORD *)(a1 + 168) = v27;
      *(_OWORD *)(a1 + 192) = v29;
      *(_QWORD *)(a1 + 208) = v30;
      *(_BYTE *)(a1 + 216) = v31;
      result = core::ptr::drop_in_place<alloc::string::String>(&v13);
      break;
    case 1:
      *(_QWORD *)&v9 = 0LL;
      *((_QWORD *)&v9 + 1) = 1LL;
      <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(&v13, a3);
      *(_QWORD *)(a1 + 16) = v14;
      *(_OWORD *)a1 = v13;
      *(_QWORD *)(a1 + 40) = 0LL;
      *(_OWORD *)(a1 + 24) = v9;
      *(_QWORD *)(a1 + 64) = v18;
      *(_OWORD *)(a1 + 48) = v17;
      *(_QWORD *)(a1 + 88) = v20;
      *(_OWORD *)(a1 + 72) = v19;
      *(_QWORD *)(a1 + 112) = v22;
      *(_OWORD *)(a1 + 96) = v21;
      *(_OWORD *)(a1 + 120) = v23;
      *(_QWORD *)(a1 + 136) = v24;
      *(_OWORD *)(a1 + 144) = v25;
      *(_QWORD *)(a1 + 160) = v26;
      *(_QWORD *)(a1 + 184) = v28;
      *(_OWORD *)(a1 + 168) = v27;
      *(_OWORD *)(a1 + 192) = v29;
      *(_QWORD *)(a1 + 208) = v30;
      *(_BYTE *)(a1 + 216) = v31;
      result = core::ptr::drop_in_place<alloc::string::String>(&v15);
      break;
    case 2:
      *(_QWORD *)&v6 = 0LL;
      *((_QWORD *)&v6 + 1) = 1LL;
      <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(&v13, a3);
      *(_QWORD *)(a1 + 16) = v14;
      *(_OWORD *)a1 = v13;
      *(_QWORD *)(a1 + 40) = v16;
      *(_OWORD *)(a1 + 24) = v15;
      *(_QWORD *)(a1 + 64) = 0LL;
      *(_OWORD *)(a1 + 48) = v6;
      *(_QWORD *)(a1 + 88) = v20;
      *(_OWORD *)(a1 + 72) = v19;
      *(_QWORD *)(a1 + 112) = v22;
      *(_OWORD *)(a1 + 96) = v21;
      *(_OWORD *)(a1 + 120) = v23;
      *(_QWORD *)(a1 + 136) = v24;
      *(_OWORD *)(a1 + 144) = v25;
      *(_QWORD *)(a1 + 160) = v26;
      *(_QWORD *)(a1 + 184) = v28;
      *(_OWORD *)(a1 + 168) = v27;
      *(_OWORD *)(a1 + 192) = v29;
      *(_QWORD *)(a1 + 208) = v30;
      *(_BYTE *)(a1 + 216) = v31;
      result = core::ptr::drop_in_place<alloc::string::String>(&v17);
      break;
    case 3:
      *(_QWORD *)&v7 = 0LL;
      *((_QWORD *)&v7 + 1) = 1LL;
      <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(&v13, a3);
      *(_QWORD *)(a1 + 16) = v14;
      *(_OWORD *)a1 = v13;
      *(_QWORD *)(a1 + 40) = v16;
      *(_OWORD *)(a1 + 24) = v15;
      *(_QWORD *)(a1 + 64) = v18;
      *(_OWORD *)(a1 + 48) = v17;
      *(_QWORD *)(a1 + 88) = 0LL;
      *(_OWORD *)(a1 + 72) = v7;
      *(_QWORD *)(a1 + 112) = v22;
      *(_OWORD *)(a1 + 96) = v21;
      *(_OWORD *)(a1 + 120) = v23;
      *(_QWORD *)(a1 + 136) = v24;
      *(_OWORD *)(a1 + 144) = v25;
      *(_QWORD *)(a1 + 160) = v26;
      *(_QWORD *)(a1 + 184) = v28;
      *(_OWORD *)(a1 + 168) = v27;
      *(_OWORD *)(a1 + 192) = v29;
      *(_QWORD *)(a1 + 208) = v30;
      *(_BYTE *)(a1 + 216) = v31;
      result = core::ptr::drop_in_place<alloc::string::String>(&v19);
      break;
    case 4:
      *(_QWORD *)&v5 = 0LL;
      *((_QWORD *)&v5 + 1) = 1LL;
      <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(&v13, a3);
      *(_QWORD *)(a1 + 16) = v14;
      *(_OWORD *)a1 = v13;
      *(_QWORD *)(a1 + 40) = v16;
      *(_OWORD *)(a1 + 24) = v15;
      *(_QWORD *)(a1 + 64) = v18;
      *(_OWORD *)(a1 + 48) = v17;
      *(_QWORD *)(a1 + 88) = v20;
      *(_OWORD *)(a1 + 72) = v19;
      *(_QWORD *)(a1 + 112) = 0LL;
      *(_OWORD *)(a1 + 96) = v5;
      *(_OWORD *)(a1 + 120) = v23;
      *(_QWORD *)(a1 + 136) = v24;
      *(_OWORD *)(a1 + 144) = v25;
      *(_QWORD *)(a1 + 160) = v26;
      *(_QWORD *)(a1 + 184) = v28;
      *(_OWORD *)(a1 + 168) = v27;
      *(_OWORD *)(a1 + 192) = v29;
      *(_QWORD *)(a1 + 208) = v30;
      *(_BYTE *)(a1 + 216) = v31;
      result = core::ptr::drop_in_place<alloc::string::String>(&v21);
      break;
    case 5:
      *(_QWORD *)&v10 = 0LL;
      *((_QWORD *)&v10 + 1) = 1LL;
      <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(&v13, a3);
      *(_QWORD *)(a1 + 16) = v14;
      *(_OWORD *)a1 = v13;
      *(_QWORD *)(a1 + 40) = v16;
      *(_OWORD *)(a1 + 24) = v15;
      *(_QWORD *)(a1 + 64) = v18;
      *(_OWORD *)(a1 + 48) = v17;
      *(_QWORD *)(a1 + 88) = v20;
      *(_OWORD *)(a1 + 72) = v19;
      *(_QWORD *)(a1 + 112) = v22;
      *(_OWORD *)(a1 + 96) = v21;
      *(_OWORD *)(a1 + 120) = v10;
      *(_QWORD *)(a1 + 136) = 0LL;
      *(_OWORD *)(a1 + 144) = v25;
      *(_QWORD *)(a1 + 160) = v26;
      *(_QWORD *)(a1 + 184) = v28;
      *(_OWORD *)(a1 + 168) = v27;
      *(_OWORD *)(a1 + 192) = v29;
      *(_QWORD *)(a1 + 208) = v30;
      *(_BYTE *)(a1 + 216) = v31;
      result = core::ptr::drop_in_place<alloc::string::String>(&v23);
      break;
    case 6:
      *(_QWORD *)&v11 = 0LL;
      *((_QWORD *)&v11 + 1) = 1LL;
      <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(&v13, a3);
      *(_QWORD *)(a1 + 16) = v14;
      *(_OWORD *)a1 = v13;
      *(_QWORD *)(a1 + 40) = v16;
      *(_OWORD *)(a1 + 24) = v15;
      *(_QWORD *)(a1 + 64) = v18;
      *(_OWORD *)(a1 + 48) = v17;
      *(_QWORD *)(a1 + 88) = v20;
      *(_OWORD *)(a1 + 72) = v19;
      *(_QWORD *)(a1 + 112) = v22;
      *(_OWORD *)(a1 + 96) = v21;
      *(_OWORD *)(a1 + 120) = v23;
      *(_QWORD *)(a1 + 136) = v24;
      *(_OWORD *)(a1 + 144) = v11;
      *(_QWORD *)(a1 + 160) = 0LL;
      *(_QWORD *)(a1 + 184) = v28;
      *(_OWORD *)(a1 + 168) = v27;
      *(_OWORD *)(a1 + 192) = v29;
      *(_QWORD *)(a1 + 208) = v30;
      *(_BYTE *)(a1 + 216) = v31;
      result = core::ptr::drop_in_place<alloc::string::String>(&v25);
      break;
    case 7:
      *(_QWORD *)&v8 = 0LL;
      *((_QWORD *)&v8 + 1) = 1LL;
      <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(&v13, a3);
      *(_QWORD *)(a1 + 16) = v14;
      *(_OWORD *)a1 = v13;
      *(_QWORD *)(a1 + 40) = v16;
      *(_OWORD *)(a1 + 24) = v15;
      *(_QWORD *)(a1 + 64) = v18;
      *(_OWORD *)(a1 + 48) = v17;
      *(_QWORD *)(a1 + 88) = v20;
      *(_OWORD *)(a1 + 72) = v19;
      *(_QWORD *)(a1 + 112) = v22;
      *(_OWORD *)(a1 + 96) = v21;
      *(_OWORD *)(a1 + 120) = v23;
      *(_QWORD *)(a1 + 136) = v24;
      *(_OWORD *)(a1 + 144) = v25;
      *(_QWORD *)(a1 + 160) = v26;
      *(_QWORD *)(a1 + 184) = 0LL;
      *(_OWORD *)(a1 + 168) = v8;
      *(_OWORD *)(a1 + 192) = v29;
      *(_QWORD *)(a1 + 208) = v30;
      *(_BYTE *)(a1 + 216) = v31;
      result = core::ptr::drop_in_place<alloc::string::String>(&v27);
      break;
    case 8:
      *(_QWORD *)&v12 = 0LL;
      *((_QWORD *)&v12 + 1) = 1LL;
      <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(&v13, a3);
      *(_QWORD *)(a1 + 16) = v14;
      *(_OWORD *)a1 = v13;
      *(_QWORD *)(a1 + 40) = v16;
      *(_OWORD *)(a1 + 24) = v15;
      *(_QWORD *)(a1 + 64) = v18;
      *(_OWORD *)(a1 + 48) = v17;
      *(_QWORD *)(a1 + 88) = v20;
      *(_OWORD *)(a1 + 72) = v19;
      *(_QWORD *)(a1 + 112) = v22;
      *(_OWORD *)(a1 + 96) = v21;
      *(_OWORD *)(a1 + 120) = v23;
      *(_QWORD *)(a1 + 136) = v24;
      *(_OWORD *)(a1 + 144) = v25;
      *(_QWORD *)(a1 + 160) = v26;
      *(_QWORD *)(a1 + 184) = v28;
      *(_OWORD *)(a1 + 168) = v27;
      *(_OWORD *)(a1 + 192) = v12;
      *(_QWORD *)(a1 + 208) = 0LL;
      *(_BYTE *)(a1 + 216) = v31;
      result = core::ptr::drop_in_place<alloc::string::String>(&v29);
      break;
  }
  return result;
}