__int64 __fastcall rg::files_parallel(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax
  __int64 v3; // r14
  char v4; // [rsp+Eh] [rbp-33Ah] BYREF
  char v5; // [rsp+Fh] [rbp-339h] BYREF
  __int128 v6; // [rsp+10h] [rbp-338h] BYREF
  _BYTE *v7; // [rsp+20h] [rbp-328h] BYREF
  __int128 v8; // [rsp+28h] [rbp-320h] BYREF
  __int64 v9; // [rsp+38h] [rbp-310h]
  _OWORD dest[14]; // [rsp+40h] [rbp-308h] BYREF
  __int128 v11; // [rsp+120h] [rbp-228h] BYREF
  _QWORD v12[25]; // [rsp+130h] [rbp-218h] BYREF
  _QWORD v13[14]; // [rsp+1F8h] [rbp-150h] BYREF
  _BYTE src[224]; // [rsp+268h] [rbp-E0h] BYREF

  v7 = a2;
  v5 = a2[360];
  rg::flags::hiargs::HiArgs::path_printer_builder((__int64)dest, (__int64)a2);
  rg::flags::hiargs::HiArgs::stdout((__int64)&v11, a2);
  grep_printer::path::PathPrinterBuilder::build(src, dest, &v11);
  core::ptr::drop_in_place<grep_printer::path::PathPrinterBuilder>(dest);
  v4 = 0;
  std::sync::mpmc::channel(dest);
  v6 = dest[0];
  dest[12] = dest[1];
  memcpy(dest, src, 0xC0uLL);
  v12[0] = 0x8000000000000000LL;
  *(_QWORD *)&v11 = 0LL;
  LOBYTE(v12[3]) = 0;
  std::thread::Builder::spawn_unchecked(v13, &v11, dest);
  core::result::Result<T,E>::expect(&v8, v13);
  rg::flags::hiargs::HiArgs::walk_builder(dest, (__int64)a2);
  if ( *(_QWORD *)&dest[0] == 2LL )
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)&dest[0] + 1);
    *(_BYTE *)a1 = 1;
    core::ptr::drop_in_place<std::thread::JoinHandle<core::result::Result<(),std::io::error::Error>>>(&v8);
    return core::ptr::drop_in_place<std::sync::mpsc::Sender<rg::haystack::Haystack>>(&v6);
  }
  memcpy(v12, &dest[1], sizeof(v12));
  v11 = dest[0];
  ignore::walk::WalkBuilder::build_parallel(v13, &v11);
  *(_QWORD *)&dest[0] = &v5;
  *((_QWORD *)&dest[0] + 1) = &v4;
  *(_QWORD *)&dest[1] = &v6;
  *((_QWORD *)&dest[1] + 1) = &v7;
  ignore::walk::WalkParallel::run(v13, dest);
  core::ptr::drop_in_place<ignore::walk::WalkBuilder>(&v11);
  dest[0] = v6;
  core::ptr::drop_in_place<std::sync::mpsc::Sender<rg::haystack::Haystack>>(dest);
  *(_QWORD *)&dest[1] = v9;
  dest[0] = v8;
  std::thread::JoinInner<T>::join(&v11, dest);
  v3 = *((_QWORD *)&v11 + 1);
  core::result::Result<T,E>::unwrap(v11, *((_QWORD *)&v11 + 1));
  v13[0] = v3;
  if ( !v3 )
  {
    core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v13);
    goto LABEL_7;
  }
  *(_QWORD *)&dest[0] = v3;
  if ( (unsigned __int8)std::io::error::Error::kind(v3) == 11 )
  {
    core::ptr::drop_in_place<std::io::error::Error>(dest);
LABEL_7:
    result = core::sync::atomic::atomic_load(&v4, 4LL);
    *(_BYTE *)(a1 + 1) = (_BYTE)result != 0;
    *(_BYTE *)a1 = 0;
    return result;
  }
  result = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v3);
  *(_QWORD *)(a1 + 8) = result;
  *(_BYTE *)a1 = 1;
  return result;
}