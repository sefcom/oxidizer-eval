__int64 __fastcall alacritty::message_bar::Message::pad_text(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  bool v7; // cf
  unsigned __int64 v8; // r15
  __int64 result; // rax
  _BYTE v10[48]; // [rsp+8h] [rbp-30h] BYREF

  v5 = <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(
         *(_QWORD *)(a2 + 8),
         *(_QWORD *)(a2 + 8) + *(_QWORD *)(a2 + 16));
  v6 = 0LL;
  v7 = a3 < v5;
  v8 = a3 - v5;
  if ( !v7 )
    v6 = v8;
  <T as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v10, v6);
  <alloc::string::String as core::iter::traits::collect::Extend<char>>::extend(a2, v10);
  result = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = result;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  return result;
}