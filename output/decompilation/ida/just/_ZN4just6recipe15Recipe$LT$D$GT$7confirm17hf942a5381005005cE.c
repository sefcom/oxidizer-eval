_QWORD *__fastcall just::recipe::Recipe<D>::confirm(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  char **v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r14
  _QWORD *v8; // r15
  char v9; // cl
  char v10; // al
  _QWORD *v11; // [rsp+8h] [rbp-60h] BYREF
  __int64 (__fastcall *v12)(); // [rsp+10h] [rbp-58h]
  __int64 v13; // [rsp+18h] [rbp-50h]
  __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+28h] [rbp-40h]
  _QWORD *v16; // [rsp+30h] [rbp-38h]
  __int64 v17; // [rsp+38h] [rbp-30h]
  __int64 v18; // [rsp+40h] [rbp-28h]

  result = (_QWORD *)just::attribute_set::AttributeSet::get((__int64 *)(a2 + 216), 0);
  if ( result && *result == 0x8000000000000001LL )
  {
    if ( result[1] == 0x8000000000000000LL )
    {
      v11 = (_QWORD *)(a2 + 144);
      v12 = <just::name::Name as core::fmt::Display>::fmt;
      v3 = &off_430B50;
    }
    else
    {
      v11 = result + 1;
      v12 = <alloc::string::String as core::fmt::Display>::fmt;
      v3 = (char **)&unk_42DDB0;
    }
    v14 = (__int64)v3;
    v15 = 2LL;
    v18 = 0LL;
    v16 = &v11;
    v17 = 1LL;
    std::io::stdio::_eprint(&v14);
    v11 = 0LL;
    v12 = (__int64 (__fastcall *)())(&dword_0 + 1);
    v13 = 0LL;
    v14 = std::io::stdio::stdin();
    if ( (std::io::stdio::Stdin::read_line(&v14, &v11) & 1) != 0 )
    {
      *(_BYTE *)a1 = 26;
      *(_QWORD *)(a1 + 8) = v4;
    }
    else
    {
      v5 = core::str::<impl str>::trim_matches(v12, v13);
      alloc::str::<impl str>::to_lowercase(&v14, v5, v6);
      v7 = v15;
      v8 = v16;
      v9 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v15, v16, aY_1, 1LL);
      v10 = 1;
      if ( !v9 )
        v10 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aYes_0, 3LL);
      *(_BYTE *)(a1 + 1) = v10;
      *(_BYTE *)a1 = 56;
      core::ptr::drop_in_place<alloc::string::String>(&v14);
    }
    return (_QWORD *)core::ptr::drop_in_place<alloc::string::String>(&v11);
  }
  else
  {
    *(_WORD *)a1 = 312;
  }
  return result;
}