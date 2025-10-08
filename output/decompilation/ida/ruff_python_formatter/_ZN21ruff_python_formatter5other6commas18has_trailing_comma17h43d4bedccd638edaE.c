bool __fastcall ruff_python_formatter::other::commas::has_trailing_comma(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  _BYTE v5[12]; // [rsp+4h] [rbp-44h] BYREF
  _BYTE v6[56]; // [rsp+10h] [rbp-38h] BYREF

  ruff_python_trivia::tokenizer::SimpleTokenizer::new(v6, a3, a4, a1, a2);
  core::iter::traits::iterator::Iterator::try_fold(v5, v6);
  return v5[8] == 11;
}