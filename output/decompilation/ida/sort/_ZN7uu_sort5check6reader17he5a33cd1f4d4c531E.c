__int64 __fastcall uu_sort::check::reader(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rbx
  int v10; // r15d
  __int64 v11; // rsi
  __int64 v13; // [rsp+0h] [rbp-108h] BYREF
  __int64 v14; // [rsp+8h] [rbp-100h]
  __int64 v15; // [rsp+10h] [rbp-F8h]
  __int64 v16; // [rsp+18h] [rbp-F0h]
  _QWORD v17[3]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v18; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h]
  _QWORD dest[24]; // [rsp+48h] [rbp-C0h] BYREF

  v16 = a5;
  v13 = a1;
  v14 = a2;
  v17[0] = 0LL;
  v17[1] = 1LL;
  v17[2] = 0LL;
  v9 = 0LL;
  v10 = *(unsigned __int8 *)(a6 + 153);
  do
  {
    v11 = a3;
    <std::sync::mpsc::Iter<T> as core::iter::traits::iterator::Iterator>::next(dest);
    if ( __OFSUB__(0LL, dest[0]) )
      break;
    v11 = a4;
    uu_sort::chunks::read(
      (unsigned int)&v18,
      a4,
      v16,
      (unsigned int)dest,
      (unsigned int)v17,
      (unsigned int)&v13,
      v10,
      a6);
    if ( v18 )
    {
      v15 = v19;
      v9 = v18;
      break;
    }
  }
  while ( (_BYTE)v19 );
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v17, v11);
  core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v13, v14);
  return v9;
}