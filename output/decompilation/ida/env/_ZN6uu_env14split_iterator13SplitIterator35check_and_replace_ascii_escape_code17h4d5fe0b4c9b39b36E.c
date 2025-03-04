__int64 __fastcall uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 result; // rax
  __int64 v4; // r15
  __int128 v5; // xmm0
  int v6; // [rsp+4h] [rbp-54h] BYREF
  _QWORD v7[2]; // [rsp+8h] [rbp-50h] BYREF
  _OWORD v8[2]; // [rsp+18h] [rbp-40h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]

  v6 = a3;
  v7[0] = &unk_252D0;
  v7[1] = &unk_25318;
  result = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::find(v7, &v6);
  if ( result )
  {
    v4 = result;
    uu_env::split_iterator::SplitIterator::skip_one((__int64)v8, a2);
    if ( LODWORD(v8[0]) == 8 )
    {
      result = uu_env::split_iterator::SplitIterator::push_char_to_word(a2, *(_DWORD *)(v4 + 4));
      *(_BYTE *)(a1 + 4) = 1;
      *(_DWORD *)a1 = 8;
    }
    else
    {
      result = v9;
      *(_QWORD *)(a1 + 32) = v9;
      v5 = v8[0];
      *(_OWORD *)(a1 + 16) = v8[1];
      *(_OWORD *)a1 = v5;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 4) = 0;
    *(_DWORD *)a1 = 8;
  }
  return result;
}
