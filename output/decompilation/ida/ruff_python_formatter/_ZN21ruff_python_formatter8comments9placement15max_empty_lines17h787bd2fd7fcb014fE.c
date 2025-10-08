__int64 __fastcall ruff_python_formatter::comments::placement::max_empty_lines(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int i; // ebp
  int v4; // eax
  bool v5; // cf
  __int64 result; // rax
  _BYTE v7[8]; // [rsp+4h] [rbp-64h] BYREF
  unsigned __int8 v8; // [rsp+Ch] [rbp-5Ch]
  _BYTE v9[88]; // [rsp+10h] [rbp-58h] BYREF

  if ( HIDWORD(a2) )
  {
    core::result::Result<T,E>::unwrap(1LL, &off_57CC48);
    BUG();
  }
  v2 = 0;
  core::result::Result<T,E>::unwrap(0LL, &off_57CC48);
  ruff_python_trivia::tokenizer::SimpleTokenizer::new(v9, a1, a2, 0LL, (unsigned int)a2);
LABEL_4:
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      <ruff_python_trivia::tokenizer::SimpleTokenizer as core::iter::traits::iterator::Iterator>::next(v7, v9);
      if ( v8 > 3u )
        break;
      if ( !v8 )
      {
        v2 = core::cmp::Ord::max(i, v2);
        goto LABEL_4;
      }
      if ( v8 != 1 )
        goto LABEL_12;
    }
    if ( v8 != 4 )
      break;
  }
  if ( v8 == 90 )
    goto LABEL_13;
LABEL_12:
  v2 = core::cmp::Ord::max(i, v2);
LABEL_13:
  v4 = core::cmp::Ord::max(i, v2);
  v5 = v4 == 0;
  result = (unsigned int)(v4 - 1);
  if ( v5 )
    return 0LL;
  return result;
}