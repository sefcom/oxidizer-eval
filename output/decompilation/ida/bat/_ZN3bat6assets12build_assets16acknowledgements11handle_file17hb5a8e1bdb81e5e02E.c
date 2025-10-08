__int64 __fastcall bat::assets::build_assets::acknowledgements::handle_file(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 result; // rax

  v2 = a2[4];
  v3 = a2[5];
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, aNotice, 6LL) )
    return bat::assets::build_assets::acknowledgements::handle_notice(a1, a2[1], a2[2]);
  if ( (unsigned __int8)core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(v2, v3, aLicense, 7LL) )
    return bat::assets::build_assets::acknowledgements::handle_license(a1, a2[1], a2[2]);
  result = 0x8000000000000000LL;
  *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
  *(_BYTE *)a1 = 13;
  return result;
}