__int64 __fastcall sniffnet::translations::types::language::Language::get_flag(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+8h] [rbp-40h] BYREF
  _BYTE v5[56]; // [rsp+10h] [rbp-38h] BYREF

  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(
    v5,
    (char *)dword_18EF0A0 + dword_18EF0A0[a2],
    qword_18EEFE8[a2]);
  v4 = 1LL;
  v2 = iced_core::svg::Handle::from_data(&v4);
  iced_widget::svg::Svg<Theme>::new(&v4, v2);
  return iced_widget::svg::Svg<Theme>::width(a1, &v4, 37.5);
}