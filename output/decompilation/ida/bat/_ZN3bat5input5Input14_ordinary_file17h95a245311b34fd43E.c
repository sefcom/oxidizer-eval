__int64 __fastcall bat::input::Input::_ordinary_file(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  __int128 v10; // [rsp+0h] [rbp-108h] BYREF
  __int128 v11; // [rsp+10h] [rbp-F8h]
  __int64 v12; // [rsp+20h] [rbp-E8h]
  __int128 v13; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-D0h]
  _OWORD dest[5]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v16; // [rsp+90h] [rbp-78h]

  std::path::Path::to_path_buf(&v13, a2, a3);
  std::fs::metadata(dest);
  if ( LODWORD(dest[0]) == 2 )
  {
    *((_QWORD *)&v10 + 1) = *((_QWORD *)&dest[0] + 1);
    *(_QWORD *)&v10 = 1LL;
    core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(&v10);
    v4 = 0LL;
  }
  else
  {
    v3 = v16;
    v4 = 1LL;
  }
  *(_QWORD *)&v11 = 0x8000000000000000LL;
  *(_QWORD *)&v10 = v4;
  *((_QWORD *)&v10 + 1) = v3;
  bat::input::InputKind::description(dest, &v13);
  *(_QWORD *)(a1 + 32) = v12;
  v5 = v10;
  *(_OWORD *)(a1 + 16) = v11;
  *(_OWORD *)a1 = v5;
  *(_OWORD *)(a1 + 136) = v13;
  *(_QWORD *)(a1 + 152) = v14;
  v6 = dest[1];
  v7 = dest[2];
  v8 = dest[3];
  *(_OWORD *)(a1 + 40) = dest[0];
  *(_OWORD *)(a1 + 56) = v6;
  *(_OWORD *)(a1 + 72) = v7;
  *(_OWORD *)(a1 + 88) = v8;
  *(_OWORD *)(a1 + 104) = dest[4];
  *(_OWORD *)(a1 + 120) = v16;
  return a1;
}