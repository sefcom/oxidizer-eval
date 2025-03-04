double __fastcall uu_numfmt::options::RoundMethod::round(double x, _BYTE *a2)
{
  double result; // xmm0_8

  switch ( *a2 )
  {
    case 0:
      goto LABEL_6;
    case 1:
      goto LABEL_3;
    case 2:
      if ( x < 0.0 )
        goto LABEL_3;
      goto LABEL_6;
    case 3:
      if ( x >= 0.0 )
LABEL_3:
        result = floor(x);
      else
LABEL_6:
        result = ceil(x);
      break;
    case 4:
      result = round(x);
      break;
  }
  return result;
}
