__int64 __fastcall uu_csplit::patterns::validate_line_numbers(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  _QWORD v5[2]; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v6[2]; // [rsp+18h] [rbp-30h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  v5[0] = a2;
  v5[1] = a2 + 56 * a3;
  core::iter::traits::iterator::Iterator::try_fold(v6, v5);
  result = v6[0];
  if ( v6[0] != 12LL )
  {
    v4 = v6[1];
    *(_QWORD *)(a1 + 32) = v8;
    *(_OWORD *)(a1 + 16) = v7;
    *(_QWORD *)(a1 + 8) = v4;
  }
  *(_QWORD *)a1 = result;
  return result;
}
