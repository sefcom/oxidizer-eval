_OWORD *__fastcall uu_dircolors::escape(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  char code_point; // al
  unsigned int v6; // ebp
  void *v7; // rsi
  const char *v8; // rax
  _OWORD *result; // rax
  __int128 v10; // [rsp+8h] [rbp-60h] BYREF
  __int64 v11; // [rsp+18h] [rbp-50h]
  __int64 v12; // [rsp+20h] [rbp-48h]
  _QWORD v13[8]; // [rsp+28h] [rbp-40h] BYREF

  v12 = a1;
  *(_QWORD *)&v10 = 0LL;
  *((_QWORD *)&v10 + 1) = 1LL;
  v11 = 0LL;
  v13[0] = a2;
  v13[1] = a2 + a3;
  if ( (core::str::validations::next_code_point(v13) & 1) != 0 )
  {
    v4 = 32LL;
    do
    {
      v6 = v3;
      v7 = &unk_1A3A0;
      v8 = aSvg;
      if ( (_DWORD)v3 == 39 || (_DWORD)v3 == 58 && (v7 = &unk_1C60B, v8 = (const char *)&unk_1C60D, (_DWORD)v4 != 92) )
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v10,
          v7,
          v8);
      else
        alloc::string::String::push(&v10, (unsigned int)v3, v3, v4);
      code_point = core::str::validations::next_code_point(v13);
      v4 = v6;
    }
    while ( (code_point & 1) != 0 );
  }
  result = (_OWORD *)v12;
  *(_QWORD *)(v12 + 16) = v11;
  *result = v10;
  return result;
}