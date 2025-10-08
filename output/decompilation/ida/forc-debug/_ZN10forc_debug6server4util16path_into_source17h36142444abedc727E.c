__int64 __fastcall forc_debug::server::util::path_into_source(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v3; // xmm1
  __int128 v5; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v6; // [rsp+10h] [rbp-C8h]
  __int128 v7; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v9[3]; // [rsp+38h] [rbp-A0h] BYREF
  __int128 v10; // [rsp+50h] [rbp-88h]
  __int64 v11; // [rsp+60h] [rbp-78h]
  __int128 v12; // [rsp+68h] [rbp-70h]
  __int64 v13; // [rsp+78h] [rbp-60h]
  __int128 v14; // [rsp+80h] [rbp-58h]
  __int64 v15; // [rsp+90h] [rbp-48h]
  int v16; // [rsp+98h] [rbp-40h]
  __int128 v17; // [rsp+A0h] [rbp-38h]
  __int128 v18; // [rsp+B0h] [rbp-28h]
  char v19; // [rsp+C0h] [rbp-18h]

  alloc::string::String::from_utf8_lossy(&v7, a2, a3);
  if ( __OFSUB__(0LL, (_QWORD)v7) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v5, *((_QWORD *)&v7 + 1));
  }
  else
  {
    v6 = v8;
    v5 = v7;
  }
  *(_QWORD *)&v7 = 0x8000000000000000LL;
  v9[0] = 0x8000000000000000LL;
  v16 = 0;
  v19 = 3;
  *(_QWORD *)&v10 = 0x8000000000000000LL;
  *(_QWORD *)&v12 = 0x8000000000000000LL;
  LOBYTE(v17) = 6;
  *(_QWORD *)&v14 = 0x8000000000000000LL;
  *(_QWORD *)(a1 + 16) = v8;
  *(_OWORD *)a1 = v7;
  *(_OWORD *)(a1 + 24) = v5;
  *(_QWORD *)(a1 + 40) = v6;
  *(_DWORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 160) = 3;
  *(_QWORD *)(a1 + 64) = v11;
  *(_OWORD *)(a1 + 48) = v10;
  *(_QWORD *)(a1 + 88) = v13;
  *(_OWORD *)(a1 + 72) = v12;
  v3 = v18;
  *(_OWORD *)(a1 + 128) = v17;
  *(_OWORD *)(a1 + 144) = v3;
  *(_OWORD *)(a1 + 96) = v14;
  *(_QWORD *)(a1 + 112) = v15;
  return core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v9);
}