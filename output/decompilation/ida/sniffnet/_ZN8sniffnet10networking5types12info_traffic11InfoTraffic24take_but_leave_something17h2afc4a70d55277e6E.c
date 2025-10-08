void *__fastcall sniffnet::networking::types::info_traffic::InfoTraffic::take_but_leave_something(
        void *dest,
        void *src)
{
  void *result; // rax
  __int128 v3; // [rsp+0h] [rbp-1F8h]
  __int128 v4; // [rsp+10h] [rbp-1E8h]
  __int128 v5; // [rsp+20h] [rbp-1D8h]
  __int128 v6; // [rsp+30h] [rbp-1C8h]
  __int128 v7; // [rsp+40h] [rbp-1B8h]
  __int128 v8; // [rsp+50h] [rbp-1A8h]
  __int128 v9; // [rsp+60h] [rbp-198h]
  __int128 v10; // [rsp+70h] [rbp-188h]
  __int128 v11; // [rsp+80h] [rbp-178h]
  __int128 v12; // [rsp+90h] [rbp-168h]
  __int128 v13; // [rsp+A0h] [rbp-158h]
  __int128 v14; // [rsp+B0h] [rbp-148h]
  __int128 v15; // [rsp+C0h] [rbp-138h]
  __int128 v16; // [rsp+D0h] [rbp-128h]
  _BYTE v17[16]; // [rsp+E0h] [rbp-118h] BYREF
  __int128 v18; // [rsp+F0h] [rbp-108h]
  __int128 v19; // [rsp+100h] [rbp-F8h]
  __int128 v20; // [rsp+110h] [rbp-E8h]
  __int128 v21; // [rsp+120h] [rbp-D8h]
  __int128 v22; // [rsp+130h] [rbp-C8h]
  __int128 v23; // [rsp+140h] [rbp-B8h]
  __int128 v24; // [rsp+150h] [rbp-A8h]
  __int128 v25; // [rsp+160h] [rbp-98h]
  __int128 v26; // [rsp+170h] [rbp-88h]
  __int128 v27; // [rsp+180h] [rbp-78h]
  __int128 v28; // [rsp+190h] [rbp-68h]
  __int128 v29; // [rsp+1A0h] [rbp-58h]
  __int128 v30; // [rsp+1B0h] [rbp-48h]
  __int128 v31; // [rsp+1C0h] [rbp-38h]

  <sniffnet::networking::types::info_traffic::InfoTraffic as core::default::Default>::default(v17);
  v7 = v31;
  v6 = v30;
  v5 = v29;
  v4 = v28;
  v3 = v27;
  v14 = v18;
  v15 = v19;
  v16 = v20;
  v11 = v21;
  v12 = v22;
  v13 = v23;
  v10 = v26;
  v9 = v25;
  v8 = v24;
  result = memcpy(dest, src, 0x100uLL);
  *((_OWORD *)src + 3) = v16;
  *((_OWORD *)src + 2) = v15;
  *((_OWORD *)src + 1) = v14;
  *((_OWORD *)src + 6) = v13;
  *((_OWORD *)src + 5) = v12;
  *((_OWORD *)src + 4) = v11;
  *((_OWORD *)src + 7) = v8;
  *((_OWORD *)src + 8) = v9;
  *((_OWORD *)src + 9) = v10;
  *((_OWORD *)src + 14) = v7;
  *((_OWORD *)src + 13) = v6;
  *((_OWORD *)src + 12) = v5;
  *((_OWORD *)src + 11) = v4;
  *((_OWORD *)src + 10) = v3;
  return result;
}