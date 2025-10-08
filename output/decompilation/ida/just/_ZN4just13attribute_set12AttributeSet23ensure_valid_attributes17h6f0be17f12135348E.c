__int64 __fastcall just::attribute_set::AttributeSet::ensure_valid_attributes(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  _BOOL8 v12; // rdx
  __int64 result; // rax
  _QWORD *v14; // rbp
  __int64 v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r15
  char v19; // [rsp+Fh] [rbp-F9h] BYREF
  __int64 v20; // [rsp+10h] [rbp-F8h]
  __int64 v21; // [rsp+18h] [rbp-F0h]
  __int64 v22; // [rsp+20h] [rbp-E8h]
  _QWORD v23[9]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v24[72]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-50h]
  __int64 v26; // [rsp+C0h] [rbp-48h]
  __int64 v27; // [rsp+C8h] [rbp-40h]
  __int64 v28; // [rsp+D0h] [rbp-38h]

  v22 = a5;
  v21 = a4;
  v20 = a3;
  v9 = *a2;
  v10 = a2[1];
  v11 = *a2;
  v12 = *a2 != 0;
  if ( *a2 )
    v11 = a2[2];
  v23[0] = *a2 != 0;
  v23[1] = 0LL;
  v23[2] = v9;
  v23[3] = v10;
  v23[4] = v12;
  v23[5] = 0LL;
  v23[6] = v9;
  v23[7] = v10;
  v23[8] = v11;
  result = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v23);
  if ( result )
  {
    v14 = (_QWORD *)result;
    while ( 1 )
    {
      v19 = just::attribute::Attribute::discriminant(*v14);
      if ( !(unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(&v19, a6, a7) )
        break;
      result = <alloc::collections::btree::map::Iter<K,V> as core::iter::traits::iterator::Iterator>::next(v23);
      v14 = (_QWORD *)result;
      if ( !result )
        goto LABEL_7;
    }
    v15 = v22;
    v16 = just::token::Token::lexeme(v22);
    v18 = v17;
    <just::attribute::Attribute as core::clone::Clone>::clone(v24, v14);
    v25 = v20;
    v26 = v21;
    v27 = v16;
    v28 = v18;
    return just::token::Token::error(a1, v15, v24);
  }
  else
  {
LABEL_7:
    *(_BYTE *)(a1 + 72) = 37;
  }
  return result;
}