__int64 __fastcall just::function::join(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // r12
  _BYTE v11[24]; // [rsp+8h] [rbp-50h] BYREF
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]

  camino::Utf8Path::join(v11, a3, a4, a5, a6);
  if ( a8 )
  {
    v9 = 24 * a8;
    do
    {
      camino::Utf8PathBuf::push(v11, a7);
      a7 += 24LL;
      v9 -= 24LL;
    }
    while ( v9 );
  }
  <T as alloc::string::SpecToString>::spec_to_string(&v12, v11);
  *(_QWORD *)(a1 + 24) = v13;
  *(_OWORD *)(a1 + 8) = v12;
  *(_QWORD *)a1 = 0LL;
  core::ptr::drop_in_place<camino::Utf8PathBuf>(v11);
  return a1;
}