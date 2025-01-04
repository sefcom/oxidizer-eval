__int64 __fastcall uu_dd::Output::new_file(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned int v7; // ebp
  unsigned int v9; // [rsp+4h] [rbp-54h] BYREF
  __int64 v10; // [rsp+8h] [rbp-50h] BYREF
  __int64 v11; // [rsp+10h] [rbp-48h]
  _QWORD v12[8]; // [rsp+18h] [rbp-40h] BYREF

  uu_dd::Output::new_file::open_dst(
    v12,
    a2,
    a3,
    *(unsigned __int8 *)(a4 + 145),
    *(unsigned __int8 *)(a4 + 146),
    a4 + 150);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v10,
    v12,
    a2,
    a3);
  if ( v10 )
  {
    v6 = v11;
    *(_QWORD *)(a1 + 8) = v10;
    *(_QWORD *)(a1 + 16) = v6;
    *(_BYTE *)a1 = 4;
  }
  else
  {
    v7 = v11;
    v9 = v11;
    if ( !*(_BYTE *)(a4 + 147) )
    {
      v12[0] = std::fs::File::set_len(&v9, *(_QWORD *)(a4 + 136));
      if ( v12[0] )
      {
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v12);
        v7 = v9;
      }
    }
    uu_dd::Output::prepare_file(a1, v7, a4);
  }
  return a1;
}
