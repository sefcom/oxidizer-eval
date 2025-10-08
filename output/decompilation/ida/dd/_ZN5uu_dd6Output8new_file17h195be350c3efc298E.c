__int64 __fastcall uu_dd::Output::new_file(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 v9; // [rsp+8h] [rbp-50h] BYREF
  __int64 v10; // [rsp+10h] [rbp-48h]
  _QWORD v11[8]; // [rsp+18h] [rbp-40h] BYREF

  uu_dd::Output::new_file::open_dst(
    v11,
    a2,
    a3,
    *(unsigned __int8 *)(a4 + 145),
    *(unsigned __int8 *)(a4 + 146),
    a4 + 150);
  <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
    &v9,
    v11,
    a2,
    a3);
  if ( v9 )
  {
    v6 = v10;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 16) = v6;
    *(_BYTE *)a1 = 4;
  }
  else
  {
    v7 = v10;
    LODWORD(v9) = v10;
    if ( !*(_BYTE *)(a4 + 147) )
    {
      v11[0] = std::fs::File::set_len(&v9, *(_QWORD *)(a4 + 136));
      if ( v11[0] )
      {
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v11);
        v7 = v9;
      }
    }
    uu_dd::Output::prepare_file(a1, v7, a4);
  }
  return a1;
}