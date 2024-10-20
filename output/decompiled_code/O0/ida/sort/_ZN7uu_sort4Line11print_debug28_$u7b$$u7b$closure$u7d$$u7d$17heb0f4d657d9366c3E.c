char __fastcall uu_sort::Line::print_debug::{{closure}}(__int64 a1)
{
  _BYTE v2[24]; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v3; // [rsp+20h] [rbp-C8h]
  __int64 v4; // [rsp+28h] [rbp-C0h]
  char v5; // [rsp+30h] [rbp-B8h]
  __int64 v6; // [rsp+38h] [rbp-B0h]
  _QWORD v7[2]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v8; // [rsp+50h] [rbp-98h]
  __int64 v9; // [rsp+60h] [rbp-88h]
  __int64 v10; // [rsp+68h] [rbp-80h]
  unsigned __int64 v11; // [rsp+70h] [rbp-78h]
  _BYTE v12[25]; // [rsp+88h] [rbp-60h] BYREF
  __int64 v13; // [rsp+A8h] [rbp-40h]
  __int64 v14; // [rsp+B0h] [rbp-38h]
  int v15; // [rsp+B8h] [rbp-30h]
  __int64 v16; // [rsp+BCh] [rbp-2Ch]
  int v17; // [rsp+C4h] [rbp-24h]
  __int16 v18; // [rsp+D8h] [rbp-10h]

  v18 = 2566;
  v7[0] = 0LL;
  v16 = 0LL;
  v17 = 0;
  v7[1] = 8LL;
  v8 = 0LL;
  v15 = 1114112;
  v9 = 1LL;
  v10 = 0LL;
  v13 = 1000000000LL;
  v11 = 0x8000000000000000LL;
  v14 = 32LL;
  memset(v12, 0, sizeof(v12));
  core::ptr::drop_in_place<uu_sort::GlobalSettings>(v7);
  v3 = 1LL;
  v4 = 1LL;
  v5 = 0;
  v2[16] = 2;
  v6 = 0x60000000000LL;
  return <uu_sort::FieldSelector as core::cmp::PartialEq>::eq(a1, v2) ^ 1;
}
