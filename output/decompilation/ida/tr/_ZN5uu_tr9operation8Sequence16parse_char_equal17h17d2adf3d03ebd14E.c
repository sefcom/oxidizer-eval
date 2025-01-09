__int64 __fastcall uu_tr::operation::Sequence::parse_char_equal(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[10]; // [rsp+8h] [rbp-50h] BYREF

  v4[5] = asc_1E658;
  v4[6] = 2LL;
  v4[0] = 0x8000000000000001LL;
  v4[3] = asc_1E65A;
  v4[4] = 2LL;
  v4[7] = asc_1E65A;
  v4[8] = 2LL;
  nom::sequence::delimited::{{closure}}(a1, v4, a2, a3);
  return core::ptr::drop_in_place<nom::sequence::delimited<&[u8],&[u8],core::result::Result<uu_tr::operation::Sequence,uu_tr::operation::BadSequence>,&[u8],nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}},nom::branch::alt<&[u8],core::result::Result<uu_tr::operation::Sequence,uu_tr::operation::BadSequence>,nom::error::Error<&[u8]>,(nom::combinator::value<&[u8],core::result::Result<uu_tr::operation::Sequence,uu_tr::operation::BadSequence>,&[u8],nom::error::Error<&[u8]>,nom::combinator::peek<&[u8],&[u8],nom::error::Error<&[u8]>,nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>::{{closure}},nom::combinator::map<&[u8],u8,core::result::Result<uu_tr::operation::Sequence,uu_tr::operation::BadSequence>,nom::error::Error<&[u8]>,uu_tr::operation::Sequence::parse_backslash_or_char,uu_tr::operation::Sequence::parse_char_equal::{{closure}}>::{{closure}})>::{{closure}},nom::bytes::complete::tag<&str,&[u8],nom::error::Error<&[u8]>>::{{closure}}>::{{closure}}>(v4);
}
