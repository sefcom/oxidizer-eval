__int64 __fastcall uu_date::uumain::uumain::{{closure}}(int a1, __int64 a2)
{
  char v3; // [rsp+17h] [rbp-11h]

  v3 = <chrono::format::Item as core::cmp::PartialEq>::eq(a2, &unk_58FE0);
  core::ptr::drop_in_place<chrono::format::Item>(a2);
  return v3 & 1;
}
