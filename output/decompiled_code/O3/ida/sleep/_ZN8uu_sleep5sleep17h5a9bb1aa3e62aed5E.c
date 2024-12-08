__int64 __fastcall uu_sleep::sleep(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  char v5; // [rsp+Fh] [rbp-89h] BYREF
  _BYTE v6[24]; // [rsp+10h] [rbp-88h] BYREF
  int v7; // [rsp+28h] [rbp-70h]
  _BYTE v8[104]; // [rsp+30h] [rbp-68h] BYREF

  v5 = 0;
  fundu::standard::parser::DurationParser::with_time_units(v8, asc_13D4C, 4LL);
  v2 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(a1, a1 + 16 * a2, v8, &v5);
  if ( v5 )
  {
    <T as alloc::slice::hack::ConvertVec>::to_vec(v6, 1LL, 0LL);
    v7 = 1;
    return alloc::boxed::Box<T>::new(v6);
  }
  else
  {
    std::thread::sleep(v2, v3);
    return 0LL;
  }
}
