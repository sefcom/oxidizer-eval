__int64 __fastcall uu_unexpand::write_tabs(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int8 a6,
        char a7,
        unsigned __int8 a8)
{
  char v12; // cl
  __int64 v13; // rdx
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 result; // rax
  bool v18; // cc
  unsigned __int64 v19; // rbx
  __int64 v20; // rcx

  if ( a7 )
  {
    v12 = 1;
    if ( a6 )
    {
LABEL_6:
      if ( ((unsigned __int8)(v12 & a6 | a7) & (a5 > a4)) != 0 )
        goto LABEL_7;
      goto LABEL_13;
    }
  }
  else
  {
    v12 = a8;
    if ( a6 | a8 ^ 1 )
      goto LABEL_6;
  }
  if ( a5 <= a4 + 1 )
    goto LABEL_6;
LABEL_7:
  while ( (uu_unexpand::next_tabstop(a2, a3, a4) & 1) != 0 )
  {
    v14 = a4 + v13;
    if ( a5 < a4 + v13 )
      break;
    v15 = a1[2];
    if ( (unsigned __int64)(*a1 - v15) <= 1 )
    {
      v16 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, asc_1971A, 1LL);
      a4 = v14;
      if ( v16 )
        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
    }
    else
    {
      *(_BYTE *)(a1[1] + v15) = 9;
      a1[2] = v15 + 1;
      a4 += v13;
    }
  }
LABEL_13:
  result = 0LL;
  v18 = a5 <= a4;
  v19 = a5 - a4;
  if ( !v18 )
  {
    do
    {
      v20 = a1[2];
      if ( (unsigned __int64)(*a1 - v20) <= 1 )
      {
        v16 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, &unk_1971B, 1LL);
        result = 0LL;
        if ( v16 )
          return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v16);
      }
      else
      {
        *(_BYTE *)(a1[1] + v20) = 32;
        a1[2] = v20 + 1;
      }
      --v19;
    }
    while ( v19 );
  }
  return result;
}