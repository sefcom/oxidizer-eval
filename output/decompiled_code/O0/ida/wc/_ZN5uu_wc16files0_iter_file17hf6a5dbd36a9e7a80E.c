__int64 __fastcall uu_wc::files0_iter_file(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int128 v5; // xmm0
  int v7; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v8; // [rsp+8h] [rbp-C0h]
  __int128 v9; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v10; // [rsp+20h] [rbp-A8h]
  __int128 v11; // [rsp+30h] [rbp-98h]
  __int128 v12; // [rsp+40h] [rbp-88h]
  __int64 v13; // [rsp+50h] [rbp-78h]
  __int128 v14; // [rsp+60h] [rbp-68h]
  __int64 v15; // [rsp+70h] [rbp-58h]
  _BYTE v16[48]; // [rsp+78h] [rbp-50h]

  *(_QWORD *)&v9 = 0x1B600000000LL;
  DWORD2(v9) = 1;
  WORD6(v9) = 0;
  std::fs::OpenOptions::_open(&v7, &v9, a2, a3);
  if ( v7 )
  {
    v4 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
           v8,
           a2,
           a3);
    *(_QWORD *)a1 = 0x8000000000000001LL;
    *(_QWORD *)(a1 + 8) = v4;
    *(_QWORD *)(a1 + 16) = &off_118CC0;
  }
  else
  {
    std::sys::os_str::bytes::Slice::to_owned(&v9, a2, a3);
    v13 = v10;
    v12 = v9;
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&v9, 0x2000LL);
    *(_OWORD *)&v16[32] = v11;
    *(_OWORD *)&v16[16] = v10;
    *(_OWORD *)v16 = v9;
    v15 = v13;
    v5 = v12;
    v14 = v12;
    *(_QWORD *)(a1 + 64) = *((_QWORD *)&v11 + 1);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v16[24];
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v16[8];
    *(_QWORD *)(a1 + 16) = v15;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)v16;
    *(_OWORD *)a1 = v5;
    *(_BYTE *)(a1 + 72) = 0;
  }
  return a1;
}
