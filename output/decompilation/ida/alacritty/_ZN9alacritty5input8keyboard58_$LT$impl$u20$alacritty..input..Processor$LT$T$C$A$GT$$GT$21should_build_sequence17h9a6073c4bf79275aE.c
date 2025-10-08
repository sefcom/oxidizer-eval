__int64 __fastcall alacritty::input::keyboard::<impl alacritty::input::Processor<T,A>>::should_build_sequence(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4)
{
  unsigned __int64 v4; // rbx
  unsigned int v6; // ecx
  int v7; // eax

  LOBYTE(v4) = 1;
  if ( (a3 & 0x200000) != 0 )
    goto LABEL_16;
  if ( (a3 & 0x40000) == 0 )
    goto LABEL_19;
  if ( (unsigned __int8)<winit::keyboard::Key<Str> as core::cmp::PartialEq>::eq(a1, &off_F7BF0)
    || *(_BYTE *)(a1 + 122) == 3 )
  {
    goto LABEL_16;
  }
  if ( !a4 )
  {
LABEL_19:
    if ( *(_WORD *)a1 )
    {
LABEL_4:
      LOBYTE(v4) = a2 == 0;
      goto LABEL_16;
    }
    LOWORD(v6) = *(_WORD *)(a1 + 2);
    goto LABEL_14;
  }
  if ( a4 != 4 )
    goto LABEL_16;
  if ( *(_WORD *)a1 )
    goto LABEL_4;
  v6 = *(unsigned __int16 *)(a1 + 2);
  if ( v6 > 0x19 || (v7 = 33603584, !_bittest(&v7, v6)) )
  {
LABEL_14:
    if ( (unsigned __int16)v6 < 0x2Bu )
      v4 = 0x3FFFDFE3FFFuLL >> v6;
  }
LABEL_16:
  LOBYTE(v4) = v4 & 1;
  return (unsigned int)v4;
}